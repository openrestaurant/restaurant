<?php
/**
 * @file
 * restaurant_reservation.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function restaurant_reservation_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_reservation:node/add/reservation
  $menu_links['navigation_reservation:node/add/reservation'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/reservation',
    'router_path' => 'node/add/reservation',
    'link_title' => 'Reservation',
    'options' => array(
      'attributes' => array(
        'title' => 'Content type for reservation.',
      ),
      'identifier' => 'navigation_reservation:node/add/reservation',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Reservation');


  return $menu_links;
}
