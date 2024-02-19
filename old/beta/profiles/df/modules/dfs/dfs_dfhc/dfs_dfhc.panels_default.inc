<?php
/**
 * @file
 * dfs_dfhc.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function dfs_dfhc_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'accolades_panel';
  $mini->category = '';
  $mini->admin_title = 'accolades panel';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3f0b2ef3-0f47-4ab0-9862-c4e79879e9af';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fe630748-c9e0-41c4-95c2-f14cc253c73d';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<h2 class="module-header rtecenter">Accolades</h2>

<p><span>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean euismod bibendum laoreet. Proin gravida dolor sit amet lacus accumsan et viverra justo commodo. Proin sodales pulvinar tempor. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Nam fermentum, nulla luctus pharetra vulputate, felis tellus mollis orci, sed rhoncus sapien nunc eget odio</span></p>

<p class="rteright"><a href="news-and-events"><button>More</button></a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fe630748-c9e0-41c4-95c2-f14cc253c73d';
  $display->content['new-fe630748-c9e0-41c4-95c2-f14cc253c73d'] = $pane;
  $display->panels['center'][0] = 'new-fe630748-c9e0-41c4-95c2-f14cc253c73d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-fe630748-c9e0-41c4-95c2-f14cc253c73d';
  $mini->display = $display;
  $export['accolades_panel'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'conditions_search_header';
  $mini->category = '';
  $mini->admin_title = 'Conditions search header';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '36a22a3d-4f53-471f-bd39-36eda357f527';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1336e847-8225-4848-844d-9ef786576e07';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p><img src="/profiles/df/modules/dfs/dfs_dfhc/import/images/slide2.jpg" /></p>

<div class="overlay view-header-overlay">
<h1 class="white-text">Conditions</h1>

<p class="white-text">We are on a journey to make health care better for patients and their families.</p>
</div>
',
    'format' => 'full_html',
    'substitute' => TRUE,
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
  $pane->uuid = '1336e847-8225-4848-844d-9ef786576e07';
  $display->content['new-1336e847-8225-4848-844d-9ef786576e07'] = $pane;
  $display->panels['center'][0] = 'new-1336e847-8225-4848-844d-9ef786576e07';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1336e847-8225-4848-844d-9ef786576e07';
  $mini->display = $display;
  $export['conditions_search_header'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'contact_us_side_panel';
  $mini->category = '';
  $mini->admin_title = 'contact us side panel';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1858d272-5ac8-411c-8fe6-4dd4a9c64e89';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e1a1b6c8-570a-43a3-8850-f1d8e6aaccd8';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p><img src="/profiles/df/modules/dfs/dfs_dfhc/import/images/contact-us-image.png" /></p>

<h1>Need to Contact Us by Phone?</h1>

<h2 class="grey-text call-text">Call</h2>

<h1 class="webform-panel-phone">800.888.CARE</h1>

<h2 class="webform-panel-bottom-text">to speak to a Baypoint Medical representative today!</h2>
',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e1a1b6c8-570a-43a3-8850-f1d8e6aaccd8';
  $display->content['new-e1a1b6c8-570a-43a3-8850-f1d8e6aaccd8'] = $pane;
  $display->panels['middle'][0] = 'new-e1a1b6c8-570a-43a3-8850-f1d8e6aaccd8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e1a1b6c8-570a-43a3-8850-f1d8e6aaccd8';
  $mini->display = $display;
  $export['contact_us_side_panel'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'doctor_search_header';
  $mini->category = '';
  $mini->admin_title = 'Doctor search header';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '36a22a3d-4f53-471f-bd39-36eda357f527';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1336e847-8225-4848-844d-9ef786576e07';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p><img src="/profiles/df/modules/dfs/dfs_dfhc/import/images/slide3.jpg" /></p>

<div class="overlay view-header-overlay">
<h1 class="white-text">Doctor Spotlight</h1>

<p class="white-text">Baypoint physicians are locally and nationally recognized in their area of expertise.</p>
</div>
',
    'format' => 'full_html',
    'substitute' => TRUE,
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
  $pane->uuid = '1336e847-8225-4848-844d-9ef786576e07';
  $display->content['new-1336e847-8225-4848-844d-9ef786576e07'] = $pane;
  $display->panels['center'][0] = 'new-1336e847-8225-4848-844d-9ef786576e07';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1336e847-8225-4848-844d-9ef786576e07';
  $mini->display = $display;
  $export['doctor_search_header'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'doctor_search_panel';
  $mini->category = '';
  $mini->admin_title = 'Doctor search panel';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '102d0c59-3d99-420a-a1fc-2c70e9824056';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c0ffa055-5e23-4357-ad5f-2dffd6780ee1';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<h2>Find a Doctor</h2>

<p class="find-doctor-img-container"><img height="250" src="profiles/df/modules/dfs/dfs_dfhc/import/images/findadoctor1-sqr.jpg" width="250" /></p>

<p class="find-doctor-p smaller-text">Baypoint physicians are locally and nationally recognized in their area of expertise.</p>

<p class="find-doctor-button"><a href="/doctor-search">Find a Doctor</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c0ffa055-5e23-4357-ad5f-2dffd6780ee1';
  $display->content['new-c0ffa055-5e23-4357-ad5f-2dffd6780ee1'] = $pane;
  $display->panels['center'][0] = 'new-c0ffa055-5e23-4357-ad5f-2dffd6780ee1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-c0ffa055-5e23-4357-ad5f-2dffd6780ee1';
  $mini->display = $display;
  $export['doctor_search_panel'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'donation_mini_panel';
  $mini->category = '';
  $mini->admin_title = 'Appointment block';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '05f0a1bb-37a0-496d-ac4b-3300617991a0';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-54265f24-b3c9-412d-9e04-2ac3343948f0';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<h2>Make an Appointment</h2>

<p class="location-img-container"><img class="location-image" height="250" src="/profiles/df/modules/dfs/dfs_dfhc/import/images/make-an-appointment2-sqr.jpg" width="250" /></p>

<p class="location-block-p smaller-text">Your next appointment is just a phone call away.</p>

<p class="location-block-button"><a href="/content/making-appointment">Learn More</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '54265f24-b3c9-412d-9e04-2ac3343948f0';
  $display->content['new-54265f24-b3c9-412d-9e04-2ac3343948f0'] = $pane;
  $display->panels['center'][0] = 'new-54265f24-b3c9-412d-9e04-2ac3343948f0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-54265f24-b3c9-412d-9e04-2ac3343948f0';
  $mini->display = $display;
  $export['donation_mini_panel'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'families_and_visitors';
  $mini->category = '';
  $mini->admin_title = 'Families and Visitors';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->title = 'Getting Started';
  $display->uuid = '6356418d-4db2-47b0-b88d-77c51a07d0ef';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-59c9e91a-a848-4f66-9402-a17b592be18e';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'system-main-menu';
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
  $pane->uuid = '59c9e91a-a848-4f66-9402-a17b592be18e';
  $display->content['new-59c9e91a-a848-4f66-9402-a17b592be18e'] = $pane;
  $display->panels['center'][0] = 'new-59c9e91a-a848-4f66-9402-a17b592be18e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-59c9e91a-a848-4f66-9402-a17b592be18e';
  $mini->display = $display;
  $export['families_and_visitors'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'family_visitor_panel';
  $mini->category = '';
  $mini->admin_title = 'Family and visitor panel';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '102d0c59-3d99-420a-a1fc-2c70e9824056';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'family_visitor_panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c0ffa055-5e23-4357-ad5f-2dffd6780ee1';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<h2>Family and Visitor Guidelines</h2>

<p class="find-doctor-img-container"><img height="250" src="profiles/df/modules/dfs/dfs_dfhc/import/images/famguide1-sqr.jpg" width="250" /></p>

<p class="find-doctor-p smaller-text">Help us keep Baypoint Medical a safe, inviting place for patients and visitors by following these guidelines.</p>

<p class="find-doctor-button"><a href="/content/visitor-guidelines">Read More</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c0ffa055-5e23-4357-ad5f-2dffd6780ee1';
  $display->content['new-c0ffa055-5e23-4357-ad5f-2dffd6780ee1'] = $pane;
  $display->panels['center'][0] = 'new-c0ffa055-5e23-4357-ad5f-2dffd6780ee1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-c0ffa055-5e23-4357-ad5f-2dffd6780ee1';
  $mini->display = $display;
  $export['family_visitor_panel'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'find_locations_block';
  $mini->category = '';
  $mini->admin_title = 'Find locations block';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
    'style' => 'default',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fc4378a5-a14c-4201-8811-cd372b4bb678';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d24e25bf-bd29-454f-b771-385d4699c474';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<h2>Find a Location</h2>

<p class="location-img-container"><img class="location-image" height="250" src="/profiles/df/modules/dfs/dfs_dfhc/import/images/locations1-sqr.jpg" width="250" /></p>

<p class="location-block-p smaller-text">South Bay\'s most extensive healthcare system is never too far from home.</p>

<p class="location-block-button"><a href="/locations">Find a Location</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd24e25bf-bd29-454f-b771-385d4699c474';
  $display->content['new-d24e25bf-bd29-454f-b771-385d4699c474'] = $pane;
  $display->panels['center'][0] = 'new-d24e25bf-bd29-454f-b771-385d4699c474';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d24e25bf-bd29-454f-b771-385d4699c474';
  $mini->display = $display;
  $export['find_locations_block'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer_panel';
  $mini->category = '';
  $mini->admin_title = 'Footer Panel';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '5b293b96-429e-4b9c-b428-f7af9d3fd38d';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-12069d63-908b-4604-bb80-2a927c1298e2';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p class="white-text">Powered by <img src="/profiles/df/modules/dfs/dfs_dfhc/import/images/logo-white.png" /><span>©Copyright 2016 Achieve Internet</span></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'subfooter',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '12069d63-908b-4604-bb80-2a927c1298e2';
  $display->content['new-12069d63-908b-4604-bb80-2a927c1298e2'] = $pane;
  $display->panels['center'][0] = 'new-12069d63-908b-4604-bb80-2a927c1298e2';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-12069d63-908b-4604-bb80-2a927c1298e2';
  $mini->display = $display;
  $export['footer_panel'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'giving_campaign_panel';
  $mini->category = '';
  $mini->admin_title = 'Patient and Visitors block';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = 'b40c8906-ac1d-4ed7-bf23-6ee8d693b1dd';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f9849bee-be3c-4d0a-a792-05fc0e39a986';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<h2>Patients and Visitors</h2>

<p class="explore-service-img-container"><img height="250" src="profiles/df/modules/dfs/dfs_dfhc/import/images/famguide2-sqr.jpg" width="250" /></p>

<p class="explore-service-p smaller-text">Learn more about our medical center and the benefits that Baypoint has to offer.</p>

<p class="explore-service-button"><a href="/patients-visitors">Learn More</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f9849bee-be3c-4d0a-a792-05fc0e39a986';
  $display->content['new-f9849bee-be3c-4d0a-a792-05fc0e39a986'] = $pane;
  $display->panels['center'][0] = 'new-f9849bee-be3c-4d0a-a792-05fc0e39a986';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f9849bee-be3c-4d0a-a792-05fc0e39a986';
  $mini->display = $display;
  $export['giving_campaign_panel'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'location_view_header';
  $mini->category = '';
  $mini->admin_title = 'Location view header';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '36a22a3d-4f53-471f-bd39-36eda357f527';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1336e847-8225-4848-844d-9ef786576e07';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p><img src="/profiles/df/modules/dfs/dfs_dfhc/import/images/slide1.jpg" /></p>

<div class="overlay view-header-overlay">
<h1 class="white-text">Locations</h1>

<p class="white-text">South Bay\'s most extensive healthcare system is never too far from home.</p>
</div>
',
    'format' => 'full_html',
    'substitute' => TRUE,
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
  $pane->uuid = '1336e847-8225-4848-844d-9ef786576e07';
  $display->content['new-1336e847-8225-4848-844d-9ef786576e07'] = $pane;
  $display->panels['center'][0] = 'new-1336e847-8225-4848-844d-9ef786576e07';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1336e847-8225-4848-844d-9ef786576e07';
  $mini->display = $display;
  $export['location_view_header'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'patient_login_panel';
  $mini->category = '';
  $mini->admin_title = 'Patient Login Panel';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e9a882f6-ba66-4ddd-9abf-c33af199d30a';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f0d2db09-e721-4dd8-a1f8-630dc470efb7';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
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
    'admin_title' => '',
    'title' => '',
    'body' => '<h2>Patient Portal</h2>

<p class="login-body smaller-text">Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean euismod bibendum laoreet.</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f0d2db09-e721-4dd8-a1f8-630dc470efb7';
  $display->content['new-f0d2db09-e721-4dd8-a1f8-630dc470efb7'] = $pane;
  $display->panels['center'][0] = 'new-f0d2db09-e721-4dd8-a1f8-630dc470efb7';
  $pane = new stdClass();
  $pane->pid = 'new-5fed2c11-c055-4509-b5fc-a79fe5327db1';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'user-login';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'portal-login',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5fed2c11-c055-4509-b5fc-a79fe5327db1';
  $display->content['new-5fed2c11-c055-4509-b5fc-a79fe5327db1'] = $pane;
  $display->panels['center'][1] = 'new-5fed2c11-c055-4509-b5fc-a79fe5327db1';
  $pane = new stdClass();
  $pane->pid = 'new-44124a39-3b41-47d0-8b64-23ff4f1a22b1';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p class="forgot-password"><a href="user/password">Forgot Your Password?</a></p>
',
    'format' => 'filtered_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '44124a39-3b41-47d0-8b64-23ff4f1a22b1';
  $display->content['new-44124a39-3b41-47d0-8b64-23ff4f1a22b1'] = $pane;
  $display->panels['center'][2] = 'new-44124a39-3b41-47d0-8b64-23ff4f1a22b1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['patient_login_panel'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'patients_and_visitors_header';
  $mini->category = '';
  $mini->admin_title = 'Patients and Visitors header';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '36a22a3d-4f53-471f-bd39-36eda357f527';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1336e847-8225-4848-844d-9ef786576e07';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p><img class="patients-visitors-img" src="/profiles/df/modules/dfs/dfs_dfhc/import/images/patient-visitors.jpg" /></p>

<div class="overlay view-header-overlay">
<h1 class="white-text">Patients and Visitors</h1>

<p class="white-text">Learn more about our medical center and the benefits that Baypoint has to offer.</p>
</div>
',
    'format' => 'full_html',
    'substitute' => TRUE,
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
  $pane->uuid = '1336e847-8225-4848-844d-9ef786576e07';
  $display->content['new-1336e847-8225-4848-844d-9ef786576e07'] = $pane;
  $display->panels['center'][0] = 'new-1336e847-8225-4848-844d-9ef786576e07';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1336e847-8225-4848-844d-9ef786576e07';
  $mini->display = $display;
  $export['patients_and_visitors_header'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'visiting_hours_panel';
  $mini->category = '';
  $mini->admin_title = 'Visiting Hours';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '102d0c59-3d99-420a-a1fc-2c70e9824056';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c0ffa055-5e23-4357-ad5f-2dffd6780ee1';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<h2>Visiting Hours</h2>

<p class="find-doctor-img-container"><img height="250" src="profiles/df/modules/dfs/dfs_dfhc/import/images/visiting1-sqr.jpg" width="250" /></p>

<p class="find-doctor-p smaller-text">We welcome family and visitors and believe that visitation plays and important role in the care of hospitalized patients.</p>

<p class="find-doctor-button"><a href="/content/visiting-hours">See Hours</a></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c0ffa055-5e23-4357-ad5f-2dffd6780ee1';
  $display->content['new-c0ffa055-5e23-4357-ad5f-2dffd6780ee1'] = $pane;
  $display->panels['center'][0] = 'new-c0ffa055-5e23-4357-ad5f-2dffd6780ee1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-c0ffa055-5e23-4357-ad5f-2dffd6780ee1';
  $mini->display = $display;
  $export['visiting_hours_panel'] = $mini;

  return $export;
}
