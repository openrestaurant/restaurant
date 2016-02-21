<?php

/**
 * @file
 * Theme functions for Restaurant Toolbar.
 */

/**
 * Implements template_preprocess_html().
 */
function restaurant_toolbar_preprocess_html(&$variables) {
  $variables['classes_array'][] = 'restaurant-toolbar';
}

/**
 * Returns HTML for a navbar dropdown.
 */
function template_preprocess_navbar_dropdown(&$variables) {
  // Add wrappers.
}

/**
 * Implements template_preprocess_HOOK().
 */
function template_preprocess_navbar_dropdown_wrapper(&$variables) {
  if (!isset($variables['element']['#wrapper_attributes'])) {
    $variables['element']['#wrapper_attributes'] = array();
  }

  $variables['element']['#wrapper_attributes']['class'][] = 'navbar-tab';
  $variables['element']['#wrapper_attributes']['class'][] = 'navbar-dropdown';
}

/**
 * Returns HTML for wrapping a navbar dropdown.
 */
function theme_navbar_dropdown_wrapper(&$variables) {
  if (!empty($variables['element']['#children'])) {
    $element = $variables['element'];
    return '<div' . drupal_attributes($element['#wrapper_attributes']) . '>' . $element['#children'] . '</div>';
  }
}

/**
 * Implements hook_preprocess_navbar_tab_wrapper().
 */
function restaurant_toolbar_preprocess_navbar_tab_wrapper(&$variables) {
  $tab = &$variables['element']['tab'];

  // Add a custom class using the title for theming.
  $title = ($tab['#href'] == 'admin') ? 'menu' : $tab['#title'];
  $class = drupal_html_class('navbar-tab--' . $title);
  $variables['element']['#wrapper_attributes']['class'][] = $class;
}