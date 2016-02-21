<?php
/**
 * @file
 * restaurant_user.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function restaurant_user_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.pm_existing_pages_user_login_panel_context.conf|display|layout"] = 'radix_whelan';
  $overrides["page_manager_handlers.pm_existing_pages_user_password_panel_context.conf|display|layout"] = 'radix_whelan';
  $overrides["page_manager_handlers.pm_existing_pages_user_register_panel_context.conf|display|layout"] = 'radix_whelan';

 return $overrides;
}
