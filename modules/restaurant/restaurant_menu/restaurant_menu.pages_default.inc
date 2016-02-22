<?php
/**
 * @file
 * restaurant_menu.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function restaurant_menu_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__menu';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Menu',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'menu',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'menu' => 'menu',
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
      'bottom_left' => NULL,
      'bottom_right' => NULL,
      'region_a' => NULL,
      'region_b' => NULL,
      'region_c' => NULL,
      'region_d' => NULL,
      'region_e' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '56297ba7-09a1-4371-8131-3b4ca1df1a7a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-780c5684-3827-414a-ae1d-6f8684b5f7e0';
  $pane->panel = 'region_a';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:98ac107a-5948-4c4f-abca-e8ffca577bfd';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '780c5684-3827-414a-ae1d-6f8684b5f7e0';
  $display->content['new-780c5684-3827-414a-ae1d-6f8684b5f7e0'] = $pane;
  $display->panels['region_a'][0] = 'new-780c5684-3827-414a-ae1d-6f8684b5f7e0';
  $pane = new stdClass();
  $pane->pid = 'new-ca452f9e-2ad8-4d61-a533-ab36f45d474a';
  $pane->panel = 'region_b';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-menus-all_menus';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ca452f9e-2ad8-4d61-a533-ab36f45d474a';
  $display->content['new-ca452f9e-2ad8-4d61-a533-ab36f45d474a'] = $pane;
  $display->panels['region_b'][0] = 'new-ca452f9e-2ad8-4d61-a533-ab36f45d474a';
  $pane = new stdClass();
  $pane->pid = 'new-e9941d7c-f76c-4b13-8839-d428122e563c';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'margin--lg--bottom',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e9941d7c-f76c-4b13-8839-d428122e563c';
  $display->content['new-e9941d7c-f76c-4b13-8839-d428122e563c'] = $pane;
  $display->panels['region_c'][0] = 'new-e9941d7c-f76c-4b13-8839-d428122e563c';
  $pane = new stdClass();
  $pane->pid = 'new-4d65f40b-b930-4f6e-a177-bf73efeaa707';
  $pane->panel = 'region_c';
  $pane->type = 'block';
  $pane->subtype = 'disqus-disqus_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'margin--lg--top',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4d65f40b-b930-4f6e-a177-bf73efeaa707';
  $display->content['new-4d65f40b-b930-4f6e-a177-bf73efeaa707'] = $pane;
  $display->panels['region_c'][1] = 'new-4d65f40b-b930-4f6e-a177-bf73efeaa707';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__menu'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function restaurant_menu_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'menus';
  $page->task = 'page';
  $page->admin_title = 'Menus';
  $page->admin_description = 'Page with menus categories';
  $page->path = 'menus';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'The Menu',
    'name' => 'main-menu',
    'weight' => '-9',
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
  $handler->name = 'page_menus_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'menus';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-title-hidden',
    'css_id' => 'menus-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'layout_menus';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'region_a' => NULL,
      'region_b' => NULL,
      'region_c' => NULL,
      'region_d' => NULL,
      'region_e' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Menus';
  $display->uuid = '95c73904-9536-4f10-a3d8-9cd655a5979a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-27996983-bee3-4f74-8652-f02be64574dd';
  $pane->panel = 'region_a';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:98ac107a-5948-4c4f-abca-e8ffca577bfd';
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
      'admin_title' => 'Menus Slideshow',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'vid' => '9',
      'current_vid' => '',
      'field_slideshow_slides' => array(
        'und' => array(
          0 => array(
            'value' => '5',
            'revision_id' => '5',
          ),
        ),
      ),
      'revision' => 1,
      'fpid' => '9',
      'log' => '',
      'created' => 1442815080,
      'timestamp' => 1442815080,
      'changed' => 1442815080,
      'uuid' => '98ac107a-5948-4c4f-abca-e8ffca577bfd',
      'vuuid' => '244b06ad-a748-4327-95e0-01a84c956789',
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
  $pane->uuid = '27996983-bee3-4f74-8652-f02be64574dd';
  $display->content['new-27996983-bee3-4f74-8652-f02be64574dd'] = $pane;
  $display->panels['region_a'][0] = 'new-27996983-bee3-4f74-8652-f02be64574dd';
  $pane = new stdClass();
  $pane->pid = 'new-e662191b-6557-4a70-8ecc-39c2945101ce';
  $pane->panel = 'region_b';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-menus-all_menus';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e662191b-6557-4a70-8ecc-39c2945101ce';
  $display->content['new-e662191b-6557-4a70-8ecc-39c2945101ce'] = $pane;
  $display->panels['region_b'][0] = 'new-e662191b-6557-4a70-8ecc-39c2945101ce';
  $pane = new stdClass();
  $pane->pid = 'new-7f78db45-ff07-4341-afde-578128c11073';
  $pane->panel = 'region_c';
  $pane->type = 'views_panes';
  $pane->subtype = 'menu_categories-menu_categories';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '0',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_mode' => 'navigation',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7f78db45-ff07-4341-afde-578128c11073';
  $display->content['new-7f78db45-ff07-4341-afde-578128c11073'] = $pane;
  $display->panels['region_c'][0] = 'new-7f78db45-ff07-4341-afde-578128c11073';
  $pane = new stdClass();
  $pane->pid = 'new-50ebfb9b-6828-48b9-878e-7dfa38b8561a';
  $pane->panel = 'region_d';
  $pane->type = 'views_panes';
  $pane->subtype = 'menus-all_menus';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'grid',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '50ebfb9b-6828-48b9-878e-7dfa38b8561a';
  $display->content['new-50ebfb9b-6828-48b9-878e-7dfa38b8561a'] = $pane;
  $display->panels['region_d'][0] = 'new-50ebfb9b-6828-48b9-878e-7dfa38b8561a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['menus'] = $page;

  return $pages;

}
