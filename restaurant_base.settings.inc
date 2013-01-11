<?php

/**
 * @file
 * Provides administrative forms to handle restaurant settings
 */


/**
 * Helper function to load restaurant settings
 *
 * @see restaurant_base.variable.inc
 */
function restaurant_base_get_settings($name) {
  return variable_get_value('restaurant_settings_' . $name);
}