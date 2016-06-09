<?php

/**
 * @file
 * Tasks for quick installation.
 * Mostly taken from Mike Potter's work on Open Atrium.
 */

/**
 * Implements hook_install_tasks().
 */
function quick_install_tasks() {

  $tasks['restaurant_install_demo_content'] = array(
    'display_name' => st('Install demo content'),
    'type' => 'batch',
  );

  return $tasks;
}

/**
 * Implements hook_tasks_alter().
 */
function quick_tasks_alter($tasks, $install_state) {
  // Redirect the drupal install_profile_modules step to our own function.
  $tasks['install_profile_modules']['display_name'] = st('Import profile');
  $tasks['install_profile_modules']['function'] = 'install_from_db_install_profile_modules';

  // Add a task to setup the quick installation.
  $quick_installation_task = array(
    'function' => 'restaurant_setup_quick_installation',
  );
  $tasks = _restaurant_tasks_insert_before_key($tasks, 'install_profile_modules',
    'install_setup_quick_installation', $quick_installation_task);

  return $tasks;
}

/**
 * Callback to setup the quick installation.
 */
function restaurant_setup_quick_installation(&$install_state) {
  // Set the db import filename.
  $profile = $install_state['parameters']['profile'];
  // Find database dump in the /db folder within the profile
  // TODO: support different database dump formats
  $filename = DRUPAL_ROOT . '/profiles/' . $profile . '/db/' . $profile . '.mysql';

  $conn = Database::getConnection('default');
  // Check if db file exists and connection driver is mysql.
  if (!file_exists($filename) || !$conn || ($conn->driver() !== 'mysql')) {
    $install_state['parameters']['installation_type'] = 'standard';
    return;
  }
  $install_state['parameters']['db_import_filename'] = $filename;
}

/**
 * Overrides install_profile_modules().
 */
function install_from_db_install_profile_modules(&$install_state) {
  if (_restaurant_get_selected_installation_type() === 'quick') {
    if (!$install_state['interactive']) {
      watchdog('install', 'Installing from database import.', array(), WATCHDOG_INFO);
      print "Installing from database\n";
    }
    // bypass normal module installation
    // load database dump instead
    // uses batch because normal module install task uses batch
    // and it's also good for this potentially time consuming db restore
    $operations = array();
    $defer_operations = array();
    $system_sql = '';
    $filename = $install_state['parameters']['db_import_filename'];
    if (file_exists($filename)) {
      $file = fopen($filename, 'rb');
      if ($file) {
        while (($line = _install_from_db_read_sql_batch($file, $table)) !== false) {
          if (!empty($line)) {
            // don't process blank lines
            if (in_array($table, array('system'))) {
              $defer_operations[] = array('_install_from_db_install_db_import', array($line, $table));
            }
            else {
              $operations[] = array('_install_from_db_install_db_import', array($line, $table));
            }
          }
        }
      }
      fclose($file);
      $operations = array_merge($operations, $defer_operations);
    }

    // Copy files
    $operations[] = array('_install_from_db_copy_files', array());

    $batch = array(
      'operations' => $operations,
      'title' => st('Installing open restaurant'),
      'error_message' => st('The installation has encountered an error.'),
      'finished' => '_install_from_db_install_db_import_finished',
    );
    return $batch;
  }

  if (!$install_state['interactive']) {
    watchdog('install', 'Performing standard Drupal install.', array(), WATCHDOG_INFO);
    print "Standard Drupal install\n";
  }
  
  return install_profile_modules($install_state);
}

/**
 * 'Finished' callback for module installation batch.
 */
function _install_from_db_install_db_import_finished($success, $results, $operations) {
  // remove any field data added to user entity
  // since we did not import any users
  $fields_info = field_info_instances('user', 'user');
  foreach ($fields_info as $field_name => $info) {
    db_delete('field_data_' . $field_name)
      ->condition('entity_type', 'user')
      ->condition('bundle', 'user')
      ->execute();
    db_delete('field_revision_' . $field_name)
      ->condition('entity_type', 'user')
      ->condition('bundle', 'user')
      ->execute();
  }

  // Fix for UUID module.
  $modules = array('uuid');
  module_disable($modules, FALSE);
  drupal_uninstall_modules($modules, FALSE);
  module_enable($modules, FALSE);

  // Set demo content to TRUE.
  variable_set('restaurant_demo_content', TRUE);
}

/**
 * Aggressively clear the cache so new database will take affect
 * Do this right after importing the new system module as the last step
 */
function _install_from_db_cc_all() {
  // load the module files as if we just installed them
  $module_list = module_list(TRUE);
  foreach ($module_list as $module) {
    drupal_load('module', $module);
  }

  drupal_static_reset();
  drupal_flush_all_caches();
}

/**
 * Batch callback for batch database import.
 */
function _install_from_db_install_db_import($lines, $table, &$context) {
  global $conf;

  if ($table === 'variable') {
    // save/restore some variables needed by installer or unique to new site
    $saved_vars = array('install_task', 'install_current_batch', 'cron_key', 'drupal_private_key');
    foreach ($saved_vars as $var) {
      $value = variable_get($var);
      if (isset($value)) {
        $saved_values[$var] = $value;
      }
    }
  }

  // Do NOT use db_query here as it will mess with the query data, such as the {} in
  // serialized data fields.
  $conn = Database::getConnection('default');
  foreach ($lines as $line) {
    $stmt = $conn->prepare($line);
    $stmt->execute();
    $stmt->closeCursor();
  }

  if ($table === 'variable') {
    // restore saved variables
    foreach ($saved_values as $key => $value) {
      variable_set($key, $value);
    }
  }
}

/**
 * Read a batch of sql commands (ending in commit)
 * @param $file - name of file to read from
 * @param $table - name of table referenced in sql statements is returned
 * @return - an array of strings containing sql commands for a single table.
 */
function _install_from_db_read_sql_batch($file, &$table) {
  $conn = Database::getConnection('default');
  $line = array();
  $table = '';
  $skip = FALSE;
  $skip_tables = array('batch', 'cache', 'sessions', 'queue', 'semaphore', 'users',
    'advagg_aggregates', 'advagg_aggregates_hashes',
    'advagg_aggregates_versions', 'advagg_files');
  while (($newline = _install_from_db_read_sql_command_from_file($file)) !== false) {
    // process the line read.
    $newline_prefix = _install_from_db_replace_prefix($newline, $conn);
    // block of SQL starts with a Table structure comment
    if (preg_match('/Table structure for table `([^`]+)`/', $newline, $matches)) {
      $new_table = $matches[1];
      if (!empty($table) && ($new_table !== $table)) {
        // close out the previous table
        // put this line back into the read buffer for the next time
        _install_from_db_read_sql_command_from_file($file, $newline);
        break;
      }
      $table = $new_table;
      if (!$skip) {
        if (in_array($table, $skip_tables) || (strpos($table, 'cache_') === 0)) {
          // skip listed tables, along with any cache_* table
          $skip = TRUE;
        }
      }
    }
    if (preg_match('/\A(CREATE TABLE )`([^`]+)`/', $newline, $matches)) {
      // always check first before creating tables
      $newline_prefix = preg_replace('/\ACREATE TABLE/', 'CREATE TABLE IF NOT EXISTS', $newline_prefix);
      if ($skip) {
        // make sure skipped tables are still created
        $line[] = $newline_prefix;
      }
    }
    if (!empty($newline) && substr($newline, 0, 2) == '--') {
      // otherwise skip comments
      $newline_prefix = '';
    }
    if (!$skip && !empty($newline_prefix)) {
      $line[] = $newline_prefix;
    }
    // block of SQL ends with a commit command.
    if ($newline === 'commit;') {
      // be sure to turn autocommit back on for Drupal batch system and other database
      // queries to work properly
      $line[] = 'set autocommit=1;';
    }
  }
  if (empty($line) && ($newline === FALSE)) {
    return FALSE;
  }
  return $line;
}

/**
 * Read a multiline sql command from a file.
 *
 * Supports the formatting created by mysqldump, but won't handle multiline comments.
 * Taken from backup_migrate module
 */
function _install_from_db_read_sql_command_from_file($file, $save_line = '') {
  static $save_for_later = '';

  if (!empty($save_for_later)) {
    // check if a previous line was saved
    $out = $save_for_later;
    $save_for_later = '';
    return trim($out);
  }

  if (!empty($save_line)) {
    // save this text for the next time we read from file
    // used to stuff the previous line back into the read buffer
    $save_for_later = $save_line;
    return;
  }

  $out = '';
  while (($line = fgets($file)) !== false) {
    $line = trim($line);
    if (empty($out) && !empty($line) && substr($line, 0, 2) == '--') {
      // return single line comments so we can parse what table this was later
      return trim($line);
    }
    $first2 = substr($line, 0, 2);
    $first3 = substr($line, 0, 3);
    // If a line begins with /*! it is a commented inline sql command
    // only execute lines that don't reference @variables
    if (empty($out) && ($first3 == '/*!') &&
      (strpos($line, '= @') === FALSE) && (strpos($line, '=@') === FALSE)) {
      return trim($line);
    }
    // Otherwise, ignore single line comments within a sql statement.
    if (!empty($line) && ($first2 != '--') && ($first2 != '/*')) {
      $out .= ' ' . $line;
      // If a line ends in ; it is a sql command.
      if (substr($out, strlen($out) - 1, 1) == ';') {
        return trim($out);
      }
    }
  }
  if (empty($out) && ($line === FALSE)) {
    return FALSE;
  }
  return trim($out);
}

/**
 * Apply the correct prefix to tables in the SQL statement
 */
function _install_from_db_replace_prefix($line, $conn) {
  $patterns = array(
    'DROP TABLE IF EXISTS',
    'CREATE TABLE',
    'LOCK TABLES',
    'ALTER TABLE',
    'INSERT INTO',
    'UPDATE',
  );
  foreach ($patterns as $pattern) {
    // handle lines like this:  /*!40000 ALTER TABLE `actions` ENABLE KEYS */;
    $find = '#\A((/\*\!\d+ )?' . $pattern . ' )`([^`]+)`#';
    // NOTE: We need to replace `tablename` with the new prefixed table name
    // We cannot run $conn->prefixQuery on the entire $line because it will mess
    // with the {} characters within serialized data.
    // So we ONLY match and replace the table name here.
    if (preg_match($find, $line, $matches)) {
      $new_table = $conn->prefixTables('{' . $matches[3] . '}');
      $replace = '$1`' . $new_table . '`';
      $line = preg_replace($find, $replace, $line);
    }
  }
  return $line;
}

/**
 * Copy files for demo modules.
 */
function _install_from_db_copy_files() {
  $apps = restaurant_get_apps();
  $mask = "(jpg|jpeg|gif|png|pdf)";

  // Get images from demo modules.
  foreach ($apps as $app) {
    $module_path = drupal_get_path('module', $app['demo']);
    $image_path = $module_path . '/data/images';
    $images = file_scan_directory($image_path, $mask);
    // Copy images to public files directory.
    foreach ($images as $source => $image) {
      file_unmanaged_copy($source);
    }
  }
}
