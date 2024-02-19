<?php
/**
 * @file
 * dfs_med_slideshow.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function dfs_med_slideshow_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'slideshow_slide';
  $panelizer->access = array();
  $panelizer->view_mode = 'featured';
  $panelizer->name = 'node:slideshow_slide:default:featured';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = FALSE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'cb487d74-0cdf-4751-a930-8a129cb7b0f2';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:slideshow_slide:default:featured';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f23e720e-c877-4fb4-9b7f-b02df3c02681';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'homepage_slideshow-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'panelizer',
    ),
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
  $pane->uuid = 'f23e720e-c877-4fb4-9b7f-b02df3c02681';
  $display->content['new-f23e720e-c877-4fb4-9b7f-b02df3c02681'] = $pane;
  $display->panels['center'][0] = 'new-f23e720e-c877-4fb4-9b7f-b02df3c02681';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:slideshow_slide:default:featured'] = $panelizer;

  return $export;
}
