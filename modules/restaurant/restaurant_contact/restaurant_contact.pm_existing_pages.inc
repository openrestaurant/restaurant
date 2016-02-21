<?php
/**
 * @file
 * restaurant_contact.pm_existing_pages.inc
 */

/**
 * Implements hook_pm_existing_pages_info().
 */
function restaurant_contact_pm_existing_pages_info() {
  $export = array();

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'contact';
  $pm_existing_page->label = 'Contact';
  $pm_existing_page->context = '';
  $pm_existing_page->paths = 'contact';
  $export['contact'] = $pm_existing_page;

  return $export;
}
