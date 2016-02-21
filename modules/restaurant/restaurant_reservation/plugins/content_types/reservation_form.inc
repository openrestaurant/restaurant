<?php
/**
 * Plugin definition
 */
$plugin = array(
  'title' => t('Reservation form'),
  'single' => TRUE,
  'category' => array(t('Reservation')),
);

/**
 * Render Callback
 */
function restaurant_reservation_reservation_form_content_type_render($subtype, $conf, $args) {
  $block = new stdClass();

  // Add the reservation form.
  $block->title = '';
  $block->content = eck__entity__add('reservation', 'reservation');

  return $block;
}