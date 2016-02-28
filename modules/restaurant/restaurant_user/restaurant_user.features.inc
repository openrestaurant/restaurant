<?php
/**
 * @file
 * restaurant_user.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function restaurant_user_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function restaurant_user_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function restaurant_user_default_page_manager_handlers_alter(&$data) {
  if (isset($data['pm_existing_pages_user_login_panel_context'])) {
    $data['pm_existing_pages_user_login_panel_context']->conf['display']->layout = 'radix_whelan'; /* WAS: 'radix_burr_flipped' */
  }
  if (isset($data['pm_existing_pages_user_password_panel_context'])) {
    $data['pm_existing_pages_user_password_panel_context']->conf['display']->layout = 'radix_whelan'; /* WAS: 'radix_burr_flipped' */
  }
  if (isset($data['pm_existing_pages_user_register_panel_context'])) {
    $data['pm_existing_pages_user_register_panel_context']->conf['display']->layout = 'radix_whelan'; /* WAS: 'radix_burr_flipped' */
  }
}
