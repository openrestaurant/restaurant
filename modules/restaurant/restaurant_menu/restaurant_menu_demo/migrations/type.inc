<?php
/**
 * @file
 * Migration file for Nutrition Types.
 */

// Migration class
class RestaurantMenuMigrateTypeMigration extends Migration {

  public function __construct($arguments = array()) {
    $this->arguments = $arguments;
    parent::__construct($arguments);

    $this->data = drupal_get_path('module', 'restaurant_menu_demo') . '/data/types.csv';
    $this->description = t('Import nutrition types terms.');
    $this->source = new MigrateSourceCSV($this->data, $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationTerm('nutrition_types', array('text_format' => 'panopoly_html_text'));

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

    $this->addFieldMapping('field_nutrition_types_icon', 'icon');
    $this->addFieldMapping('field_nutrition_types_icon:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_nutrition_types_icon:source_dir')
      ->defaultValue(drupal_get_path('module', 'restaurant_menu_demo') . '/data/images/types');
  }

  function csvcolumns() {
    return array(
      array('name', 'name'),
      array('icon', 'icon'),
      array('image', 'image'),
    );
  }
}
