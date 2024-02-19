<?php
/**
 * @file
 * dfhc_user_profile.features.inc
 */

/**
 * Implements hook_field_group_info_alter().
 */
function dfhc_user_profile_field_group_info_alter(&$data) {
  if (isset($data['group_account|user|user|form'])) {
    $data['group_account|user|user|form']->data['format_settings']['formatter'] = 'open'; /* WAS: 'closed' */
    $data['group_account|user|user|form']->data['format_settings']['instance_settings']['classes'] = 'group-account field-group-tab '; /* WAS: '' */
    $data['group_account|user|user|form']->data['format_settings']['label'] = 'Account'; /* WAS: '' */
    $data['group_account|user|user|form']->data['format_type'] = 'tab'; /* WAS: 'htab' */
    unset($data['group_account|user|user|form']->data['format_settings']['instance_settings']['id']);
  }
  if (isset($data['group_locale|user|user|form'])) {
    $data['group_locale|user|user|form']->data['format_type'] = 'tab'; /* WAS: 'htab' */
    unset($data['group_locale|user|user|form']->data['format_settings']['instance_settings']['id']);
  }
  if (isset($data['group_profile|user|user|form'])) {
    $data['group_profile|user|user|form']->data['format_type'] = 'tab'; /* WAS: 'htab' */
    unset($data['group_profile|user|user|form']->data['format_settings']['instance_settings']['id']);
  }
  if (isset($data['group_user_tabs|user|user|form'])) {
    $data['group_user_tabs|user|user|form']->data['format_settings']['instance_settings']['classes'] = ''; /* WAS: 'group-user-tabs field-group-htabs' */
    $data['group_user_tabs|user|user|form']->data['format_settings']['instance_settings']['id'] = ''; /* WAS: '' */
    $data['group_user_tabs|user|user|form']->data['format_type'] = 'tabs'; /* WAS: 'htabs' */
  }
}
