<?php


/**
 * @file
 * Definition of the 'list' panel style.
 */

// Plugin definition
$plugin = array(
  'title' => t('Nav'),
  'description' => t('Nav styles'),
  'render pane' => 'restaurant_plugins_nav_render_pane',
  'pane settings form' => 'restaurant_plugins_nav_settings_form',
);

/**
 * Render callback.
 *
 * @ingroup themeable
 */
function theme_restaurant_plugins_nav_render_pane($variables) {
  $conf = $variables['pane']->configuration;
  $settings = $variables['settings'];

  $nav_type = $settings['nav_type'];
  $nav_display = $settings['nav_display'];

  // Ensure the delta is unique.
  $ids = &drupal_static(__FUNCTION__, array());
  if (empty($ids[$conf['menu_name']])) {
    $ids[$conf['menu_name']] = 0;
  }
  $delta = ++$ids[$conf['menu_name']];
  $conf['delta'] = 'ctools-' . $conf['menu_name'] . '-' . $delta;

  // Build tree.
  $tree = menu_tree_build($conf);

  // Use nav_type as theme wrapper.
  $theme_wrapper = 'menu_tree__nav_' . $nav_type;

  // Add display if set.
  if ($nav_display != 'default') {
    $theme_wrapper .= '_' . $nav_display;
  }

  // Set our theme_wrapper as the only theme_wrapper.
  $tree['content']['#content']['#theme_wrappers'] = array($theme_wrapper);

  $build['content'] = $tree['content'];

  return render($build);
}

/**
 * Settings form callback.
 */
function restaurant_plugins_nav_settings_form($style_settings) {
  $form['nav_type'] = array(
    '#type' => 'select',
    '#title' => t('Nav type'),
    '#default_value' => (isset($style_settings['nav_type'])) ? $style_settings['nav_type'] : 'pills',
    '#options' => array(
      'tabs' => t('Tabs'),
      'pills' => t('Pills'),
      'expanded' => t('Expanded'),
    ),
  );

  $form['nav_display'] = array(
    '#type' => 'select',
    '#title' => t('Nav display'),
    '#default_value' => (isset($style_settings['nav_display'])) ? $style_settings['nav_display'] : 'default',
    '#options' => array(
      'default' => t('Default'),
      'stacked' => t('Stacked'),
      'justified' => t('Justified'),
    ),
  );

  return $form;
}

