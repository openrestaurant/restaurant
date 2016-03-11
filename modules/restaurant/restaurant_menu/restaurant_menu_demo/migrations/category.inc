<?php
/**
 * @file
 * Migration file for Menu Categories.
 */

// Migration class
class RestaurantMenuMigrateCategoryMigration extends Migration {

  public function __construct($arguments = array()) {
    $this->arguments = $arguments;
    parent::__construct($arguments);

    $this->data = drupal_get_path('module', 'restaurant_menu_demo') . '/data/categories.csv';
    $this->description = t('Import menu categories terms.');
    $this->source = new MigrateSourceCSV($this->data, $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationTerm('menu_categories', array('text_format' => 'panopoly_html_text'));

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'name' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    // Fields Mapping
    $this->addFieldMapping('name', 'name');
    $this->addFieldMapping('description', 'description');

    $this->addFieldMapping('field_menu_categories_image', 'image');
    $this->addFieldMapping('field_menu_categories_image:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_menu_categories_image:source_dir')
      ->defaultValue(drupal_get_path('module', 'restaurant_menu_demo') . '/data/images/categories');

    $this->addFieldMapping('field_menu_categories_icon', 'icon');
    $this->addFieldMapping('field_menu_categories_icon:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_menu_categories_icon:source_dir')
      ->defaultValue(drupal_get_path('module', 'restaurant_menu_demo') . '/data/images/categories');
  }

  function csvcolumns() {
    return array(
      array('name', 'name'),
      array('description', 'description'),
      array('icon', 'icon'),
      array('image', 'image'),
    );
  }
}
