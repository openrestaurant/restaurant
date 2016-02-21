<?php
/**
 * @file
 * restaurant_reservation.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function restaurant_reservation_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_reservation';
  $strongarm->value = 'edit-auto-nodetitle';
  $export['additional_settings__active_tab_reservation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_reservation';
  $strongarm->value = 'Reservation [node:field_reservation_number]';
  $export['ant_pattern_reservation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_reservation';
  $strongarm->value = 0;
  $export['ant_php_reservation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_reservation';
  $strongarm->value = '1';
  $export['ant_reservation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_enabled_reservation';
  $strongarm->value = 1;
  $export['date_popup_authored_enabled_reservation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_format_reservation';
  $strongarm->value = 'm/d/Y - H:i';
  $export['date_popup_authored_format_reservation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_year_range_reservation';
  $strongarm->value = '3';
  $export['date_popup_authored_year_range_reservation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_reservation__reservation';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'email' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(
        'status_form' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'email' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_reservation__reservation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'restaurant_config_reservation_form_success_message';
  $strongarm->value = 'Your reservation has been recorded. Thank you.';
  $export['restaurant_config_reservation_form_success_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'restaurant_config_reservation_mail_cancelled_body';
  $strongarm->value = 'Your reservation has been cancelled. See below for details.';
  $export['restaurant_config_reservation_mail_cancelled_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'restaurant_config_reservation_mail_cancelled_subject';
  $strongarm->value = 'Reservation cancelled';
  $export['restaurant_config_reservation_mail_cancelled_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'restaurant_config_reservation_mail_confirmed_body';
  $strongarm->value = 'Your reservation has been confirmed. See below for details.';
  $export['restaurant_config_reservation_mail_confirmed_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'restaurant_config_reservation_mail_confirmed_subject';
  $strongarm->value = 'Reservation confirmed';
  $export['restaurant_config_reservation_mail_confirmed_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'restaurant_config_reservation_mail_pending_body';
  $strongarm->value = 'We have received your reservation. We will send you a confirmation email shortly.';
  $export['restaurant_config_reservation_mail_pending_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'restaurant_config_reservation_mail_pending_subject';
  $strongarm->value = 'Reservation received';
  $export['restaurant_config_reservation_mail_pending_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'restaurant_config_reservation_number_prefix';
  $strongarm->value = 'RN';
  $export['restaurant_config_reservation_number_prefix'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'restaurant_config_reservation_show_notifications';
  $strongarm->value = 1;
  $export['restaurant_config_reservation_show_notifications'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_reservation';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_reservation'] = $strongarm;

  return $export;
}
