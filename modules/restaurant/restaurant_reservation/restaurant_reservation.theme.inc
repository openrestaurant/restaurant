<?php

/**
 * Theme functions for restaurant_reservation.
 */

/**
 * Implements theme_restaurant_reservation_status().
 */
function theme_restaurant_reservation_status($variables) {
  $status_value = trim($variables['status']);
  if (!empty($status_value)) {
    $statuses = restaurant_reservation_get_statuses();
    $status_key = array_search($status_value, $statuses);

    return '<span class="reservation-label reservation-label-' . $status_key . '">' . $status_value . '</span>';
  }
}

/**
 * Implements theme_reservation_calendar_field().
 */
function theme_reservation_calendar_field($variables) {
  $reservation = $variables['reservation'];
  $text = $variables['text'];
  $status = entity_metadata_wrapper('node', $reservation)->field_reservation_status->value();
  $color = _restaurant_reservation_get_status_color($status);

  // Add css.
  drupal_add_css(drupal_get_path('module', 'restaurant_reservation') . '/css/restaurant_reservation.css');

  return '<span class="label label-' . $color . '">' . $text . '</span>';
}
