<?php

/**
 * Implements hook_form_FORM_ID_alter().
 */
function restaurant_form_install_configure_form_alter(&$form, $form_state) {
  // No changes for drush.
  if (drupal_is_cli()) {
    return;
  }

  // Add a default site name.
  if (empty($form['site_information']['site_name']['#default_value'])) {
    $form['site_information']['site_name']['#default_value'] = DISTRIBUTION_NAME;
  }

  // Change title for admin account.
  $form['admin_account']['#title'] = t('Administration account');
  
  // Hide Server Settings.
  $form['server_settings']['#access'] = FALSE;

  // Hide Update Notifications.
  $form['update_notifications']['#access'] = FALSE;
}
