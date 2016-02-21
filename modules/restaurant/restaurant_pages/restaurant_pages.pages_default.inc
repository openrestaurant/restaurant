<?php
/**
 * @file
 * restaurant_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function restaurant_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Home',
    'name' => 'main-menu',
    'weight' => '-10',
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
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
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
  $display->layout = 'layout_home';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Home';
  $display->uuid = 'ae4c532f-b482-4d1c-9e9c-8ef96506b12d';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7bb33a46-bac7-47c9-ab8f-525c2d58981e';
  $pane->panel = 'region_a';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:6f22a355-2407-4965-aea0-d0338ff40ac3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'bundle' => 'slideshow',
      'language' => '',
      'is_new' => TRUE,
      'title' => '',
      'link' => 0,
      'path' => '',
      'reusable' => 1,
      'admin_title' => 'Home page slideshow',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'vid' => '8',
      'current_vid' => '',
      'field_slideshow_slides' => array(
        'und' => array(
          0 => array(
            'value' => '4',
            'revision_id' => '4',
          ),
        ),
      ),
      'revision' => 1,
      'fpid' => '8',
      'log' => '',
      'created' => 1442753788,
      'timestamp' => 1442753788,
      'changed' => 1442753788,
      'uuid' => '6f22a355-2407-4965-aea0-d0338ff40ac3',
      'vuuid' => '39570dad-07e9-4b27-8259-f94a0be86927',
      'uid' => '1',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7bb33a46-bac7-47c9-ab8f-525c2d58981e';
  $display->content['new-7bb33a46-bac7-47c9-ab8f-525c2d58981e'] = $pane;
  $display->panels['region_a'][0] = 'new-7bb33a46-bac7-47c9-ab8f-525c2d58981e';
  $pane = new stdClass();
  $pane->pid = 'new-3ad1cccd-194b-4457-95d0-cb76e6aad6ba';
  $pane->panel = 'region_b';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:368f0e62-c692-4d1b-b481-ab95e6767dc5';
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
      'admin_title' => '',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'vid' => '7',
      'current_vid' => '',
      'revision' => 1,
      'fpid' => '7',
      'field_basic_text_text' => array(
        'und' => array(
          0 => array(
            'value' => '<h2 style="text-align: center;" class="clear-margin--bottom">[config:site_slogan]</h2>',
            'format' => 'panopoly_wysiwyg_text',
          ),
        ),
      ),
      'log' => '',
      'created' => 1442753634,
      'timestamp' => 1442753634,
      'changed' => 1442753634,
      'uuid' => '368f0e62-c692-4d1b-b481-ab95e6767dc5',
      'vuuid' => 'a4cbb684-298d-4df1-b0f7-7d946b457d91',
      'uid' => '1',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3ad1cccd-194b-4457-95d0-cb76e6aad6ba';
  $display->content['new-3ad1cccd-194b-4457-95d0-cb76e6aad6ba'] = $pane;
  $display->panels['region_b'][0] = 'new-3ad1cccd-194b-4457-95d0-cb76e6aad6ba';
  $pane = new stdClass();
  $pane->pid = 'new-b6a476f1-c572-422e-8a45-f8e37d2cbccc';
  $pane->panel = 'region_c';
  $pane->type = 'views_panes';
  $pane->subtype = 'menus-featured_menus';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '3',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'rendered_entity',
    'header_type' => 'none',
    'view_mode' => 'featured',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b6a476f1-c572-422e-8a45-f8e37d2cbccc';
  $display->content['new-b6a476f1-c572-422e-8a45-f8e37d2cbccc'] = $pane;
  $display->panels['region_c'][0] = 'new-b6a476f1-c572-422e-8a45-f8e37d2cbccc';
  $pane = new stdClass();
  $pane->pid = 'new-a5c3fa2a-b93a-426b-bf97-c642a40f60ff';
  $pane->panel = 'region_c';
  $pane->type = 'views_panes';
  $pane->subtype = 'events-featured_events';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'rendered_entity',
    'header_type' => 'none',
    'view_mode' => 'featured',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a5c3fa2a-b93a-426b-bf97-c642a40f60ff';
  $display->content['new-a5c3fa2a-b93a-426b-bf97-c642a40f60ff'] = $pane;
  $display->panels['region_c'][1] = 'new-a5c3fa2a-b93a-426b-bf97-c642a40f60ff';
  $pane = new stdClass();
  $pane->pid = 'new-a74eb6d4-8f9c-4daf-9379-bd18718fb5a6';
  $pane->panel = 'region_c';
  $pane->type = 'views_panes';
  $pane->subtype = 'blog-featured_posts';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '4',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_mode' => 'featured',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a74eb6d4-8f9c-4daf-9379-bd18718fb5a6';
  $display->content['new-a74eb6d4-8f9c-4daf-9379-bd18718fb5a6'] = $pane;
  $display->panels['region_c'][2] = 'new-a74eb6d4-8f9c-4daf-9379-bd18718fb5a6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
