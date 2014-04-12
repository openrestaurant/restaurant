<?php
/**
 * @file
 * Variable API module. Definition for restaurant variables
 */

/**
 * Implements hook_variable_info().
 */
function restaurant_base_variable_info($options) {

  // General.
  $variables['restaurant_settings_site_name'] = array(
    'title' => t('Site name'),
    'type' => 'string',
    'group' => 'restaurant_settings_general',
    'default' => variable_get('site_name', 'Restaurant'),
  );

  $variables['restaurant_settings_site_mail'] = array(
    'title' => t('Site mail'),
    'type' => 'string',
    'description' => t('The From address in automated e-mails sent during registration and new password requests, and other notifications. (Use an address ending in your site\'s domain to help prevent this e-mail being flagged as spam.)'),
    'group' => 'restaurant_settings_general',
    'default' => variable_get('site_mail'),
  );

  $variables['restaurant_settings_phone'] = array(
    'title' => t('Phone'),
    'type' => 'string',
    'description' => t('Phone number for restaurant.'),
    'group' => 'restaurant_settings_general',
  );

  $variables['restaurant_settings_address'] = array(
    'title' => t('Address'),
    'type' => 'text',
    'description' => t('Restaurant address.'),
    'group' => 'restaurant_settings_general',
  );

  $variables['restaurant_settings_opening_hours'] = array(
    'title' => t('Opening Hours'),
    'type' => 'text',
    'description' => t('Restaurant opening hours.'),
    'group' => 'restaurant_settings_general',
  );
  
  // Social.
  $variables['restaurant_settings_twitter'] = array(
    'title' => t('Twitter'),
    'type' => 'string',
    'description' => t('Link to Twitter profile.'),
    'group' => 'restaurant_settings_social',
  );

  $variables['restaurant_settings_facebook'] = array(
    'title' => t('Facebook'),
    'type' => 'string',
    'description' => t('Link to Facebook profile.'),
    'group' => 'restaurant_settings_social',
  );

  $variables['restaurant_settings_google_plus'] = array(
    'title' => t('Google+'),
    'type' => 'string',
    'description' => t('Link to Google+ profile.'),
    'group' => 'restaurant_settings_social',
  );

  return $variables;
}

/**
 * Implements hook_variable_type_info().
 */
function restaurant_base_variable_type_info() {
  //
}

/**
 * Implements hook_variable_group_info().
 */
function restaurant_base_variable_group_info() {
  $groups['restaurant_settings_general'] = array(
    'title' => t('General'),
    'access' => 'administer site configuration',
    'path' => 'admin/restaurant/settings/general',
  );

  $groups['restaurant_settings_social'] = array(
    'title' => t('Social'),
    'access' => 'administer site configuration',
    'path' => 'admin/restaurant/settings/social',
  );

  return $groups;
}