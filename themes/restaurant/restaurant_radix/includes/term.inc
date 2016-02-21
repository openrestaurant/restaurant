<?php
/**
 * @file
 * Theme and preprocess functions for taxonomy terms.
 */

/**
 * Implements template_preprocess_taxonomy_term().
 */
function restaurant_radix_preprocess_taxonomy_term(&$variables) {
  global $theme;
  $term = $variables['term'];

  // Add BEF classes.
  $variables['classes_array'] = array();
  $variables['classes_array'][] = 'term';
  $variables['classes_array'][] = drupal_html_class('term--' . $variables['term']->vocabulary_machine_name);
  $variables['classes_array'][] = drupal_html_class('term--' . $variables['term']->vocabulary_machine_name . '--view-mode--' . $variables['view_mode']);

  // Allow node type preprocess callbacks.
  // Example restaurant_radix_preprocess_node_menu.
  $function = $theme . '_preprocess_taxonomy_term_' . $variables['term']->vocabulary_machine_name;
  if (function_exists($function)) {
    $function($variables);
  }
}
