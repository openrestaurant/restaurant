<?php
/**
 * @file
 * Migration file for Slideshows.
 */

// Migration class
class RestaurantBlogMigrateTextMigration extends Migration {

  public function __construct($arguments) {
    $this->arguments = $arguments;
    parent::__construct($arguments);

    $this->modulePath = drupal_get_path('module', 'restaurant_blog_demo');
    $this->data = $this->modulePath . '/data/texts.csv';
    $this->description = t('Import fieldable panels panes.');
    $this->source = new MigrateSourceCSV($this->data, $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationFieldablePanelsPanes('text', array(
      'text_format' => 'panopoly_html_text'
    ));

    // Create a map object for tracking the relationships between source rows.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'int',
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationFieldablePanelsPanes::getKeySchema()
    );

    // Fields Mapping.
    $this->addFieldMapping('uuid', 'uuid');
    $this->addFieldMapping('bundle', 'bundle');
    $this->addFieldMapping('reusable', 'reusable');
    $this->addFieldMapping('admin_title', 'admin_title');
    $this->addFieldMapping('category', 'category');
    $this->addFieldMapping('field_basic_text_text', 'field_basic_text_text');
    $this->addFieldMapping('uid', 'uid')->defaultValue(1);
  }

  function csvcolumns() {
    return array(
      array('uuid', 'uuid'),
      array('id', 'id'),
      array('bundle', 'bundle'),
      array('reusable', 'reusable'),
      array('admin_title', 'admin_title'),
      array('category', 'category'),
      array('field_basic_text_text', 'field_basic_text_text'),
    );
  }
}
