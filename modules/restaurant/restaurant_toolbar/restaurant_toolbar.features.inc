<?php
/**
 * @file
 * restaurant_toolbar.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function restaurant_toolbar_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function restaurant_toolbar_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_search_autocomplete_config_features_default_settings().
 */
function restaurant_toolbar_search_autocomplete_config_features_default_settings() {
  return array(
    0 => array(
      'fid' => 4,
      'title' => 'Toolbar Search',
      'selector' => '#restaurant-toolbar-search-form .form-item-keywords input',
      'weight' => 0,
      'enabled' => 1,
      'parent_fid' => 0,
      'min_char' => 2,
      'max_sug' => 10,
      'no_results' => '{"label":"No results found for [search-phrase].","value":"","link":"","group":{"group_id":"no_results"}}',
      'all_results' => '{"label":"","value":"","link":"","group":{"group_id":"all_results"}}',
      'auto_submit' => 1,
      'auto_redirect' => 1,
      'translite' => 1,
      'data_source' => 'view',
      'data_callback' => 'search_autocomplete/autocomplete/4/',
      'data_static' => '',
      'data_view' => 'toolbar_autocomplete',
      'theme' => 'user-blue.css',
    ),
  );
}
