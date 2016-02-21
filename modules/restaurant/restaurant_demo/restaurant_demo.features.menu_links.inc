<?php
/**
 * @file
 * restaurant_demo.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function restaurant_demo_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-menu_about-us:http://openrestaurant.io
  $menu_links['menu-footer-menu_about-us:http://openrestaurant.io'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://openrestaurant.io',
    'router_path' => '',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_about-us:http://openrestaurant.io',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
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
      'identifier' => 'menu-footer-menu_appetizers:menus',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_menu:menus',
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
      'identifier' => 'menu-footer-menu_breakfast:menus',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_menu:menus',
  );
  // Exported menu link: menu-footer-menu_contact-us:contact
  $menu_links['menu-footer-menu_contact-us:contact'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_contact-us:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_about-us:http://openrestaurant.io',
  );
  // Exported menu link: menu-footer-menu_documentation:http://openrestaurant.io/documentation
  $menu_links['menu-footer-menu_documentation:http://openrestaurant.io/documentation'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://openrestaurant.io/documentation',
    'router_path' => '',
    'link_title' => 'Documentation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_documentation:http://openrestaurant.io/documentation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_open-restaurant:http://openrestaurant.io',
  );
  // Exported menu link: menu-footer-menu_download:http://openrestaurant.io
  $menu_links['menu-footer-menu_download:http://openrestaurant.io'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://openrestaurant.io',
    'router_path' => '',
    'link_title' => 'Download',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_download:http://openrestaurant.io',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_open-restaurant:http://openrestaurant.io',
  );
  // Exported menu link: menu-footer-menu_events:events
  $menu_links['menu-footer-menu_events:events'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_events:events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_restaurant:http://openrestaurant.io',
  );
  // Exported menu link: menu-footer-menu_faqs:http://openrestaurant.io
  $menu_links['menu-footer-menu_faqs:http://openrestaurant.io'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://openrestaurant.io',
    'router_path' => '',
    'link_title' => 'FAQs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_faqs:http://openrestaurant.io',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_about-us:http://openrestaurant.io',
  );
  // Exported menu link: menu-footer-menu_hours--locations:locations
  $menu_links['menu-footer-menu_hours--locations:locations'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'locations',
    'router_path' => 'locations',
    'link_title' => 'Hours & Locations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_hours--locations:locations',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_restaurant:http://openrestaurant.io',
  );
  // Exported menu link: menu-footer-menu_launch-on-pantheon:http://pantheon.io
  $menu_links['menu-footer-menu_launch-on-pantheon:http://pantheon.io'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://pantheon.io',
    'router_path' => '',
    'link_title' => 'Launch on Pantheon',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_launch-on-pantheon:http://pantheon.io',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_open-restaurant:http://openrestaurant.io',
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
      'identifier' => 'menu-footer-menu_lunch:menus',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_menu:menus',
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
      'identifier' => 'menu-footer-menu_menu:menus',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
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
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_restaurant:http://openrestaurant.io',
  );
  // Exported menu link: menu-footer-menu_open-restaurant:http://openrestaurant.io
  $menu_links['menu-footer-menu_open-restaurant:http://openrestaurant.io'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://openrestaurant.io',
    'router_path' => '',
    'link_title' => 'Open Restaurant',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_open-restaurant:http://openrestaurant.io',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_our-chefs:http://openrestaurant.io
  $menu_links['menu-footer-menu_our-chefs:http://openrestaurant.io'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://openrestaurant.io',
    'router_path' => '',
    'link_title' => 'Our Chefs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_our-chefs:http://openrestaurant.io',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_about-us:http://openrestaurant.io',
  );
  // Exported menu link: menu-footer-menu_restaurant:http://openrestaurant.io
  $menu_links['menu-footer-menu_restaurant:http://openrestaurant.io'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://openrestaurant.io',
    'router_path' => '',
    'link_title' => 'Restaurant',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_restaurant:http://openrestaurant.io',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Appetizers');
  t('Breakfast');
  t('Contact Us');
  t('Documentation');
  t('Download');
  t('Events');
  t('FAQs');
  t('Hours & Locations');
  t('Launch on Pantheon');
  t('Lunch');
  t('Menu');
  t('News');
  t('Open Restaurant');
  t('Our Chefs');
  t('Restaurant');

  return $menu_links;
}
