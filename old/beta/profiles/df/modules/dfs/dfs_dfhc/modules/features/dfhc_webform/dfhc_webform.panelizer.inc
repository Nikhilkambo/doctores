<?php
/**
 * @file
 * dfhc_webform.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function dfhc_webform_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:webform:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'webform';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'column-2-wcta';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar_first' => NULL,
      'sidebar_second' => NULL,
      'cta' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6d962ffd-87c1-4786-b2ba-e7fa3fcfa881';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-65c91a9c-5e96-4212-9976-b119723d77f8';
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
    $pane->uuid = '65c91a9c-5e96-4212-9976-b119723d77f8';
    $display->content['new-65c91a9c-5e96-4212-9976-b119723d77f8'] = $pane;
    $display->panels['cta'][0] = 'new-65c91a9c-5e96-4212-9976-b119723d77f8';
    $pane = new stdClass();
    $pane->pid = 'new-d496a6f5-cbaf-48dd-a99b-c69dc8e30485';
    $pane->panel = 'sidebar_first';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:webform';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '%node:title',
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
    $pane->uuid = 'd496a6f5-cbaf-48dd-a99b-c69dc8e30485';
    $display->content['new-d496a6f5-cbaf-48dd-a99b-c69dc8e30485'] = $pane;
    $display->panels['sidebar_first'][0] = 'new-d496a6f5-cbaf-48dd-a99b-c69dc8e30485';
    $pane = new stdClass();
    $pane->pid = 'new-5185b83b-b6a0-4f2f-91ec-fe5a58b6bda4';
    $pane->panel = 'sidebar_second';
    $pane->type = 'panels_mini';
    $pane->subtype = 'contact_us_side_panel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
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
    $pane->uuid = '5185b83b-b6a0-4f2f-91ec-fe5a58b6bda4';
    $display->content['new-5185b83b-b6a0-4f2f-91ec-fe5a58b6bda4'] = $pane;
    $display->panels['sidebar_second'][0] = 'new-5185b83b-b6a0-4f2f-91ec-fe5a58b6bda4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-d496a6f5-cbaf-48dd-a99b-c69dc8e30485';
  $panelizer->display = $display;
  $export['node:webform:default'] = $panelizer;

  return $export;
}
