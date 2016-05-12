<?php
/**
 * @file
 * Theme and preprocess functions for field.
 */

/**
 * Implements template_preprocess_field().
 */
function restaurant_radix_preprocess_field(&$variables) {
  global $theme;
  $field = $variables['element'];

  // Allow field type preprocess callbacks.
  // Example restaurant_radix_preprocess__field_menu_price.
  $function = $theme . '_preprocess_field_' . $field['#field_name'];
  if (function_exists($function)) {
    $function($variables);
  }
}
