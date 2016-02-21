<?php

/**
 * @file
 * Admin callbacks for the restaurant_event module.
 */

/**
 * Page callback for admin/events/manage.
 */
function restaurant_event_manage_events_admin() {
  return menu_execute_active_handler('admin/events');
}

/**
 * Page callback for admin/event/add.
 */
function restaurant_event_add_event_admin() {
  // Return content for node/add/event path.
  return menu_execute_active_handler('node/add/event');
}

/**
 * Page callback for admin/event/categories.
 */
function restaurant_event_event_categories_admin() {
  // Return content for admin/structure/taxonomy/event_categories.
  return menu_execute_active_handler('admin/structure/taxonomy/event_categories');
}

/**
 * Page callback for admin/event/categories/add.
 */
function restaurant_event_add_event_category_admin() {
  // Return content for admin/structure/taxonomy/event_categories/add path.
  return menu_execute_active_handler('admin/structure/taxonomy/event_categories/add');
}

/**
 * Page callback for event/calendar/%.
 */
function restaurant_event_redirect() {
  drupal_goto('events/calendar');
}
