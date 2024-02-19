<?php
/**
 * @file
 * dfhc_conditions_and_treatments.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dfhc_conditions_and_treatments_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_condition_treatment';
  $strongarm->value = 0;
  $export['comment_anonymous_condition_treatment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_condition_treatment';
  $strongarm->value = '0';
  $export['comment_condition_treatment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_condition_treatment';
  $strongarm->value = 1;
  $export['comment_default_mode_condition_treatment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_condition_treatment';
  $strongarm->value = '50';
  $export['comment_default_per_page_condition_treatment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_condition_treatment';
  $strongarm->value = 1;
  $export['comment_form_location_condition_treatment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_condition_treatment';
  $strongarm->value = '1';
  $export['comment_preview_condition_treatment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_condition_treatment';
  $strongarm->value = 1;
  $export['comment_subject_field_condition_treatment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__condition_treatment';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'alternate' => array(
        'custom_settings' => TRUE,
      ),
      'thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'locations' => array(
          'weight' => '7',
        ),
        'metatags' => array(
          'weight' => '8',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__condition_treatment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_condition_treatment';
  $strongarm->value = '2';
  $export['language_content_type_condition_treatment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_condition_treatment';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_condition_treatment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_condition_treatment';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_condition_treatment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_condition_treatment';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_condition_treatment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_condition_treatment';
  $strongarm->value = '1';
  $export['node_preview_condition_treatment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_condition_treatment';
  $strongarm->value = 0;
  $export['node_submitted_condition_treatment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_condition_treatment';
  $strongarm->value = array(
    'status' => 1,
    'help' => '',
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'substitute' => '',
        'default' => 1,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'full' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'alternate' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'thumbnail' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_condition_treatment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:condition_treatment:alternate_selection';
  $strongarm->value = 0;
  $export['panelizer_node:condition_treatment:alternate_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:condition_treatment:default_selection';
  $strongarm->value = 0;
  $export['panelizer_node:condition_treatment:default_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:condition_treatment:featured_selection';
  $strongarm->value = 0;
  $export['panelizer_node:condition_treatment:featured_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:condition_treatment:page_manager_selection';
  $strongarm->value = 'node:condition_treatment:default';
  $export['panelizer_node:condition_treatment:page_manager_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:condition_treatment:teaser_selection';
  $strongarm->value = 0;
  $export['panelizer_node:condition_treatment:teaser_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:condition_treatment:thumbnail_selection';
  $strongarm->value = 0;
  $export['panelizer_node:condition_treatment:thumbnail_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:condition_treatment_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:34:"panelizer_node:condition_treatment";s:23:"allowed_layout_settings";a:45:{s:8:"flexible";b:1;s:26:"demonstratie_layout_single";b:1;s:27:"demonstratie_layout_stagger";b:1;s:34:"demonstratie_layout_split_features";b:1;s:29:"demonstratie_layout_full_side";b:1;s:27:"demonstratie_layout_landing";b:1;s:17:"threecol_33_34_33";b:1;s:17:"threecol_25_50_25";b:1;s:6:"onecol";b:1;s:25:"threecol_25_50_25_stacked";b:1;s:14:"twocol_stacked";b:1;s:25:"threecol_33_34_33_stacked";b:1;s:6:"twocol";b:1;s:13:"twocol_bricks";b:1;s:6:"whelan";b:1;s:12:"burr_flipped";b:1;s:6:"bryant";b:1;s:5:"rolph";b:1;s:4:"burr";b:1;s:7:"moscone";b:1;s:5:"selby";b:1;s:17:"sanderson_flipped";b:1;s:9:"sanderson";b:1;s:5:"sutro";b:1;s:13:"selby_flipped";b:1;s:6:"taylor";b:1;s:15:"brenham_flipped";b:1;s:7:"brenham";b:1;s:4:"pond";b:1;s:8:"bartlett";b:1;s:7:"hewston";b:1;s:5:"geary";b:1;s:5:"brown";b:1;s:22:"bryant_flipped_flipped";b:1;s:15:"moscone_flipped";b:1;s:15:"hewston_flipped";b:1;s:8:"mccoppin";b:1;s:12:"webb_flipped";b:1;s:6:"phelan";b:1;s:16:"bartlett_flipped";b:1;s:4:"webb";b:1;s:6:"boxton";b:1;s:12:"sutro_double";b:1;s:14:"taylor_flipped";b:1;s:6:"harris";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:condition_treatment_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:condition_treatment_allowed_layouts_default';
  $strongarm->value = 0;
  $export['panelizer_node:condition_treatment_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:condition_treatment_allowed_types_default';
  $strongarm->value = 0;
  $export['panelizer_node:condition_treatment_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:condition_treatment_default';
  $strongarm->value = array(
    'context_admin' => 'context_admin',
    'block' => 'block',
    'token' => 'token',
    'custom' => 'custom',
    'entity_field' => 'entity_field',
    'entity_field_extra' => 'entity_field_extra',
    'entity_form_field' => 'entity_form_field',
    'entity_view' => 'entity_view',
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'panels_mini' => 'panels_mini',
    'views' => 'views',
    'views_panes' => 'views_panes',
    'other' => 'other',
  );
  $export['panelizer_node:condition_treatment_default'] = $strongarm;

  return $export;
}
