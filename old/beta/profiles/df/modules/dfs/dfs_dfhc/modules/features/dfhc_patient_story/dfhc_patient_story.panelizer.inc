<?php
/**
 * @file
 * dfhc_patient_story.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function dfhc_patient_story_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'patient_story';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:patient_story:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'column-2-complete';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'sidebar_first' => NULL,
      'sidebar_second' => NULL,
      'cta' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c6adb4bd-3f7a-420f-8276-6db4728d3818';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f0fb3671-91b6-4cc0-9d56-8bdcc4337b0a';
  $pane->panel = 'cta';
  $pane->type = 'views_panes';
  $pane->subtype = 'call_to_action-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f0fb3671-91b6-4cc0-9d56-8bdcc4337b0a';
  $display->content['new-f0fb3671-91b6-4cc0-9d56-8bdcc4337b0a'] = $pane;
  $display->panels['cta'][0] = 'new-f0fb3671-91b6-4cc0-9d56-8bdcc4337b0a';
  $pane = new stdClass();
  $pane->pid = 'new-fbc7ac45-6b26-4017-b1b5-d80d7f2fed63';
  $pane->panel = 'sidebar_second';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 1,
    'no_extras' => 1,
    'override_title' => 0,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 0,
    'leave_node_title' => 0,
    'build_mode' => 'full',
    'context' => array(),
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fbc7ac45-6b26-4017-b1b5-d80d7f2fed63';
  $display->content['new-fbc7ac45-6b26-4017-b1b5-d80d7f2fed63'] = $pane;
  $display->panels['sidebar_second'][0] = 'new-fbc7ac45-6b26-4017-b1b5-d80d7f2fed63';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-fbc7ac45-6b26-4017-b1b5-d80d7f2fed63';
  $panelizer->display = $display;
  $export['node:patient_story:default'] = $panelizer;

  return $export;
}
