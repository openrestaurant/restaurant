<?php

/**
 * @file
 * Contains callbacks used during installation.
 */

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
  $migration->processImport();
}
