<?php

/**
* Plugin definition
*/
$plugin = array(
  'title' => t('Location menu link'),
  'single' => TRUE,
  'category' => array(t('Locations')),
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Render Callback
 */
function restaurant_location_location_menu_link_content_type_render($subtype, $conf, $panel_args, $context) {
  if (!empty($context) && empty($context->data)) {
    return;
  }

  $node = isset($context->data) ? clone($context->data) : NULL;
  $block = new stdClass();
  $block->module = 'restaurant_location';
  $block->delta  = $node->nid;

  $block->title = isset($conf['title']) ? $conf['title'] : '';
  $block->content = l(t('View Menu'), 'node/' . $node->nid, array(
    'fragment' => 'menu',
    'attributes' => array(
      'class' => array('btn', 'btn-success'),
    ),
  ));

  return $block;
}
