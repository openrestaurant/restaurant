<?php

/**
 * @file
 * Admin callbacks for the restaurant_blog module.
 */

/**
 * Page callback for admin/blog_posts/manage.
 */
function restaurant_blog_manage_blog_posts_admin() {
  return menu_execute_active_handler('admin/blog_posts');
}

/**
 * Page callback for admin/blog_posts/add.
 */
function restaurant_blog_add_blog_post_admin() {
  // Return content for node/add/blog_post path.
  return menu_execute_active_handler('node/add/blog-post');
}

/**
 * Page callback for admin/blog_posts/categories.
 */
function restaurant_blog_blog_categories_admin() {
  // Return content for admin/structure/taxonomy/blog_categories.
  return menu_execute_active_handler('admin/structure/taxonomy/blog_categories');
}

/**
 * Page callback for admin/blog_posts/categories/add.
 */
function restaurant_blog_add_blog_category_admin() {
  // Return content for admin/structure/taxonomy/blog_categories/add path.
  return menu_execute_active_handler('admin/structure/taxonomy/blog_categories/add');
}
