<?php
/**
 * @file
 * Migration file for Text fieldable panels panes.
 */

// Migration class
class RestaurantReservationDemoMigrateTextMigration extends Migration {

  public function __construct($arguments = array()) {
    $this->arguments = $arguments;
    parent::__construct($arguments);

    $this->modulePath = drupal_get_path('module', 'restaurant_reservation_demo');
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
    $this->addFieldMapping('title', 'admin_title');
    $this->addFieldMapping('admin_title', 'admin_title');
    $this->addFieldMapping('category', 'category');
    $this->addFieldMapping('field_basic_text_text', 'field_basic_text_text');
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
