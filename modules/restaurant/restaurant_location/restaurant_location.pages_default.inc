<?php
/**
 * @file
 * restaurant_location.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function restaurant_location_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__location';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Location',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'location',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'location' => 'location',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'layout_location_node';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'slideshow' => NULL,
      'top' => NULL,
      'contentmain' => NULL,
      'bottom' => NULL,
      'region_a' => NULL,
      'region_b' => NULL,
      'region_c' => NULL,
      'region_d' => NULL,
      'region_e' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '64472a8c-66a5-4c1f-85ee-79b9e2a1822f';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a35c4fd9-e674-4288-acc1-560b08d15e0f';
  $pane->panel = 'region_a';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_location_address';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'addressfield_staticmap',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'zoom_level' => '14',
      'map_size' => '1200x300',
      'map_style' => 'roadmap',
      'advanced_settings_index' => '0',
    ),
    'context' => array(),
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a35c4fd9-e674-4288-acc1-560b08d15e0f';
  $display->content['new-a35c4fd9-e674-4288-acc1-560b08d15e0f'] = $pane;
  $display->panels['region_a'][0] = 'new-a35c4fd9-e674-4288-acc1-560b08d15e0f';
  $pane = new stdClass();
  $pane->pid = 'new-228f77cd-43f4-45be-bcfd-b6489ddb0db3';
  $pane->panel = 'region_b';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:b4caebe6-f16a-4773-a3ed-57023be13e0c';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'bundle' => 'text',
      'language' => 'und',
      'is_new' => TRUE,
      'title' => '',
      'link' => 0,
      'path' => '',
      'reusable' => 1,
      'admin_title' => 'Panes',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'vid' => '17',
      'current_vid' => '',
      'revision' => 1,
      'fpid' => '12',
      'field_basic_text_text' => array(
        'und' => array(
          0 => array(
            'value' => '<h2 style="text-align:center" class="clear-margin--bottom"><a href="/locations"><i class="fa fa-long-arrow-left">&nbsp;</i> See all Locations</a></h2>',
            'format' => 'panopoly_html_text',
          ),
        ),
      ),
      'log' => '',
      'created' => 1442607488,
      'timestamp' => 1442607488,
      'changed' => 1442607488,
      'uuid' => 'b4caebe6-f16a-4773-a3ed-57023be13e0c',
      'vuuid' => 'e4b592b0-e0ad-45b8-9340-f25bd5428d7d',
      'uid' => '1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '228f77cd-43f4-45be-bcfd-b6489ddb0db3';
  $display->content['new-228f77cd-43f4-45be-bcfd-b6489ddb0db3'] = $pane;
  $display->panels['region_b'][0] = 'new-228f77cd-43f4-45be-bcfd-b6489ddb0db3';
  $pane = new stdClass();
  $pane->pid = 'new-9580de24-5645-46c7-aaab-905277656790';
  $pane->panel = 'region_c';
  $pane->type = 'entity_view';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9580de24-5645-46c7-aaab-905277656790';
  $display->content['new-9580de24-5645-46c7-aaab-905277656790'] = $pane;
  $display->panels['region_c'][0] = 'new-9580de24-5645-46c7-aaab-905277656790';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__location'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function restaurant_location_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'locations';
  $page->task = 'page';
  $page->admin_title = 'Locations';
  $page->admin_description = '';
  $page->path = 'locations';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Locations',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_locations_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'locations';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'layout_locations';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'region_a' => NULL,
      'region_b' => NULL,
      'region_c' => NULL,
      'region_d' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Locations';
  $display->uuid = 'e7a4cb36-b630-4edd-95d6-d4d3b745c67b';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7180f44c-5810-47c9-b9b6-bcc429bfc07d';
  $pane->panel = 'region_a';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:6f070932-b373-4aab-80c3-d84082324b24';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'bundle' => 'slideshow',
      'language' => 'und',
      'is_new' => TRUE,
      'title' => '',
      'link' => 0,
      'path' => '',
      'reusable' => 1,
      'admin_title' => 'Locations Slideshow',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'vid' => '11',
      'current_vid' => '',
      'field_slideshow_slides' => array(
        'und' => array(
          0 => array(
            'value' => '6',
            'revision_id' => '6',
          ),
        ),
      ),
      'revision' => 1,
      'fpid' => '11',
      'log' => '',
      'created' => 1442606839,
      'timestamp' => 1442606839,
      'changed' => 1442606839,
      'uuid' => '6f070932-b373-4aab-80c3-d84082324b24',
      'vuuid' => 'f46dd12b-1569-4f72-8e9b-496c0b3730e4',
      'uid' => '1',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7180f44c-5810-47c9-b9b6-bcc429bfc07d';
  $display->content['new-7180f44c-5810-47c9-b9b6-bcc429bfc07d'] = $pane;
  $display->panels['region_a'][0] = 'new-7180f44c-5810-47c9-b9b6-bcc429bfc07d';
  $pane = new stdClass();
  $pane->pid = 'new-e480f061-e69a-4a9b-a24e-3e9e99be4362';
  $pane->panel = 'region_c';
  $pane->type = 'views_panes';
  $pane->subtype = 'locations-locations';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'rendered_entity',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e480f061-e69a-4a9b-a24e-3e9e99be4362';
  $display->content['new-e480f061-e69a-4a9b-a24e-3e9e99be4362'] = $pane;
  $display->panels['region_c'][0] = 'new-e480f061-e69a-4a9b-a24e-3e9e99be4362';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['locations'] = $page;

  return $pages;

}
