<?php
/**
 * @file
 * Theme and preprocess functions for field.
 */

/**
 * Implements template_preprocess_field().
 */
function restaurant_radix_preprocess_field(&$variables) {
  $field = $variables['element'];

  // Allow field type preprocess callbacks.
  // Example restaurant_radix_preprocess_field_menu_price.
  $function = __FUNCTION__ . '_' . $field['#field_name'];
  if (function_exists($function)) {
    $function($variables);
  }
}
