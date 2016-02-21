<?php
/**
 * @file
 * restaurant_reservation_demo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function restaurant_reservation_demo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
