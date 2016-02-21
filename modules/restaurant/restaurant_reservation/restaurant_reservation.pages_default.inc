<?php
/**
 * @file
 * restaurant_reservation.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function restaurant_reservation_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'reservation';
  $page->task = 'page';
  $page->admin_title = 'Reservation';
  $page->admin_description = '';
  $page->path = 'reservation';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Book a Table',
    'name' => 'main-menu',
    'weight' => '100',
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
  $handler->name = 'page_reservation__panel_context_4b00a748-fbd1-4945-ae7f-4724f8345b1e';
  $handler->task = 'page';
  $handler->subtask = 'reservation';
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
  $display->layout = 'layout_reservation';
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
  $display->title = 'Book a Table';
  $display->uuid = '3bdc0150-f5f4-4f37-a984-65bc967b3d52';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e353775c-352b-4bee-855d-ebffd75a98f9';
  $pane->panel = 'region_a';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:c2ca27db-55dc-4f7a-ac0f-e212a10d4f94';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e353775c-352b-4bee-855d-ebffd75a98f9';
  $display->content['new-e353775c-352b-4bee-855d-ebffd75a98f9'] = $pane;
  $display->panels['region_a'][0] = 'new-e353775c-352b-4bee-855d-ebffd75a98f9';
  $pane = new stdClass();
  $pane->pid = 'new-9f6ea99d-f6b4-4dd6-978d-9b5c5fb98146';
  $pane->panel = 'region_c';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:44311ff4-0eb1-45c7-ad9b-e0cbcd8d4d2e';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9f6ea99d-f6b4-4dd6-978d-9b5c5fb98146';
  $display->content['new-9f6ea99d-f6b4-4dd6-978d-9b5c5fb98146'] = $pane;
  $display->panels['region_c'][0] = 'new-9f6ea99d-f6b4-4dd6-978d-9b5c5fb98146';
  $pane = new stdClass();
  $pane->pid = 'new-97228bdc-7cb2-4e12-99fe-983ffa767ac3';
  $pane->panel = 'region_d';
  $pane->type = 'reservation_form';
  $pane->subtype = 'reservation_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '97228bdc-7cb2-4e12-99fe-983ffa767ac3';
  $display->content['new-97228bdc-7cb2-4e12-99fe-983ffa767ac3'] = $pane;
  $display->panels['region_d'][0] = 'new-97228bdc-7cb2-4e12-99fe-983ffa767ac3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['reservation'] = $page;

  return $pages;

}
