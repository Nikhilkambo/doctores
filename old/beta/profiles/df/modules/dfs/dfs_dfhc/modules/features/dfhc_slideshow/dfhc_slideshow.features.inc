<?php
/**
 * @file
 * dfhc_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dfhc_slideshow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function dfhc_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: homepage_cta_banner.
  $styles['homepage_cta_banner'] = array(
    'label' => 'Homepage CTA Banner',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1370,
          'height' => 450,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function dfhc_slideshow_node_info() {
  $items = array(
    'slideshow' => array(
      'name' => t('Slide'),
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
