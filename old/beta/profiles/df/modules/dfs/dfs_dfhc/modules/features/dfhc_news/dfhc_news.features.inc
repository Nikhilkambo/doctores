<?php
/**
 * @file
 * dfhc_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dfhc_news_ctools_plugin_api($module = NULL, $api = NULL) {
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
function dfhc_news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News Articles'),
      'base' => 'node_content',
      'description' => t('News for time-sensitive content like papers, news, press releases or blogs.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
