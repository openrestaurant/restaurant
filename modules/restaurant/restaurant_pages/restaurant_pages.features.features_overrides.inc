<?php
/**
 * @file
 * restaurant_pages.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function restaurant_pages_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-panopoly_page-body.settings|custom_add_another"] = '';
  $overrides["field_instance.node-panopoly_page-body.settings|custom_remove"] = '';
  $overrides["field_instance.node-panopoly_page-field_featured_categories.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-panopoly_page-field_featured_categories.display|default|type"] = 'hidden';
  $overrides["field_instance.node-panopoly_page-field_featured_categories.display|default|weight"] = 2;
  $overrides["field_instance.node-panopoly_page-field_featured_categories.settings|custom_add_another"] = '';
  $overrides["field_instance.node-panopoly_page-field_featured_categories.settings|custom_remove"] = '';
  $overrides["field_instance.node-panopoly_page-field_featured_image.settings|custom_add_another"] = '';
  $overrides["field_instance.node-panopoly_page-field_featured_image.settings|custom_remove"] = '';
  $overrides["field_instance.node-panopoly_page-field_featured_status.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-panopoly_page-field_featured_status.display|default|type"] = 'hidden';
  $overrides["field_instance.node-panopoly_page-field_featured_status.display|default|weight"] = 3;
  $overrides["field_instance.node-panopoly_page-field_featured_status.settings|custom_add_another"] = '';
  $overrides["field_instance.node-panopoly_page-field_featured_status.settings|custom_remove"] = '';

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.node_view_panelizer.weight"] = -26;

  // Exported overrides for: variable
  $overrides["variable.field_bundle_settings_node__panopoly_landing_page.value|extra_fields"] = array(
    'form' => array(),
    'display' => array(),
  );
  $overrides["variable.field_bundle_settings_node__panopoly_landing_page.value|view_modes"] = array(
    'grid' => array(
      'custom_settings' => FALSE,
    ),
    'stacked' => array(
      'custom_settings' => FALSE,
    ),
  );
  $overrides["variable.field_bundle_settings_node__panopoly_page.value|extra_fields|form|metatags"] = array(
    'weight' => 100,
  );
  $overrides["variable.field_bundle_settings_node__panopoly_page.value|extra_fields|form|redirect"] = array(
    'weight' => 30,
  );
  $overrides["variable.field_bundle_settings_node__panopoly_page.value|extra_fields|form|xmlsitemap"] = array(
    'weight' => 30,
  );
  $overrides["variable.field_bundle_settings_node__panopoly_page.value|view_modes|featured|custom_settings"] = FALSE;
  $overrides["variable.field_bundle_settings_node__panopoly_page.value|view_modes|grid"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__panopoly_page.value|view_modes|search_result|custom_settings"] = FALSE;
  $overrides["variable.field_bundle_settings_node__panopoly_page.value|view_modes|stacked"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__panopoly_page.value|view_modes|teaser|custom_settings"] = FALSE;
  $overrides["variable.menu_options_panopoly_page.value|0"] = 'menu-footer-menu';
  $overrides["variable.menu_options_panopoly_page.value|1"] = 'main-menu';
  $overrides["variable.page_manager_node_edit_disabled.value"] = TRUE;
  $overrides["variable.panelizer_defaults_node_panopoly_page.value|status"] = 0;
  $overrides["variable.panelizer_defaults_node_panopoly_page.value|view modes|search_result"] = array(
    'status' => 0,
    'default' => 0,
    'choice' => 0,
  );

 return $overrides;
}
