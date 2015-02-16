<?php
/**
 * @file
 * deploy_development_process.features.inc
 */

/**
 * Implements hook_node_info().
 */
function deploy_development_process_node_info() {
  $items = array(
    'development_process' => array(
      'name' => t('Development_Process'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
