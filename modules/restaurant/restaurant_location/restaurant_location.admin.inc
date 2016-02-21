<?php

/**
 * @file
 * Admin callbacks for the restaurant_location module.
 */

/**
 * Page callback for admin/locations/manage.
 */
function restaurant_location_manage_locations_admin() {
  return menu_execute_active_handler('admin/locations');
}

/**
 * Page callback for admin/locations/add.
 */
function restaurant_location_add_location_admin() {
  // Return content for node/add/location path.
  return menu_execute_active_handler('node/add/location');
}
