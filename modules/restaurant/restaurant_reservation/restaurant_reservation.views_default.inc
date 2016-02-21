<?php
/**
 * @file
 * restaurant_reservation.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function restaurant_reservation_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'administration_reservations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_reservation';
  $view->human_name = 'Administration: Reservations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Reservations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer reservations';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_reservation_number' => 'field_reservation_number',
    'field_reservation_name' => 'field_reservation_name',
    'field_reservation_date' => 'field_reservation_date',
    'field_reservation_party_size' => 'field_reservation_party_size',
    'field_reservation_phone' => 'field_reservation_phone',
    'field_reservation_email' => 'field_reservation_email',
    'field_reservation_status' => 'field_reservation_status',
    'edit_link' => 'edit_link',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_reservation_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reservation_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reservation_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reservation_party_size' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reservation_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reservation_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reservation_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Reservation: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_reservation';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Reservation: Reservation number */
  $handler->display->display_options['fields']['field_reservation_number']['id'] = 'field_reservation_number';
  $handler->display->display_options['fields']['field_reservation_number']['table'] = 'field_data_field_reservation_number';
  $handler->display->display_options['fields']['field_reservation_number']['field'] = 'field_reservation_number';
  $handler->display->display_options['fields']['field_reservation_number']['label'] = '#';
  $handler->display->display_options['fields']['field_reservation_number']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_reservation_number']['alter']['path'] = 'admin/reservations/[id]';
  $handler->display->display_options['fields']['field_reservation_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_number']['field_api_classes'] = TRUE;
  /* Field: Reservation: Name */
  $handler->display->display_options['fields']['field_reservation_name']['id'] = 'field_reservation_name';
  $handler->display->display_options['fields']['field_reservation_name']['table'] = 'field_data_field_reservation_name';
  $handler->display->display_options['fields']['field_reservation_name']['field'] = 'field_reservation_name';
  $handler->display->display_options['fields']['field_reservation_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_name']['field_api_classes'] = TRUE;
  /* Field: Reservation: Location */
  $handler->display->display_options['fields']['field_reservation_location']['id'] = 'field_reservation_location';
  $handler->display->display_options['fields']['field_reservation_location']['table'] = 'field_data_field_reservation_location';
  $handler->display->display_options['fields']['field_reservation_location']['field'] = 'field_reservation_location';
  $handler->display->display_options['fields']['field_reservation_location']['label'] = 'Restaurant';
  $handler->display->display_options['fields']['field_reservation_location']['element_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_location']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_location']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_reservation_location']['field_api_classes'] = TRUE;
  /* Field: Reservation: Date */
  $handler->display->display_options['fields']['field_reservation_date']['id'] = 'field_reservation_date';
  $handler->display->display_options['fields']['field_reservation_date']['table'] = 'field_data_field_reservation_date';
  $handler->display->display_options['fields']['field_reservation_date']['field'] = 'field_reservation_date';
  $handler->display->display_options['fields']['field_reservation_date']['label'] = 'Reserved for';
  $handler->display->display_options['fields']['field_reservation_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_reservation_date']['field_api_classes'] = TRUE;
  /* Field: Reservation: Party size */
  $handler->display->display_options['fields']['field_reservation_party_size']['id'] = 'field_reservation_party_size';
  $handler->display->display_options['fields']['field_reservation_party_size']['table'] = 'field_data_field_reservation_party_size';
  $handler->display->display_options['fields']['field_reservation_party_size']['field'] = 'field_reservation_party_size';
  $handler->display->display_options['fields']['field_reservation_party_size']['element_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_party_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_party_size']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_party_size']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_party_size']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_reservation_party_size']['field_api_classes'] = TRUE;
  /* Field: Reservation: Phone */
  $handler->display->display_options['fields']['field_reservation_phone']['id'] = 'field_reservation_phone';
  $handler->display->display_options['fields']['field_reservation_phone']['table'] = 'field_data_field_reservation_phone';
  $handler->display->display_options['fields']['field_reservation_phone']['field'] = 'field_reservation_phone';
  $handler->display->display_options['fields']['field_reservation_phone']['element_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_phone']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_phone']['field_api_classes'] = TRUE;
  /* Field: Reservation: Email */
  $handler->display->display_options['fields']['field_reservation_email']['id'] = 'field_reservation_email';
  $handler->display->display_options['fields']['field_reservation_email']['table'] = 'field_data_field_reservation_email';
  $handler->display->display_options['fields']['field_reservation_email']['field'] = 'field_reservation_email';
  $handler->display->display_options['fields']['field_reservation_email']['element_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_email']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_email']['field_api_classes'] = TRUE;
  /* Field: Reservation: Status */
  $handler->display->display_options['fields']['field_reservation_status']['id'] = 'field_reservation_status';
  $handler->display->display_options['fields']['field_reservation_status']['table'] = 'field_data_field_reservation_status';
  $handler->display->display_options['fields']['field_reservation_status']['field'] = 'field_reservation_status';
  $handler->display->display_options['fields']['field_reservation_status']['alter']['preserve_tags'] = '<span>';
  $handler->display->display_options['fields']['field_reservation_status']['element_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_status']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_status']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_status']['field_api_classes'] = TRUE;
  /* Field: Reservation: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'eck_reservation';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_link']['text'] = 'edit';
  /* Filter criterion: Reservation: reservation type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_reservation';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'reservation' => 'reservation',
  );
  /* Filter criterion: Reservation: Name (field_reservation_name) */
  $handler->display->display_options['filters']['field_reservation_name_value']['id'] = 'field_reservation_name_value';
  $handler->display->display_options['filters']['field_reservation_name_value']['table'] = 'field_data_field_reservation_name';
  $handler->display->display_options['filters']['field_reservation_name_value']['field'] = 'field_reservation_name_value';
  $handler->display->display_options['filters']['field_reservation_name_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['field_reservation_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['operator_id'] = 'field_reservation_name_value_op';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['operator'] = 'field_reservation_name_value_op';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_field'] = 'field_reservation_name';
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_reservation_name_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Reservation: Reservation number (field_reservation_number) */
  $handler->display->display_options['filters']['field_reservation_number_value']['id'] = 'field_reservation_number_value';
  $handler->display->display_options['filters']['field_reservation_number_value']['table'] = 'field_data_field_reservation_number';
  $handler->display->display_options['filters']['field_reservation_number_value']['field'] = 'field_reservation_number_value';
  $handler->display->display_options['filters']['field_reservation_number_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['field_reservation_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_reservation_number_value']['expose']['operator_id'] = 'field_reservation_number_value_op';
  $handler->display->display_options['filters']['field_reservation_number_value']['expose']['label'] = 'Reservation number';
  $handler->display->display_options['filters']['field_reservation_number_value']['expose']['operator'] = 'field_reservation_number_value_op';
  $handler->display->display_options['filters']['field_reservation_number_value']['expose']['identifier'] = 'number';
  $handler->display->display_options['filters']['field_reservation_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_reservation_number_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_reservation_number_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_reservation_number_value']['expose']['autocomplete_field'] = 'field_reservation_number';
  $handler->display->display_options['filters']['field_reservation_number_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_reservation_number_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_reservation_number_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Reservation: Status (field_reservation_status) */
  $handler->display->display_options['filters']['field_reservation_status_value']['id'] = 'field_reservation_status_value';
  $handler->display->display_options['filters']['field_reservation_status_value']['table'] = 'field_data_field_reservation_status';
  $handler->display->display_options['filters']['field_reservation_status_value']['field'] = 'field_reservation_status_value';
  $handler->display->display_options['filters']['field_reservation_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_reservation_status_value']['expose']['operator_id'] = 'field_reservation_status_value_op';
  $handler->display->display_options['filters']['field_reservation_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_reservation_status_value']['expose']['operator'] = 'field_reservation_status_value_op';
  $handler->display->display_options['filters']['field_reservation_status_value']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_reservation_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'administration_reservations');
  $handler->display->display_options['path'] = 'admin/reservations';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Reservations';
  $handler->display->display_options['menu']['weight'] = '-8';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Reservations';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Calendar */
  $handler = $view->new_display('page', 'Calendar', 'administration_reservations_calendar');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Calendar';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['pager_position'] = 'both';
  $handler->display->display_options['pager']['options']['skip_empty_pages'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['style_options']['multiday_hidden'] = array(
    'field_reservation_name' => 'field_reservation_name',
    'field_reservation_party_size' => 'field_reservation_party_size',
    'field_reservation_phone' => 'field_reservation_phone',
    'field_reservation_email' => 'field_reservation_email',
    'field_reservation_status' => 'field_reservation_status',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_reservation_number' => 'field_reservation_number',
    'field_reservation_name' => 'field_reservation_name',
    'field_reservation_party_size' => 'field_reservation_party_size',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Reservation: Party size */
  $handler->display->display_options['fields']['field_reservation_party_size']['id'] = 'field_reservation_party_size';
  $handler->display->display_options['fields']['field_reservation_party_size']['table'] = 'field_data_field_reservation_party_size';
  $handler->display->display_options['fields']['field_reservation_party_size']['field'] = 'field_reservation_party_size';
  $handler->display->display_options['fields']['field_reservation_party_size']['label'] = '';
  $handler->display->display_options['fields']['field_reservation_party_size']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_reservation_party_size']['alter']['text'] = '([field_reservation_party_size])';
  $handler->display->display_options['fields']['field_reservation_party_size']['element_type'] = 'h6';
  $handler->display->display_options['fields']['field_reservation_party_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_party_size']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_party_size']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_party_size']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_reservation_party_size']['field_api_classes'] = TRUE;
  /* Field: Reservation: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_reservation';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Reservation: Reservation number */
  $handler->display->display_options['fields']['field_reservation_number']['id'] = 'field_reservation_number';
  $handler->display->display_options['fields']['field_reservation_number']['table'] = 'field_data_field_reservation_number';
  $handler->display->display_options['fields']['field_reservation_number']['field'] = 'field_reservation_number';
  $handler->display->display_options['fields']['field_reservation_number']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_reservation_number']['label'] = '';
  $handler->display->display_options['fields']['field_reservation_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_reservation_number']['alter']['text'] = '<a href="/admin/reservations/[id]">#[field_reservation_number]</a>';
  $handler->display->display_options['fields']['field_reservation_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_number']['field_api_classes'] = TRUE;
  /* Field: Reservation: Name */
  $handler->display->display_options['fields']['field_reservation_name']['id'] = 'field_reservation_name';
  $handler->display->display_options['fields']['field_reservation_name']['table'] = 'field_data_field_reservation_name';
  $handler->display->display_options['fields']['field_reservation_name']['field'] = 'field_reservation_name';
  $handler->display->display_options['fields']['field_reservation_name']['label'] = '';
  $handler->display->display_options['fields']['field_reservation_name']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_reservation_name']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_reservation_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_name']['field_api_classes'] = TRUE;
  /* Field: Reservation: Status */
  $handler->display->display_options['fields']['field_reservation_status']['id'] = 'field_reservation_status';
  $handler->display->display_options['fields']['field_reservation_status']['table'] = 'field_data_field_reservation_status';
  $handler->display->display_options['fields']['field_reservation_status']['field'] = 'field_reservation_status';
  $handler->display->display_options['fields']['field_reservation_status']['label'] = '';
  $handler->display->display_options['fields']['field_reservation_status']['element_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_status']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_reservation_status']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reservation_status']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['fields']['field_reservation_status']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (eck_reservation) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'eck_reservation';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity_reset'] = 0;
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_reservation_date.field_reservation_date_value' => 'field_data_field_reservation_date.field_reservation_date_value',
  );
  $handler->display->display_options['path'] = 'admin/reservations/calendar';
  $handler->display->display_options['menu']['title'] = 'Calendar';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['administration_reservations'] = $view;

  return $export;
}
