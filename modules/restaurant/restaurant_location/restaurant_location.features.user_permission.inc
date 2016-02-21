<?php
/**
 * @file
 * restaurant_location.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function restaurant_location_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer locations'.
  $permissions['administer locations'] = array(
    'name' => 'administer locations',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'restaurant_location',
  );

  // Exported permission: 'create location content'.
  $permissions['create location content'] = array(
    'name' => 'create location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any location content'.
  $permissions['delete any location content'] = array(
    'name' => 'delete any location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own location content'.
  $permissions['delete own location content'] = array(
    'name' => 'delete own location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any location content'.
  $permissions['edit any location content'] = array(
    'name' => 'edit any location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own location content'.
  $permissions['edit own location content'] = array(
    'name' => 'edit own location content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
