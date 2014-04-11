<?php
/**
 * @file
 * restaurant_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function restaurant_base_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function restaurant_base_image_default_styles() {
  $styles = array();

  // Exported image style: restaurant_large.
  $styles['restaurant_large'] = array(
    'name' => 'restaurant_large',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 620,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'restaurant_large',
  );

  return $styles;
}
