<?php
/**
 * @file
 * restaurant_demo.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function restaurant_demo_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer Menu',
    'description' => 'Menu links in the footer',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer Menu');
  t('Menu links in the footer');


  return $menus;
}
