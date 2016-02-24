<?php
/**
 * @file
 * restaurant_demo.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function restaurant_demo_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: menu-footer-menu_documentation:http
  $menu_links['menu-footer-menu_documentation:http'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://docs.open.restaurant',
    'router_path' => 'http://docs.open.restaurant',
    'link_title' => 'Documentation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 13,
    'parent_path' => 'http://open.restaurant',
  );
  // Exported menu link: menu-footer-menu_launch-on-pantheon:http
  $menu_links['menu-footer-menu_launch-on-pantheon:http'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'https://dashboard.pantheon.io/products/openrestaurant/spinup',
    'router_path' => 'https://dashboard.pantheon.io/products/openrestaurant/spinup',
    'link_title' => 'Launch on Pantheon',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 15,
    'parent_path' => 'http://open.restaurant',
  );
  // Exported menu link: menu-footer-menu_news:news
  $menu_links['menu-footer-menu_news:news'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_news:news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Documentation');
  t('Launch on Pantheon');
  t('News');


  return $menu_links;
}
