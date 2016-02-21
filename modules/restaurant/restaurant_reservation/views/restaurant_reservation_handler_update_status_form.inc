<?php
 
/**
 * @file
 * Definition of restaurant_reservation_handler_update_status_form.
 */
 
/**
 * Handler definition.
 */
class restaurant_reservation_handler_update_status_form extends views_handler_field {
  /**
   * Add some required fields needed on render().
   */
  function construct() {
    parent::construct();
    $this->additional_fields['field_reservation_status'] = array(
      'table' => 'field_data_field_reservation_status',
      'field' => 'field_reservation_status_value',
    );
  }
 
  /**
   * Loads additional fields.
   */
  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }
 
  /**
   * Default options form.
   */
  function option_definition() {
    $options = parent::option_definition();
    return $options;
  }
 
  /**
   * Creates the form item for the options added.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }
 
  /**
   * Renders the field handler.
   */
  function render($values) {
    $nid = $values->nid;
    
    // Include restaurant_reservation.admin.inc.
    module_load_include('inc', 'restaurant_reservation', 'restaurant_reservation.admin');

    // Return update status form.
    return drupal_get_form('restaurant_reservation_update_status_form_' . $nid, $nid);
  }
}