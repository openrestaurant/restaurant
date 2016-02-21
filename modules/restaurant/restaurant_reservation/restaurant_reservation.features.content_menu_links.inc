<?php
/**
 * @file
 * restaurant_reservation.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function restaurant_reservation_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: navigation:node/add/reservation
  $menu_links['navigation:node/add/reservation'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/reservation',
    'router_path' => 'node/add/reservation',
    'link_title' => 'Reservation',
    'options' => array(
      'attributes' => array(
        'title' => 'Content type for reservation.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Reservation');


  return $menu_links;
}
