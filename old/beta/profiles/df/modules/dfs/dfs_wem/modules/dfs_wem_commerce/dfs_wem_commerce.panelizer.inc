<?php
/**
 * @file
 * dfs_wem_commerce.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function dfs_wem_commerce_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = '';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'wem_commerce';
  $panelizer->access = '';
  $panelizer->view_mode = '';
  $panelizer->name = 'node:wem_commerce:default';
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
  $display->layout = 'demonstratie_layout_split_features';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header_a' => NULL,
      'header_b' => NULL,
      'header_c' => NULL,
      'subheader_a' => NULL,
      'subheader_b' => NULL,
      'subheader_c' => NULL,
      'navigation' => NULL,
      'title' => NULL,
      'sidebar_a' => NULL,
      'body' => NULL,
      'sidebar_b' => NULL,
      'sidebar_c' => NULL,
      'footer_a' => NULL,
      'footer_b' => NULL,
      'footer_c' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
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
  $display->title = '';
  $display->uuid = '2f78b481-8052-4ad6-904e-45a52c86e5b2';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:wem_commerce:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-729f74fa-9bdc-420e-9d8d-c70a8b69bc82';
  $pane->panel = 'secondary_features';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:product:field_images';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => 'default',
      'hero' => 0,
      'layouts' => 'default',
      'styles' => 'default',
      'color_schemes' => 'default',
    ),
    'style' => 'demonstratie_panels_styles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '729f74fa-9bdc-420e-9d8d-c70a8b69bc82';
  $display->content['new-729f74fa-9bdc-420e-9d8d-c70a8b69bc82'] = $pane;
  $display->panels['secondary_features'][0] = 'new-729f74fa-9bdc-420e-9d8d-c70a8b69bc82';
  $pane = new stdClass();
  $pane->pid = 'new-655e6692-6d16-4294-86e9-4bc7601c64cf';
  $pane->panel = 'secondary_features';
  $pane->type = 'views';
  $pane->subtype = 'wem_commerce_product_reviews';
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
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'context' => array(
      0 => '',
    ),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => 'default',
      'hero' => 0,
      'layouts' => 'default',
      'styles' => 'default',
      'color_schemes' => 'default',
    ),
    'style' => 'demonstratie_panels_styles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '655e6692-6d16-4294-86e9-4bc7601c64cf';
  $display->content['new-655e6692-6d16-4294-86e9-4bc7601c64cf'] = $pane;
  $display->panels['secondary_features'][1] = 'new-655e6692-6d16-4294-86e9-4bc7601c64cf';
  $pane = new stdClass();
  $pane->pid = 'new-c2171d96-9d66-400e-8a4d-edf1c98b4840';
  $pane->panel = 'tertiary_features';
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
    'context' => 'panelizer',
    'override_title' => 1,
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
  $pane->uuid = 'c2171d96-9d66-400e-8a4d-edf1c98b4840';
  $display->content['new-c2171d96-9d66-400e-8a4d-edf1c98b4840'] = $pane;
  $display->panels['tertiary_features'][0] = 'new-c2171d96-9d66-400e-8a4d-edf1c98b4840';
  $pane = new stdClass();
  $pane->pid = 'new-2afefaa6-aead-48ac-919e-ff3206b1f675';
  $pane->panel = 'tertiary_features';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:product:commerce_price';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'panelizer',
    'override_title' => 1,
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
  $pane->uuid = '2afefaa6-aead-48ac-919e-ff3206b1f675';
  $display->content['new-2afefaa6-aead-48ac-919e-ff3206b1f675'] = $pane;
  $display->panels['tertiary_features'][1] = 'new-2afefaa6-aead-48ac-919e-ff3206b1f675';
  $pane = new stdClass();
  $pane->pid = 'new-e6cbb4d6-407c-4dbb-abf1-6c08ff4ada1b';
  $pane->panel = 'tertiary_features';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 1,
    'no_extras' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 0,
    'leave_node_title' => 0,
    'build_mode' => 'token',
    'context' => array(),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => 'default',
      'hero' => 0,
      'layouts' => 'default',
      'styles' => 'default',
      'color_schemes' => 'default',
      'button_styles' => 'call-to-action',
    ),
    'style' => 'demonstratie_panels_styles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e6cbb4d6-407c-4dbb-abf1-6c08ff4ada1b';
  $display->content['new-e6cbb4d6-407c-4dbb-abf1-6c08ff4ada1b'] = $pane;
  $display->panels['tertiary_features'][2] = 'new-e6cbb4d6-407c-4dbb-abf1-6c08ff4ada1b';
  $pane = new stdClass();
  $pane->pid = 'new-714db743-b5d1-482a-b698-127d5f8b08c0';
  $pane->panel = 'tertiary_features';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_wem_com_rel_interests';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '714db743-b5d1-482a-b698-127d5f8b08c0';
  $display->content['new-714db743-b5d1-482a-b698-127d5f8b08c0'] = $pane;
  $display->panels['tertiary_features'][3] = 'new-714db743-b5d1-482a-b698-127d5f8b08c0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:wem_commerce:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'wem_commerce';
  $panelizer->access = array();
  $panelizer->view_mode = 'featured';
  $panelizer->name = 'node:wem_commerce:default:featured';
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
  $display->uuid = 'd46de7fd-6126-4739-8284-9ce1ab940a72';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fcb6097a-6ad7-4073-8635-cad33f6d3e8a';
  $pane->panel = 'center';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:product:field_images';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'featured',
    'context' => 'panelizer',
    'override_title' => 1,
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
  $pane->uuid = 'fcb6097a-6ad7-4073-8635-cad33f6d3e8a';
  $display->content['new-fcb6097a-6ad7-4073-8635-cad33f6d3e8a'] = $pane;
  $display->panels['center'][0] = 'new-fcb6097a-6ad7-4073-8635-cad33f6d3e8a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:wem_commerce:default:featured'] = $panelizer;

  return $export;
}
