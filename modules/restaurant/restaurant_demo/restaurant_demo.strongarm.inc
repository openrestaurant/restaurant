<?php
/**
 * @file
 * restaurant_demo.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function restaurant_demo_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'restaurant_config_address';
  $strongarm->value = 'Dolores Street, San Francisco, CA 94110';
  $export['restaurant_config_address'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'restaurant_config_facebook';
  $strongarm->value = 'http://facebook.com';
  $export['restaurant_config_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'restaurant_config_googleanalytics_account';
  $strongarm->value = 'UA-0000000-00';
  $export['restaurant_config_googleanalytics_account'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'restaurant_config_google_plus';
  $strongarm->value = 'http://google.com/+';
  $export['restaurant_config_google_plus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'restaurant_config_opening_hours';
  $strongarm->value = 'Monday - Friday
11:00 am - 11:00 pm

Saturday & Sunday
10:45 am - 5:00 pm

Saturday & Sunday
10:45 am - 5:00 pm';
  $export['restaurant_config_opening_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'restaurant_config_phone';
  $strongarm->value = '+1 (888) 888 8888';
  $export['restaurant_config_phone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'restaurant_config_site_mail';
  $strongarm->value = 'restaurant@example.com';
  $export['restaurant_config_site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'restaurant_config_site_name';
  $strongarm->value = 'Restaurant';
  $export['restaurant_config_site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'restaurant_config_twitter';
  $strongarm->value = 'http://twitter.com';
  $export['restaurant_config_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'restaurant_config_yelp';
  $strongarm->value = 'http://yelp.com';
  $export['restaurant_config_yelp'] = $strongarm;

  return $export;
}
