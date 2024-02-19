<?php
/**
 * @file
 * dfhc_news.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function dfhc_news_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'news';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:news:default';
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
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
      'sidebar_first' => NULL,
      'sidebar_second' => NULL,
      'cta' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7a7d1051-303d-4864-b1eb-a10958aa75cd';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f84e3b25-7dd4-48a6-b8db-0dc0188c5952';
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
  $pane->uuid = 'f84e3b25-7dd4-48a6-b8db-0dc0188c5952';
  $display->content['new-f84e3b25-7dd4-48a6-b8db-0dc0188c5952'] = $pane;
  $display->panels['cta'][0] = 'new-f84e3b25-7dd4-48a6-b8db-0dc0188c5952';
  $pane = new stdClass();
  $pane->pid = 'new-d7a77d27-d075-4be3-adbc-5ad01217d8a5';
  $pane->panel = 'sidebar_second';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 1,
    'no_extras' => 1,
    'override_title' => 0,
    'override_title_text' => '<none>',
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
  $pane->uuid = 'd7a77d27-d075-4be3-adbc-5ad01217d8a5';
  $display->content['new-d7a77d27-d075-4be3-adbc-5ad01217d8a5'] = $pane;
  $display->panels['sidebar_second'][0] = 'new-d7a77d27-d075-4be3-adbc-5ad01217d8a5';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:news:default'] = $panelizer;

  return $export;
}
