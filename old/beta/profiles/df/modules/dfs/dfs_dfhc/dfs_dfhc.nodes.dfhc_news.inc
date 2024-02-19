<?php

/**
 * @file
 *  Migrations for WEM Call To Action Nodes.
 */

class DFSDFHCNewsNodes extends ImportBaseNodes {

  /**
   * @inheritdoc
   */
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import nodes.');

    $import_path = drupal_get_path('module', 'dfs_dfhc') . '/import/';

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV($import_path . 'dfs_dfhc.nodes.dfhc_news.csv', $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationNode('news');

    // Title from prepareRow function.
    $this->addFieldMapping('title', 'title');

    // Body.
    $this->addFieldMapping('body:format', NULL, FALSE)->defaultValue('full_html');
    $this->addFieldMapping('body', 'body');
    // Uid.
    $this->addFieldMapping('uid', 'uid')->defaultValue(1);
    // Language.
    $this->addFieldMapping('language', 'language')->defaultValue('en');
    // Workbench.
    $this->addFieldMapping('workbench_moderation_state_new', 'workbench_moderation_state_new')->defaultValue('published');

    // Topic.
    $this->addFieldMapping('field_topic', 'topic');
    // Image.
    $this->addFieldMapping('field_image', 'image');
    $this->addFieldMapping('field_image:file_replace')->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_image:source_dir')->defaultValue($import_path . 'images');
    $this->addFieldMapping('field_image:destination_file', 'filename');

    // Cta.
    $this->addFieldMapping('field_cta', 'ctas');

    // Locations.
    $this->addFieldMapping('field_locations', 'locations');

    // Departments.
    $this->addFieldMapping('field_related_service', 'departments');

    // Conditions.
    $this->addFieldMapping('field_condition_treatment', 'conditions');

    // Profiles.
    $this->addFieldMapping('field_doctor_profile', 'profiles');

    // Created.
    $this->addFieldMapping('created', 'created')->defaultValue(strtotime("now"));

    // Promote to front page boolean.
    $this->addFieldMapping('promote', 'promote');
  }

  /**
   * @inheritdoc
   */
  public function csvcolumns() {
    $columns[0] = array('title', 'Title');
    $columns[1] = array('body', 'Body');
    $columns[2] = array('topic', 'Topic');
    $columns[3] = array('image', 'Image');
    $columns[4] = array('department', 'Department');
    $columns[5] = array('condition', 'Condition');
    $columns[6] = array('profile', 'Profile');
    $columns[7] = array('cta', 'Cta');
    $columns[8] = array('location', 'Location');
    $columns[9] = array('created', 'Created');
    $columns[10] = array('promote', 'Promote');
    return $columns;
  }

  /**
   * @inheritdoc
   */
  public function prepareRow($row) {

    // Topic.
    $row->topic = explode(",", $row->topic);

    // Entity reference by using node title for cta.
    $cta_title = $row->cta;
    $cta_object = entity_load('node', FALSE, array('type' => 'call_to_action', 'title' => $cta_title));
    $row->ctas = array_pop($cta_object)->nid;

    // Entity reference by using node title for locations.
    $location_title = $row->location;
    $location_object = entity_load('node', FALSE, array('type' => 'location', 'title' => $location_title));
    $row->locations = array_pop($location_object)->nid;

    // Entity reference by using node title for department.
    $department_title = $row->department;
    $department_object = entity_load('node', FALSE, array('type' => 'department_service', 'title' => $department_title));
    $row->departments = array_pop($department_object)->nid;

    // Entity reference by using node title for condition.
    $condition_title = $row->condition;
    $condition_object = entity_load('node', FALSE, array('type' => 'condition_treatment', 'title' => $condition_title));
    $row->conditions = array_pop($condition_object)->nid;

    // Entity reference by using node title for profiles.
    $profile_title = $row->profile;
    $profile_object = entity_load('node', FALSE, array('type' => 'profile', 'title' => $profile_title));
    $row->profiles = array_pop($profile_object)->nid;
  }

}
