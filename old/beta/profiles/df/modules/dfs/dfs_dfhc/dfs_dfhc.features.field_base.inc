<?php
/**
 * @file
 * dfs_dfhc.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function dfs_dfhc_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_address'.
  $field_bases['field_address'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_address',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'lid' => array(
        0 => 'lid',
      ),
    ),
    'locked' => 0,
    'module' => 'location_cck',
    'settings' => array(
      'gmap_macro' => '[gmap zoom=10 |center=38.914272312597326,-97.734375 |width=317px |height=190px |control=Small |type=Map]',
      'gmap_marker' => 'lblue',
      'location_settings' => array(
        'display' => array(
          'hide' => array(
            'additional' => 0,
            'city' => 0,
            'coords' => 'coords',
            'country' => 0,
            'country_name' => 'country_name',
            'email' => 0,
            'fax' => 0,
            'locpick' => 'locpick',
            'map_link' => 'map_link',
            'name' => 0,
            'phone' => 0,
            'postal_code' => 0,
            'province' => 0,
            'province_name' => 'province_name',
            'street' => 0,
          ),
        ),
        'form' => array(
          'fields' => array(
            'additional' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -98,
            ),
            'city' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -97,
            ),
            'country' => array(
              'collect' => 1,
              'default' => 'us',
              'weight' => -94,
            ),
            'email' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -91,
            ),
            'fax' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -92,
            ),
            'locpick' => array(
              'collect' => 0,
              'weight' => -90,
            ),
            'name' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -100,
            ),
            'phone' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -93,
            ),
            'postal_code' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -95,
            ),
            'province' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -96,
              'widget' => 'autocomplete',
            ),
            'street' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -99,
            ),
          ),
        ),
      ),
      'personalize' => array(
        'agent_type' => 'personalize_target',
        'auto_start' => 1,
        'create_goal' => 1,
        'enabled' => 0,
        'stop_on_winner' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'location',
  );

  // Exported field_base: 'field_address_'.
  $field_bases['field_address_'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_address_',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'lid' => array(
        0 => 'lid',
      ),
    ),
    'locked' => 0,
    'module' => 'location_cck',
    'settings' => array(
      'gmap_macro' => '[gmap ]',
      'gmap_marker' => 'drupal',
      'location_settings' => array(
        'display' => array(
          'hide' => array(
            'additional' => 0,
            'city' => 0,
            'coords' => 'coords',
            'country' => 'country',
            'country_name' => 'country_name',
            'email' => 0,
            'fax' => 0,
            'locpick' => 'locpick',
            'map_link' => 'map_link',
            'name' => 0,
            'phone' => 0,
            'postal_code' => 0,
            'province' => 0,
            'province_name' => 'province_name',
            'street' => 0,
          ),
        ),
        'form' => array(
          'fields' => array(
            'additional' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -98,
            ),
            'city' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -97,
            ),
            'country' => array(
              'collect' => 1,
              'default' => 'us',
              'weight' => -94,
            ),
            'email' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -92,
            ),
            'fax' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -91,
            ),
            'locpick' => array(
              'collect' => 0,
              'weight' => -90,
            ),
            'name' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -100,
            ),
            'phone' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -93,
            ),
            'postal_code' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -95,
            ),
            'province' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -96,
              'widget' => 'autocomplete',
            ),
            'street' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -99,
            ),
          ),
        ),
      ),
      'personalize' => array(
        'agent_type' => 'personalize_target',
        'auto_start' => 1,
        'create_goal' => 1,
        'enabled' => 0,
        'stop_on_winner' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'location',
  );

  // Exported field_base: 'field_awards_and_accolades__'.
  $field_bases['field_awards_and_accolades__'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_awards_and_accolades__',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'personalize' => array(
        'agent_type' => 'personalize_target',
        'auto_start' => 1,
        'create_goal' => 1,
        'enabled' => 0,
        'stop_on_winner' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_banner_button'.
  $field_bases['field_banner_button'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_banner_button',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 100,
      'personalize' => array(
        'agent_type' => 'personalize_target',
        'enabled' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_banner_image'.
  $field_bases['field_banner_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_banner_image',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'personalize' => array(
        'agent_type' => 'personalize_target',
        'enabled' => 0,
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_banner_text'.
  $field_bases['field_banner_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_banner_text',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 200,
      'personalize' => array(
        'agent_type' => 'personalize_target',
        'enabled' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_banner_title'.
  $field_bases['field_banner_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_banner_title',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 24,
      'personalize' => array(
        'agent_type' => 'personalize_target',
        'enabled' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_board_memberships_'.
  $field_bases['field_board_memberships_'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_board_memberships_',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'personalize' => array(
        'agent_type' => 'personalize_target',
        'auto_start' => 1,
        'create_goal' => 1,
        'enabled' => 0,
        'stop_on_winner' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_condition_treatment'.
  $field_bases['field_condition_treatment'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_condition_treatment',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'condition_treatment' => 'condition_treatment',
        ),
      ),
      'personalize' => array(
        'agent_type' => 'personalize_target',
        'enabled' => 0,
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_cta'.
  $field_bases['field_cta'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_cta',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'call_to_action' => 'call_to_action',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_doctor_profile'.
  $field_bases['field_doctor_profile'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_doctor_profile',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'profile' => 'profile',
        ),
      ),
      'personalize' => array(
        'agent_type' => 'personalize_target',
        'enabled' => 0,
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_education_'.
  $field_bases['field_education_'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_education_',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'personalize' => array(
        'agent_type' => 'personalize_target',
        'auto_start' => 1,
        'create_goal' => 1,
        'enabled' => 0,
        'stop_on_winner' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_er_wait_time'.
  $field_bases['field_er_wait_time'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_er_wait_time',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'personalize' => array(
        'agent_type' => 'personalize_target',
        'enabled' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_first_name'.
  $field_bases['field_first_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_first_name',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'personalize' => array(
        'agent_type' => 'personalize_target',
        'auto_start' => 1,
        'create_goal' => 1,
        'enabled' => 0,
        'stop_on_winner' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_gender'.
  $field_bases['field_gender'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gender',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'gender',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_language_spoken'.
  $field_bases['field_language_spoken'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_language_spoken',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'language_spoken',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_last_name'.
  $field_bases['field_last_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_last_name',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'personalize' => array(
        'agent_type' => 'personalize_target',
        'auto_start' => 1,
        'create_goal' => 1,
        'enabled' => 0,
        'stop_on_winner' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_locations'.
  $field_bases['field_locations'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_locations',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 1,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'location' => 'location',
        ),
      ),
      'personalize' => array(
        'agent_type' => 'personalize_target',
        'enabled' => 0,
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_prefix'.
  $field_bases['field_prefix'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prefix',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'personalize' => array(
        'agent_type' => 'personalize_target',
        'auto_start' => 1,
        'create_goal' => 1,
        'enabled' => 0,
        'stop_on_winner' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_profile_address'.
  $field_bases['field_profile_address'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_profile_address',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'lid' => array(
        0 => 'lid',
      ),
    ),
    'locked' => 0,
    'module' => 'location_cck',
    'settings' => array(
      'gmap_macro' => '[gmap ]',
      'gmap_marker' => 'drupal',
      'location_settings' => array(
        'display' => array(
          'hide' => array(
            'additional' => 'additional',
            'city' => 'city',
            'coords' => 'coords',
            'country' => 'country',
            'country_name' => 'country_name',
            'email' => 'email',
            'fax' => 0,
            'locpick' => 'locpick',
            'map_link' => 'map_link',
            'name' => 'name',
            'phone' => 0,
            'postal_code' => 'postal_code',
            'province' => 'province',
            'province_name' => 'province_name',
            'street' => 'street',
          ),
        ),
        'form' => array(
          'fields' => array(
            'additional' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -98,
            ),
            'city' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -97,
            ),
            'country' => array(
              'collect' => 4,
              'default' => 'us',
              'weight' => -94,
            ),
            'email' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -93,
            ),
            'fax' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -91,
            ),
            'locpick' => array(
              'collect' => 0,
              'weight' => -90,
            ),
            'name' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -100,
            ),
            'phone' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -92,
            ),
            'postal_code' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -95,
            ),
            'province' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -96,
              'widget' => 'select',
            ),
            'street' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -99,
            ),
          ),
        ),
      ),
      'personalize' => array(
        'agent_type' => 'personalize_target',
        'enabled' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'location',
  );

  // Exported field_base: 'field_related_condition_treatmen'.
  $field_bases['field_related_condition_treatmen'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_related_condition_treatmen',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 1,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'condition_treatment' => 'condition_treatment',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_related_dept_service'.
  $field_bases['field_related_dept_service'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_related_dept_service',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'department_service' => 'department_service',
        ),
      ),
      'personalize' => array(
        'agent_type' => 'personalize_target',
        'enabled' => 0,
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_related_news'.
  $field_bases['field_related_news'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_related_news',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'static_page' => 'static_page',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_related_service'.
  $field_bases['field_related_service'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_related_service',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'department_service' => 'department_service',
        ),
      ),
      'personalize' => array(
        'agent_type' => 'personalize_target',
        'enabled' => 0,
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_specialties'.
  $field_bases['field_specialties'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_specialties',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'specialties',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_static_page_reference'.
  $field_bases['field_static_page_reference'] = array(
    'active' => 1,
    'cardinality' => 3,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_static_page_reference',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'direction' => 'ASC',
          'property' => 'title',
          'type' => 'property',
        ),
        'target_bundles' => array(
          'static_page' => 'static_page',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_subtitle'.
  $field_bases['field_subtitle'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_subtitle',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'personalize' => array(
        'agent_type' => 'personalize_target',
        'enabled' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_tag'.
  $field_bases['field_tag'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tag',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'tags',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_topic'.
  $field_bases['field_topic'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_topic',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'topic',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_webform'.
  $field_bases['field_webform'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_webform',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'webform' => 'webform',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
