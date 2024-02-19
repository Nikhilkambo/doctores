<?php
/**
 * @file
 * dfhc_static_pages.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dfhc_static_pages_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_body|node|static_page|full';
  $field_group->group_name = 'group_image_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'static_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image and body',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image and body',
      'instance_settings' => array(
        'classes' => 'group-image-body field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_image_body|node|static_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_overlay|node|static_page|alternate';
  $field_group->group_name = 'group_overlay';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'static_page';
  $field_group->mode = 'alternate';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'overlay',
    'weight' => '1',
    'children' => array(
      0 => 'field_banner_text',
      1 => 'field_banner_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'overlay',
      'instance_settings' => array(
        'classes' => 'group-overlay field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_overlay|node|static_page|alternate'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reference|node|static_page|full';
  $field_group->group_name = 'group_reference';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'static_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '3',
    'children' => array(
      0 => 'field_static_page_reference',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'group-reference field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_reference|node|static_page|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Image and body');
  t('overlay');

  return $field_groups;
}
