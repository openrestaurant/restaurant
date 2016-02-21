<?php
///**
// * @file
// * Migration file for Restaurant Menu module
// */
//
///**
// * Implements hook_migrate_api().
// */
//function restaurant_location_demo_migrate_api() {
//  return array(
//    'api' => 2,
//    'migrations' => array(
//      'RestaurantLocationMigrateLocation' => array(
//        'class_name' => 'RestaurantLocationMigrateLocationMigration',
//      ),
//    ),
//  );
//}
//
//// Migration class
//class RestaurantLocationMigrateLocationMigration extends Migration {
//
//  public function __construct() {
//    parent::__construct();
//    $this->data = drupal_get_path('module', 'restaurant_location_demo') . '/data/locations.csv';
//    $this->description = t('Import location nodes.');
//
//    // Add dependency on migrated menu.
//    $this->dependencies[] = 'RestaurantMenuMigrateMenu';
//
//    // Create a map object for tracking the relationships between source rows
//    $this->map = new MigrateSQLMap($this->machineName,
//      array(
//        'title' => array(
//          'type' => 'varchar',
//          'length' => 255,
//          'not null' => TRUE,
//        ),
//      ),
//      MigrateDestinationNode::getKeySchema()
//    );
//
//    // Create a MigrateSource object.
//    $this->source = new MigrateSourceCSV($this->data, $this->csvcolumns(), array('header_rows' => 1));
//
//    $this->destination = new MigrateDestinationNode('location', array('text_format' => 'panopoly_html_text'));
//
//    // Fields Mapping
//    $this->addFieldMapping('title', 'title');
//    $this->addFieldMapping('body', 'body');
//
//    $this->addFieldMapping('field_location_contact', 'contact');
//    $this->addFieldMapping('field_location_opening_hours', 'hours');
//    $this->addFieldMapping('field_location_address', 'thoroughfare');
//
//    $this->addFieldMapping('field_location_images', 'images');
//    $this->addFieldMapping('field_location_images:file_replace')
//      ->defaultValue(FILE_EXISTS_REPLACE);
//    $this->addFieldMapping('field_location_images:source_dir')
//      ->defaultValue(drupal_get_path('module', 'restaurant_location_demo') . '/import/images');
//  }
//
//  function csvcolumns() {
//    // "Title","Body","Contact","Images","Opening Hours","Thoroughfare","Locality","Administrative Area","Postal Code","Country"
//    $columns[] = array('title', 'Title');
//    $columns[] = array('body', 'Body');
//    $columns[] = array('contact', 'Contact');
//    $columns[] = array('images', 'Images');
//    $columns[] = array('hours', 'Opening Hours');
//    $columns[] = array('thoroughfare', 'Thoroughfare');
//    $columns[] = array('locality', 'Locality');
//    $columns[] = array('administrative_area', 'Administrative Area');
//    $columns[] = array('postal_code', 'Postal Code');
//    $columns[] = array('country', 'Country');
//    return $columns;
//  }
//
//  public function prepare(stdClass $node, stdClass $row) {
//    // Fix locations.
//    $node->field_location_address[LANGUAGE_NONE][0] = array(
//      'thoroughfare' => $row->thoroughfare,
//      'locality' => $row->locality,
//      'administrative_area' => $row->administrative_area,
//      'postal_code' => $row->postal_code,
//      'country' => $row->country,
//    );
//  }
//
//  public function complete($node, stdClass $row) {
//    // Update migrate demo menus' location.
//    $demo_menus = restaurant_location_get_migrated_menus();
//    if (count($demo_menus)) {
//      // Pick two random menus from the demo menus.
//      shuffle($demo_menus);
//      $menus = array_slice($demo_menus, 0, 2);
//
//      // Update location for these menus.
//      foreach ($menus as $menu_nid) {
//        $menu = node_load($menu_nid);
//        $menu->field_menu_locations[LANGUAGE_NONE][] = array('target_id' => $node->nid);
//        node_save($menu);
//      }
//    }
//  }
//}
