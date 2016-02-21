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
  $handler->name = 'node_edit_panel_context_2';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Menu',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'menu' => 'menu',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'radix_burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Add/Edit Menu';
  $display->uuid = '8fb4e3db-16a7-4512-a6fa-bbe1b1b389b3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ea094c4d-041e-4205-a039-ed02013ddfaf';
    $pane->panel = 'contentmain';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = 'ea094c4d-041e-4205-a039-ed02013ddfaf';
    $display->content['new-ea094c4d-041e-4205-a039-ed02013ddfaf'] = $pane;
    $display->panels['contentmain'][0] = 'new-ea094c4d-041e-4205-a039-ed02013ddfaf';
    $pane = new stdClass();
    $pane->pid = 'new-f736069c-9660-4e1a-ad79-bdd340167477';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_menu_images';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => 'Images',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f736069c-9660-4e1a-ad79-bdd340167477';
    $display->content['new-f736069c-9660-4e1a-ad79-bdd340167477'] = $pane;
    $display->panels['sidebar'][0] = 'new-f736069c-9660-4e1a-ad79-bdd340167477';
    $pane = new stdClass();
    $pane->pid = 'new-ddad0293-0012-4682-a637-5b5df02ddc8c';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_menu_featured';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => 'Feature menu',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ddad0293-0012-4682-a637-5b5df02ddc8c';
    $display->content['new-ddad0293-0012-4682-a637-5b5df02ddc8c'] = $pane;
    $display->panels['sidebar'][1] = 'new-ddad0293-0012-4682-a637-5b5df02ddc8c';
    $pane = new stdClass();
    $pane->pid = 'new-f8c77775-bda0-4483-b658-eee57d555e9a';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_menu_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => 'Categories',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f8c77775-bda0-4483-b658-eee57d555e9a';
    $display->content['new-f8c77775-bda0-4483-b658-eee57d555e9a'] = $pane;
    $display->panels['sidebar'][2] = 'new-f8c77775-bda0-4483-b658-eee57d555e9a';
    $pane = new stdClass();
    $pane->pid = 'new-170bb2db-8b71-4208-bfe9-faf2aa13055a';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_menu_locations';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '170bb2db-8b71-4208-bfe9-faf2aa13055a';
    $display->content['new-170bb2db-8b71-4208-bfe9-faf2aa13055a'] = $pane;
    $display->panels['sidebar'][3] = 'new-170bb2db-8b71-4208-bfe9-faf2aa13055a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ea094c4d-041e-4205-a039-ed02013ddfaf';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_2'] = $handler;

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
    'title' => 'Menus',
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
  $display->layout = 'layout_2col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
      'header' => NULL,
      'contentmain1' => NULL,
      'contentmain2' => NULL,
      'contentmain3' => NULL,
      'full_width_1' => NULL,
      'full_width_2' => NULL,
      'full_width_3' => NULL,
      'contentmain1_left' => NULL,
      'contentmain1_right' => NULL,
      'contentmain2_left' => NULL,
      'contentmain2_right' => NULL,
      'contentmain4_left' => NULL,
      'contentmain4_right' => NULL,
      'fullwidth1' => NULL,
      'fullwidth2' => NULL,
      'fullwidth3' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Menus';
  $display->uuid = '95c73904-9536-4f10-a3d8-9cd655a5979a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ec5520c4-95cc-4493-8d1b-ade17fe9f0ca';
    $pane->panel = 'contentmain2_left';
    $pane->type = 'views_panes';
    $pane->subtype = 'menu_categories-menu_categories_jump_navigation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => '',
      'override_title_text' => '',
      'view_mode' => 'teaser',
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
    $pane->uuid = 'ec5520c4-95cc-4493-8d1b-ade17fe9f0ca';
    $display->content['new-ec5520c4-95cc-4493-8d1b-ade17fe9f0ca'] = $pane;
    $display->panels['contentmain2_left'][0] = 'new-ec5520c4-95cc-4493-8d1b-ade17fe9f0ca';
    $pane = new stdClass();
    $pane->pid = 'new-caab7b74-1fa9-4afb-8600-dc1b9c1117fc';
    $pane->panel = 'contentmain2_left';
    $pane->type = 'location_browse_menus_link';
    $pane->subtype = 'location_browse_menus_link';
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
    $pane->uuid = 'caab7b74-1fa9-4afb-8600-dc1b9c1117fc';
    $display->content['new-caab7b74-1fa9-4afb-8600-dc1b9c1117fc'] = $pane;
    $display->panels['contentmain2_left'][1] = 'new-caab7b74-1fa9-4afb-8600-dc1b9c1117fc';
    $pane = new stdClass();
    $pane->pid = 'new-b19c4b90-076e-411f-96d1-c7d44cc8a157';
    $pane->panel = 'contentmain2_right';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:24';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'Full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b19c4b90-076e-411f-96d1-c7d44cc8a157';
    $display->content['new-b19c4b90-076e-411f-96d1-c7d44cc8a157'] = $pane;
    $display->panels['contentmain2_right'][0] = 'new-b19c4b90-076e-411f-96d1-c7d44cc8a157';
    $pane = new stdClass();
    $pane->pid = 'new-ac8e6407-8df2-4b8f-9617-b8484499e91f';
    $pane->panel = 'contentmain2_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'menus-all_menus';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ac8e6407-8df2-4b8f-9617-b8484499e91f';
    $display->content['new-ac8e6407-8df2-4b8f-9617-b8484499e91f'] = $pane;
    $display->panels['contentmain2_right'][1] = 'new-ac8e6407-8df2-4b8f-9617-b8484499e91f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['menus'] = $page;

  return $pages;

}
