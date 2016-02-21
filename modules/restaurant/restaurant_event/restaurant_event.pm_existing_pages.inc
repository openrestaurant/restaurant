<?php
/**
 * @file
 * restaurant_event.pm_existing_pages.inc
 */

/**
 * Implements hook_pm_existing_pages_info().
 */
function restaurant_event_pm_existing_pages_info() {
  $export = array();

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'events_calendar_day_page';
  $pm_existing_page->label = 'Events calendar day page';
  $pm_existing_page->context = '';
  $pm_existing_page->paths = 'events/calendar/day';
  $export['events_calendar_day_page'] = $pm_existing_page;

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'events_calendar_month_page';
  $pm_existing_page->label = 'Events calendar month page';
  $pm_existing_page->context = '';
  $pm_existing_page->paths = 'events/calendar/month';
  $export['events_calendar_month_page'] = $pm_existing_page;

  return $export;
}
