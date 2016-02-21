<?php

/**
 * @file
 * Admin page callbacks for the restaurant admin module.
 */

/**
 * Menu callback; Provide the settings page.
 */
function restaurant_admin_settings_page() {
  module_load_include('inc', 'system', 'system.admin');
  return system_admin_menu_block_page();
}

/**
 * Menu callback; Provide the other settings page.
 */
function restaurant_admin_other_settings_page() {
  module_load_include('inc', 'system', 'system.admin');
  return system_admin_menu_block_page();
}
