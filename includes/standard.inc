<?php

/**
 * @file
 * Tasks for standard installation.
 */

/**
 * Implements hook_install_tasks().
 */
function standard_install_tasks($tasks, $install_state) {
  // Install demo conntent
  $install_demo_content = variable_get('restaurant_demo_content', FALSE);

  // Add a task to select features for restaurant.
  $tasks['restaurant_select_features'] = array(
    'display_name' => st('Select features'),
    'type' => 'form',
  );

  // Task to install features.
  $tasks['restaurant_install_features'] = array(
    'display_name' => st('Install features'),
    'type' => 'batch',
  );

  // Task to install demo content.
  $tasks['restaurant_install_demo_content'] = array(
    'display_name' => st('Install demo content'),
    'type' => 'batch',
    'display' => $install_demo_content,
  );

  return $tasks;
}

/**
 * Shows the features form for the restaurant profile.
 */
function restaurant_select_features($form, &$form_state, &$install_state) {
  drupal_set_title(st('Select features'));

  $message = '<p class="lead">' . st('Select features for your restaurant.') . '</p>';

  $form = array();
  $form['configure_message'] = array(
    '#markup' => $message,
    '#weight' => -100,
  );

  $options_features = array(
    'restaurant_menu' => st('Menu management'),
    'restaurant_blog' => st('Blog functionality'),
    'restaurant_event' => st('Events and calendar'),
    'restaurant_reservation' => st('Reservation system'),
    'restaurant_location' => st('Multiple restaurant locations'),
    'restaurant_admin' => st('Enhanced administrative interface'),
    'restaurant_slideshow' => st('Slideshows'),
    'restaurant_seo' => st('SEO such clean urls, metatags...etc'),
  );
  $form['features'] = array(
    '#type' => 'checkboxes',
    '#options' => $options_features,
    '#description' => t('Enable these features for your restaurant.'),
    '#prefix' => '<h4>' . t('Features') . '</h4>',
    '#default_value' => array_keys($options_features),
  );

  $form['demo_content'] = array(
    '#type' => 'checkbox',
    '#title' => st('Install demo content?'),
    '#description' => st('Install demo content such as menus, events and blog posts.'),
    '#default_value' => '1',
  );

  $form['actions'] = array(
    '#type' => 'actions',
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => st("Install"),
    '#weight' => 10,
    '#attributes' => array(
      'class' => array('btn', 'btn-lg', 'btn-primary'),
    ),
  );

  return $form;
}

function restaurant_select_features_submit($form, &$form_state) {
  variable_set('restaurant_features', $form_state['values']['features']);
  variable_set('restaurant_demo_content', $form_state['values']['demo_content']);
}

/**
 * Install selected features for restaurant
 */
function restaurant_install_features() {
  $modules = array();

  // Install features.
  $features = variable_get('restaurant_features', array());
  foreach ($features as $feature) {
    $modules[] = $feature;
  }

  // Install demo content.
  $install_demo_content = variable_get('restaurant_demo_content', FALSE);
  if ($install_demo_content) {
    $modules[] = 'restaurant_pages';
    $modules[] = 'restaurant_demo';
    if (!empty($features['restaurant_blog'])) {
      $modules[] = 'restaurant_blog_demo';
    }
    if (!empty($features['restaurant_menu'])) {
      $modules[] = 'restaurant_menu_demo';
    }
    if (!empty($features['restaurant_event'])) {
      $modules[] = 'restaurant_event_demo';
    }
    if (!empty($features['restaurant_reservation'])) {
      $modules[] = 'restaurant_reservation_demo';
    }
    if (!empty($features['restaurant_location'])) {
      $modules[] = 'restaurant_location_demo';
    }
  }

  // Resolve the dependencies now, so that module_enable() doesn't need
  // to do it later for each individual module (which kills performance).
  $files = system_rebuild_module_data();
  $modules_sorted = array();
  foreach ($modules as $module) {
    if (isset($files[$module]) && $files[$module]->requires) {
      // Create a list of dependencies that haven't been installed yet.
      $dependencies = array_keys($files[$module]->requires);
      $dependencies = array_filter($dependencies, '_restaurant_filter_dependencies');
      // Add them to the module list.
      $modules = array_merge($modules, $dependencies);
    }
  }
  $modules = array_unique($modules);
  foreach ($modules as $module) {
    $modules_sorted[$module] = $files[$module]->sort;
  }
  arsort($modules_sorted);

  $operations = array();
  foreach ($modules_sorted as $module => $weight) {
    $operations[] = array('_restaurant_enable_module', array($module, $files[$module]->info['name']));
  }

  $batch = array(
    'title' => st('Installing features'),
    'operations' => $operations,
  );

  return $batch;
}

/**
 * Callback to install demo content
 */
function restaurant_install_demo_content() {
  $install_demo_content = variable_get('restaurant_demo_content', FALSE);
  $features = variable_get('restaurant_features', array());
  $operations = array();

  if ($install_demo_content) {
    // Run all available migrations.
    $migrations = migrate_migrations();
    foreach ($migrations as $machine_name => $migration) {
      $operations[] = array('_restaurant_import', array($machine_name, t('Importing content.')));
    }

    $batch = array(
      'title' => st('Installing demo content'),
      'operations' => $operations,
      'file' => drupal_get_path('profile', 'restaurant') . '/restaurant.install_callbacks.inc',
    );

    return $batch;
  }
}

/**
 * BatchAPI callback.
 *
 * @see restaurant_install_features()
 */
function _restaurant_enable_module($module, $module_name, &$context) {
  module_enable(array($module), FALSE);
  $context['message'] = st('Installed %module module.', array('%module' => $module_name));
}

/**
 * BatchAPI callback.
 *
 * @see restaurant_install_demo_content()
 */
function _restaurant_import($operation, $type, &$context) {
  $context['message'] = t('@operation', array('@operation' => $type));
  $migration =  Migration::getInstance($operation);
  $migration->resetStatus();
  $migration->processImport();
}


