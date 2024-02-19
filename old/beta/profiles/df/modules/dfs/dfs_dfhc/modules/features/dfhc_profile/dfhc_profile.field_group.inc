<?php
/**
 * @file
 * dfhc_profile.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dfhc_profile_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|node|profile|form';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_profile_address',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_contact_info|node|profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|profile|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_awards_and_accolades__',
      2 => 'field_board_memberships_',
      3 => 'field_education_',
      4 => 'field_first_name',
      5 => 'field_gender',
      6 => 'field_image',
      7 => 'field_language_spoken',
      8 => 'field_last_name',
      9 => 'field_prefix',
      10 => 'field_specialties',
      11 => 'field_suffix',
      12 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_content|node|profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cta|node|profile|form';
  $field_group->group_name = 'group_cta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'cta',
    'weight' => '4',
    'children' => array(
      0 => 'field_cta',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cta field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_cta|node|profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_drprofile|node|profile|default';
  $field_group->group_name = 'group_drprofile';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'drsidepanel',
    'weight' => '0',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_image',
      2 => 'field_last_name',
      3 => 'field_related_dept_service',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-drprofile field-group-fieldset ',
      ),
    ),
  );
  $field_groups['group_drprofile|node|profile|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_contact|node|profile|full';
  $field_group->group_name = 'group_image_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_top_section';
  $field_group->data = array(
    'label' => 'profile-top-panel',
    'weight' => '1',
    'children' => array(
      0 => 'field_image',
      1 => 'field_webform',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'profile-top-panel',
      'instance_settings' => array(
        'classes' => 'profile-top-panel',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_image_contact|node|profile|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_middle_section|node|profile|full';
  $field_group->group_name = 'group_middle_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'middle-section',
    'weight' => '14',
    'children' => array(
      0 => 'body',
      1 => 'field_awards_and_accolades__',
      2 => 'field_board_memberships_',
      3 => 'field_education_',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'middle-section',
      'instance_settings' => array(
        'classes' => 'group-middle-section field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_middle_section|node|profile|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_name|node|profile|full';
  $field_group->group_name = 'group_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_top_right_section';
  $field_group->data = array(
    'label' => 'Name',
    'weight' => '7',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'field_prefix',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Name',
      'instance_settings' => array(
        'classes' => 'group-name field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_name|node|profile|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relationships|node|profile|form';
  $field_group->group_name = 'group_relationships';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Relationships',
    'weight' => '2',
    'children' => array(
      0 => 'field_locations',
      1 => 'field_related_condition_treatmen',
      2 => 'field_related_dept_service',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-relationships field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_relationships|node|profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_second_column|node|profile|full';
  $field_group->group_name = 'group_second_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_top_right_section';
  $field_group->data = array(
    'label' => 'second-column',
    'weight' => '10',
    'children' => array(
      0 => 'field_profile_address',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'second-column',
      'instance_settings' => array(
        'classes' => 'second-column',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_second_column|node|profile|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_third_column|node|profile|full';
  $field_group->group_name = 'group_third_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_top_right_section';
  $field_group->data = array(
    'label' => 'third-column',
    'weight' => '11',
    'children' => array(
      0 => 'field_locations',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'third-column',
      'instance_settings' => array(
        'classes' => 'third-column',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_third_column|node|profile|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_top_panel_columns|node|profile|full';
  $field_group->group_name = 'group_top_panel_columns';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_top_right_section';
  $field_group->data = array(
    'label' => 'first-column',
    'weight' => '9',
    'children' => array(
      0 => 'field_language_spoken',
      1 => 'field_related_dept_service',
      2 => 'field_specialties',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'first-column',
      'instance_settings' => array(
        'classes' => 'first-column',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_top_panel_columns|node|profile|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_top_right_section|node|profile|full';
  $field_group->group_name = 'group_top_right_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_top_section';
  $field_group->data = array(
    'label' => 'top-right-section',
    'weight' => '2',
    'children' => array(
      0 => 'field_suffix',
      1 => 'group_name',
      2 => 'group_second_column',
      3 => 'group_third_column',
      4 => 'group_top_panel_columns',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'top-right-section',
      'instance_settings' => array(
        'classes' => 'group-top-right-section field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_top_right_section|node|profile|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_top_section|node|profile|full';
  $field_group->group_name = 'group_top_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'top-section',
    'weight' => '0',
    'children' => array(
      0 => 'group_image_contact',
      1 => 'group_top_right_section',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'top-section',
      'instance_settings' => array(
        'classes' => 'group-top-section field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_top_section|node|profile|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_webform|node|profile|form';
  $field_group->group_name = 'group_webform';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'webform',
    'weight' => '3',
    'children' => array(
      0 => 'field_webform',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-webform field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_webform|node|profile|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact Info');
  t('Content');
  t('Name');
  t('Relationships');
  t('cta');
  t('drsidepanel');
  t('first-column');
  t('middle-section');
  t('profile-top-panel');
  t('second-column');
  t('third-column');
  t('top-right-section');
  t('top-section');
  t('webform');

  return $field_groups;
}
