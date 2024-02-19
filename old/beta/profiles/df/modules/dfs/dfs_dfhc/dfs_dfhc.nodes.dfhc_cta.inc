<?php

/**
 * @file
 * Migrations for Call To Action Nodes.
 */

/**
 * Migrations for Call To Action Nodes.
 */
class DFSDFHCCtaNodes extends ImportBaseNodes {

  /**
   * @inheritdoc
   */
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import nodes.');

    $import_path = drupal_get_path('module', 'dfs_dfhc') . '/import/';

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV($import_path . 'dfs_dfhc.nodes.dfhc_cta.csv', $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationNode('call_to_action');
    // Title.
    $this->addFieldMapping('title', 'title');
    // Body.
    $this->addFieldMapping('body', 'body');
    // uid.
    $this->addFieldMapping('uid', 'uid')->defaultValue(1);
    // language.
    $this->addFieldMapping('language', 'language')->defaultValue('en');

    // Image.
    $this->addFieldMapping('field_image', 'image');
    $this->addFieldMapping('field_image:file_replace')->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_image:source_dir')->defaultValue($import_path . 'images');
    $this->addFieldMapping('field_image:destination_file', 'filename');
    // Workbench.
    $this->addFieldMapping('workbench_moderation_state_new', 'workbench_moderation_state_new')->defaultValue('published');


    // Created.
    $this->addFieldMapping('created', 'created')->defaultValue(strtotime("now"));

    $this->addFieldMapping('promote', 'promote');

  }

  /**
   * Defines the columns of the csv file.
   *
   * @return array
   *   An array of columns.
   */
  public function csvcolumns() {
    $columns = array();
    $columns[0] = array('title', 'Title');
    $columns[1] = array('body', 'Body');
    $columns[2] = array('image', 'Image');
    $columns[3] = array('created', 'Created');
    $columns[4] = array('promote', 'Promote');
    return $columns;
  }

}
