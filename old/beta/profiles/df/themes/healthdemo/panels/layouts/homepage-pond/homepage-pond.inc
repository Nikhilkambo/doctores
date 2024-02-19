<?php
// Plugin definition
$plugin = array(
  'title' => t('Homepage Pond'),
  'icon' => 'homepage-pond.png',
  'category' => t('DemoHealth layouts'),
  'theme' => 'homepage-pond',
  'css' => '../../../styles/layouts/homepage-pond/homepage-pond.layout.css',
  'regions' => array(
    'header' => t('Header'),
    'column1' => t('Row 1: First Column'),
    'column2' => t('Row 1: Second Column'),
    'column3' => t('Row 1: Third Column'),
    'secondarycolumn1' => t('Row 2: First Column'),
    'secondarycolumn2' => t('Row 2: Second Column'),
    'secondarycolumn3' => t('Row 2: Third Column'),
    'footer' => t('Footer'),
  ),
);
