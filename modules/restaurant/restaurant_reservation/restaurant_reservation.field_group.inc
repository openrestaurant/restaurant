<?php
/**
 * @file
 * restaurant_reservation.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function restaurant_reservation_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|reservation|reservation|default';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'reservation';
  $field_group->bundle = 'reservation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '0',
    'children' => array(
      0 => 'field_reservation_email',
      1 => 'field_reservation_name',
      2 => 'field_reservation_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact field-group-fieldset',
      ),
    ),
  );
  $export['group_contact|reservation|reservation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|reservation|reservation|default';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'reservation';
  $field_group->bundle = 'reservation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Reservation details',
    'weight' => '1',
    'children' => array(
      0 => 'field_reservation_date',
      1 => 'field_reservation_number',
      2 => 'field_reservation_party_size',
      3 => 'field_reservation_status',
      4 => 'field_reservation_location',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-details field-group-fieldset',
      ),
    ),
  );
  $export['group_details|reservation|reservation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_message|reservation|reservation|default';
  $field_group->group_name = 'group_message';
  $field_group->entity_type = 'reservation';
  $field_group->bundle = 'reservation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Message',
    'weight' => '2',
    'children' => array(
      0 => 'field_reservation_message',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-message field-group-fieldset',
      ),
    ),
  );
  $export['group_message|reservation|reservation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_update|reservation|reservation|default';
  $field_group->group_name = 'group_update';
  $field_group->entity_type = 'reservation';
  $field_group->bundle = 'reservation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Update',
    'weight' => '3',
    'children' => array(
      0 => 'status_form',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-update field-group-fieldset',
      ),
    ),
  );
  $export['group_update|reservation|reservation|default'] = $field_group;

  return $export;
}
