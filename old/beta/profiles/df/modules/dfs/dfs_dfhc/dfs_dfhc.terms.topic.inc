<?php

/**
 * @file
 * Migration for Interests Taxonomy Terms in DFS WEM.
 */

/**
 * Migration for Interests Taxonomy Terms in DFS WEM.
 */
class DFSDFHCTopicTerms extends ImportBaseTerms {
  /**
   * @inheritdoc
   */
  public function __construct($arguments) {
    parent::__construct($arguments );
    $import_path = drupal_get_path('module', 'dfs_dfhc') . '/import/';


    $this->source = new MigrateSourceCSV($import_path . 'dfs_dfhc.terms.topic.csv', $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationTerm('topic');
    $this->addFieldMapping('name', 'name');
  }

  /**
   * @inheritdoc
   */
  public function csvcolumns() {
    $columns[0] = array('name', 'Name');
    return $columns;
  }

}
