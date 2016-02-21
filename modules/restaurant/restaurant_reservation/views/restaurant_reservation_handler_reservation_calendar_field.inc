<?php
 
/**
 * @file
 * Definition of restaurant_reservation_handler_reservation_calendar_field.
 */
 
/**
 * Handler definition.
 */
class restaurant_reservation_handler_reservation_calendar_field extends views_handler_field {
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
    $node = node_load($nid);
    $text = $this->get_text($node);

    // Include restaurant_reservation.theme.inc.
    module_load_include('inc', 'restaurant_reservation', 'restaurant_reservation.theme');

    // Return output.
    return theme('reservation_calendar_field', array('reservation' => $node, 'text' => $text));
  }

  /**
   * Returns the reservatio number and number of persons.
   */
  function get_text($node) {
    $reservation_number = entity_metadata_wrapper('node', $node)->field_reservation_number->value();
    $persons = entity_metadata_wrapper('node', $node)->field_reservation_persons->value();
    $text = $reservation_number . ' (' . $persons . ')';
    return l($text, 'admin/reservations/view/' . $node->nid);
  }
}