<?php
/**
 * @file
 * restaurant_base.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function restaurant_base_user_default_permissions() {
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
