<?php
/**
 * @file
 * dfs_dfhc.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dfs_dfhc_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'languageicons_placement';
  $strongarm->value = 'replace';
  $export['languageicons_placement'] = $strongarm;

  return $export;
}
