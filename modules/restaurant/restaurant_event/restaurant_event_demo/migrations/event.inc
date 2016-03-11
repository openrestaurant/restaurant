<?php
/**
 * @file
 * Migration file for Blog Posts.
 */

// Migration class
class RestaurantEventMigrateEventMigration extends Migration {

  public function __construct($arguments = array()) {
    $this->arguments = $arguments;
    parent::__construct($arguments);

    $this->modulePath = drupal_get_path('module', 'restaurant_event_demo');
    $this->data = $this->modulePath . '/data/events.csv';
    $this->description = t('Import events nodes.');
    $this->source = new MigrateSourceCSV($this->data, $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationNode('event', array('text_format' => 'panopoly_html_text'));

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

    $this->addFieldMapping('field_event_categories', 'category')->separator(', ');
    $this->addFieldMapping('field_event_categories:create_term')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_event_images', 'image');
    $this->addFieldMapping('field_event_images:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_event_images:source_dir')
      ->defaultValue($this->modulePath . '/data/images');

    $this->addFieldMapping('field_event_featured', 'featured');
    $this->addFieldMapping('field_event_date', 'date');

    $this->addFieldMapping('field_event_location:administrative_area', 'administrative_area');
    $this->addFieldMapping('field_event_location:locality', 'locality');
    $this->addFieldMapping('field_event_location:postal_code', 'postal_code');
    $this->addFieldMapping('field_event_location:thoroughfare', 'thoroughfare');
    $this->addFieldMapping('field_event_location:country', 'country');

    $this->addFieldMapping('uid', 'uid')->defaultValue(1);
  }

  function csvcolumns() {
    return array(
      array('title', 'title'),
      array('image', 'image'),
      array('category', 'category'),
      array('body', 'body'),
      array('featured', 'featured'),
      array('date', 'date'),
      array('thoroughfare', 'thoroughfare'),
      array('locality', 'locality'),
      array('administrative_area', 'administrative_area'),
      array('postal_code', 'postal_code'),
      array('country', 'country'),
    );
  }

  function prepareRow($row) {
    // Set date as future date.
    $row->date = time() + (60 * 60 * 24 * rand(7, 14));
  }

  public function prepare(stdClass $node, stdClass $row) {
    // Fix locations.
    $node->field_event_location[LANGUAGE_NONE][0] = array(
      'thoroughfare' => $row->thoroughfare,
      'locality' => $row->locality,
      'administrative_area' => $row->administrative_area,
      'postal_code' => $row->postal_code,
      'country' => $row->country,
    );
  }
}
