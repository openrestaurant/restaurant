<?php

/**
 * Implements hook_form_FORM_ID_alter().
 */
function restaurant_form_install_configure_form_alter(&$form, $form_state) {
  // No changes for drush.
  if (drupal_is_cli()) {
    return;
  }
  
  // Hide Server Settings.
  $form['server_settings']['#access'] = FALSE;

  // Hide Update Notifications.
  $form['update_notifications']['#access'] = FALSE;
}
