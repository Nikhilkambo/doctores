<?php

/**
 * @file
 *  Migrations for WEM Call To Action Nodes.
 */

/**
 * @inheritdoc
 */
class DFSDFHCLocationNodes extends ImportBaseNodes {

  /**
   * @inheritdoc
   */
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import nodes.');

    $import_path = drupal_get_path('module', 'dfs_dfhc') . '/import/';

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV($import_path . 'dfs_dfhc.nodes.dfhc_location.csv', $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationNode('location');

    // Title.
    $this->addFieldMapping('title', 'title');
    // Body.
    $this->addFieldMapping('body', 'body');
    // Uid.
    $this->addFieldMapping('uid', 'uid')->defaultValue(1);
    // Language.
    $this->addFieldMapping('language', 'language')->defaultValue('en');
    // Workbench.
    $this->addFieldMapping('workbench_moderation_state_new', 'workbench_moderation_state_new')->defaultValue('published');

    // Image.
    $this->addFieldMapping('field_image', 'image');
    $this->addFieldMapping('field_image:file_replace')->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_image:source_dir')->defaultValue($import_path . 'images');
    $this->addFieldMapping('field_image:destination_file', 'filename');

    $this->addFieldMapping('field_address')->defaultValue('TRUE');
    $this->addFieldMapping('field_address:name', 'name');
    $this->addFieldMapping('field_address:street', 'street');
    $this->addFieldMapping('field_address:additional', 'additional');
    $this->addFieldMapping('field_address:city', 'city');
    $this->addFieldMapping('field_address:province', 'province');
    $this->addFieldMapping('field_address:postal_code', 'postal_code');
    $this->addFieldMapping('field_address:email', 'email');
    $this->addFieldMapping('field_address:phone', 'phone');
    $this->addFieldMapping('field_address:fax', 'fax');
    $this->addFieldMapping('field_cta', 'ctas');
    $this->addFieldMapping('field_er_wait_time', 'waittime');
    // Created.
    $this->addFieldMapping('created', 'created')->defaultValue(strtotime("now"));
  }

  /**
   * @inheritdoc
   */
  public function csvcolumns() {
    $columns[0] = array('title', 'Title');
    $columns[1] = array('body', 'Body');
    $columns[2] = array('image', 'Image');
    $columns[3] = array('name', 'Name');
    $columns[4] = array('street', 'Street');
    $columns[5] = array('additional', 'Additional');
    $columns[6] = array('city', 'City');
    $columns[7] = array('province', 'Province');
    $columns[8] = array('postal_code', 'Postal_Code');
    $columns[9] = array('email', 'Email');
    $columns[10] = array('phone', 'Phone');
    $columns[11] = array('fax', 'Fax');
    $columns[12] = array('cta', 'Cta');
    $columns[13] = array('waittime', 'WaitTime');
    $columns[14] = array('created', 'Created');
    return $columns;
  }

  /**
   * @inheritdoc
   */
  public function prepareRow($row) {
    // Entity reference by using node title.
    $cta_title = $row->cta;
    $cta_object = entity_load('node', FALSE, array('type' => 'call_to_action', 'title' => $cta_title));
    $row->ctas = array_pop($cta_object)->nid;
  }

  /**
   * @inheritdoc
   */
  public function complete($entity) {

    $l = location_load_location($entity->field_address[LANGUAGE_NONE][0]['lid']);
    module_load_include('inc', 'location', 'geocoding/google');
    $r = google_geocode_location($l);
    if ($r != NULL) {
      $l['latitude'] = $r['lat'];
      $l['longitude'] = $r['lon'];
      location_save($l, FALSE);
    }
  }

}
