<?php
/**
 * @file
 * dfhc_search.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function dfhc_search_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'search_api_page_general_search__general_search';
  $handler->task = 'search_api_page';
  $handler->subtask = 'general_search';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'General Search',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'general_search',
  );
  $display = new panels_display();
  $display->layout = 'column-2-header';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar_first' => NULL,
      'sidebar_second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4bd97d61-a7f3-4bf5-9e4b-8b1df4bbca0a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'search_api_page_general_search__general_search';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b0948c7f-fb69-429b-a332-10898962638a';
  $pane->panel = 'sidebar_first';
  $pane->type = 'block';
  $pane->subtype = 'search_api_page-general_search';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
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
  $pane->uuid = 'b0948c7f-fb69-429b-a332-10898962638a';
  $display->content['new-b0948c7f-fb69-429b-a332-10898962638a'] = $pane;
  $display->panels['sidebar_first'][0] = 'new-b0948c7f-fb69-429b-a332-10898962638a';
  $pane = new stdClass();
  $pane->pid = 'new-b2cb2b14-7e00-4c26-9f41-f4c73ef0adf2';
  $pane->panel = 'sidebar_second';
  $pane->type = 'search_api_page_result';
  $pane->subtype = 'search_api_page_result';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'page' => 'general_search',
    'per_page' => '5',
    'result_page_search_form' => 0,
    'get_per_page' => 0,
    'view_mode' => 'search_api_page_result',
    'context' => 'argument_string_1',
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
  $pane->uuid = 'b2cb2b14-7e00-4c26-9f41-f4c73ef0adf2';
  $display->content['new-b2cb2b14-7e00-4c26-9f41-f4c73ef0adf2'] = $pane;
  $display->panels['sidebar_second'][0] = 'new-b2cb2b14-7e00-4c26-9f41-f4c73ef0adf2';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-b0948c7f-fb69-429b-a332-10898962638a';
  $handler->conf['display'] = $display;
  $export['search_api_page_general_search__general_search'] = $handler;

  return $export;
}
