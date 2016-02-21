<?php
/**
 * @file
 * restaurant_contact.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function restaurant_contact_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_contact__panel_context_48e18782-a665-4ac2-822f-f7dc6a0f19ba';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'contact';
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
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'layout_contact';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'region_a' => NULL,
      'region_b' => NULL,
      'region_c' => NULL,
      'region_d' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Contact';
  $display->uuid = 'c513c86e-4d1e-4d1e-a1c8-02d27c88e93e';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-12f2c24a-94e2-4d8c-8f9a-89c2a575af2d';
  $pane->panel = 'region_c';
  $pane->type = 'contact';
  $pane->subtype = 'contact';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '12f2c24a-94e2-4d8c-8f9a-89c2a575af2d';
  $display->content['new-12f2c24a-94e2-4d8c-8f9a-89c2a575af2d'] = $pane;
  $display->panels['region_c'][0] = 'new-12f2c24a-94e2-4d8c-8f9a-89c2a575af2d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_contact__panel_context_48e18782-a665-4ac2-822f-f7dc6a0f19ba'] = $handler;

  return $export;
}
