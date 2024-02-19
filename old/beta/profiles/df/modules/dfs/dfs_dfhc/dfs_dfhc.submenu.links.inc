<?php

/**
 * @file
 * Migrations for menu links.
 */

/**
 * Migrations for menu links.
 */
class DFSDFHCMenuLinks extends Migration {

  /**
   * @inheritdoc
   */
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import menus.');

    // Create a MigrateSource object.
    $import_path = drupal_get_path('module', 'dfs_dfhc') . '/import/';
    $this->source = new MigrateSourceCSV($import_path . 'dfs_dfhc.menu.links.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationMenuLinks();

    // Create a map object for tracking the relationships between source rows.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'mlid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'ID of destination link',
        ),
      ),
      MigrateDestinationMenuLinks::getKeySchema()
    );




    // Title.
    $this->addFieldMapping('link_title','title');

    // Menu Name.
    $this->addFieldMapping('menu_name','menu');

    // Link path.
    $this->addFieldMapping('link_path', 'path');

    // Route path.
    $this->addFieldMapping('router_path')->defaultValue('node/%');

    // weight.
    $this->addFieldMapping('weight', 'weight');

    $this->addFieldMapping('customized')->defaultValue('1');
    $this->addFieldMapping('has_children')->defaultValue('0');
    $this->addFieldMapping('depth')->defaultValue('1');

    $this->addFieldMapping('external')->defaultValue('0');
    $this->addFieldMapping('expanded')->defaultValue('0');
    $this->addUnmigratedDestinations(array('module', 'hidden', 'options', 'p1', 'p2', 'p3', 'p4', 'p5', 'p6', 'p7', 'p8', 'p9', 'updated'));
  }

  /**
   * @inheritdoc
   */
  public function csvcolumns() {
    $columns = array();
    $columns[0] = array('title', 'Title');
    $columns[1] = array('path', 'Path');
    $columns[2] = array('weight', 'Weight');
    $columns[3] = array('menu', 'MenuName');
    $columns[4] = array('mlid', 'Mlid');

    return $columns;
  }

  /**
   * @inheritdoc
   */
  public function prepareRow($row) {
    $node_path = drupal_lookup_path('source', $row->path);
    if (FALSE === $node_path) {
      return FALSE;
    }
    $row->path = $node_path;
    return TRUE;
  }

}
