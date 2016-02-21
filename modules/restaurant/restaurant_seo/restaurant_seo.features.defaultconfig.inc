<?php
/**
 * @file
 * restaurant_seo.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function restaurant_seo_defaultconfig_features() {
  return array(
    'restaurant_seo' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function restaurant_seo_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = '1';
  $export['clean_url'] = $strongarm;

  return $export;
}
