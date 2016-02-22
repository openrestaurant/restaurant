<?php
/**
 * @file
 * restaurant_menu.entityqueue_default.inc
 */

/**
 * Implements hook_entityqueue_default_queues().
 */
function restaurant_menu_entityqueue_default_queues() {
  $export = array();

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'menus_page';
  $queue->label = 'Menus page';
  $queue->language = 'en';
  $queue->handler = 'simple';
  $queue->target_type = 'node';
  $queue->settings = array(
    'target_bundles' => array(
      'menu' => 'menu',
    ),
    'auto_add' => 1,
    'min_size' => '0',
    'max_size' => '0',
    'act_as_queue' => 1,
  );
  $export['menus_page'] = $queue;

  return $export;
}
