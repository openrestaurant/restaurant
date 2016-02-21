<?php

/**
 * @file
 * Custom theme hook.
 */

/**
 * Implements hook_theme().
 */
function restaurant_seven_theme($existing, $type, $theme, $path) {
  // Node form.
  $items['node_form'] = array(
    'render element' => 'form',
    'template' => 'node-form',
    'path' => drupal_get_path('theme', 'restaurant_seven') . '/templates/form',
  );

  // Taxonomy term form.
  $items['taxonomy_form_term'] = array(
    'render element' => 'form',
    'template' => 'taxonomy-form-term',
    'path' => drupal_get_path('theme', 'restaurant_seven') . '/templates/form',
  );

  return $items;
}

/**
 * Implements hook_element_info_alter().
 */
function restaurant_seven_element_info_alter(&$type) {
  // Add a custom pre_render callback.
  $type['media']['#pre_render'][] = 'restaurant_seven_media_pre_render';
}