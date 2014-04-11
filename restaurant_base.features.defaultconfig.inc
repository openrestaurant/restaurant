<?php
/**
 * @file
 * restaurant_base.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function restaurant_base_defaultconfig_features() {
  return array(
    'restaurant_base' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function restaurant_base_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'menu edit menu-footer-menu'.
  $permissions['menu edit menu-footer-menu'] = array(
    'name' => 'menu edit menu-footer-menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_editor',
  );

  return $permissions;
}
