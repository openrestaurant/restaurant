<?php
/**
 * @file
 * restaurant_demo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function restaurant_demo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
