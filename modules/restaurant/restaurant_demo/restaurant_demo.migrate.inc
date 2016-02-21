<?php
/**
 * @file
 * Migration file for Restaurant Menu module
 */

/**
 * Implements hook_migrate_api().
 */
function restaurant_demo_migrate_api() {
  return array(
    'api' => 2,
    'migrations' => array(
      'RestaurantDemoMigratePageBanner' => array(
        'class_name' => 'RestaurantDemoMigratePageBannerMigration',
      ),
      'RestaurantDemoMigrateTexts' => array(
        'class_name' => 'RestaurantDemoMigrateTextsMigration',
      ),
    ),
  );
}

// Migration class
class RestaurantDemoMigratePageBannerMigration extends Migration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import page banner panes.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationEntityAPI::getKeySchema('fieldable_panels_pane', 'page_banner')
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'restaurant_demo') . '/import/page_banners.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationEntityAPI('fieldable_panels_pane', 'page_banner', array('text_format' => 'panopoly_html_text'));

    // Fields Mapping
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('field_page_banner_text', 'text');
    $this->addFieldMapping('field_page_banner_type', 'type');
    $this->addFieldMapping('field_page_banner_bg_color', 'bgcolor');
    $this->addFieldMapping('field_page_banner_text_color', 'color');

    $this->addFieldMapping('field_page_banner_image', 'image');
    $this->addFieldMapping('field_page_banner_image:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_page_banner_image:source_dir')
      ->defaultValue(drupal_get_path('module', 'restaurant_demo') . '/import/images');

    $this->addFieldMapping('uid', 'uid')->defaultValue(1);
  }

  function csvcolumns() {
    // "Title","Text","Type","Image","Bgcolor","Color"
    $columns[] = array('title', 'Title');
    $columns[] = array('text', 'Text');
    $columns[] = array('type', 'Type');
    $columns[] = array('image', 'Image');
    $columns[] = array('bgcolor', 'Bgcolor');
    $columns[] = array('color', 'Color');
    $columns[] = array('overrides', 'Overrides');
    return $columns;
  }

  public function prepare(stdClass $pane, stdClass $row) {
    $pane->reusable = 1;
    $pane->admin_title = $row->title;
    $pane->category = 'Page banners';

    // Fix for rgb fields.
    $pane->field_page_banner_bg_color[LANGUAGE_NONE][0]['rgb'] = $row->bgcolor;
    $pane->field_page_banner_text_color[LANGUAGE_NONE][0]['rgb'] = $row->color;

    // Add some custom buttons.
    $pane->field_page_banner_links[LANGUAGE_NONE][] = array(
      'url' => 'menus',
      'title' => t('View Menus|success'),
    );
    if (module_exists('restaurant_reservation')) {
      $pane->field_page_banner_links[LANGUAGE_NONE][] = array(
        'url' => 'reservation',
        'title' => t('Book a table|primary'),
      );
    }
  }

  public function complete($pane, stdClass $row) {
    // Save overrides.
    if ($row->overrides) {
      variable_set($row->overrides, $pane->fpid);
    }
  }
}

// Migration class
class RestaurantDemoMigrateTextsMigration extends Migration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import text panes.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationEntityAPI::getKeySchema('fieldable_panels_pane', 'text')
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'restaurant_demo') . '/import/texts.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationEntityAPI('fieldable_panels_pane', 'text', array('text_format' => 'panopoly_html_text'));

    // Fields Mapping
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('field_basic_text_text', 'text');

    $this->addFieldMapping('uid', 'uid')->defaultValue(1);
  }

  function csvcolumns() {
    // "Title","Text","Overrides"
    $columns[] = array('title', 'Title');
    $columns[] = array('text', 'Text');
    $columns[] = array('overrides', 'Overrides');
    return $columns;
  }

  public function prepare(stdClass $pane, stdClass $row) {
    $pane->reusable = 1;
    $pane->admin_title = $row->title;
    $pane->category = 'Reusable Content';
  }

  public function complete($pane, stdClass $row) {
    // Save overrides.
    if ($row->overrides) {
      variable_set($row->overrides, $pane->fpid);
    }
  }
}
