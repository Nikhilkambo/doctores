<?php
/**
 * @file
 * dfhc_search.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function dfhc_search_defaultconfig_features() {
  return array(
    'dfhc_search' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function dfhc_search_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access search_api_page'.
  $permissions['access search_api_page'] = array(
    'name' => 'access search_api_page',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_api_page',
  );

  return $permissions;
}
