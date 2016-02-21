<?php
/**
 * @file
 * restaurant_pages.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function restaurant_pages_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:home
  $menu_links['main-menu:home'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'home',
    'router_path' => 'home',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact:contact
  $menu_links['main-menu_contact:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contact:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu:contact
  $menu_links['menu-footer-menu:contact'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact Us',
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
    'weight' => 0,
    'customized' => 1,
    'parent_path' => 'http://openrestaurant.io',
  );
  // Exported menu link: menu-footer-menu:events
  $menu_links['menu-footer-menu:events'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
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
    'weight' => 0,
    'customized' => 1,
    'parent_path' => 'http://openrestaurant.io',
  );
  // Exported menu link: menu-footer-menu:reservation
  $menu_links['menu-footer-menu:reservation'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'reservation',
    'router_path' => 'reservation',
    'link_title' => 'Reservation',
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
    'weight' => 0,
    'customized' => 1,
    'parent_path' => 'http://openrestaurant.io',
  );
  // Exported menu link: menu-footer-menu_about-us:http
  $menu_links['menu-footer-menu_about-us:http'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://openrestaurant.io',
    'router_path' => '',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-footer-menu_appetizers:menus
  $menu_links['menu-footer-menu_appetizers:menus'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'menus',
    'router_path' => 'menus',
    'link_title' => 'Appetizers',
    'options' => array(
      'fragment' => 'appetizers',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_path' => 'menus',
  );
  // Exported menu link: menu-footer-menu_breakfast:menus
  $menu_links['menu-footer-menu_breakfast:menus'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'menus',
    'router_path' => 'menus',
    'link_title' => 'Breakfast',
    'options' => array(
      'fragment' => 'breakfast',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_path' => 'menus',
  );
  // Exported menu link: menu-footer-menu_download:http
  $menu_links['menu-footer-menu_download:http'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'mlid/1246/under-construction',
    'router_path' => 'mlid/%/under-construction',
    'link_title' => 'Download',
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
    'weight' => 12,
    'parent_path' => 'http://openrestaurant.io',
  );
  // Exported menu link: menu-footer-menu_faqs:http
  $menu_links['menu-footer-menu_faqs:http'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'mlid/1241/under-construction',
    'router_path' => 'mlid/%/under-construction',
    'link_title' => 'FAQs',
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
    'weight' => 12,
    'parent_path' => 'mlid/1239/under-construction',
  );
  // Exported menu link: menu-footer-menu_lunch:menus
  $menu_links['menu-footer-menu_lunch:menus'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'menus',
    'router_path' => 'menus',
    'link_title' => 'Lunch',
    'options' => array(
      'fragment' => 'lunch',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_path' => 'menus',
  );
  // Exported menu link: menu-footer-menu_menu:menus
  $menu_links['menu-footer-menu_menu:menus'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'menus',
    'router_path' => 'menus',
    'link_title' => 'Menu',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_open-restaurant:http
  $menu_links['menu-footer-menu_open-restaurant:http'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://openrestaurant.io',
    'router_path' => '',
    'link_title' => 'Open Restaurant',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: menu-footer-menu_our-chefs:http
  $menu_links['menu-footer-menu_our-chefs:http'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://openrestaurant.io',
    'router_path' => '',
    'link_title' => 'Our Chefs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'http://openrestaurant.io',
  );
  // Exported menu link: menu-footer-menu_restaurant:http
  $menu_links['menu-footer-menu_restaurant:http'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://openrestaurant.io',
    'router_path' => '',
    'link_title' => 'Restaurant',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Appetizers');
  t('Breakfast');
  t('Contact');
  t('Contact Us');
  t('Download');
  t('Events');
  t('FAQs');
  t('Home');
  t('Lunch');
  t('Menu');
  t('Open Restaurant');
  t('Our Chefs');
  t('Reservation');
  t('Restaurant');


  return $menu_links;
}
