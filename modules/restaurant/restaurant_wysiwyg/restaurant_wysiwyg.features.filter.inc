<?php
/**
 * @file
 * restaurant_wysiwyg.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function restaurant_wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: Unfiltered HTML.
  $formats['unfiltered_html'] = array(
    'format' => 'unfiltered_html',
    'name' => 'Unfiltered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
