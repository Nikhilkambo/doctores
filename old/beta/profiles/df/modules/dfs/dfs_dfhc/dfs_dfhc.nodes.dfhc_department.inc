<?php

/**
 * @file
 * Migrations for Department Nodes.
 */

/**
 * Migrations for Department Nodes.
 */
class DFSDFHCDepartmentNodes extends ImportBaseNodes {

  /**
   * @inheritdoc
   */
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import nodes.');

    $import_path = drupal_get_path('module', 'dfs_dfhc') . '/import/';

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV($import_path . 'dfs_dfhc.nodes.dfhc_department.csv', $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationNode('department_service');

    // Title.
    $this->addFieldMapping('title', 'title');
    // Body.
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

    $this->addFieldMapping('field_address_')->defaultValue('TRUE');
    $this->addFieldMapping('field_address_:name', 'name');
    $this->addFieldMapping('field_address_:street', 'street');
    $this->addFieldMapping('field_address_:additional', 'additional');
    $this->addFieldMapping('field_address_:city', 'city');
    $this->addFieldMapping('field_address_:province', 'province');
    $this->addFieldMapping('field_address_:postal_code', 'postal_code');
    $this->addFieldMapping('field_address_:email', 'email');
    $this->addFieldMapping('field_address_:phone', 'phone');
    $this->addFieldMapping('field_address_:fax', 'fax');
    $this->addFieldMapping('field_cta', 'ctas');
    $this->addFieldMapping('field_locations', 'locations');
    $this->addFieldMapping('field_specialties', 'specialties');
    $this->addFieldMapping('field_webform', 'webform')->sourceMigration('DFSDFHCWebformNode');
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
    $columns[13] = array('specialties', 'Specialties');
    $columns[14] = array('location', 'Location');
    $columns[15] = array('created', 'Created');
    $columns[16] = array('webform', 'Webform');

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
    // Specialties.
    $row->specialties = explode(",", $row->specialties);
    // Entity reference by using node title for locations.
    $location_title = $row->location;
    $location_object = entity_load('node', FALSE, array('type' => 'location', 'title' => $location_title));
    $row->locations = array_pop($location_object)->nid;
  }

  /**
   * @inheritdoc
   */
  public function complete($entity, stdClass $row) {

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
