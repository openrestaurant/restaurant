<?php
/**
 * @file
 * restaurant_menu.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function restaurant_menu_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fields|node|menu|form';
  $field_group->group_name = 'group_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'menu';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fields',
    'weight' => '2',
    'children' => array(
      0 => 'group_menu',
      1 => 'group_images',
      2 => 'group_locations',
      3 => 'group_nutrition',
      4 => 'group_variants',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_fields|node|menu|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fields|taxonomy_term|menu_categories|form';
  $field_group->group_name = 'group_fields';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'menu_categories';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fields',
    'weight' => '0',
    'children' => array(
      0 => 'group_term',
      1 => 'group_images',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-fields field-group-htabs',
      ),
    ),
  );
  $export['group_fields|taxonomy_term|menu_categories|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fields|taxonomy_term|nutrition_types|form';
  $field_group->group_name = 'group_fields';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'nutrition_types';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fields',
    'weight' => '0',
    'children' => array(
      0 => 'group_type',
      1 => 'group_images',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-fields field-group-htabs',
      ),
    ),
  );
  $export['group_fields|taxonomy_term|nutrition_types|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_images|node|menu|form';
  $field_group->group_name = 'group_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'menu';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_fields';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '7',
    'children' => array(
      0 => 'field_menu_images',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_images|node|menu|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_images|taxonomy_term|menu_categories|form';
  $field_group->group_name = 'group_images';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'menu_categories';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_fields';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '12',
    'children' => array(
      0 => 'field_menu_categories_image',
      1 => 'field_menu_categories_icon',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-images field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_images|taxonomy_term|menu_categories|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_images|taxonomy_term|nutrition_types|form';
  $field_group->group_name = 'group_images';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'nutrition_types';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_fields';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '9',
    'children' => array(
      0 => 'field_nutrition_types_icon',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-images field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_images|taxonomy_term|nutrition_types|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_menu|node|menu|form';
  $field_group->group_name = 'group_menu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'menu';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_fields';
  $field_group->data = array(
    'label' => 'Menu',
    'weight' => '6',
    'children' => array(
      0 => 'body',
      1 => 'field_menu_categories',
      2 => 'field_menu_featured',
      3 => 'field_menu_teaser_text',
      4 => 'field_menu_one_liner',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_menu|node|menu|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nutrition|node|menu|form';
  $field_group->group_name = 'group_nutrition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'menu';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_fields';
  $field_group->data = array(
    'label' => 'Nutrition',
    'weight' => '10',
    'children' => array(
      0 => 'field_menu_nutrition_other',
      1 => 'field_menu_nutrition_types',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nutrition field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_nutrition|node|menu|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_term|taxonomy_term|menu_categories|form';
  $field_group->group_name = 'group_term';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'menu_categories';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_fields';
  $field_group->data = array(
    'label' => 'Category',
    'weight' => '11',
    'children' => array(
      0 => 'name',
      1 => 'description',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Category',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-term field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_term|taxonomy_term|menu_categories|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_types|node|menu|form';
  $field_group->group_name = 'group_types';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'menu';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_fields';
  $field_group->data = array(
    'label' => 'Types',
    'weight' => '8',
    'children' => array(
      0 => 'field_menu_types',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_types|node|menu|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_variants|node|menu|form';
  $field_group->group_name = 'group_variants';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'menu';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_fields';
  $field_group->data = array(
    'label' => 'Variants',
    'weight' => '8',
    'children' => array(
      0 => 'field_menu_variants',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-variants field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_variants|node|menu|form'] = $field_group;

  return $export;
}
