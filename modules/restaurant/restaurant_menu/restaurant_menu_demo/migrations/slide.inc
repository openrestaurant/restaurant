<?php
/**
 * @file
 * Migration file for Slides.
 */

// Migration class
class RestaurantMenuMigrateSlideMigration extends Migration {

  public function __construct($arguments = array()) {
    $this->arguments = $arguments;
    parent::__construct($arguments);

    $this->modulePath = drupal_get_path('module', 'restaurant_menu_demo');
    $this->data = $this->modulePath . '/data/slides.csv';
    $this->description = t('Import slides for Slideshows.');
    $this->dependencies = array('RestaurantMenuMigrateSlideshowMigration');
    $this->source = new MigrateSourceCSV($this->data, $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationFieldCollection(
      'field_slideshow_slides',
      array('host_entity_type' => 'fieldable_panels_pane')
    );

    // Create a map object for tracking the relationships between source rows.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'slide_id' => array(
          'type' => 'int',
          'not null' => true,
        ),
      ),
      MigrateDestinationFieldCollection::getKeySchema()
    );

    // Fields Mapping
    $this->addFieldMapping('host_entity_id', 'slideshow_id')->sourceMigration('RestaurantMenuMigrateSlideshow');
    $this->addFieldMapping('field_slideshow_caption', 'caption');

    // Image.
    $this->addFieldMapping('field_slideshow_image', 'image');
    $this->addFieldMapping('field_slideshow_image:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_slideshow_image:source_dir')->defaultValue($this->modulePath . '/data/images/slides');
  }

  function csvcolumns() {
    return array(
      array('slide_id', 'slide_id'),
      array('slideshow_id', 'slideshow_id'),
      array('image', 'image'),
      array('caption', 'caption'),
    );
  }
}
