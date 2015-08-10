<?php
/**
 * @file
 * calendar_feature.features.inc
 */

/**
 * Implements hook_views_api().
 */
function calendar_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function calendar_feature_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Calendar events'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event_contact' => array(
      'name' => t('Event Contact'),
      'base' => 'node_content',
      'description' => t('Contact people for a specific event'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
