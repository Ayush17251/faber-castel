<?php
/**
 * @file
 * ct_news.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ct_news_node_info() {
  $items = array(
    'events' => array(
      'name' => t('Events'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('Employee News'),
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
