<?php
/**
 * @file
 * dfhc_department.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function dfhc_department_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'department_service';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:department_service:default';
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
  $display->uuid = '0f4fdf77-35b9-4173-8567-6275f6cfeb92';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9cb4a53f-0583-4500-85f6-808ea15a6be0';
  $pane->panel = 'contentmain';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<a href="/deptartments">« Back to Departments & Services</a>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'back-to-view',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9cb4a53f-0583-4500-85f6-808ea15a6be0';
  $display->content['new-9cb4a53f-0583-4500-85f6-808ea15a6be0'] = $pane;
  $display->panels['contentmain'][0] = 'new-9cb4a53f-0583-4500-85f6-808ea15a6be0';
  $pane = new stdClass();
  $pane->pid = 'new-24969bcc-60c7-4e09-b630-9a26f2d20408';
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
  $pane->uuid = '24969bcc-60c7-4e09-b630-9a26f2d20408';
  $display->content['new-24969bcc-60c7-4e09-b630-9a26f2d20408'] = $pane;
  $display->panels['contentmain'][1] = 'new-24969bcc-60c7-4e09-b630-9a26f2d20408';
  $pane = new stdClass();
  $pane->pid = 'new-9b03741e-33c2-4f6c-b4db-5dece865f36d';
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
  $pane->uuid = '9b03741e-33c2-4f6c-b4db-5dece865f36d';
  $display->content['new-9b03741e-33c2-4f6c-b4db-5dece865f36d'] = $pane;
  $display->panels['footer'][0] = 'new-9b03741e-33c2-4f6c-b4db-5dece865f36d';
  $pane = new stdClass();
  $pane->pid = 'new-2a2a018a-e67c-441a-ab6f-71deaeb07edd';
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
  $pane->uuid = '2a2a018a-e67c-441a-ab6f-71deaeb07edd';
  $display->content['new-2a2a018a-e67c-441a-ab6f-71deaeb07edd'] = $pane;
  $display->panels['sidebar'][0] = 'new-2a2a018a-e67c-441a-ab6f-71deaeb07edd';
  $pane = new stdClass();
  $pane->pid = 'new-aa2090b8-fa0e-486a-bb4a-1adccec7a778';
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
  $pane->uuid = 'aa2090b8-fa0e-486a-bb4a-1adccec7a778';
  $display->content['new-aa2090b8-fa0e-486a-bb4a-1adccec7a778'] = $pane;
  $display->panels['sidebar'][1] = 'new-aa2090b8-fa0e-486a-bb4a-1adccec7a778';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:department_service:default'] = $panelizer;

  return $export;
}
