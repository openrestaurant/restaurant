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
  $handler->weight = -30;
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
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '64472a8c-66a5-4c1f-85ee-79b9e2a1822f';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4d5e9dda-a1ea-431b-a4a7-22f7bf1a63e3';
  $pane->panel = 'contentmain';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 0,
    'no_extras' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 1,
    'leave_node_title' => 1,
    'build_mode' => 'full',
    'context' => array(),
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4d5e9dda-a1ea-431b-a4a7-22f7bf1a63e3';
  $display->content['new-4d5e9dda-a1ea-431b-a4a7-22f7bf1a63e3'] = $pane;
  $display->panels['contentmain'][0] = 'new-4d5e9dda-a1ea-431b-a4a7-22f7bf1a63e3';
  $pane = new stdClass();
  $pane->pid = 'new-b2cc9fb6-8de2-431a-8513-aca3757616c5';
  $pane->panel = 'top';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'bundle' => 'text',
      'language' => '',
      'is_new' => TRUE,
      'title' => '',
      'link' => 0,
      'path' => '',
      'reusable' => 1,
      'admin_title' => 'Back to locations',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'vid' => '19',
      'current_vid' => '',
      'revision' => 1,
      'fpid' => '7',
      'field_basic_text_text' => array(
        'und' => array(
          0 => array(
            'value' => '<p><a href="/locations"><i class="fa fa-long-arrow-left">&nbsp;</i> Back to locations</a></p>',
            'format' => 'panopoly_html_text',
          ),
        ),
      ),
      'log' => '',
      'created' => 1436908847,
      'timestamp' => 1436908847,
      'changed' => 1436908847,
      'uuid' => '',
      'uid' => '1',
      'vuuid' => '',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b2cc9fb6-8de2-431a-8513-aca3757616c5';
  $display->content['new-b2cc9fb6-8de2-431a-8513-aca3757616c5'] = $pane;
  $display->panels['top'][0] = 'new-b2cc9fb6-8de2-431a-8513-aca3757616c5';
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
    ),
  );
  $display->cache = array();
  $display->title = 'Locations';
  $display->uuid = 'e7a4cb36-b630-4edd-95d6-d4d3b745c67b';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-320ec830-c48f-4c82-bbc5-8da98bd4cda6';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'locations-locations';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'nodes',
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
  $pane->uuid = '320ec830-c48f-4c82-bbc5-8da98bd4cda6';
  $display->content['new-320ec830-c48f-4c82-bbc5-8da98bd4cda6'] = $pane;
  $display->panels['contentmain'][0] = 'new-320ec830-c48f-4c82-bbc5-8da98bd4cda6';
  $pane = new stdClass();
  $pane->pid = 'new-13f61cc5-b7d0-4aba-98ea-07a6124781a9';
  $pane->panel = 'slideshow';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:9';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'timestamp' => 1436909749,
      'uid' => '1',
      'title' => '',
      'log' => '',
      'vuuid' => '',
      'fpid' => '9',
      'bundle' => 'slideshow',
      'link' => 0,
      'path' => '',
      'reusable' => 1,
      'admin_title' => 'Locations Slideshow',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'view_access' => NULL,
      'edit_access' => NULL,
      'created' => '1436909723',
      'changed' => 1436909749,
      'uuid' => '',
      'language' => '',
      'current_vid' => '24',
      'field_slideshow_slides' => array(
        'und' => array(
          0 => array(
            'value' => '14',
          ),
        ),
      ),
      'revision' => 1,
      'is_new' => FALSE,
      'original' => (object) array(
        'vid' => '24',
        'timestamp' => '1436909723',
        'uid' => '1',
        'title' => '',
        'log' => '',
        'vuuid' => '',
        'fpid' => '9',
        'bundle' => 'slideshow',
        'link' => '0',
        'path' => '',
        'reusable' => '1',
        'admin_title' => 'Locations Slideshow',
        'admin_description' => '',
        'category' => 'Reusable Content',
        'view_access' => NULL,
        'edit_access' => NULL,
        'created' => '1436909723',
        'changed' => '1436909723',
        'uuid' => '',
        'language' => '',
        'current_vid' => '24',
        'field_slideshow_slides' => array(
          'und' => array(
            0 => array(
              'value' => '14',
            ),
          ),
        ),
      ),
      'old_vid' => '24',
      'vid' => '25',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '13f61cc5-b7d0-4aba-98ea-07a6124781a9';
  $display->content['new-13f61cc5-b7d0-4aba-98ea-07a6124781a9'] = $pane;
  $display->panels['slideshow'][0] = 'new-13f61cc5-b7d0-4aba-98ea-07a6124781a9';
  $pane = new stdClass();
  $pane->pid = 'new-55d21229-d2ab-47b7-94ed-025c822bb78e';
  $pane->panel = 'top';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'bundle' => 'text',
      'language' => '',
      'is_new' => TRUE,
      'title' => '',
      'link' => 0,
      'path' => '',
      'reusable' => 1,
      'admin_title' => 'Locations top text',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'vid' => '18',
      'current_vid' => '',
      'revision' => 1,
      'fpid' => '6',
      'field_basic_text_text' => array(
        'und' => array(
          0 => array(
            'value' => '<h2>Select a location</h2>',
            'format' => 'panopoly_wysiwyg_text',
          ),
        ),
      ),
      'log' => '',
      'created' => 1436906103,
      'timestamp' => 1436906103,
      'changed' => 1436906103,
      'uuid' => '',
      'uid' => '1',
      'vuuid' => '',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '55d21229-d2ab-47b7-94ed-025c822bb78e';
  $display->content['new-55d21229-d2ab-47b7-94ed-025c822bb78e'] = $pane;
  $display->panels['top'][0] = 'new-55d21229-d2ab-47b7-94ed-025c822bb78e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-320ec830-c48f-4c82-bbc5-8da98bd4cda6';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['locations'] = $page;

  return $pages;

}
