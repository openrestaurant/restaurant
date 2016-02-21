<?php

/**
 * @file
 * Views definitions for restaurant_reservation module.
 */
 
/**
 * Implements hook_views_data().
 */
function restaurant_reservation_views_data() {
  $data = array();

  $data['node']['update_status_form'] = array(
    'title' => t('Update status form'),
    'help' => t('Form to update reservation status.'),
    'field' => array(
      'handler' => 'restaurant_reservation_handler_update_status_form',
    ),
  );

  $data['node']['reservation_calendar_field'] = array(
    'title' => t('Reservation calendar field'),
    'help' => t('Displays a reservation for a calendar.'),
    'field' => array(
      'handler' => 'restaurant_reservation_handler_reservation_calendar_field',
    ),
  );

  return $data;
}