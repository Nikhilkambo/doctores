<?php
/**
 * @file
 * dfhc_search.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function dfhc_search_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['search_api_page-general_search'] = array(
    'cache' => 5,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'general_search',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'search_api_page',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'healthdemo' => array(
        'region' => 'secondary_menu_block',
        'status' => 1,
        'theme' => 'healthdemo',
        'weight' => -24,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
