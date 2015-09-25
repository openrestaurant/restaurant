<?php

/**
 * @file
 * Tasks for standard installation.
 */

/**
 * Implements hook_install_tasks().
 */
function standard_install_tasks($tasks, $install_state) {
  // Add a task to select features for restaurant.
  $tasks['restaurant_select_features'] = array(
    'display_name' => st('Select features'),
    'type' => 'form',
  );

  // Task to install features.
  $tasks['restaurant_install_features'] = array(
    'display_name' => st('Install features'),
    'type' => 'batch',
  );

  // Task to install demo content.
  $install_demo_content = variable_get('restaurant_demo_content', TRUE);
  $tasks['restaurant_install_demo_content'] = array(
    'display_name' => st('Install demo content'),
    'type' => 'batch',
    'display' => $install_demo_content,
  );

  return $tasks;
}

/**
 * Shows the features form for the restaurant profile.
 */
function restaurant_select_features($form, &$form_state, &$install_state) {
  drupal_set_title(st('Select features'));
  $message = '<p class="lead">' . st('Select features for your restaurant.') . '</p>';

  $form = array();
  $form['configure_message'] = array(
    '#markup' => $message,
    '#weight' => -100,
  );

  $features = array();
  foreach (restaurant_get_apps() as $name => $app) {
    $features[$name] = $app['description'];
  }
  $form['features'] = array(
    '#type' => 'checkboxes',
    '#options' => $features,
    '#description' => t('Enable these features for your restaurant.'),
    '#prefix' => '<h4>' . t('Features') . '</h4>',
    '#default_value' => array_keys($features),
  );

  $form['demo_content'] = array(
    '#type' => 'checkbox',
    '#title' => st('Install demo content?'),
    '#description' => st('Install demo content such as menus, events and blog posts.'),
    '#default_value' => '1',
  );

  $form['actions'] = array(
    '#type' => 'actions',
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => st("Install"),
    '#weight' => 10,
    '#attributes' => array(
      'class' => array('btn', 'btn-lg', 'btn-primary'),
    ),
  );

  return $form;
}

function restaurant_select_features_submit($form, &$form_state) {
  variable_set('restaurant_features', $form_state['values']['features']);
  variable_set('restaurant_demo_content', $form_state['values']['demo_content']);
}

/**
 * Install selected features for restaurant
 */
function restaurant_install_features() {
  $operations = array();

  // Build an array of apps to enable and disable.
  $features = variable_get('restaurant_features', array_keys(restaurant_get_apps()));
  $apps = restaurant_get_apps();
  foreach ($apps as $name => $app) {
    if (in_array($name, $features)) {
      $enable[] = $name;
    }
  }

  // Build operations for batch.
  $operations += _restaurant_build_modules_operations($enable, '_restaurant_enable_module');

  $batch = array(
    'title' => st('Installing features'),
    'operations' => $operations,
  );

  return $batch;
}


