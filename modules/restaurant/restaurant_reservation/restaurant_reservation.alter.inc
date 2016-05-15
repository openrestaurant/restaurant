<?php

/**
 * Alter hooks for restaurant_reservation.
 */

/**
 * Implements hook_form_alter().
 */
function restaurant_reservation_form_eck__entity__form_add_reservation_reservation_alter(&$form, &$form_state, $form_id) {
  // When the form is not shown on admin pages, make some changes.
  if (!drupal_match_path(current_path(), "admin/structure/entity-type/reservation/reservation/*")) {
    // Set the status to pending by default.
    $language = $form['field_reservation_status']['#language'];
    $form['field_reservation_status'][$language]['#value'] = 'pending';
    $form['field_reservation_status'][$language]['#access'] = FALSE;

    // Change the value of the submit buttton.
    $form['actions']['submit']['#value'] = t('Submit Reservation');

    // Only show the locations dropdown if site has created locations.
    if (isset($form['field_reservation_location'])) {
      $options = $form['field_reservation_location'][$language]['#options'];

      // Remove the _none options if set.
      unset($options['_none']);

      $form['field_reservation_location']['#access'] = count($options);
    }

    // Add a custom submit callback.
    $form['#submit'][] = 'restaurant_reservation_form_eck__entity__form_add_reservation_reservation_submit';
  }
}

/**
 * Custom submit callback for reservation form.
 */
function restaurant_reservation_form_eck__entity__form_add_reservation_reservation_submit($form, &$form_state) {
  // Clear all messages.
  drupal_get_messages();

  // Show a custom message.
  drupal_set_message(panopoly_config_get('reservation_form_success_message', ''));

  // Redirect to the reservation page.
  $form_state['redirect'] = current_path();
}
