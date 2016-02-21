<?php
/**
 * @file
 * restaurant_contact.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function restaurant_contact_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pm_existing_pages_disabled_contact';
  $strongarm->value = FALSE;
  $export['pm_existing_pages_disabled_contact'] = $strongarm;

  return $export;
}
