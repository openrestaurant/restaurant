<?php
/**
 * @file
 * restaurant_reservation.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function restaurant_reservation_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node reservation defaults'.
  $permissions['administer panelizer node reservation defaults'] = array(
    'name' => 'administer panelizer node reservation defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer reservation'.
  $permissions['administer reservations'] = array(
    'name' => 'administer reservations',
    'roles' => array(),
    'module' => 'restaurant_reservation',
  );

  // Exported permission: 'create reservation content'.
  $permissions['create reservation content'] = array(
    'name' => 'create reservation content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any reservation content'.
  $permissions['delete any reservation content'] = array(
    'name' => 'delete any reservation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own reservation content'.
  $permissions['delete own reservation content'] = array(
    'name' => 'delete own reservation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any reservation content'.
  $permissions['edit any reservation content'] = array(
    'name' => 'edit any reservation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own reservation content'.
  $permissions['edit own reservation content'] = array(
    'name' => 'edit own reservation content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
