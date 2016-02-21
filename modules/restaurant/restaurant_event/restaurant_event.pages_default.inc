<?php
/**
 * @file
 * restaurant_event.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function restaurant_event_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__event';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Event',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'event',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'event' => 'event',
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
  $display->layout = 'layout_event_node';
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
  $display->title = '';
  $display->uuid = 'cb7aa6d9-1e09-447c-9e16-01cd66b34e21';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6a0ef1f0-2eed-4583-aa42-883b7a3aa425';
  $pane->panel = 'region_a';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:6ac03610-38b1-4e08-aace-ca2c0ac3cf03';
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
  $pane->uuid = '6a0ef1f0-2eed-4583-aa42-883b7a3aa425';
  $display->content['new-6a0ef1f0-2eed-4583-aa42-883b7a3aa425'] = $pane;
  $display->panels['region_a'][0] = 'new-6a0ef1f0-2eed-4583-aa42-883b7a3aa425';
  $pane = new stdClass();
  $pane->pid = 'new-19e93b27-17c3-4437-96e8-a7d8630b7372';
  $pane->panel = 'region_b';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:5ffde453-4c37-41ca-a4c2-1e9e74c98fe1';
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
  $pane->uuid = '19e93b27-17c3-4437-96e8-a7d8630b7372';
  $display->content['new-19e93b27-17c3-4437-96e8-a7d8630b7372'] = $pane;
  $display->panels['region_b'][0] = 'new-19e93b27-17c3-4437-96e8-a7d8630b7372';
  $pane = new stdClass();
  $pane->pid = 'new-d93d4c5d-6146-4f7f-b34f-dd3d640142d8';
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
  $pane->uuid = 'd93d4c5d-6146-4f7f-b34f-dd3d640142d8';
  $display->content['new-d93d4c5d-6146-4f7f-b34f-dd3d640142d8'] = $pane;
  $display->panels['region_c'][0] = 'new-d93d4c5d-6146-4f7f-b34f-dd3d640142d8';
  $pane = new stdClass();
  $pane->pid = 'new-2e55cec7-549b-47eb-9b25-d875e3352d5e';
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2e55cec7-549b-47eb-9b25-d875e3352d5e';
  $display->content['new-2e55cec7-549b-47eb-9b25-d875e3352d5e'] = $pane;
  $display->panels['region_c'][1] = 'new-2e55cec7-549b-47eb-9b25-d875e3352d5e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__event'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_events_calendar_day_page_panel_context';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'events_calendar_day_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Events
Calendar',
    'panels_breadcrumbs_paths' => 'events
events/calendar/month',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Events Calendar';
  $display->uuid = '2890f9b6-d529-4dcd-837d-4c78db3f29da';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-46c686bb-b9a9-45c3-9964-49a93520f03c';
  $pane->panel = 'contentmain';
  $pane->type = 'menu_tree';
  $pane->subtype = 'main-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'menu_name' => 'main-menu',
    'parent_mlid' => 'main-menu:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '2',
    'follow' => 0,
    'depth' => 0,
    'expanded' => 0,
    'sort' => 0,
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'nav_type' => 'tabs',
      'nav_display' => 'default',
    ),
    'style' => 'nav',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '46c686bb-b9a9-45c3-9964-49a93520f03c';
  $display->content['new-46c686bb-b9a9-45c3-9964-49a93520f03c'] = $pane;
  $display->panels['contentmain'][0] = 'new-46c686bb-b9a9-45c3-9964-49a93520f03c';
  $pane = new stdClass();
  $pane->pid = 'new-9ab86316-bdc6-4a23-98f7-43d61865d8bb';
  $pane->panel = 'contentmain';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'events_calendar_day_page',
    'override_title' => 1,
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
  $pane->uuid = '9ab86316-bdc6-4a23-98f7-43d61865d8bb';
  $display->content['new-9ab86316-bdc6-4a23-98f7-43d61865d8bb'] = $pane;
  $display->panels['contentmain'][1] = 'new-9ab86316-bdc6-4a23-98f7-43d61865d8bb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-46c686bb-b9a9-45c3-9964-49a93520f03c';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_events_calendar_day_page_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_events_calendar_month_page_panel_context';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'events_calendar_month_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
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
  $display->layout = 'layout_events';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'slideshow' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'region_a' => NULL,
      'region_b' => NULL,
      'region_c' => NULL,
      'region_d' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Events Calendar';
  $display->uuid = 'e65a00cf-e7c5-472b-adb1-ada7f8aac919';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-14939c47-aabd-4377-a9d5-e57a7a1ae709';
  $pane->panel = 'region_a';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:10';
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
  $pane->uuid = '14939c47-aabd-4377-a9d5-e57a7a1ae709';
  $display->content['new-14939c47-aabd-4377-a9d5-e57a7a1ae709'] = $pane;
  $display->panels['region_a'][0] = 'new-14939c47-aabd-4377-a9d5-e57a7a1ae709';
  $pane = new stdClass();
  $pane->pid = 'new-fe106c9e-cda4-4e9e-a345-208ae6e32268';
  $pane->panel = 'region_b';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:11';
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
  $pane->uuid = 'fe106c9e-cda4-4e9e-a345-208ae6e32268';
  $display->content['new-fe106c9e-cda4-4e9e-a345-208ae6e32268'] = $pane;
  $display->panels['region_b'][0] = 'new-fe106c9e-cda4-4e9e-a345-208ae6e32268';
  $pane = new stdClass();
  $pane->pid = 'new-a6101b8c-9028-4752-a765-0fb99c3e16d6';
  $pane->panel = 'region_c';
  $pane->type = 'views_panes';
  $pane->subtype = 'events_calendar-events_calendar_widget';
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
  $pane->uuid = 'a6101b8c-9028-4752-a765-0fb99c3e16d6';
  $display->content['new-a6101b8c-9028-4752-a765-0fb99c3e16d6'] = $pane;
  $display->panels['region_c'][0] = 'new-a6101b8c-9028-4752-a765-0fb99c3e16d6';
  $pane = new stdClass();
  $pane->pid = 'new-d041b0f9-2fc0-4eb9-9332-adbece11d462';
  $pane->panel = 'region_c';
  $pane->type = 'views_panes';
  $pane->subtype = 'events-upcoming_events';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'rendered_entity',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Upcoming Events',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd041b0f9-2fc0-4eb9-9332-adbece11d462';
  $display->content['new-d041b0f9-2fc0-4eb9-9332-adbece11d462'] = $pane;
  $display->panels['region_c'][1] = 'new-d041b0f9-2fc0-4eb9-9332-adbece11d462';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_events_calendar_month_page_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function restaurant_event_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'calendar';
  $page->task = 'page';
  $page->admin_title = 'Calendar';
  $page->admin_description = '';
  $page->path = 'events/calendar';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => 'Calendar',
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
  $handler->name = 'page_calendar__panel_context_f2684ff7-48bf-4535-ad01-0ad2faeabf65';
  $handler->task = 'page';
  $handler->subtask = 'calendar';
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
  $display->layout = 'layout_events';
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
  $display->title = '';
  $display->uuid = 'e7359a6b-6f99-492c-bf43-71c02d1814f9';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-40ef1484-9b10-44cb-b693-4425be69c528';
  $pane->panel = 'region_a';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:6ac03610-38b1-4e08-aace-ca2c0ac3cf03';
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
  $pane->uuid = '40ef1484-9b10-44cb-b693-4425be69c528';
  $display->content['new-40ef1484-9b10-44cb-b693-4425be69c528'] = $pane;
  $display->panels['region_a'][0] = 'new-40ef1484-9b10-44cb-b693-4425be69c528';
  $pane = new stdClass();
  $pane->pid = 'new-303d851f-f740-4e8d-9b31-24bdde8d0fc3';
  $pane->panel = 'region_b';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:5ffde453-4c37-41ca-a4c2-1e9e74c98fe1';
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
  $pane->uuid = '303d851f-f740-4e8d-9b31-24bdde8d0fc3';
  $display->content['new-303d851f-f740-4e8d-9b31-24bdde8d0fc3'] = $pane;
  $display->panels['region_b'][0] = 'new-303d851f-f740-4e8d-9b31-24bdde8d0fc3';
  $pane = new stdClass();
  $pane->pid = 'new-38488bd3-5498-42c0-9b0d-632ee030f3f8';
  $pane->panel = 'region_c';
  $pane->type = 'views_panes';
  $pane->subtype = 'events_calendar-events_calendar';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '38488bd3-5498-42c0-9b0d-632ee030f3f8';
  $display->content['new-38488bd3-5498-42c0-9b0d-632ee030f3f8'] = $pane;
  $display->panels['region_c'][0] = 'new-38488bd3-5498-42c0-9b0d-632ee030f3f8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['calendar'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events';
  $page->task = 'page';
  $page->admin_title = 'Events';
  $page->admin_description = '';
  $page->path = 'events';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Events',
    'name' => 'main-menu',
    'weight' => '5',
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
  $handler->name = 'page_events_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'events';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'events-page',
    'css_id' => 'events-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'layout_events';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'slideshow' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'region_a' => NULL,
      'region_b' => NULL,
      'region_c' => NULL,
      'region_d' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Upcoming Events';
  $display->uuid = 'b0a17d9d-6ef1-47c9-b829-50eef126af9a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7f08b44e-80fb-4b08-9259-d37a62a1b27e';
  $pane->panel = 'region_a';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:6ac03610-38b1-4e08-aace-ca2c0ac3cf03';
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
  $pane->uuid = '7f08b44e-80fb-4b08-9259-d37a62a1b27e';
  $display->content['new-7f08b44e-80fb-4b08-9259-d37a62a1b27e'] = $pane;
  $display->panels['region_a'][0] = 'new-7f08b44e-80fb-4b08-9259-d37a62a1b27e';
  $pane = new stdClass();
  $pane->pid = 'new-f99b587a-d389-43ad-b7ea-1337f05e9778';
  $pane->panel = 'region_b';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-events-upcoming_events';
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
  $pane->uuid = 'f99b587a-d389-43ad-b7ea-1337f05e9778';
  $display->content['new-f99b587a-d389-43ad-b7ea-1337f05e9778'] = $pane;
  $display->panels['region_b'][0] = 'new-f99b587a-d389-43ad-b7ea-1337f05e9778';
  $pane = new stdClass();
  $pane->pid = 'new-d5f3a8cc-b8ca-4197-acd3-2c461539f69a';
  $pane->panel = 'region_c';
  $pane->type = 'menu_tree';
  $pane->subtype = 'main-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'parent' => 'main-menu:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '2',
    'follow' => 0,
    'depth' => 0,
    'depth_relative' => 0,
    'expanded' => 0,
    'sort' => 0,
    'menu_name' => 'main-menu',
    'parent_mlid' => '0',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'nav_type' => 'tabs',
      'nav_display' => 'default',
    ),
    'style' => 'nav',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd5f3a8cc-b8ca-4197-acd3-2c461539f69a';
  $display->content['new-d5f3a8cc-b8ca-4197-acd3-2c461539f69a'] = $pane;
  $display->panels['region_c'][0] = 'new-d5f3a8cc-b8ca-4197-acd3-2c461539f69a';
  $pane = new stdClass();
  $pane->pid = 'new-e25562d5-1e28-4627-8251-ed170bf4565a';
  $pane->panel = 'region_c';
  $pane->type = 'views_panes';
  $pane->subtype = 'events-upcoming_events';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'rendered_entity',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e25562d5-1e28-4627-8251-ed170bf4565a';
  $display->content['new-e25562d5-1e28-4627-8251-ed170bf4565a'] = $pane;
  $display->panels['region_c'][1] = 'new-e25562d5-1e28-4627-8251-ed170bf4565a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'past_events';
  $page->task = 'page';
  $page->admin_title = 'Past Events';
  $page->admin_description = '';
  $page->path = 'events/past';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Past Events',
    'name' => 'main-menu',
    'weight' => '5',
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
  $handler->name = 'page_past_events_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'past_events';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'events-page',
    'css_id' => 'events-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Events
Past Events',
    'panels_breadcrumbs_paths' => 'events',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'layout_events';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'slideshow' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'region_a' => NULL,
      'region_b' => NULL,
      'region_c' => NULL,
      'region_d' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Past Events';
  $display->uuid = 'ea8ee5c8-fc49-4112-bc5b-39a5b4310e17';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-842a9bb6-8bf8-48ad-bbaf-cc2d9eff1611';
  $pane->panel = 'region_a';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:6ac03610-38b1-4e08-aace-ca2c0ac3cf03';
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
  $pane->uuid = '842a9bb6-8bf8-48ad-bbaf-cc2d9eff1611';
  $display->content['new-842a9bb6-8bf8-48ad-bbaf-cc2d9eff1611'] = $pane;
  $display->panels['region_a'][0] = 'new-842a9bb6-8bf8-48ad-bbaf-cc2d9eff1611';
  $pane = new stdClass();
  $pane->pid = 'new-9f7e0741-09aa-4136-8307-3aa69daf1c3e';
  $pane->panel = 'region_b';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:5ffde453-4c37-41ca-a4c2-1e9e74c98fe1';
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
  $pane->uuid = '9f7e0741-09aa-4136-8307-3aa69daf1c3e';
  $display->content['new-9f7e0741-09aa-4136-8307-3aa69daf1c3e'] = $pane;
  $display->panels['region_b'][0] = 'new-9f7e0741-09aa-4136-8307-3aa69daf1c3e';
  $pane = new stdClass();
  $pane->pid = 'new-d14325cd-3b16-4d99-abdf-75a9279e1994';
  $pane->panel = 'region_c';
  $pane->type = 'menu_tree';
  $pane->subtype = 'main-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'parent' => 'main-menu:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '2',
    'follow' => 0,
    'depth' => 0,
    'depth_relative' => 0,
    'expanded' => 0,
    'sort' => 0,
    'menu_name' => 'main-menu',
    'parent_mlid' => '0',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'nav_type' => 'tabs',
      'nav_display' => 'default',
    ),
    'style' => 'nav',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd14325cd-3b16-4d99-abdf-75a9279e1994';
  $display->content['new-d14325cd-3b16-4d99-abdf-75a9279e1994'] = $pane;
  $display->panels['region_c'][0] = 'new-d14325cd-3b16-4d99-abdf-75a9279e1994';
  $pane = new stdClass();
  $pane->pid = 'new-fb6ba229-a7e3-449b-8660-4a13c4ad2f50';
  $pane->panel = 'region_c';
  $pane->type = 'views_panes';
  $pane->subtype = 'events-past_events';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'rendered_entity',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fb6ba229-a7e3-449b-8660-4a13c4ad2f50';
  $display->content['new-fb6ba229-a7e3-449b-8660-4a13c4ad2f50'] = $pane;
  $display->panels['region_c'][1] = 'new-fb6ba229-a7e3-449b-8660-4a13c4ad2f50';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['past_events'] = $page;

  return $pages;

}
