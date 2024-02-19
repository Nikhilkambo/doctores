<?php
/**
 * @file
 * dfhc_static_pages.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function dfhc_static_pages_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'static_page';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:static_page:default';
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
      'header' => NULL,
      'sidebar_first' => NULL,
      'sidebar_second' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'middle' => NULL,
      'secondcolumn1' => NULL,
      'secondcolumn2' => NULL,
      'footer' => NULL,
      'cta' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1d558f21-8fa3-474a-a330-c7d861c3413a';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0bcb2da5-95ae-4110-922d-740c44b385b0';
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
  $pane->uuid = '0bcb2da5-95ae-4110-922d-740c44b385b0';
  $display->content['new-0bcb2da5-95ae-4110-922d-740c44b385b0'] = $pane;
  $display->panels['cta'][0] = 'new-0bcb2da5-95ae-4110-922d-740c44b385b0';
  $pane = new stdClass();
  $pane->pid = 'new-d9546321-72d6-4665-ad48-d72c46148bde';
  $pane->panel = 'header';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 1,
    'no_extras' => 1,
    'override_title' => 1,
    'override_title_text' => '<none>',
    'identifier' => '',
    'link' => 0,
    'leave_node_title' => 0,
    'build_mode' => 'alternate',
    'context' => array(),
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'not-mobile',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd9546321-72d6-4665-ad48-d72c46148bde';
  $display->content['new-d9546321-72d6-4665-ad48-d72c46148bde'] = $pane;
  $display->panels['header'][0] = 'new-d9546321-72d6-4665-ad48-d72c46148bde';
  $pane = new stdClass();
  $pane->pid = 'new-7b187aaf-7e89-4395-bc2a-ca4fb4e4526e';
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
  $pane->uuid = '7b187aaf-7e89-4395-bc2a-ca4fb4e4526e';
  $display->content['new-7b187aaf-7e89-4395-bc2a-ca4fb4e4526e'] = $pane;
  $display->panels['sidebar_second'][0] = 'new-7b187aaf-7e89-4395-bc2a-ca4fb4e4526e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:static_page:default'] = $panelizer;

  return $export;
}
