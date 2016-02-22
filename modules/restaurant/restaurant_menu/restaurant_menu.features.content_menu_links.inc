<?php
/**
 * @file
 * restaurant_menu.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function restaurant_menu_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:menus
  $menu_links['main-menu:menus'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'menus',
    'router_path' => 'menus',
    'link_title' => 'The Menu',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -9,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('The Menu');


  return $menu_links;
}
