<?php
/*
 * @file
 * Config hooks for Restaurant Reservation.
 */

/**
 * Implements hook_panopoly_config_info().
 */
function restaurant_reservation_panopoly_config_info() {
  $config = array();

  $config['reservation_show_notifications'] = array(
    'title' => t('Show notifications'),
    'description' => t('If enable, the module will show a notification for new reservations.'),
    'type' => 'boolean',
    'default' => TRUE,
  );

  $config['reservation_use_reservation_number'] = array(
    'title' => t('Generate a number for reservations'),
    'description' => t('If checked, a reservation number will be generated for each reservation. Otherwise the reservation id is used.'),
    'type' => 'boolean',
    'default' => TRUE,
  );

  $config['reservation_number_prefix'] = array(
    'title' => t('Reservation number prefix'),
    'description' => t('Prefix to use for reservation numbers. Example RN, RESERVATION.'),
    'type' => 'string',
    'require' => TRUE,
    'default' => 'RN',
  );

  $config['reservation_form_success_message'] = array(
    'title' => t('Reservation form success message'),
    'description' => t('Success message to display on the reservation form.'),
    'type' => 'string',
    'require' => TRUE,
    'default' => t('Your reservation has been recorded. An email has been sent to the email address provided.'),
  );

  $statuses = restaurant_reservation_get_statuses();
  foreach ($statuses as $name => $status) {
    $config['reservation_mail_' . $name . '_[mail_part]'] = array(
      'title' => t('Email for @name reservations', array('@name' => $name)),
      'description' => t('Message for reservation @name email. The reservation number and the reservation details will be added to the message.', array('@name' => $name)),
      'type' => 'mail_text',
      'require' => TRUE,
    );
  }

  $info = array(
    'reservation' => array(
      'title' => t('Reservation system'),
      'description' => t('Configuration for the Reservation system'),
      'weight' => 50,
      'config' => $config,
    ),
  );

  return $info;
}