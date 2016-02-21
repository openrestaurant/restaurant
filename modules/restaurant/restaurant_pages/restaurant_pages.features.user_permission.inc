<?php
/**
 * @file
 * restaurant_pages.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function restaurant_pages_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contact',
  );

  return $permissions;
}
