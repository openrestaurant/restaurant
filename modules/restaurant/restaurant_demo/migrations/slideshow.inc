<?php
/**
 * @file
 * Migration file for Slideshows.
 */

// Migration class
class RestaurantDemoMigrateSlideshowMigration extends Migration {

  public function __construct($arguments = array()) {
    $this->arguments = $arguments;
    parent::__construct($arguments);

    $this->modulePath = drupal_get_path('module', 'restaurant_demo');
    $this->data = $this->modulePath . '/data/slideshows.csv';
    $this->description = t('Import fieldable panels panes.');
    $this->source = new MigrateSourceCSV($this->data, $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationFieldablePanelsPanes('slideshow', array(
      'text_format' => 'panopoly_html_text'
    ));

    // Create a map object for tracking the relationships between source rows.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'slideshow_id' => array(
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
    $this->addFieldMapping('uid', 'uid')->defaultValue(1);
  }

  function csvcolumns() {
    return array(
      array('uuid', 'uuid'),
      array('slideshow_id', 'slideshow_id'),
      array('bundle', 'bundle'),
      array('reusable', 'reusable'),
      array('admin_title', 'admin_title'),
      array('category', 'category'),
    );
  }
}
