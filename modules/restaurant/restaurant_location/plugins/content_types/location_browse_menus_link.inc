<?php

/**
* Plugin definition
*/
$plugin = array(
  'title' => t('Browse menus by location link'),
  'single' => TRUE,
  'category' => array(t('Locations')),
);

/**
 * Render Callback
 */
function restaurant_location_location_browse_menus_link_content_type_render($subtype, $conf, $panel_args) {
  $block = new stdClass();
  $block->module = 'restaurant_location';

  $block->title = isset($conf['title']) ? $conf['title'] : '';
  $block->content = l(t('Browse menus by location'), 'locations', array(
    'attributes' => array(
      'class' => array('btn', 'btn-lg', 'btn-primary', 'btn-block'),
    ),
  ));

  return $block;
}
