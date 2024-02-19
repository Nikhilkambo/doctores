<?php
/**
 * @file
 * dfhc_call_to_action.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dfhc_call_to_action_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function dfhc_call_to_action_node_info() {
  $items = array(
    'call_to_action' => array(
      'name' => t('Call to Action'),
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
