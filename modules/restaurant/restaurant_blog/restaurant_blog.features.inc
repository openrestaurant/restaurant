<?php
/**
 * @file
 * restaurant_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function restaurant_blog_ctools_plugin_api($module = NULL, $api = NULL) {
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
 * Implements hook_views_api().
 */
function restaurant_blog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function restaurant_blog_image_default_styles() {
  $styles = array();

  // Exported image style: blog_post_image__featured.
  $styles['blog_post_image__featured'] = array(
    'label' => 'Blog post image (featured)',
    'effects' => array(
      19 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 165,
          'height' => 125,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: blog_post_image__full.
  $styles['blog_post_image__full'] = array(
    'label' => 'Blog post image (full)',
    'effects' => array(
      26 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 375,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: blog_post_image__teaser.
  $styles['blog_post_image__teaser'] = array(
    'label' => 'Blog post image (teaser)',
    'effects' => array(
      22 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 375,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function restaurant_blog_node_info() {
  $items = array(
    'blog_post' => array(
      'name' => t('Blog Post'),
      'base' => 'node_content',
      'description' => t('Use this content type to create a blog post.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
