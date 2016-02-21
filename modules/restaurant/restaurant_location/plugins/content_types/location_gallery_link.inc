<?php

/**
* Plugin definition
*/
$plugin = array(
  'title' => t('Location gallery link'),
  'single' => TRUE,
  'category' => array(t('Locations')),
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Render Callback
 */
function restaurant_location_location_gallery_link_content_type_render($subtype, $conf, $panel_args, $context) {
  if (!empty($context) && empty($context->data)) {
    return;
  }

  $node = isset($context->data) ? clone($context->data) : NULL;
  $block = new stdClass();
  $block->module = 'restaurant_location';
  $block->delta  = $node->nid;

  $node_path_alias = drupal_get_path_alias('node/' . $node->nid);

  $view = node_view($node, 'full');

  $block->title = isset($conf['title']) ? $conf['title'] : '';
  $block->content = theme('radix_modal', array(
    'header' => t('Photo gallery for @title', array('@title' => $node->title)),
    'content' => $view,
    'id' => 'location-gallery-modal-' . $node->nid,
    'trigger_button' => array(
      'text' => t('View photo gallery'),
      'attributes' => array(
        'class' => array('btn', 'btn-default', 'btn-lg'),
      ),
    ),
    'buttons' => array(
      'close' => array(
        'text' => t('Close'),
        'attributes' => array(
          'data-dismiss' => 'modal',
          'class' => array('btn', 'btn-primary'),
        ),
      ),
    ),
  ));
  return $block;
}
