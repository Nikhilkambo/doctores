<?php

/**
 * @file
 * Defines a simple 2-column grid layout.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Columns (2) complete'),
  'icon' => 'preview.png',
  'category' => t('DemoHealth layouts'),
  'theme' => 'column_2_complete',
  'css' => '../../../styles/layouts/column-2-complete/column-2-complete.layout.css',
  'regions' => array(
    'header' => t('header'),
    'sidebar_first' => t('Left Content'),
    'sidebar_second' => t('Right Content'),
    'cta' => t('cta'),
  ),
);

/**
 * Implements hook_preprocess_grid_3().
 */
function template_preprocess_column_2_complete(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-display';
  $variables['attributes_array']['class'][] = 'panel-display--column-2-complete';
  $variables['classes_array'][] = 'panel-display';
  $variables['classes_array'][] = 'panel-display--column-2-complete';

  $layout = $variables['layout'];

  // Add information about the rendered sidebars, but only if the layout
  // actually supports sidebars.
  $matches = preg_grep('/^sidebar/', array_keys($layout['regions']));
  if ($matches) {
    $count = count(array_intersect($matches, array_keys(array_filter($variables['content']))));
    // No-one is going to have more than *nine* sidebars. Even nine is actually
    // already pretty unrealistic.
    $words = array('no', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine');

    // Wrap this in a isset() just in case someone is stupid enough to have more
    // than *nine* sidebar regions.
    if (isset($words[$count])) {
      $variables['attributes_array']['class'][] = "column-2-complete-has-{$words[$count]}-sidebar" . (($count !== 1) ? 's' : '');
      $variables['classes_array'][] = "column-2-complete-has-{$words[$count]}-sidebar" . (($count !== 1) ? 's' : '');
    }

    foreach ($matches as $name) {
      if (!empty($variables['content'][$name])) {
        $variables['attributes_array']['class'][] = 'column-2-complete-has-' . str_replace('_', '-', $name);
        $variables['classes_array'][] = 'column-2-complete-has-' . str_replace('_', '-', $name);
      }
    }
  }


  foreach ($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'column-2-complete-region';
    $variables['region_attributes_array'][$name]['class'][] = 'column-2-complete-region--' . drupal_clean_css_identifier($name);
    $variables['region_attributes_array'][$name]['class'][] = drupal_clean_css_identifier($name);
  }
}
