<?php
/**
 * @file
 * dfhc_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dfhc_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_page_panels_search_api_page_disabled_general_search';
  $strongarm->value = FALSE;
  $export['search_api_page_panels_search_api_page_disabled_general_search'] = $strongarm;

  return $export;
}
