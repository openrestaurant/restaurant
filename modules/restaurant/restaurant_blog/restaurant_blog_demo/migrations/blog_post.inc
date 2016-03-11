<?php
/**
 * @file
 * Migration file for Blog Posts.
 */

// Migration class
class RestaurantBlogMigrateBlogPostMigration extends Migration {

  public function __construct($arguments = array()) {
    $this->arguments = $arguments;
    parent::__construct($arguments);

    $this->data = drupal_get_path('module', 'restaurant_blog_demo') . '/data/blog_posts.csv';
    $this->description = t('Import blog posts nodes.');
    $this->source = new MigrateSourceCSV($this->data, $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationNode('blog_post', array('text_format' => 'panopoly_html_text'));

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Fields Mapping
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'body');

    $this->addFieldMapping('field_blog_post_categories', 'category')->separator(', ');
    $this->addFieldMapping('field_blog_post_categories:create_term')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_blog_post_featured_image', 'image');
    $this->addFieldMapping('field_blog_post_featured_image:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_blog_post_featured_image:source_dir')
      ->defaultValue(drupal_get_path('module', 'restaurant_blog_demo') . '/data/images');

    $this->addFieldMapping('uid', 'uid')->defaultValue(1);
  }

  function csvcolumns() {
    return array(
      array('title', 'title'),
      array('image', 'image'),
      array('category', 'category'),
      array('body', 'body'),
    );
  }
}
