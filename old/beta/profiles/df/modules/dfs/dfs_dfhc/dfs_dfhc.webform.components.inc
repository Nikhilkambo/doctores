<?php
/**
 * @file
 * Setup WebformComponents migration.
 */

/**
 * Extends Migration to setup WebformComponent specific requirements.
 */
class DFSDFHCWebformComponents extends Migration {
  /**
   * @inheritdoc
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $simple_fields = array(
      'cid',
      'pid',
      'form_key',
      'name',
      'type',
      'value',
      'weight',
    );

    $table_name = 'webform_component';
    $import_path = drupal_get_path('module', 'dfs_dfhc') . '/import/';

    $this->source = new MigrateSourceCSV($import_path . 'dfs_dfhc.webform.components.csv', $this->csvcolumns(), array('header_rows' => 1, 'embedded_newlines' => 1));

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
        'cid' => array(
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

    $this->addFieldMapping('extra', 'extra');
  }

  /**
   * @inheritdoc
   */
  public function csvcolumns() {
    $columns = array();
    $columns[0] = array('nid', 'Nid');
    $columns[1] = array('cid', 'Cid');
    $columns[2] = array('pid', 'Pid');
    $columns[3] = array('form_key', 'Form_Key');
    $columns[4] = array('name', 'Name');
    $columns[5] = array('type', 'Type');
    $columns[6] = array('value', 'Value');
    $columns[7] = array('required', 'Required');
    $columns[8] = array('weight', 'Weight');
    $columns[9] = array('select', 'Select');
    return $columns;
  }

  /**
   * @inheritdoc
   */
  public function prepareRow($row) {
    module_load_include('inc', 'webform', 'components/textfield');
    module_load_include('inc', 'webform', 'components/select');
    module_load_include('inc', 'webform', 'components/number');
    module_load_include('inc', 'webform', 'components/textarea');
    module_load_include('inc', 'webform', 'components/email');

    switch ($row->type) {

      case 'textfield':
        $node_defaults = _webform_defaults_textfield();
        $serialize_extra = serialize($node_defaults['extra']);
        $row->extra = $serialize_extra;
        break;

      case 'select':
        $node_defaults = _webform_defaults_select();
        $node_defaults['extra']['items'] = $row->select;
        $node_defaults['extra']['aslist'] = TRUE;
        $serialize_extra = serialize($node_defaults['extra']);
        $row->extra = $serialize_extra;
        break;

      case 'number':
        $node_defaults = _webform_defaults_number();
        $serialize_extra = serialize($node_defaults['extra']);
        $row->extra = $serialize_extra;
        break;

      case 'textarea':
        $node_defaults = _webform_defaults_textarea();
        $serialize_extra = serialize($node_defaults['extra']);
        $row->extra = $serialize_extra;
        break;

      case 'email':
        $node_defaults = _webform_defaults_email();
        $serialize_extra = serialize($node_defaults['extra']);
        $row->extra = $serialize_extra;
        break;
    }
  }

}

