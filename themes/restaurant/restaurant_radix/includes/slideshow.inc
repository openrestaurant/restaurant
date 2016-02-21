<?php

/**
 * Implements template_preprocess_field_slideshow().
 */
function restaurant_radix_preprocess_field_slideshow(&$variables) {
  if (!empty($variables['entity']->bundle) && $variables['entity']->bundle == 'slideshow') {
    // Add a custom template.
    $variables['theme_hook_suggestions'][] = 'field_slideshow__slideshow';

    // Create a full image url to be used as background.
    foreach ($variables['items'] as $index => $item) {
      $variables['items'][$index]['image_url'] = file_create_url($item['uri']);
    }

    // Fix controls and pager positions.
    $variables['controls_position'] = !empty($variables['controls_position']) ? $variables['controls_position'] : "after";
    $variables['pager_position'] = !empty($variables['pager_position']) ? $variables['pager_position'] : "after";
  }
}