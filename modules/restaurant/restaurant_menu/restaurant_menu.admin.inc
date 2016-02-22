<?php

/**
 * @file
 * Admin callbacks for the restaurant_menu module.
 */

/**
 * Page callback for admin/menus/manage.
 */
function restaurant_menu_manage_menus_admin() {
  return menu_execute_active_handler('admin/menus');
}

/**
 * Page callback for admin/menus/add.
 */
function restaurant_menu_add_menu_admin() {
  // Return content for node/add/menu path.
  return menu_execute_active_handler('node/add/menu');
}

/**
 * Page callback for admin/menus/sort.
 */
function restaurant_menu_sort_menus_admin() {
  return menu_execute_active_handler('admin/structure/entityqueue/list/menus_page/subqueues/1/edit');
}

/**
 * Page callback for admin/menus/categories.
 */
function restaurant_menu_menu_categories_admin() {
  // Return content for admin/structure/taxonomy/menu_categories.
  return menu_execute_active_handler('admin/structure/taxonomy/menu_categories');
}

/**
 * Page callback for admin/menus/categories/add.
 */
function restaurant_menu_add_menu_category_admin() {
  // Return content for admin/structure/taxonomy/menu_categories/add path.
  module_load_include('inc', 'taxonomy', 'taxonomy.admin');
  $vocabulary = taxonomy_vocabulary_machine_name_load('menu_categories');
  $edit = array();
  return drupal_get_form('taxonomy_form_term',$edit , $vocabulary);
}

/**
 * Page callback for admin/menus/nutrition-types.
 */
function restaurant_menu_nutrition_types_admin() {
  // Return content for admin/structure/taxonomy/types.
  return menu_execute_active_handler('admin/structure/taxonomy/nutrition_types');
}

/**
 * Page callback for admin/menus/nutrition_types/add.
 */
function restaurant_menu_add_nutrition_type_admin() {
  // Return content for admin/structure/taxonomy/types/add path.
  module_load_include('inc', 'taxonomy', 'taxonomy.admin');
  $vocabulary = taxonomy_vocabulary_machine_name_load('nutrition_types');
  $edit = array();
  return drupal_get_form('taxonomy_form_term',$edit , $vocabulary);
}
