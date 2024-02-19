<?php

/**
 * @file
 * Setup WebformComponents migration.
 */

/**
 * Extends Migration to setup WebformComponent specific requirements.
 */
class DFSDFHCWebformEmails extends Migration {

  /**
   * Migration constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $simple_fields = array(
      'eid',
      'email',
      'subject',
      'from_name',
      'from_address',
      'template',
      'excluded_components',
      'html',
      'attachments',
    );

    $table_name = 'webform_emails';
    $import_path = drupal_get_path('module', 'dfs_dfhc') . '/import/';

    $this->source = new MigrateSourceCSV($import_path . 'dfs_dfhc.webform.emails.csv', $this->csvcolumns(), array('header_rows' => 1, 'embedded_newlines' => 1));

    $this->destination = new MigrateDestinationTable($table_name);

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'nid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'Source node ID',
          'alias' => 'n',
        ),
        'eid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'Source component ID',
          'alias' => 'c',
        ),
      ),
      MigrateDestinationTable::getKeySchema($table_name)
    );

    $this->addSimpleMappings($simple_fields);

    $this->addFieldMapping('required', 'required');

    $this->addFieldMapping('nid', 'nid')->sourceMigration('DFSDFHCWebformNode');

    $this->addFieldMapping('extra', NULL)
      ->defaultValue(serialize(array()));
  }

  /**
   * @inheritdoc
   */
  public function csvcolumns() {
    $columns = array();
    $columns[0] = array('nid', 'Nid');
    $columns[1] = array('eid', 'Eid');
    $columns[2] = array('email', 'Email');
    $columns[3] = array('subject', 'Subject');
    $columns[4] = array('from_name', 'From_name');
    $columns[5] = array('from_address', 'From_address');
    $columns[6] = array('template', 'Template');
    $columns[7] = array('excluded_components', 'Excluded_components');
    $columns[8] = array('html', 'Html');
    $columns[9] = array('attachments', 'Attachments');
    return $columns;
  }

}
