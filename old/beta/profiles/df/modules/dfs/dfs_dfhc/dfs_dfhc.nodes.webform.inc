<?php

/**
 * @file
 * Migrations for Webform Nodes.
 */

/**
 * Migrations for Webform Nodes.
 */
class DFSDFHCWebformNode extends Migration {

  /**
   * @inheritdoc
   */
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import nodes.');

    // Create a map object for tracking the relationships between source rows.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'nid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'Source node ID',
          'alias' => 'n',
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $import_path = drupal_get_path('module', 'dfs_dfhc') . '/import/';

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV($import_path . 'dfs_dfhc.nodes.dfhc_webform.csv', $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationNode('webform');

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('uid', 'uid')->defaultValue(1);
    $this->addFieldMapping('language', 'language')->defaultValue('en');
    $this->addFieldMapping('workbench_moderation_state_new', 'workbench_moderation_state_new')->defaultValue('published');
  }

  /**
   * @inheritdoc
   */
  public function csvcolumns() {
    $columns = array();
    $columns[0] = array('title', 'Title');
    $columns[1] = array('nid', 'Nid');

    return $columns;
  }

  /**
   * @inheritdoc
   */
  public function complete($entity, stdClass $row) {

    if ($row->nid == 3233) {
      $menu_options = array(
        'link_path' => 'node/' . $entity->nid,
        'menu_name' => 'main-menu',
        'link_title' => 'Contact Us',
        'weight' => 10,
      );
      menu_link_save($menu_options);
    }
    $compact_form_get = variable_get('compact_forms_ids');
    $compact_form_get = $compact_form_get . '
    webform-client-form-' . $entity->nid;
    variable_set('compact_forms_ids', $compact_form_get);
  }

}
