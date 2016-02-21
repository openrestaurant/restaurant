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

  // Exported menu link: menu-footer-menu_about:http://drupal.org/project/restaurant
  $menu_links['menu-footer-menu_about:http://drupal.org/project/restaurant'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://drupal.org/project/restaurant',
    'router_path' => '',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_about:http://drupal.org/project/restaurant',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_breakfast:menus
  $menu_links['menu-footer-menu_breakfast:menus'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'menus',
    'router_path' => 'menus',
    'link_title' => 'Breakfast',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'fragment' => 'Breakfast',
      'identifier' => 'menu-footer-menu_breakfast:menus',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 7,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_menus:menus',
  );
  // Exported menu link: menu-footer-menu_contact:contact
  $menu_links['menu-footer-menu_contact:contact'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_contact:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_about:http://drupal.org/project/restaurant',
  );
  // Exported menu link: menu-footer-menu_documentation:http://drupal.org/project/restaurant
  $menu_links['menu-footer-menu_documentation:http://drupal.org/project/restaurant'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://drupal.org/project/restaurant',
    'router_path' => '',
    'link_title' => 'Documentation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_documentation:http://drupal.org/project/restaurant',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_about:http://drupal.org/project/restaurant',
  );
  // Exported menu link: menu-footer-menu_download:http://drupal.org/project/restaurant
  $menu_links['menu-footer-menu_download:http://drupal.org/project/restaurant'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://drupal.org/project/restaurant',
    'router_path' => '',
    'link_title' => 'Download',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_download:http://drupal.org/project/restaurant',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_about:http://drupal.org/project/restaurant',
  );
  // Exported menu link: menu-footer-menu_drinks:menus
  $menu_links['menu-footer-menu_drinks:menus'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'menus',
    'router_path' => 'menus',
    'link_title' => 'Drinks',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'fragment' => 'Drinks',
      'identifier' => 'menu-footer-menu_drinks:menus',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_menus:menus',
  );
  // Exported menu link: menu-footer-menu_facebook:http://drupal.org/project/restaurant
  $menu_links['menu-footer-menu_facebook:http://drupal.org/project/restaurant'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://drupal.org/project/restaurant',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_facebook:http://drupal.org/project/restaurant',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 8,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_follow-us:http://drupal.org/project/restaurant',
  );
  // Exported menu link: menu-footer-menu_follow-us:http://drupal.org/project/restaurant
  $menu_links['menu-footer-menu_follow-us:http://drupal.org/project/restaurant'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://drupal.org/project/restaurant',
    'router_path' => '',
    'link_title' => 'Follow Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_follow-us:http://drupal.org/project/restaurant',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_google:http://drupal.org/project/restaurant
  $menu_links['menu-footer-menu_google:http://drupal.org/project/restaurant'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://drupal.org/project/restaurant',
    'router_path' => '',
    'link_title' => 'Google',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_google:http://drupal.org/project/restaurant',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_follow-us:http://drupal.org/project/restaurant',
  );
  // Exported menu link: menu-footer-menu_help:http://drupal.org/project/restaurant
  $menu_links['menu-footer-menu_help:http://drupal.org/project/restaurant'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://drupal.org/project/restaurant',
    'router_path' => '',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_help:http://drupal.org/project/restaurant',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_about:http://drupal.org/project/restaurant',
  );
  // Exported menu link: menu-footer-menu_instagram:http://drupal.org/project/restaurant
  $menu_links['menu-footer-menu_instagram:http://drupal.org/project/restaurant'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://drupal.org/project/restaurant',
    'router_path' => '',
    'link_title' => 'Instagram',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_instagram:http://drupal.org/project/restaurant',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 11,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_follow-us:http://drupal.org/project/restaurant',
  );
  // Exported menu link: menu-footer-menu_lunch:menus
  $menu_links['menu-footer-menu_lunch:menus'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'menus',
    'router_path' => 'menus',
    'link_title' => 'Lunch',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'fragment' => 'Lunch',
      'identifier' => 'menu-footer-menu_lunch:menus',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 9,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_menus:menus',
  );
  // Exported menu link: menu-footer-menu_menus:menus
  $menu_links['menu-footer-menu_menus:menus'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'menus',
    'router_path' => 'menus',
    'link_title' => 'Menus',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_menus:menus',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_restaurant:http://drupal.org/project/restaurant
  $menu_links['menu-footer-menu_restaurant:http://drupal.org/project/restaurant'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://drupal.org/project/restaurant',
    'router_path' => '',
    'link_title' => 'Restaurant',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_restaurant:http://drupal.org/project/restaurant',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_starters:menus
  $menu_links['menu-footer-menu_starters:menus'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'menus',
    'router_path' => 'menus',
    'link_title' => 'Starters',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'fragment' => 'Starters',
      'identifier' => 'menu-footer-menu_starters:menus',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 8,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_menus:menus',
  );
  // Exported menu link: menu-footer-menu_team:http://drupal.org/project/restaurant
  $menu_links['menu-footer-menu_team:http://drupal.org/project/restaurant'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://drupal.org/project/restaurant',
    'router_path' => '',
    'link_title' => 'Team',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_team:http://drupal.org/project/restaurant',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_about:http://drupal.org/project/restaurant',
  );
  // Exported menu link: menu-footer-menu_twitter:http://drupal.org/project/restaurant
  $menu_links['menu-footer-menu_twitter:http://drupal.org/project/restaurant'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://drupal.org/project/restaurant',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_twitter:http://drupal.org/project/restaurant',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 9,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_follow-us:http://drupal.org/project/restaurant',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Breakfast');
  t('Contact');
  t('Documentation');
  t('Download');
  t('Drinks');
  t('Facebook');
  t('Follow Us');
  t('Google');
  t('Help');
  t('Instagram');
  t('Lunch');
  t('Menus');
  t('Restaurant');
  t('Starters');
  t('Team');
  t('Twitter');


  return $menu_links;
}
