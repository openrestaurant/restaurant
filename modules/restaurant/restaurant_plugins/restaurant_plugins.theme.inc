<?php

/**
 * Theme functions for restaurant_plugins.
 */

/**
 * Implements hook_preprocess().
 * @ingroup themeable
 */
function restaurant_plugins_preprocess(&$variables, $hook) {
  if (isset($variables['layout']) && isset($variables['renderer'])) {
    $variables['extra_classes_array'] = array();
    $regions = array_keys($variables['layout']['regions']);
    foreach ($regions as $region) {
      $variables['extra_classes_array'][$region] = array();
      
      // If a region is empty, add an extra class to it.
      if (!isset($variables['display']->panels[$region])) {
        $variables['extra_classes_array'][$region][] = 'panel-pane-region-empty';
      }
    }

    // Make extra classes printable.
    foreach ($variables['extra_classes_array'] as $key => $extra_classes) {
      $variables['extra_classes'][$key] = implode(" ", $extra_classes);
    }
  }
}

/**
 * Implements hook_preprocess_html().
 * @ingroup themeable
 */
function restaurant_plugins_preprocess_html(&$variables) {
  $page = page_manager_get_current_page();
  if ($page) {
    // Add a custom panel class
    $variables['classes_array'][] = 'page-is-panel';

    // Add a custom class for each region inside the panel page.
    if (isset($page['handler']->conf['display'])) {
      foreach ($page['handler']->conf['display']->panels as $region_name => $region) {
        if (count($region)) {
          $variables['classes_array'][] = 'page-with-region-' . $region_name;
        }
      }
    }
  }
  else {
    // Add a custom panel class
    $variables['classes_array'][] = 'page-is-not-panel';
  }
}
