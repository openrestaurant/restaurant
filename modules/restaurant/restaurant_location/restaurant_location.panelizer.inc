<?php
/**
 * @file
 * restaurant_location.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function restaurant_location_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:location:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'location';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array(
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Locations
%node:title',
    'panels_breadcrumbs_paths' => 'locations',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'radix_burr';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '83ec9034-4232-4674-b51a-ecdc99cad632';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b09b5173-1c64-48a2-87f9-4b243081a976';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b09b5173-1c64-48a2-87f9-4b243081a976';
    $display->content['new-b09b5173-1c64-48a2-87f9-4b243081a976'] = $pane;
    $display->panels['contentmain'][0] = 'new-b09b5173-1c64-48a2-87f9-4b243081a976';
    $pane = new stdClass();
    $pane->pid = 'new-ead7bcb0-383c-47db-928d-a75d7e057940';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_location_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'addressfield_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_handlers' => array(
          0 => 'address',
        ),
        'use_widget_handlers' => 1,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ead7bcb0-383c-47db-928d-a75d7e057940';
    $display->content['new-ead7bcb0-383c-47db-928d-a75d7e057940'] = $pane;
    $display->panels['contentmain'][1] = 'new-ead7bcb0-383c-47db-928d-a75d7e057940';
    $pane = new stdClass();
    $pane->pid = 'new-913daed7-0992-4291-ba03-10590f24e6ec';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_location_contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '913daed7-0992-4291-ba03-10590f24e6ec';
    $display->content['new-913daed7-0992-4291-ba03-10590f24e6ec'] = $pane;
    $display->panels['contentmain'][2] = 'new-913daed7-0992-4291-ba03-10590f24e6ec';
    $pane = new stdClass();
    $pane->pid = 'new-1b7b6bd3-5d1f-439d-88de-7c51f9751253';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_location_opening_hours';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '1b7b6bd3-5d1f-439d-88de-7c51f9751253';
    $display->content['new-1b7b6bd3-5d1f-439d-88de-7c51f9751253'] = $pane;
    $display->panels['contentmain'][3] = 'new-1b7b6bd3-5d1f-439d-88de-7c51f9751253';
    $pane = new stdClass();
    $pane->pid = 'new-62ac4486-1895-41ec-9998-1a0d3accd21d';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'menus_by_location-all_menus_by_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'override_title' => '',
      'override_title_text' => '',
      'widget_title' => 'Menus',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '62ac4486-1895-41ec-9998-1a0d3accd21d';
    $display->content['new-62ac4486-1895-41ec-9998-1a0d3accd21d'] = $pane;
    $display->panels['contentmain'][4] = 'new-62ac4486-1895-41ec-9998-1a0d3accd21d';
    $pane = new stdClass();
    $pane->pid = 'new-c5234a93-c2f1-43c8-84c7-3413a059f29e';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_location_images';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => '1',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'image_style' => 'location_gallery_thumbnail',
        'image_link' => '',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c5234a93-c2f1-43c8-84c7-3413a059f29e';
    $display->content['new-c5234a93-c2f1-43c8-84c7-3413a059f29e'] = $pane;
    $display->panels['sidebar'][0] = 'new-c5234a93-c2f1-43c8-84c7-3413a059f29e';
    $pane = new stdClass();
    $pane->pid = 'new-6eb05105-8d0d-4c9e-b95a-529995c5912d';
    $pane->panel = 'sidebar';
    $pane->type = 'location_gallery_link';
    $pane->subtype = 'location_gallery_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6eb05105-8d0d-4c9e-b95a-529995c5912d';
    $display->content['new-6eb05105-8d0d-4c9e-b95a-529995c5912d'] = $pane;
    $display->panels['sidebar'][1] = 'new-6eb05105-8d0d-4c9e-b95a-529995c5912d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b09b5173-1c64-48a2-87f9-4b243081a976';
  $panelizer->display = $display;
  $export['node:location:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:location:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'location';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'radix_bartlett';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '1b4db924-dadf-400a-9659-feedbe0ce102';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f0dee931-aa19-4235-aedd-6814f02fecc8';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_summary_or_trimmed',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'trim_length' => 600,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f0dee931-aa19-4235-aedd-6814f02fecc8';
    $display->content['new-f0dee931-aa19-4235-aedd-6814f02fecc8'] = $pane;
    $display->panels['contentcolumn1'][0] = 'new-f0dee931-aa19-4235-aedd-6814f02fecc8';
    $pane = new stdClass();
    $pane->pid = 'new-17405e16-5db2-4e8b-95a8-330f15082185';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_location_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'addressfield_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'use_widget_handlers' => 1,
        'format_handlers' => array(
          'address' => 'address',
        ),
      ),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '17405e16-5db2-4e8b-95a8-330f15082185';
    $display->content['new-17405e16-5db2-4e8b-95a8-330f15082185'] = $pane;
    $display->panels['contentcolumn1'][1] = 'new-17405e16-5db2-4e8b-95a8-330f15082185';
    $pane = new stdClass();
    $pane->pid = 'new-55cff2d8-7ba6-42cc-ba1e-bccde4c3f4cf';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'node_read_more';
    $pane->subtype = 'node_read_more';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'read_more_text' => 'Read more',
      'read_more_button' => 1,
      'read_more_button_style' => 'btn-info',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '55cff2d8-7ba6-42cc-ba1e-bccde4c3f4cf';
    $display->content['new-55cff2d8-7ba6-42cc-ba1e-bccde4c3f4cf'] = $pane;
    $display->panels['contentcolumn1'][2] = 'new-55cff2d8-7ba6-42cc-ba1e-bccde4c3f4cf';
    $pane = new stdClass();
    $pane->pid = 'new-e676c41d-e907-49d4-81e4-9d119f9464aa';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_location_contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e676c41d-e907-49d4-81e4-9d119f9464aa';
    $display->content['new-e676c41d-e907-49d4-81e4-9d119f9464aa'] = $pane;
    $display->panels['contentcolumn2'][0] = 'new-e676c41d-e907-49d4-81e4-9d119f9464aa';
    $pane = new stdClass();
    $pane->pid = 'new-01b8dc20-142d-4bab-bbce-1412754d7fda';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_location_opening_hours';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '01b8dc20-142d-4bab-bbce-1412754d7fda';
    $display->content['new-01b8dc20-142d-4bab-bbce-1412754d7fda'] = $pane;
    $display->panels['contentcolumn2'][1] = 'new-01b8dc20-142d-4bab-bbce-1412754d7fda';
    $pane = new stdClass();
    $pane->pid = 'new-34852f34-d124-48a2-b967-e9fbdccd0de3';
    $pane->panel = 'contentheader';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'h2',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pull-left',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '34852f34-d124-48a2-b967-e9fbdccd0de3';
    $display->content['new-34852f34-d124-48a2-b967-e9fbdccd0de3'] = $pane;
    $display->panels['contentheader'][0] = 'new-34852f34-d124-48a2-b967-e9fbdccd0de3';
    $pane = new stdClass();
    $pane->pid = 'new-e62b9903-08dc-49d8-92f9-008a560d5a2f';
    $pane->panel = 'contentheader';
    $pane->type = 'location_menu_link';
    $pane->subtype = 'location_menu_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pull-right',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e62b9903-08dc-49d8-92f9-008a560d5a2f';
    $display->content['new-e62b9903-08dc-49d8-92f9-008a560d5a2f'] = $pane;
    $display->panels['contentheader'][1] = 'new-e62b9903-08dc-49d8-92f9-008a560d5a2f';
    $pane = new stdClass();
    $pane->pid = 'new-dc5116bb-2869-40c9-83e4-88f8abfce978';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_location_images';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => '1',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'slideshow_image_style' => 'panopoly_image_spotlight',
        'slideshow_link' => '',
        'slideshow_caption' => '',
        'slideshow_caption_link' => '',
        'slideshow_fx' => 'fade',
        'slideshow_speed' => '1000',
        'slideshow_timeout' => '4000',
        'slideshow_order' => '',
        'slideshow_controls' => 1,
        'slideshow_controls_pause' => 0,
        'slideshow_controls_position' => 'after',
        'slideshow_pause' => 0,
        'slideshow_start_on_hover' => 0,
        'slideshow_pager' => 'number',
        'slideshow_pager_position' => 'after',
        'slideshow_pager_image_style' => '',
        'slideshow_carousel_image_style' => '',
        'slideshow_carousel_visible' => '1',
        'slideshow_carousel_scroll' => '1',
        'slideshow_carousel_speed' => '500',
        'slideshow_carousel_vertical' => 0,
        'slideshow_carousel_circular' => 0,
        'slideshow_carousel_follow' => 0,
        'image_style' => 'location_gallery_thumbnail',
        'image_link' => '',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dc5116bb-2869-40c9-83e4-88f8abfce978';
    $display->content['new-dc5116bb-2869-40c9-83e4-88f8abfce978'] = $pane;
    $display->panels['sidebar'][0] = 'new-dc5116bb-2869-40c9-83e4-88f8abfce978';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:location:default:teaser'] = $panelizer;

  return $export;
}
