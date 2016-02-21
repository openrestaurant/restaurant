<?php
/**
 * @file
 * Style plugin to render rows using a simple view style that can be overridden.
 */

/**
 * Implements hook_views_plugins().
 */
function restaurant_theme_views_plugins() {
  $module_path = drupal_get_path('module', 'restaurant_theme');

  return array(
    'style' => array(
      'restaurant_theme_view_style' => array(
        'title' => t('Default'),
        'help' => t('The default view style for Open Restaurant.'),
        'path' => $module_path . '/plugins/views',
        'handler' => 'RestaurantThemeViewStyle',
        'parent' => 'default',
        'theme' => 'views_view__content',
        'uses row plugin' => TRUE,
        'uses grouping' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
    ),
  );
}
