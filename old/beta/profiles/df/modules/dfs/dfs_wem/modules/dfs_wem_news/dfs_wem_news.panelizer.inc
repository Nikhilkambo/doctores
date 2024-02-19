<?php
/**
 * @file
 * dfs_wem_news.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function dfs_wem_news_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'wem_news';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:wem_news:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = TRUE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'demonstratie_layout_split_features';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'primary_features' => NULL,
      'secondary_features' => NULL,
      'tertiary_features' => NULL,
      'quaternary_features' => NULL,
      'primary_supplements' => NULL,
      'secondary_supplements' => NULL,
      'tertiary_supplements' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'ddd48dd6-e9b6-4efe-ac76-73642fb1af0d';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:wem_news:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-cf615608-9f93-1514-8d08-be98c27d9ad7';
  $pane->panel = 'primary_features';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_wem_subtitle';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'edit' => array(
        'editor' => 'direct',
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
  $pane->uuid = 'cf615608-9f93-1514-8d08-be98c27d9ad7';
  $display->content['new-cf615608-9f93-1514-8d08-be98c27d9ad7'] = $pane;
  $display->panels['primary_features'][0] = 'new-cf615608-9f93-1514-8d08-be98c27d9ad7';
  $pane = new stdClass();
  $pane->pid = 'new-99878fb5-c19d-4acd-a7a8-4355ee7facca';
  $pane->panel = 'quaternary_features';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:86B9A9D2-0209-4098-93F2-1002074C6C9C';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => 'hidden',
      'hero' => 'default',
      'layouts' => 'default',
      'styles' => 'default',
      'color_schemes' => 'default',
      'button_styles' => 'default',
    ),
    'style' => 'demonstratie_panels_styles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '99878fb5-c19d-4acd-a7a8-4355ee7facca';
  $display->content['new-99878fb5-c19d-4acd-a7a8-4355ee7facca'] = $pane;
  $display->panels['quaternary_features'][0] = 'new-99878fb5-c19d-4acd-a7a8-4355ee7facca';
  $pane = new stdClass();
  $pane->pid = 'new-67dc393a-ff2b-43a7-90ca-4cd3a3b1509d';
  $pane->panel = 'quaternary_features';
  $pane->type = 'block';
  $pane->subtype = 'bean-wem---page-secondary';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => 'default',
      'hero' => 'default',
      'layouts' => 'horizontal',
      'styles' => 'feature_small',
      'color_schemes' => 'default',
      'button_styles' => 'default',
    ),
    'style' => 'demonstratie_panels_styles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '67dc393a-ff2b-43a7-90ca-4cd3a3b1509d';
  $display->content['new-67dc393a-ff2b-43a7-90ca-4cd3a3b1509d'] = $pane;
  $display->panels['quaternary_features'][1] = 'new-67dc393a-ff2b-43a7-90ca-4cd3a3b1509d';
  $pane = new stdClass();
  $pane->pid = 'new-8bdb6f12-eccc-40a0-b908-b0928c790122';
  $pane->panel = 'secondary_features';
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
    'formatter_settings' => array(
      'edit' => array(
        'editor' => 'direct',
      ),
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => 'default',
      'hero' => 'default',
      'layouts' => 'default',
      'styles' => 'default',
      'color_schemes' => 'alternate',
      'button_styles' => 'default',
    ),
    'style' => 'demonstratie_panels_styles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8bdb6f12-eccc-40a0-b908-b0928c790122';
  $display->content['new-8bdb6f12-eccc-40a0-b908-b0928c790122'] = $pane;
  $display->panels['secondary_features'][0] = 'new-8bdb6f12-eccc-40a0-b908-b0928c790122';
  $pane = new stdClass();
  $pane->pid = 'new-fc5aa8c5-a15e-446b-9b6e-a17202f0cb53';
  $pane->panel = 'secondary_features';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:sharethis';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fc5aa8c5-a15e-446b-9b6e-a17202f0cb53';
  $display->content['new-fc5aa8c5-a15e-446b-9b6e-a17202f0cb53'] = $pane;
  $display->panels['secondary_features'][1] = 'new-fc5aa8c5-a15e-446b-9b6e-a17202f0cb53';
  $pane = new stdClass();
  $pane->pid = 'new-661d9ec5-8386-4bab-b190-330bd323ad80';
  $pane->panel = 'secondary_features';
  $pane->type = 'block';
  $pane->subtype = 'bean-wem---page-related-product';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => 'banner',
      'hero' => 'default',
      'layouts' => 'default',
      'styles' => 'feature_medium',
      'color_schemes' => 'default',
      'button_styles' => 'default',
    ),
    'style' => 'demonstratie_panels_styles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '661d9ec5-8386-4bab-b190-330bd323ad80';
  $display->content['new-661d9ec5-8386-4bab-b190-330bd323ad80'] = $pane;
  $display->panels['secondary_features'][2] = 'new-661d9ec5-8386-4bab-b190-330bd323ad80';
  $pane = new stdClass();
  $pane->pid = 'new-92e52e9b-2cbd-41d3-8de3-58a18f59b079';
  $pane->panel = 'tertiary_features';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_wem_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'picture',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'colorbox' => 'letterbox',
      'fallback_image_style' => '',
      'image_link' => '',
      'picture_group' => 'letterbox',
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => 'hidden',
      'hero' => 'default',
      'layouts' => 'default',
      'styles' => 'default',
      'color_schemes' => 'default',
      'button_styles' => 'default',
    ),
    'style' => 'demonstratie_panels_styles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '92e52e9b-2cbd-41d3-8de3-58a18f59b079';
  $display->content['new-92e52e9b-2cbd-41d3-8de3-58a18f59b079'] = $pane;
  $display->panels['tertiary_features'][0] = 'new-92e52e9b-2cbd-41d3-8de3-58a18f59b079';
  $pane = new stdClass();
  $pane->pid = 'new-129d14c2-c025-4ff5-9fe4-725703faf605';
  $pane->panel = 'tertiary_features';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_wem_video';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'file_rendered',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'file_view_mode' => 'default',
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => 'hidden',
      'hero' => 0,
      'layouts' => 'default',
      'styles' => 'default',
      'color_schemes' => 'reverse',
      'button_styles' => 'default',
    ),
    'style' => 'demonstratie_panels_styles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '129d14c2-c025-4ff5-9fe4-725703faf605';
  $display->content['new-129d14c2-c025-4ff5-9fe4-725703faf605'] = $pane;
  $display->panels['tertiary_features'][1] = 'new-129d14c2-c025-4ff5-9fe4-725703faf605';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-92e52e9b-2cbd-41d3-8de3-58a18f59b079';
  $panelizer->display = $display;
  $export['node:wem_news:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'wem_news';
  $panelizer->access = array();
  $panelizer->view_mode = 'featured';
  $panelizer->name = 'node:wem_news:default:featured';
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
  $display->uuid = 'cef43883-0762-4419-8d8e-386fbeffbbf3';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1dfe3837-2938-4c86-b29c-077714f0e467';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_wem_image';
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
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1dfe3837-2938-4c86-b29c-077714f0e467';
  $display->content['new-1dfe3837-2938-4c86-b29c-077714f0e467'] = $pane;
  $display->panels['center'][0] = 'new-1dfe3837-2938-4c86-b29c-077714f0e467';
  $pane = new stdClass();
  $pane->pid = 'new-e9be5334-a3ae-43b6-a31e-9cb7b8e40b1b';
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
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e9be5334-a3ae-43b6-a31e-9cb7b8e40b1b';
  $display->content['new-e9be5334-a3ae-43b6-a31e-9cb7b8e40b1b'] = $pane;
  $display->panels['center'][1] = 'new-e9be5334-a3ae-43b6-a31e-9cb7b8e40b1b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:wem_news:default:featured'] = $panelizer;

  return $export;
}
