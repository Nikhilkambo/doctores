<?php
/**
 * @file
 * dfhc_static_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dfhc_static_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function dfhc_static_pages_node_info() {
  $items = array(
    'static_page' => array(
      'name' => t('static page'),
      'base' => 'node_content',
      'description' => t('Static page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
