<?php
/**
 * @file
 * dfs_dfhc.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function dfs_dfhc_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['panels_mini-footer_panel'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'footer_panel',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'panels_mini',
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
        'region' => 'footer_bottom',
        'status' => 1,
        'theme' => 'healthdemo',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
