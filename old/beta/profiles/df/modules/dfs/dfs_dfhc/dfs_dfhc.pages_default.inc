<?php
/**
 * @file
 * dfs_dfhc.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function dfs_dfhc_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'conditions';
  $page->task = 'page';
  $page->admin_title = 'Conditions';
  $page->admin_description = '';
  $page->path = 'conditions';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Conditions and Treatments',
    'name' => 'main-menu',
    'weight' => '8',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_conditions_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'conditions';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Conditions',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'column-2-complete';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'footer' => NULL,
      'sidebar_first' => NULL,
      'sidebar_second' => NULL,
      'cta' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Conditions and Treatments';
  $display->uuid = '10647a3c-5e11-4524-b2e0-fcc4e817e5b9';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7024d8ee-9ac7-405d-88f1-08ce9e818354';
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
  $pane->uuid = '7024d8ee-9ac7-405d-88f1-08ce9e818354';
  $display->content['new-7024d8ee-9ac7-405d-88f1-08ce9e818354'] = $pane;
  $display->panels['cta'][0] = 'new-7024d8ee-9ac7-405d-88f1-08ce9e818354';
  $pane = new stdClass();
  $pane->pid = 'new-3ae8188b-17d1-45f0-8b70-fc965db8ffc3';
  $pane->panel = 'header';
  $pane->type = 'panels_mini';
  $pane->subtype = 'conditions_search_header';
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
  $pane->uuid = '3ae8188b-17d1-45f0-8b70-fc965db8ffc3';
  $display->content['new-3ae8188b-17d1-45f0-8b70-fc965db8ffc3'] = $pane;
  $display->panels['header'][0] = 'new-3ae8188b-17d1-45f0-8b70-fc965db8ffc3';
  $pane = new stdClass();
  $pane->pid = 'new-db9ee9c2-a053-4f60-83cc-bb2c9e17857f';
  $pane->panel = 'sidebar_first';
  $pane->type = 'block';
  $pane->subtype = 'views-20475aad963aaf5d591a841215e605c9';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
    'override_title' => 1,
    'override_title_text' => 'Conditions and Treatments',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'conditions-exposed-block',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'db9ee9c2-a053-4f60-83cc-bb2c9e17857f';
  $display->content['new-db9ee9c2-a053-4f60-83cc-bb2c9e17857f'] = $pane;
  $display->panels['sidebar_first'][0] = 'new-db9ee9c2-a053-4f60-83cc-bb2c9e17857f';
  $pane = new stdClass();
  $pane->pid = 'new-214244cc-aea8-4f13-b8c7-91c02042d452';
  $pane->panel = 'sidebar_second';
  $pane->type = 'views_panes';
  $pane->subtype = 'Glossary_Search-panel_pane_1';
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
  $pane->uuid = '214244cc-aea8-4f13-b8c7-91c02042d452';
  $display->content['new-214244cc-aea8-4f13-b8c7-91c02042d452'] = $pane;
  $display->panels['sidebar_second'][0] = 'new-214244cc-aea8-4f13-b8c7-91c02042d452';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['conditions'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dept_serv_search';
  $page->task = 'page';
  $page->admin_title = 'Dept & Service Search';
  $page->admin_description = '';
  $page->path = 'deptartments';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => 'Departments & Services',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dept_serv_search_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dept_serv_search';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'moscone_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Dept & Service Search';
  $display->uuid = 'ebbc2550-52a1-4472-a361-30aec16a7b83';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-237d6b7a-28fa-41d3-9bfb-e41bd358fa0e';
  $pane->panel = 'contentmain';
  $pane->type = 'views';
  $pane->subtype = 'departments_and_services';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '237d6b7a-28fa-41d3-9bfb-e41bd358fa0e';
  $display->content['new-237d6b7a-28fa-41d3-9bfb-e41bd358fa0e'] = $pane;
  $display->panels['contentmain'][0] = 'new-237d6b7a-28fa-41d3-9bfb-e41bd358fa0e';
  $pane = new stdClass();
  $pane->pid = 'new-906797f8-3d55-4353-ad79-3420c5a579b6';
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
  $pane->uuid = '906797f8-3d55-4353-ad79-3420c5a579b6';
  $display->content['new-906797f8-3d55-4353-ad79-3420c5a579b6'] = $pane;
  $display->panels['footer'][0] = 'new-906797f8-3d55-4353-ad79-3420c5a579b6';
  $pane = new stdClass();
  $pane->pid = 'new-7883fe9a-1540-499e-bd8f-036355b0d4f6';
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
  $pane->uuid = '7883fe9a-1540-499e-bd8f-036355b0d4f6';
  $display->content['new-7883fe9a-1540-499e-bd8f-036355b0d4f6'] = $pane;
  $display->panels['sidebar'][0] = 'new-7883fe9a-1540-499e-bd8f-036355b0d4f6';
  $pane = new stdClass();
  $pane->pid = 'new-ceafb397-927b-4524-92c9-e0d5817b498b';
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
  $pane->uuid = 'ceafb397-927b-4524-92c9-e0d5817b498b';
  $display->content['new-ceafb397-927b-4524-92c9-e0d5817b498b'] = $pane;
  $display->panels['sidebar'][1] = 'new-ceafb397-927b-4524-92c9-e0d5817b498b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-237d6b7a-28fa-41d3-9bfb-e41bd358fa0e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dept_serv_search'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'doctor_search';
  $page->task = 'page';
  $page->admin_title = 'find-a-doctor';
  $page->admin_description = '';
  $page->path = 'doctor-search';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Find a Doctor',
    'name' => 'main-menu',
    'weight' => '4',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_doctor_search_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'doctor_search';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'find-doctor-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'column-2-header';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'footer' => NULL,
      'sidebar_first' => NULL,
      'sidebar_second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0a336a40-75ee-4979-82f8-49af2a5cc50c';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1d3a7966-e097-4cf7-ba25-983d9b0ea705';
  $pane->panel = 'header';
  $pane->type = 'panels_mini';
  $pane->subtype = 'doctor_search_header';
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
  $pane->uuid = '1d3a7966-e097-4cf7-ba25-983d9b0ea705';
  $display->content['new-1d3a7966-e097-4cf7-ba25-983d9b0ea705'] = $pane;
  $display->panels['header'][0] = 'new-1d3a7966-e097-4cf7-ba25-983d9b0ea705';
  $pane = new stdClass();
  $pane->pid = 'new-2d881587-77f0-42aa-a044-94b1bc314655';
  $pane->panel = 'sidebar_first';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-Glossary_Search-page_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
    'override_title' => 1,
    'override_title_text' => 'Find a Doctor',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'find-doctor-exposed',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2d881587-77f0-42aa-a044-94b1bc314655';
  $display->content['new-2d881587-77f0-42aa-a044-94b1bc314655'] = $pane;
  $display->panels['sidebar_first'][0] = 'new-2d881587-77f0-42aa-a044-94b1bc314655';
  $pane = new stdClass();
  $pane->pid = 'new-b3ed207c-8fcc-46c0-9e3c-b2f83945e5c4';
  $pane->panel = 'sidebar_second';
  $pane->type = 'views';
  $pane->subtype = 'Glossary_Search';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '40',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'find-doctor-view',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b3ed207c-8fcc-46c0-9e3c-b2f83945e5c4';
  $display->content['new-b3ed207c-8fcc-46c0-9e3c-b2f83945e5c4'] = $pane;
  $display->panels['sidebar_second'][0] = 'new-b3ed207c-8fcc-46c0-9e3c-b2f83945e5c4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-2d881587-77f0-42aa-a044-94b1bc314655';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['doctor_search'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = 'This is the homepage for demo health.';
  $page->path = 'dfhchomepage';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'homepage-pond';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'secondarycolumn1' => NULL,
      'secondarycolumn2' => NULL,
      'secondarycolumn3' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '31b1b3a4-1141-4403-aff6-a74be94aa84d';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-71f89839-da0e-4532-a725-59ddd838e1f4';
  $pane->panel = 'column1';
  $pane->type = 'panels_mini';
  $pane->subtype = 'doctor_search_panel';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => 'Find a Doctor',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'find-doctor-homepage-block',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '71f89839-da0e-4532-a725-59ddd838e1f4';
  $display->content['new-71f89839-da0e-4532-a725-59ddd838e1f4'] = $pane;
  $display->panels['column1'][0] = 'new-71f89839-da0e-4532-a725-59ddd838e1f4';
  $pane = new stdClass();
  $pane->pid = 'new-b046cd6b-6b9d-4895-a46b-9f5351634395';
  $pane->panel = 'column2';
  $pane->type = 'panels_mini';
  $pane->subtype = 'giving_campaign_panel';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'explore-service-homepage-block',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b046cd6b-6b9d-4895-a46b-9f5351634395';
  $display->content['new-b046cd6b-6b9d-4895-a46b-9f5351634395'] = $pane;
  $display->panels['column2'][0] = 'new-b046cd6b-6b9d-4895-a46b-9f5351634395';
  $pane = new stdClass();
  $pane->pid = 'new-c9a495cc-11ed-41cf-8c1d-1d3128803998';
  $pane->panel = 'column3';
  $pane->type = 'panels_mini';
  $pane->subtype = 'find_locations_block';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'location-homepage-block',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c9a495cc-11ed-41cf-8c1d-1d3128803998';
  $display->content['new-c9a495cc-11ed-41cf-8c1d-1d3128803998'] = $pane;
  $display->panels['column3'][0] = 'new-c9a495cc-11ed-41cf-8c1d-1d3128803998';
  $pane = new stdClass();
  $pane->pid = 'new-612d0cb6-70dd-4bff-b4a2-e27021fea5bf';
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
  $pane->uuid = '612d0cb6-70dd-4bff-b4a2-e27021fea5bf';
  $display->content['new-612d0cb6-70dd-4bff-b4a2-e27021fea5bf'] = $pane;
  $display->panels['footer'][0] = 'new-612d0cb6-70dd-4bff-b4a2-e27021fea5bf';
  $pane = new stdClass();
  $pane->pid = 'new-15a98ff5-4314-4520-b142-b0dd29a08d13';
  $pane->panel = 'header';
  $pane->type = 'views';
  $pane->subtype = 'slideshow';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '15a98ff5-4314-4520-b142-b0dd29a08d13';
  $display->content['new-15a98ff5-4314-4520-b142-b0dd29a08d13'] = $pane;
  $display->panels['header'][0] = 'new-15a98ff5-4314-4520-b142-b0dd29a08d13';
  $pane = new stdClass();
  $pane->pid = 'new-88719861-2967-4dd0-9bca-8e0762b803af';
  $pane->panel = 'secondarycolumn1';
  $pane->type = 'views';
  $pane->subtype = 'news_and_events';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 0,
    'override_title_text' => 'Featured News',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'homepage-news',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '88719861-2967-4dd0-9bca-8e0762b803af';
  $display->content['new-88719861-2967-4dd0-9bca-8e0762b803af'] = $pane;
  $display->panels['secondarycolumn1'][0] = 'new-88719861-2967-4dd0-9bca-8e0762b803af';
  $pane = new stdClass();
  $pane->pid = 'new-c9a9b607-652d-444c-b7b1-14c8f46196b6';
  $pane->panel = 'secondarycolumn2';
  $pane->type = 'views';
  $pane->subtype = 'patient_story_homepage_view';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
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
  $pane->uuid = 'c9a9b607-652d-444c-b7b1-14c8f46196b6';
  $display->content['new-c9a9b607-652d-444c-b7b1-14c8f46196b6'] = $pane;
  $display->panels['secondarycolumn2'][0] = 'new-c9a9b607-652d-444c-b7b1-14c8f46196b6';
  $pane = new stdClass();
  $pane->pid = 'new-67bfc6e8-0c45-44f9-83d1-f67746f58689';
  $pane->panel = 'secondarycolumn3';
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
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'patient-portal',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '67bfc6e8-0c45-44f9-83d1-f67746f58689';
  $display->content['new-67bfc6e8-0c45-44f9-83d1-f67746f58689'] = $pane;
  $display->panels['secondarycolumn3'][0] = 'new-67bfc6e8-0c45-44f9-83d1-f67746f58689';
  $pane = new stdClass();
  $pane->pid = 'new-cbda5448-4ac8-420c-b524-e6049bca6566';
  $pane->panel = 'secondarycolumn3';
  $pane->type = 'panels_mini';
  $pane->subtype = 'donation_mini_panel';
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
        'not' => TRUE,
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
    'css_class' => 'location-homepage-block',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'cbda5448-4ac8-420c-b524-e6049bca6566';
  $display->content['new-cbda5448-4ac8-420c-b524-e6049bca6566'] = $pane;
  $display->panels['secondarycolumn3'][1] = 'new-cbda5448-4ac8-420c-b524-e6049bca6566';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-15a98ff5-4314-4520-b142-b0dd29a08d13';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'location';
  $page->task = 'page';
  $page->admin_title = 'Location';
  $page->admin_description = 'Locations landing page.';
  $page->path = 'locations';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Locations and Directions',
    'name' => 'main-menu',
    'weight' => '6',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_location_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'location';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'column-2-header';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
      'sidebar_first' => NULL,
      'sidebar_second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'aea475d8-df19-4d4d-b6f4-48d4574b2cb6';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e1312cdc-733f-408b-abf0-09019064862e';
  $pane->panel = 'header';
  $pane->type = 'panels_mini';
  $pane->subtype = 'location_view_header';
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
  $pane->uuid = 'e1312cdc-733f-408b-abf0-09019064862e';
  $display->content['new-e1312cdc-733f-408b-abf0-09019064862e'] = $pane;
  $display->panels['header'][0] = 'new-e1312cdc-733f-408b-abf0-09019064862e';
  $pane = new stdClass();
  $pane->pid = 'new-d46e4007-aed5-4c85-88a3-fd9246def46d';
  $pane->panel = 'sidebar_first';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-locations-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
    'override_title' => 1,
    'override_title_text' => 'Locations',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'location-view-exposed',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd46e4007-aed5-4c85-88a3-fd9246def46d';
  $display->content['new-d46e4007-aed5-4c85-88a3-fd9246def46d'] = $pane;
  $display->panels['sidebar_first'][0] = 'new-d46e4007-aed5-4c85-88a3-fd9246def46d';
  $pane = new stdClass();
  $pane->pid = 'new-fcf52115-3aa9-4e3d-834e-be34e79ae95f';
  $pane->panel = 'sidebar_second';
  $pane->type = 'views_panes';
  $pane->subtype = 'locations-panel_pane_1';
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
  $pane->uuid = 'fcf52115-3aa9-4e3d-834e-be34e79ae95f';
  $display->content['new-fcf52115-3aa9-4e3d-834e-be34e79ae95f'] = $pane;
  $display->panels['sidebar_second'][0] = 'new-fcf52115-3aa9-4e3d-834e-be34e79ae95f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['location'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news_and_events';
  $page->task = 'page';
  $page->admin_title = 'News and Events';
  $page->admin_description = '';
  $page->path = 'news-and-events';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => 'News & Events',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_and_events_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'news_and_events';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'column-2-complete';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
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
  $display->title = 'News and Events';
  $display->uuid = 'b88d589d-d5cc-4e88-80be-ff53d17a100f';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c285bad1-93e5-495a-b728-6fbf05f33cb6';
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
  $pane->uuid = 'c285bad1-93e5-495a-b728-6fbf05f33cb6';
  $display->content['new-c285bad1-93e5-495a-b728-6fbf05f33cb6'] = $pane;
  $display->panels['cta'][0] = 'new-c285bad1-93e5-495a-b728-6fbf05f33cb6';
  $pane = new stdClass();
  $pane->pid = 'new-ca84b414-6caa-49c6-a680-594406f4962c';
  $pane->panel = 'header';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_and_events-panel_pane_1';
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
  $pane->uuid = 'ca84b414-6caa-49c6-a680-594406f4962c';
  $display->content['new-ca84b414-6caa-49c6-a680-594406f4962c'] = $pane;
  $display->panels['header'][0] = 'new-ca84b414-6caa-49c6-a680-594406f4962c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-ca84b414-6caa-49c6-a680-594406f4962c';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news_and_events'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'patients_and_visitors';
  $page->task = 'page';
  $page->admin_title = 'Patients and Visitors';
  $page->admin_description = '';
  $page->path = 'patients-visitors';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Patients and Visitors',
    'name' => 'main-menu',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_patients_and_visitors__panel_context_b20d8521-d79a-40d6-9bba-450bf6af3d96';
  $handler->task = 'page';
  $handler->subtask = 'patients_and_visitors';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'homepage-pond';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'secondarycolumn1' => NULL,
      'secondarycolumn2' => NULL,
      'secondarycolumn3' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c3c1149a-c93d-4380-8afd-c886b3f7141e';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-95d23540-3187-465e-8055-d82c9c673165';
  $pane->panel = 'column1';
  $pane->type = 'panels_mini';
  $pane->subtype = 'family_visitor_panel';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'patient-visitor-panel',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '95d23540-3187-465e-8055-d82c9c673165';
  $display->content['new-95d23540-3187-465e-8055-d82c9c673165'] = $pane;
  $display->panels['column1'][0] = 'new-95d23540-3187-465e-8055-d82c9c673165';
  $pane = new stdClass();
  $pane->pid = 'new-b1c636c4-9a7f-4025-81da-da68a77bcf18';
  $pane->panel = 'column2';
  $pane->type = 'panels_mini';
  $pane->subtype = 'visiting_hours_panel';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'patient-visitor-panel',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b1c636c4-9a7f-4025-81da-da68a77bcf18';
  $display->content['new-b1c636c4-9a7f-4025-81da-da68a77bcf18'] = $pane;
  $display->panels['column2'][0] = 'new-b1c636c4-9a7f-4025-81da-da68a77bcf18';
  $pane = new stdClass();
  $pane->pid = 'new-a4c71a51-42ea-4788-b490-2024316e9546';
  $pane->panel = 'column3';
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
    'css_class' => 'patient-portal',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a4c71a51-42ea-4788-b490-2024316e9546';
  $display->content['new-a4c71a51-42ea-4788-b490-2024316e9546'] = $pane;
  $display->panels['column3'][0] = 'new-a4c71a51-42ea-4788-b490-2024316e9546';
  $pane = new stdClass();
  $pane->pid = 'new-c8e7b6a2-0370-4a03-bc10-aa6a7a896e60';
  $pane->panel = 'column3';
  $pane->type = 'panels_mini';
  $pane->subtype = 'find_locations_block';
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
        'not' => TRUE,
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
    'css_class' => 'patient-visitor-panel',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c8e7b6a2-0370-4a03-bc10-aa6a7a896e60';
  $display->content['new-c8e7b6a2-0370-4a03-bc10-aa6a7a896e60'] = $pane;
  $display->panels['column3'][1] = 'new-c8e7b6a2-0370-4a03-bc10-aa6a7a896e60';
  $pane = new stdClass();
  $pane->pid = 'new-b24fd2e5-e034-4d4b-8273-fd55fc9a5b8a';
  $pane->panel = 'header';
  $pane->type = 'panels_mini';
  $pane->subtype = 'patients_and_visitors_header';
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
  $pane->uuid = 'b24fd2e5-e034-4d4b-8273-fd55fc9a5b8a';
  $display->content['new-b24fd2e5-e034-4d4b-8273-fd55fc9a5b8a'] = $pane;
  $display->panels['header'][0] = 'new-b24fd2e5-e034-4d4b-8273-fd55fc9a5b8a';
  $pane = new stdClass();
  $pane->pid = 'new-a6f4ed29-75d7-4a81-8d5b-39ac176d0475';
  $pane->panel = 'secondarycolumn1';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-getting-started';
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
  $pane->uuid = 'a6f4ed29-75d7-4a81-8d5b-39ac176d0475';
  $display->content['new-a6f4ed29-75d7-4a81-8d5b-39ac176d0475'] = $pane;
  $display->panels['secondarycolumn1'][0] = 'new-a6f4ed29-75d7-4a81-8d5b-39ac176d0475';
  $pane = new stdClass();
  $pane->pid = 'new-7aee4187-cd08-4cb7-b784-4a0052276bb1';
  $pane->panel = 'secondarycolumn2';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-plan-your-arrival';
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
  $pane->uuid = '7aee4187-cd08-4cb7-b784-4a0052276bb1';
  $display->content['new-7aee4187-cd08-4cb7-b784-4a0052276bb1'] = $pane;
  $display->panels['secondarycolumn2'][0] = 'new-7aee4187-cd08-4cb7-b784-4a0052276bb1';
  $pane = new stdClass();
  $pane->pid = 'new-e996cbbe-997c-4ff9-b468-6c66ff98657b';
  $pane->panel = 'secondarycolumn3';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-families-and-visitors';
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
  $pane->uuid = 'e996cbbe-997c-4ff9-b468-6c66ff98657b';
  $display->content['new-e996cbbe-997c-4ff9-b468-6c66ff98657b'] = $pane;
  $display->panels['secondarycolumn3'][0] = 'new-e996cbbe-997c-4ff9-b468-6c66ff98657b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['patients_and_visitors'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'programs_and_services';
  $page->task = 'page';
  $page->admin_title = 'programs and services';
  $page->admin_description = '';
  $page->path = 'program-and-services';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => 'Programs and Services',
    'name' => 'main-menu',
    'weight' => '9',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_programs_and_services__panel_context_bce7498d-01a5-467e-9906-56b9b82dd75b';
  $handler->task = 'page';
  $handler->subtask = 'programs_and_services';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
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
  $display->title = 'Programs and Services';
  $display->uuid = '983f4d87-4a96-4c6b-be69-0b77f55fbf18';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['programs_and_services'] = $page;

  return $pages;

}
