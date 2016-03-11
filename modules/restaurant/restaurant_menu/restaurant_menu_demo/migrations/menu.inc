<?php
/**
 * @file
 * Migration file for Menu Posts.
 */

// Migration class
class RestaurantMenuMigrateMenuMigration extends Migration {

  public function __construct($arguments = array()) {
    $this->arguments = $arguments;
    parent::__construct($arguments);

    $this->data = drupal_get_path('module', 'restaurant_menu_demo') . '/data/menus.csv';

    // Set the sample size to fewer if max_execution_time is less than 60 or on Pantheon.
    if (ini_get('max_execution_time') < 60 || defined('PANTHEON_ENVIRONMENT')) {
      $this->data = drupal_get_path('module', 'restaurant_menu_demo') . '/data/menus-few.csv';
    }

    $this->description = t('Import menu nodes.');
    $this->source = new MigrateSourceCSV($this->data, $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationNode('menu', array('text_format' => 'panopoly_html_text'));
//    $this->dependencies = array('RestaurantMenuMigrateCategoryMigration', 'RestaurantMenuMigrateTypeMigration');

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

    $this->addFieldMapping('field_menu_featured', 'featured');
    $this->addFieldMapping('field_menu_one_liner', 'one_liner');
    $this->addFieldMapping('field_menu_teaser_text', 'teaser_text');

    $this->addFieldMapping('field_menu_categories', 'categories')->separator(', ');
    $this->addFieldMapping('field_menu_categories:create_term')
      ->defaultValue('tid');

    $this->addFieldMapping('field_menu_nutrition_types', 'types')
      ->separator(', ')
      ->sourceMigration(array('RestaurantMenuMigrateType'));
//    $this->addFieldMapping('field_menu_nutrition_types:create_term')
//      ->defaultValue('tid');

    $this->addFieldMapping('field_menu_images', 'images');
    $this->addFieldMapping('field_menu_images:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_menu_images:source_dir')
      ->defaultValue(drupal_get_path('module', 'restaurant_menu_demo') . '/data/images/menus');

    $this->addFieldMapping('uid', 'uid')->defaultValue(1);
  }

  function csvcolumns() {
    // title,featured,categories,types,images,one_liner,teaser_text,body
    return array(
      array('title', 'title'),
      array('featured', 'featured'),
      array('categories', 'categories'),
      array('types', 'types'),
      array('images', 'images'),
      array('one_liner', 'one_liner'),
      array('teaser_text', 'teaser_text'),
      array('body', 'body'),
    );
  }

  public function preImport() {
    parent::preImport();

    // Create menu variants.
    foreach ($this->getSampleMenuVariants() as $sku => $variant) {
      if (!commerce_product_load_by_sku($sku)) {
        $product = commerce_product_new('menu_type');
        $product->sku = $sku;
        $product->title = $variant['title'];
        $product->language = LANGUAGE_NONE;
        $product->uid = 1;
        $product->commerce_price[LANGUAGE_NONE][0] = array(
          'amount' => $variant['price'] * 100,
          'currency_code' => commerce_default_currency(),
        );
        commerce_product_save($product);
      }
    }
  }

  public function complete($entity, stdClass $row) {
    // Ensure menus are added to entity queue.
    $queue = entityqueue_queue_load('menus_page');
    auto_entityqueue_add_entity_to_queue($entity, $queue);
  }

  public function prepare(stdClass $node, stdClass $row) {
    // Fix menu variants.
    // TODO: Implement migration for menu variants.
    foreach ($this->getSampleMenuVariants() as $sku => $variant) {
      if ($product = commerce_product_load_by_sku($sku)) {
        $node->field_menu_variants[LANGUAGE_NONE][] = array('product_id' => $product->product_id);
      }
    }

    // Fix locations.
    $locations = $this->getSampleLocations();
    if (count($locations)) {
      $node->field_menu_locations[LANGUAGE_NONE][] = array('target_id' => $locations[array_rand($locations)]);
      $node->field_menu_locations[LANGUAGE_NONE][] = array('target_id' => $locations[array_rand($locations)]);
    }
  }

  public function postRollback() {
    parent::postRollback();

    // Delete menu variants created in $this->preImport.
    foreach ($this->getSampleMenuVariants() as $sku => $variant) {
      if ($product = commerce_product_load_by_sku($sku)) {
        commerce_product_delete($product->product_id);
      }
    }
  }

  /**
   * Returns an array of sample menu types.
   * @return array
   */
  function getSampleMenuVariants() {
    return array(
      'cd70d' => array('title' => t('Regular'), 'price' => '0.99'),
      'e2188' => array('title' => t('Large'), 'price' => '1.99'),
    );
  }

  function getSampleLocations() {
    if (module_exists('restaurant_location')) {
      return restaurant_location_get_locations();
    }
    return array();
  }
}
