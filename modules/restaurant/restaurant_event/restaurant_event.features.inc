<?php
/**
 * @file
 * restaurant_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function restaurant_event_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "pm_existing_pages" && $api == "pm_existing_pages") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function restaurant_event_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function restaurant_event_image_default_styles() {
  $styles = array();

  // Exported image style: event_image__featured.
  $styles['event_image__featured'] = array(
    'label' => 'Event image (featured)',
    'effects' => array(
      20 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 215,
          'height' => 320,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: event_image__full.
  $styles['event_image__full'] = array(
    'label' => 'Event image (full)',
    'effects' => array(
      25 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 375,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: event_image__teaser.
  $styles['event_image__teaser'] = array(
    'label' => 'Event image (teaser)',
    'effects' => array(
      23 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 295,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function restaurant_event_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Use this content type to create an event.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
