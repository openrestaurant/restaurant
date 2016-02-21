<?php
/**
 * @file
 * restaurant_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function restaurant_slideshow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
