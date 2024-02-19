<?php

/**
 * @file
 * Migrations for Conditions/Treatments.
 */

/**
 * Migrations for Conditions/Treatments.
 */
class DFSDFHCConditionNodes extends ImportBaseNodes {

  /**
   * @inheritdoc
   */
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import nodes.');

    $import_path = drupal_get_path('module', 'dfs_dfhc') . '/import/';

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV($import_path . 'dfs_dfhc.nodes.dfhc_condition.csv', $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationNode('condition_treatment');

    // Title.
    $this->addFieldMapping('title', 'title');
    // Body.
    $this->addFieldMapping('body:format', NULL, FALSE)->defaultValue('full_html');
    $this->addFieldMapping('body', 'body');
    // uid.
    $this->addFieldMapping('uid', 'uid')->defaultValue(1);
    // language.
    $this->addFieldMapping('language', 'language')->defaultValue('en');
    // Workbench.
    $this->addFieldMapping('workbench_moderation_state_new', 'workbench_moderation_state_new')->defaultValue('published');

    // Image.
    $this->addFieldMapping('field_image', 'image');
    $this->addFieldMapping('field_image:file_replace')->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_image:source_dir')->defaultValue($import_path . 'images');
    $this->addFieldMapping('field_image:destination_file', 'filename');


    // Related Cta.
    $this->addFieldMapping('field_cta', 'ctas');
    // Related departments.
    $this->addFieldMapping('field_related_dept_service', 'departments');
    // Created.
    $this->addFieldMapping('created', 'created')->defaultValue(strtotime("now"));
  }

  /**
   * @inheritdoc
   */
  public function csvcolumns() {
    $columns = array();
    $columns[0] = array('title', 'Title');
    $columns[1] = array('body', 'Body');
    $columns[2] = array('image', 'Image');
    $columns[3] = array('cta', 'Cta');
    $columns[4] = array('department', 'Department');
    $columns[5] = array('created', 'Created');
    return $columns;
  }

  /**
   * @inheritdoc
   */
  public function prepareRow($row) {
    // Entity reference by using node title for cta.
    $cta_title = $row->cta;

    $cta_object = entity_load('node', FALSE, array('type' => 'call_to_action', 'title' => $cta_title));

    $row->ctas = array_pop($cta_object)->nid;

    // Entity reference by using node title for locations.
    $department_title = $row->department;

    $department_object = entity_load('node', FALSE, array('type' => 'department_service', 'title' => $department_title));
    $row->departments = array_pop($department_object)->nid;

  }

}

