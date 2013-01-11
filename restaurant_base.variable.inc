<?php
/**
 * @file
 * Variable API module. Definition for restaurant variables
 */

/**
 * Implements hook_variable_info().
 */
function restaurant_base_variable_info($options) {

  // general
  $variables['restaurant_settings_name'] = array(
    'title' => t('Name'),
    'type' => 'string',
    'description' => t('The name of your restaurant.'),
    'default' => 'Restaurant',
    'group' => 'restaurant_settings_general',
  );

  $variables['restaurant_settings_slogan'] = array(
    'title' => t('Slogan'),
    'type' => 'string',
    'description' => t('The slogan of your restaurant.'),
    'default' => 'Veggie magis turnip corn tomatillo aubergine quandong lettuce',
    'group' => 'restaurant_settings_general',
  );

  $variables['restaurant_settings_phone'] = array(
    'title' => t('Phone'),
    'type' => 'string',
    'description' => t('Phone number for restaurant.'),
    'default' => '+1 (888) 888-8888',
    'group' => 'restaurant_settings_general',
  );

  $variables['restaurant_settings_address'] = array(
    'title' => t('Address'),
    'type' => 'text_format',
    'description' => t('Restaurant address.'),
    'group' => 'restaurant_settings_general',
  );


  // Social
  $variables['restaurant_settings_twitter'] = array(
    'title' => t('Twitter'),
    'type' => 'string',
    'description' => t('Link to Twitter profile.'),
    'default' => 'http://twitter.com',
    'group' => 'restaurant_settings_social',
  );

  $variables['restaurant_settings_facebook'] = array(
    'title' => t('Facebook'),
    'type' => 'string',
    'description' => t('Link to Facebook profile.'),
    'default' => 'http://facebook.com',
    'group' => 'restaurant_settings_social',
  );

  return $variables;
}

/**
 * Implements hook_variable_type_info().
 */
function restaurant_base_variable_type_info() {
  $type['mail_address'] = array(
    'title' => t('E-mail address'),
    'element' => array('#type' => 'textfield'),
    'token' => TRUE,
  );
  $type['mail_text'] = array(
    'title' => t('Mail text'),
    'multiple' => array('subject' => t('Subject'), 'body' => t('Body')),
    'build callback' => 'variable_build_mail_text',
    'localize' => TRUE,
    'type' => 'multiple',
  );
  return $type;
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