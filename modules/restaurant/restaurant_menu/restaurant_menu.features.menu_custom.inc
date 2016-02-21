<?php
/**
 * @file
 * restaurant_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function restaurant_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-restaurant-admin-menu.
  $menus['menu-restaurant-admin-menu'] = array(
    'menu_name' => 'menu-restaurant-admin-menu',
    'title' => 'Restaurant Admin Menu',
    'description' => 'Administrative links for managing the restaurant backend.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Administrative links for managing the restaurant backend.');
  t('Restaurant Admin Menu');


  return $menus;
}
