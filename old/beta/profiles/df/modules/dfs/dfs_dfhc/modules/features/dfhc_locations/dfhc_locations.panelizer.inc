<?php
/**
 * @file
 * dfhc_locations.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function dfhc_locations_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'location';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:location:default';
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
  $display->layout = 'moscone_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'febdca16-e16d-4ffb-8c4b-fb9e95215099';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b77d7098-86cb-4d50-bbff-2688d95adb0b';
  $pane->panel = 'contentmain';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<a href="/DFHClocation">« Return to Locations</a>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b77d7098-86cb-4d50-bbff-2688d95adb0b';
  $display->content['new-b77d7098-86cb-4d50-bbff-2688d95adb0b'] = $pane;
  $display->panels['contentmain'][0] = 'new-b77d7098-86cb-4d50-bbff-2688d95adb0b';
  $pane = new stdClass();
  $pane->pid = 'new-f75ee585-3976-4427-a772-761065552021';
  $pane->panel = 'contentmain';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f75ee585-3976-4427-a772-761065552021';
  $display->content['new-f75ee585-3976-4427-a772-761065552021'] = $pane;
  $display->panels['contentmain'][1] = 'new-f75ee585-3976-4427-a772-761065552021';
  $pane = new stdClass();
  $pane->pid = 'new-b5f5c368-b272-4feb-92bf-7882d5745171';
  $pane->panel = 'footer';
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
  $pane->uuid = 'b5f5c368-b272-4feb-92bf-7882d5745171';
  $display->content['new-b5f5c368-b272-4feb-92bf-7882d5745171'] = $pane;
  $display->panels['footer'][0] = 'new-b5f5c368-b272-4feb-92bf-7882d5745171';
  $pane = new stdClass();
  $pane->pid = 'new-109c55eb-26b8-4ae6-a14b-8d134b40a62f';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-sidebar-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'In this section...',
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
  $pane->uuid = '109c55eb-26b8-4ae6-a14b-8d134b40a62f';
  $display->content['new-109c55eb-26b8-4ae6-a14b-8d134b40a62f'] = $pane;
  $display->panels['sidebar'][0] = 'new-109c55eb-26b8-4ae6-a14b-8d134b40a62f';
  $pane = new stdClass();
  $pane->pid = 'new-f8f17487-ea15-4169-b086-04ada82e5a4f';
  $pane->panel = 'sidebar';
  $pane->type = 'panels_mini';
  $pane->subtype = 'patient_login_panel';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'portal-sidebar',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f8f17487-ea15-4169-b086-04ada82e5a4f';
  $display->content['new-f8f17487-ea15-4169-b086-04ada82e5a4f'] = $pane;
  $display->panels['sidebar'][1] = 'new-f8f17487-ea15-4169-b086-04ada82e5a4f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:location:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'location';
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->name = 'node:location:default:teaser';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'span';
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
  $display->title = '%node:title';
  $display->uuid = 'd95fe121-6cee-4b6f-913d-4ce142c01567';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e4be2058-41b4-4b73-898c-51756d9d6285';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_address';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'location_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'quickedit' => array(
        'editor' => 'form',
      ),
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e4be2058-41b4-4b73-898c-51756d9d6285';
  $display->content['new-e4be2058-41b4-4b73-898c-51756d9d6285'] = $pane;
  $display->panels['center'][0] = 'new-e4be2058-41b4-4b73-898c-51756d9d6285';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e4be2058-41b4-4b73-898c-51756d9d6285';
  $panelizer->display = $display;
  $export['node:location:default:teaser'] = $panelizer;

  return $export;
}
