<?php
/**
 * @file
 * dfs_wem_contest.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function dfs_wem_contest_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = '';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'wem_contest';
  $panelizer->access = '';
  $panelizer->view_mode = '';
  $panelizer->name = 'node:wem_contest:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = TRUE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'demonstratie_layout_stagger';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'primary_features' => NULL,
      'secondary_features' => NULL,
      'tertiary_features' => NULL,
      'quaternary_features' => array(
        'layouts' => 'default',
        'color_schemes' => 'alternate',
      ),
      'primary_supplements' => NULL,
      'secondary_supplements' => NULL,
      'tertiary_supplements' => NULL,
      'footer' => NULL,
    ),
    'quaternary_features' => array(
      'style' => 'demonstratie_panels_styles',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bf6d008c-dcc2-4fea-b79a-dcf8aad8aba7';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:wem_contest:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9c8154c4-e04d-4a81-ad68-f3fa220b7463';
  $pane->panel = 'quaternary_features';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => NULL,
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9c8154c4-e04d-4a81-ad68-f3fa220b7463';
  $display->content['new-9c8154c4-e04d-4a81-ad68-f3fa220b7463'] = $pane;
  $display->panels['quaternary_features'][0] = 'new-9c8154c4-e04d-4a81-ad68-f3fa220b7463';
  $pane = new stdClass();
  $pane->pid = 'new-a9452bec-e520-442e-94f0-88b5aeb51576';
  $pane->panel = 'quaternary_features';
  $pane->type = 'views_panes';
  $pane->subtype = 'wem_contest_redirect-enter_contest_pane';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'og_member',
        'settings' => array(
          'state' => array(
            1 => '1',
          ),
        ),
        'context' => array(
          0 => 'logged-in-user',
          1 => 'panelizer',
        ),
        'not' => TRUE,
      ),
    ),
  );
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a9452bec-e520-442e-94f0-88b5aeb51576';
  $display->content['new-a9452bec-e520-442e-94f0-88b5aeb51576'] = $pane;
  $display->panels['quaternary_features'][1] = 'new-a9452bec-e520-442e-94f0-88b5aeb51576';
  $pane = new stdClass();
  $pane->pid = 'new-1a670b3c-6339-2464-9144-ee5bdf920089';
  $pane->panel = 'quaternary_features';
  $pane->type = 'block';
  $pane->subtype = 'bean-wem---page-related-product';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'og_member',
        'settings' => array(
          'state' => array(
            1 => '1',
          ),
        ),
        'context' => array(
          0 => 'logged-in-user',
          1 => 'panelizer',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Book Your Trip',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => 'banner',
      'hero' => 0,
      'layouts' => 'default',
      'styles' => 'feature_small',
      'color_schemes' => 'default',
    ),
    'style' => 'demonstratie_panels_styles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '1a670b3c-6339-2464-9144-ee5bdf920089';
  $display->content['new-1a670b3c-6339-2464-9144-ee5bdf920089'] = $pane;
  $display->panels['quaternary_features'][2] = 'new-1a670b3c-6339-2464-9144-ee5bdf920089';
  $pane = new stdClass();
  $pane->pid = 'new-10938fe5-91f8-4ba6-9fe8-438fbe6b7a76';
  $pane->panel = 'tertiary_features';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_contest_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'picture',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'letterbox',
      'image_link' => '',
      'picture_group' => 'letterbox',
      'fallback_image_style' => '',
      'colorbox' => 'letterbox',
    ),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => NULL,
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '10938fe5-91f8-4ba6-9fe8-438fbe6b7a76';
  $display->content['new-10938fe5-91f8-4ba6-9fe8-438fbe6b7a76'] = $pane;
  $display->panels['tertiary_features'][0] = 'new-10938fe5-91f8-4ba6-9fe8-438fbe6b7a76';
  $pane = new stdClass();
  $pane->pid = 'new-d7d11e11-3d20-40c2-8687-ad9c86e14649';
  $pane->panel = 'tertiary_features';
  $pane->type = 'views_panes';
  $pane->subtype = 'wem_contestants-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'og_member',
        'settings' => array(
          'state' => array(
            1 => '1',
          ),
        ),
        'context' => array(
          0 => 'logged-in-user',
          1 => 'panelizer',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'context' => array(
      0 => 'panelizer',
    ),
    'view_mode' => 'teaser',
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
    'view_settings' => 'fields',
    'header_type' => 'none',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => 'default',
      'hero' => 0,
      'layouts' => 'default',
      'styles' => 'feature_small',
      'color_schemes' => 'alternate',
    ),
    'style' => 'demonstratie_panels_styles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd7d11e11-3d20-40c2-8687-ad9c86e14649';
  $display->content['new-d7d11e11-3d20-40c2-8687-ad9c86e14649'] = $pane;
  $display->panels['tertiary_features'][1] = 'new-d7d11e11-3d20-40c2-8687-ad9c86e14649';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:wem_contest:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'wem_contest';
  $panelizer->access = array();
  $panelizer->view_mode = 'featured';
  $panelizer->name = 'node:wem_contest:default:featured';
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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'ff2fdde8-b54b-47db-b7f1-30196f19ca12';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4980c05c-625e-4d63-b8e8-a818a5c34d24';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_contest_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_link' => 'content',
      'image_style' => 'letterbox',
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4980c05c-625e-4d63-b8e8-a818a5c34d24';
  $display->content['new-4980c05c-625e-4d63-b8e8-a818a5c34d24'] = $pane;
  $display->panels['center'][0] = 'new-4980c05c-625e-4d63-b8e8-a818a5c34d24';
  $pane = new stdClass();
  $pane->pid = 'new-dd6002df-6b1c-490f-af67-30b5dc94e626';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_trimmed',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'trim_length' => 300,
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dd6002df-6b1c-490f-af67-30b5dc94e626';
  $display->content['new-dd6002df-6b1c-490f-af67-30b5dc94e626'] = $pane;
  $display->panels['center'][1] = 'new-dd6002df-6b1c-490f-af67-30b5dc94e626';
  $pane = new stdClass();
  $pane->pid = 'new-878bf32f-a022-4686-a19d-53276c5749d5';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:group_group';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'hidden',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '878bf32f-a022-4686-a19d-53276c5749d5';
  $display->content['new-878bf32f-a022-4686-a19d-53276c5749d5'] = $pane;
  $display->panels['center'][2] = 'new-878bf32f-a022-4686-a19d-53276c5749d5';
  $pane = new stdClass();
  $pane->pid = 'new-192a9089-4016-4444-8def-2481cb8e82ce';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_contest_interests';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'hidden',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '192a9089-4016-4444-8def-2481cb8e82ce';
  $display->content['new-192a9089-4016-4444-8def-2481cb8e82ce'] = $pane;
  $display->panels['center'][3] = 'new-192a9089-4016-4444-8def-2481cb8e82ce';
  $pane = new stdClass();
  $pane->pid = 'new-8ebb013e-5950-41ad-bf58-14a2adc0319f';
  $pane->panel = 'center';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'featured',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8ebb013e-5950-41ad-bf58-14a2adc0319f';
  $display->content['new-8ebb013e-5950-41ad-bf58-14a2adc0319f'] = $pane;
  $display->panels['center'][4] = 'new-8ebb013e-5950-41ad-bf58-14a2adc0319f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8ebb013e-5950-41ad-bf58-14a2adc0319f';
  $panelizer->display = $display;
  $export['node:wem_contest:default:featured'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'wem_contest';
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->name = 'node:wem_contest:default:teaser';
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
  $display->uuid = '4cc2efea-434e-4f36-935e-4b7cb458198f';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7cff4112-ff1f-45c2-ac32-93ec17357bed';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_contest_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_link' => 'content',
      'image_style' => 'large',
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
  $pane->uuid = '7cff4112-ff1f-45c2-ac32-93ec17357bed';
  $display->content['new-7cff4112-ff1f-45c2-ac32-93ec17357bed'] = $pane;
  $display->panels['center'][0] = 'new-7cff4112-ff1f-45c2-ac32-93ec17357bed';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7cff4112-ff1f-45c2-ac32-93ec17357bed';
  $panelizer->display = $display;
  $export['node:wem_contest:default:teaser'] = $panelizer;

  return $export;
}
