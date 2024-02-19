<?php
/**
 * @file
 * dfhc_conditions_and_treatments.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dfhc_conditions_and_treatments_ctools_plugin_api($module = NULL, $api = NULL) {
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
function dfhc_conditions_and_treatments_node_info() {
  $items = array(
    'condition_treatment' => array(
      'name' => t('Condition / Treatment'),
      'base' => 'node_content',
      'description' => t('To learn about available health services for Condition and be able to navigate to the corresponding departments that offer these services.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
