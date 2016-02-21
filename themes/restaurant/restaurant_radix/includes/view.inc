<?php
/**
 * @file
 * Theme and preprocess functions for views
 */

/**
 * Implements template_preprocess_views_view().
 */
function restaurant_radix_preprocess_views_view(&$variables) {
  $view = $variables['view'];

  // Add some BEF classes.
  $variables['classes_array'][] = drupal_html_class('view--' . $view->name);
  $variables['classes_array'][] = drupal_html_class('view--' . $view->name .'--' . $view->current_display);

  // Add some template suggestions.
  $variables['theme_hook_suggestions'][] = 'views-view__' . $view->name .'__' . $view->current_display;

  // Copy rows to content.
  $variables['content'] = $variables['rows'];
}

/**
 * Implements template_preprocess_views_view__content().
 */
function restaurant_radix_preprocess_views_view__content(&$variables) {
  global $theme;
  $view = $variables['view'];

  // Allow specific preprocess callbacks.
  $function = $theme . '_preprocess_views_view__content__' . $view->name .'__' . $view->current_display;
  if (function_exists($function)) {
    $function($variables);
  }
}

/**
 * Implements template_preprocess_views_exposed_form().
 */
function restaurant_radix_preprocess_views_exposed_form(&$variables) {
  $form = $variables['form'];

  // Add the type to the widget.
  foreach ($variables['widgets'] as $key => $widget) {
    if (isset($form['#info'][$key])) {
      $type = $form[$form['#info'][$key]['value']]['#type'];
      $variables['widgets'][$key]->type = $type;
    }
  }
}