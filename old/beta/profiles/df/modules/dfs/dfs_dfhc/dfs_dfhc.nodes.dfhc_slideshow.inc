<?php

/**
 * @file
 *  Migrations for Basic Nodes.
 */

/**
 * @inheritdoc
 */
class DFSDFHCSlideshowNodes extends Migration {

  /**
   * @inheritdoc
   */
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import nodes.');

    // Create a map object for tracking the relationships between source rows.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $import_path = drupal_get_path('module', 'dfs_dfhc') . '/import/';

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV($import_path . 'dfs_dfhc.nodes.dfhc_slideshow.csv', $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationNode('slideshow');
    // Title.
    $this->addFieldMapping('title', 'title');
    // Body.
    $this->addFieldMapping('body:format', NULL, FALSE)->defaultValue('full_html');
    $this->addFieldMapping('body', 'body');
    // Uid.
    $this->addFieldMapping('uid', 'uid')->defaultValue(1);
    // Language.
    $this->addFieldMapping('language', 'language')->defaultValue('en');
    // Subtitle.
    $this->addFieldMapping('field_subtitle', 'subtitle');

    // Image.
    $this->addFieldMapping('field_image', 'image');
    $this->addFieldMapping('field_image:file_replace')->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_image:source_dir')->defaultValue($import_path . 'images');
    $this->addFieldMapping('field_image:destination_file', 'filename');
    $this->addFieldMapping('field_related_news', 'news')->sourceMigration('DFSDFHCPageNodes');

    // Created.
    $this->addFieldMapping('created', 'created')->defaultValue(strtotime("now"));
    // Workbench.
    $this->addFieldMapping('workbench_moderation_state_new', 'workbench_moderation_state_new')->defaultValue('published');

  }

  /**
   * @inheritdoc
   */
  public function csvcolumns() {
    $columns[0] = array('title', 'Title');
    $columns[1] = array('subtitle', 'Subtitle');
    $columns[2] = array('body', 'Body');
    $columns[3] = array('image', 'Image');
    $columns[4] = array('created', 'Created');
    $columns[5] = array('news', 'News');
    return $columns;
  }

  /**
   * @inheritdoc
   */
  public function complete($entity, stdClass $row) {
    $entity->body[LANGUAGE_NONE][0]['value'] = '<a href="/node/' . $entity->field_related_news[LANGUAGE_NONE][0]['target_id'] . '"><button>Learn More</button></a>';
    entity_save('node', $entity);
  }

}
