<?php
/**
 * @file
 * restaurant_menu.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function restaurant_menu_taxonomy_default_vocabularies() {
  return array(
    'menu_categories' => array(
      'name' => 'Menu Categories',
      'machine_name' => 'menu_categories',
      'description' => 'Use this taxonomy to organize menus',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'nutrition_types' => array(
      'name' => 'Nutrition types',
      'machine_name' => 'nutrition_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
