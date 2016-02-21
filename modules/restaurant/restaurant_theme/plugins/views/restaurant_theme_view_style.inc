<?php
/**
 * @file
 * Plugin style for restaurant_theme_view_style.
 */

/**
 * Class to define a style plugin handler.
 */
class RestaurantThemeViewStyle extends views_plugin_style {
  /**
   * Set default options
   */
  function option_definition() {
    $options = parent::option_definition();
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }
}
