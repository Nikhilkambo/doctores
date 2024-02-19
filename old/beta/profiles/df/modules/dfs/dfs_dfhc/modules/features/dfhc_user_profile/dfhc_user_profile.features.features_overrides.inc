<?php
/**
 * @file
 * dfhc_user_profile.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function dfhc_user_profile_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_group
  $overrides["field_group.group_account|user|user|form.data|format_settings|formatter"] = 'open';
  $overrides["field_group.group_account|user|user|form.data|format_settings|instance_settings|classes"] = 'group-account field-group-tab ';
  $overrides["field_group.group_account|user|user|form.data|format_settings|instance_settings|id"]["DELETED"] = TRUE;
  $overrides["field_group.group_account|user|user|form.data|format_settings|label"] = 'Account';
  $overrides["field_group.group_account|user|user|form.data|format_type"] = 'tab';
  $overrides["field_group.group_locale|user|user|form.data|format_settings|instance_settings|id"]["DELETED"] = TRUE;
  $overrides["field_group.group_locale|user|user|form.data|format_type"] = 'tab';
  $overrides["field_group.group_profile|user|user|form.data|format_settings|instance_settings|id"]["DELETED"] = TRUE;
  $overrides["field_group.group_profile|user|user|form.data|format_type"] = 'tab';
  $overrides["field_group.group_user_tabs|user|user|form.data|format_settings|instance_settings|classes"] = '';
  $overrides["field_group.group_user_tabs|user|user|form.data|format_settings|instance_settings|id"] = '';
  $overrides["field_group.group_user_tabs|user|user|form.data|format_type"] = 'tabs';

 return $overrides;
}
