<?php
/**
 * @file
 * restaurant_reservation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function restaurant_reservation_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function restaurant_reservation_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function restaurant_reservation_eck_bundle_info() {
  $items = array(
    'reservation_reservation' => array(
      'machine_name' => 'reservation_reservation',
      'entity_type' => 'reservation',
      'name' => 'reservation',
      'label' => 'Reservation',
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function restaurant_reservation_eck_entity_type_info() {
  $items = array(
    'reservation' => array(
      'name' => 'reservation',
      'label' => 'Reservation',
      'properties' => array(
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
      ),
    ),
  );
  return $items;
}
