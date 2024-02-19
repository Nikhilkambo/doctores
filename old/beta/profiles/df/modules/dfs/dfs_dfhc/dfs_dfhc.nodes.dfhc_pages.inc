<?php

/**
 * @file
 * Migrations for Basic Nodes.
 */

/**
 * Migration for basic and static pages.
 */
class DFSDFHCPageNodes extends Migration {

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
          'length' => 4,
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
    $this->source = new MigrateSourceCSV($import_path . 'dfs_dfhc.nodes.dfhc_pages.csv', $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationNode('static_page');
    // Title.
    $this->addFieldMapping('title', 'title');
    // Body.
    $this->addFieldMapping('body:format', NULL, FALSE)->defaultValue('full_html');
    $this->addFieldMapping('body', 'body');

    // Image.
    $this->addFieldMapping('field_image', 'image');
    $this->addFieldMapping('field_image:file_replace')->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_image:source_dir')->defaultValue($import_path . 'images');
    $this->addFieldMapping('field_image:destination_file', 'filename');

    // field_banner_image.
    $this->addFieldMapping('field_banner_image', 'bannerimage');
    $this->addFieldMapping('field_banner_image:file_replace')->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_banner_image:source_dir')->defaultValue($import_path . 'images');
    $this->addFieldMapping('field_banner_image:destination_file', 'filename');

    // field_banner_text.
    $this->addFieldMapping('field_banner_text', 'bannertext');

    // field_banner_title.
    $this->addFieldMapping('field_banner_title', 'bannertitle');

    // field_static_page_reference.
    $this->addFieldMapping('field_static_page_reference', 'relationships')
      ->sourceMigration(array($this->getMachineName()));

    // uid.
    $this->addFieldMapping('uid', 'uid')->defaultValue(1);
    // language.
    $this->addFieldMapping('language', 'language')->defaultValue('en');

    // field_banner_button.
    $this->addFieldMapping('field_banner_button', 'bannerbutton');
    $this->addFieldMapping('field_banner_button:format', NULL, FALSE)->defaultValue('full_html');

    // Created.
    $this->addFieldMapping('created', 'created')->defaultValue(strtotime("now"));
    // Workbench.
    $this->addFieldMapping('workbench_moderation_state_new', 'workbench_moderation_state_new')->defaultValue('published');

  }

  /**
   * Defines the columns in the CSV file.
   *
   * @return array
   *   An array of the columns in the CSV file.
   */
  public function csvcolumns() {
    $columns = array();
    $columns[0] = array('title', 'Title');
    $columns[1] = array('body', 'Body');
    $columns[2] = array('image', 'Image');
    $columns[3] = array('bannerimage', 'BannerImage');
    $columns[4] = array('bannertext', 'BannerText');
    $columns[5] = array('bannertitle', 'BannerTitle');
    $columns[6] = array('relationships', 'Relationships');
    $columns[7] = array('menutitle', 'MenuTitle');
    $columns[8] = array('menupath', 'MenuPath');
    $columns[9] = array('menufamily', 'MenuFamily');
    $columns[10] = array('weight', 'Weight');
    $columns[11] = array('nid', 'Nid');
    $columns[12] = array('bannerbutton', 'BannerButton');

    return $columns;
  }

  /**
   * @inheritdoc
   */
  public function prepareRow($row) {
    $row->relationships = explode(',', $row->relationships);
  }

  /**
   * Creates a stub for migration data.
   *
   * @param \Migration $migration
   *   The migration object.
   * @param array $source_id
   *   An array of source ids.
   *
   * @return array|bool
   *   Either an array of nids for the stubs or FALSE.
   */
  protected function createStub(Migration $migration, array $source_id) {
    $node = new stdClass();
    $node->title = t('Stub for @id', array('@id' => $source_id[0]));
    $node->body[LANGUAGE_NONE][0]['value'] = t('Stub body');
    $node->type = $this->destination->getBundle();
    $node->uid = 1;
    $node->status = 1;
    node_save($node);
    if (isset($node->nid)) {
      return array($node->nid);
    }
    else {
      return FALSE;
    }
  }

  /**
   * Handles the event complete.
   *
   * @param object $entity
   *   The entity object that was created.
   * @param \stdClass $row
   *   The row from the import that was used.
   */
  public function complete($entity, stdClass $row) {
    $menu_options = array(
      'link_path' => 'node/' . $entity->nid,
      'link_title' => $row->menutitle,
      'menu_name' => $row->menufamily,
      'weight' => $row->weight,
    );
    menu_link_save($menu_options);

    $entity->field_banner_button[LANGUAGE_NONE][0]['value'] = '<a href="/node/' . $entity->nid . '">' . $row->bannerbutton . '</a>';
    entity_save('node', $entity);
  }

}
