<?php
/**
 * @file
 * restaurant_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function restaurant_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-restaurant-admin-menu:admin/structure/taxonomy/menu_categories/add
  $menu_links['menu-restaurant-admin-menu:admin/structure/taxonomy/menu_categories/add'] = array(
    'menu_name' => 'menu-restaurant-admin-menu',
    'link_path' => 'admin/structure/taxonomy/menu_categories/add',
    'router_path' => 'admin/structure/taxonomy/%/add',
    'link_title' => 'Menu Category',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '11',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-restaurant-admin-menu:node/add/menu
  $menu_links['menu-restaurant-admin-menu:node/add/menu'] = array(
    'menu_name' => 'menu-restaurant-admin-menu',
    'link_path' => 'node/add/menu',
    'router_path' => 'node/add',
    'link_title' => 'Menu',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Menu');
  t('Menu Category');


  return $menu_links;
}
