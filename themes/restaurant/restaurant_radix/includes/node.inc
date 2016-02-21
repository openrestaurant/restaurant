<?php
/**
 * @file
 * Theme and preprocess functions for nodes
 */

/**
 * Implements template_preprocess_node().
 */
function restaurant_radix_preprocess_node(&$variables) {
  global $theme;
  $node = $variables['node'];

  // Add BEF classes.
  $variables['classes_array'] = array();
  $variables['classes_array'][] = 'node';
  $variables['classes_array'][] = drupal_html_class('node--' . $node->type);
  $variables['classes_array'][] = drupal_html_class('node--' . $node->type . '--view-mode--' . $variables['view_mode']);

  if (isset($variables['title_suffix']['contextual_links'])) {
    $variables['classes_array'][] = 'contextual-links-region';
  }

  // Hide all links.
  $variables['content']['links']['#access'] = FALSE;

  // Move title_suffix to an extra element.
  $variables['extra'] = $variables['title_suffix'];
  $variables['title_suffix'] = '';

  // Allow node type preprocess callbacks.
  // Example restaurant_radix_preprocess_node_menu.
  $function = $theme . '_preprocess_node_' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables);
  }
}
