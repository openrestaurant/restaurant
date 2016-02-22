<?php
/**
 * @file
 * restaurant_menu.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function restaurant_menu_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer menus'.
  $permissions['administer menus'] = array(
    'name' => 'administer menus',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'restaurant_menu',
  );

  // Exported permission: 'create commerce_product entities of bundle menu_type'.
  $permissions['create commerce_product entities of bundle menu_type'] = array(
    'name' => 'create commerce_product entities of bundle menu_type',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create menu content'.
  $permissions['create menu content'] = array(
    'name' => 'create menu content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any menu content'.
  $permissions['delete any menu content'] = array(
    'name' => 'delete any menu content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own menu content'.
  $permissions['delete own menu content'] = array(
    'name' => 'delete own menu content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in menu_categories'.
  $permissions['delete terms in menu_categories'] = array(
    'name' => 'delete terms in menu_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any commerce_product entity of bundle menu_type'.
  $permissions['edit any commerce_product entity of bundle menu_type'] = array(
    'name' => 'edit any commerce_product entity of bundle menu_type',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any menu content'.
  $permissions['edit any menu content'] = array(
    'name' => 'edit any menu content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own commerce_product entities of bundle menu_type'.
  $permissions['edit own commerce_product entities of bundle menu_type'] = array(
    'name' => 'edit own commerce_product entities of bundle menu_type',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own menu content'.
  $permissions['edit own menu content'] = array(
    'name' => 'edit own menu content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in menu_categories'.
  $permissions['edit terms in menu_categories'] = array(
    'name' => 'edit terms in menu_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'update menus_page entityqueue'.
  $permissions['update menus_page entityqueue'] = array(
    'name' => 'update menus_page entityqueue',
    'roles' => array(),
    'module' => 'entityqueue',
  );

  // Exported permission: 'view any commerce_product entity of bundle menu_type'.
  $permissions['view any commerce_product entity of bundle menu_type'] = array(
    'name' => 'view any commerce_product entity of bundle menu_type',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle menu_type'.
  $permissions['view own commerce_product entities of bundle menu_type'] = array(
    'name' => 'view own commerce_product entities of bundle menu_type',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  return $permissions;
}
