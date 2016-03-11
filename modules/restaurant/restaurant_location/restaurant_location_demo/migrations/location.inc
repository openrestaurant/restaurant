<?php
/**
 * @file
 * Migration file for Blog Posts.
 */

// Migration class
class RestaurantLocationMigrateLocationMigration extends Migration {

  public function __construct($arguments = array()) {
    $this->arguments = $arguments;
    parent::__construct($arguments);

    $this->modulePath = drupal_get_path('module', 'restaurant_location_demo');
    $this->data = $this->modulePath . '/data/locations.csv';
    $this->description = t('Import locations nodes.');
    $this->source = new MigrateSourceCSV($this->data, $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationNode('location', array('text_format' => 'panopoly_html_text'));

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

    $this->addFieldMapping('field_location_contact', 'contact');
    $this->addFieldMapping('field_location_opening_hours', 'opening_hours');

    $this->addFieldMapping('field_location_images', 'images');
    $this->addFieldMapping('field_location_images:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_location_images:source_dir')
      ->defaultValue($this->modulePath . '/data/images');

    $this->addFieldMapping('field_location_address:administrative_area', 'administrative_area');
    $this->addFieldMapping('field_location_address:locality', 'locality');
    $this->addFieldMapping('field_location_address:postal_code', 'postal_code');
    $this->addFieldMapping('field_location_address:thoroughfare', 'thoroughfare');
    $this->addFieldMapping('field_location_address:country', 'country');

    $this->addFieldMapping('uid', 'uid')->defaultValue(1);
  }

  function csvcolumns() {
    return array(
      array('title', 'title'),
      array('body', 'body'),
      array('contact', 'contact'),
      array('images', 'images'),
      array('icon', 'icon'),
      array('opening_hours', 'opening_hours'),
      array('thoroughfare', 'thoroughfare'),
      array('locality', 'locality'),
      array('administrative_area', 'administrative_area'),
      array('postal_code', 'postal_code'),
      array('country', 'country'),
    );
  }

  public function prepare(stdClass $node, stdClass $row) {
    // Fix locations.
    $node->field_location_address[LANGUAGE_NONE][0] = array(
      'thoroughfare' => $row->thoroughfare,
      'locality' => $row->locality,
      'administrative_area' => $row->administrative_area,
      'postal_code' => $row->postal_code,
      'country' => $row->country,
    );
  }
}
