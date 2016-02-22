<?php
/**
 * @file
 * restaurant_menu.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function restaurant_menu_commerce_product_default_types() {
  $items = array(
    'menu_type' => array(
      'type' => 'menu_type',
      'name' => 'Menu type',
      'description' => '',
      'help' => '',
      'revision' => 0,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function restaurant_menu_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_entityqueue_api().
 */
function restaurant_menu_entityqueue_api($module = NULL, $api = NULL) {
  if ($module == "entityqueue" && $api == "entityqueue_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function restaurant_menu_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function restaurant_menu_image_default_styles() {
  $styles = array();

  // Exported image style: filters_icon.
  $styles['filters_icon'] = array(
    'label' => 'Filters icon',
    'effects' => array(
      15 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 20,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -10,
      ),
      16 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 20,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: menu_categories_icon__navigation.
  $styles['menu_categories_icon__navigation'] = array(
    'label' => 'Menu categories icon (navigation)',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 45,
          'height' => 45,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: menu_categories_image__grid.
  $styles['menu_categories_image__grid'] = array(
    'label' => 'Menu categories image (grid)',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 450,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: menu_categories_image__stacked.
  $styles['menu_categories_image__stacked'] = array(
    'label' => 'Menu categories image (stacked)',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 450,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: menu_categories_thumbnail.
  $styles['menu_categories_thumbnail'] = array(
    'label' => 'Menu categories thumbnail',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 45,
          'height' => 45,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: menu_image__featured.
  $styles['menu_image__featured'] = array(
    'label' => 'Menu image (featured)',
    'effects' => array(
      21 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 295,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: menu_image__full.
  $styles['menu_image__full'] = array(
    'label' => 'Menu image (full)',
    'effects' => array(
      24 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 375,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: menu_image__grid.
  $styles['menu_image__grid'] = array(
    'label' => 'Menu image (grid)',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 215,
          'height' => 130,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: menu_image__stacked.
  $styles['menu_image__stacked'] = array(
    'label' => 'Menu image (stacked)',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 160,
          'height' => 120,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: nutrition_types_icon.
  $styles['nutrition_types_icon'] = array(
    'label' => 'Nutrition types icon',
    'effects' => array(
      12 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 18,
          'upscale' => 0,
        ),
        'weight' => -10,
      ),
      11 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 18,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -9,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function restaurant_menu_node_info() {
  $items = array(
    'menu' => array(
      'name' => t('Menu'),
      'base' => 'node_content',
      'description' => t('Use this content type to create a menu with a title, types and images.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
