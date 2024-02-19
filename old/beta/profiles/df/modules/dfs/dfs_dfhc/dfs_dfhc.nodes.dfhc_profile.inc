<?php

/**
 * @file
 *  Migrations for WEM Call To Action Nodes.
 */

/**
 * Migrations for Profiles.
 */
class DFSDFHCProfileNodes extends ImportBaseNodes {

  /**
   * @inheritdoc
   */
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import nodes.');

    $import_path = drupal_get_path('module', 'dfs_dfhc') . '/import/';


    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV($import_path . 'dfs_dfhc.nodes.dfhc_profile.csv', $this->csvcolumns(), array('header_rows' => 1));
    $this->destination = new MigrateDestinationNode('profile');

    // Title from prepareRow function.
    $this->addFieldMapping('title', 'title_new');

    $this->addFieldMapping('body', 'body');
    // Uid.
    $this->addFieldMapping('uid', 'uid')->defaultValue(1);
    // Language.
    $this->addFieldMapping('language')->defaultValue('en');
    // Workbench.
    $this->addFieldMapping('workbench_moderation_state_new', 'workbench_moderation_state_new')->defaultValue('published');

    // Prefix-fname-lname-suffix.
    $this->addFieldMapping('field_prefix', 'prefix');
    $this->addFieldMapping('field_first_name', 'fname');
    $this->addFieldMapping('field_last_name', 'lname');
    $this->addFieldMapping('field_suffix', 'suffix');
    // Specialties.
    $this->addFieldMapping('field_specialties', 'specialties');
    // Languages.
    $this->addFieldMapping('field_language_spoken', 'language');
    // Gender.
    $this->addFieldMapping('field_gender', 'gender');
    // Education.
    $this->addFieldMapping('field_education_', 'education');
    // Board.
    $this->addFieldMapping('field_board_memberships_', 'board');
    // Awards.
    $this->addFieldMapping('field_awards_and_accolades__', 'awards');

    // Image.
    $this->addFieldMapping('field_image', 'image');
    $this->addFieldMapping('field_image:file_replace')->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_image:source_dir')->defaultValue($import_path . 'images');
    $this->addFieldMapping('field_image:destination_file', 'filename');

    // Address.
    $this->addFieldMapping('field_profile_address')->defaultValue('TRUE');
    $this->addFieldMapping('field_profile_address:name', 'name');
    $this->addFieldMapping('field_profile_address:street', 'street');
    $this->addFieldMapping('field_profile_address:additional', 'additional');
    $this->addFieldMapping('field_profile_address:city', 'city');
    $this->addFieldMapping('field_profile_address:province', 'province');
    $this->addFieldMapping('field_profile_address:postal_code', 'postal_code');
    $this->addFieldMapping('field_profile_address:email', 'email');
    $this->addFieldMapping('field_profile_address:phone', 'phone');
    $this->addFieldMapping('field_profile_address:fax', 'fax');

    // Cta.
    $this->addFieldMapping('field_cta', 'ctas');

    // Locations.
    $this->addFieldMapping('field_locations', 'locations');

    // Departments.
    $this->addFieldMapping('field_related_dept_service', 'departments');

    // Conditions.
    $this->addFieldMapping('field_related_condition_treatmen', 'conditions');

    // Webform.
    $this->addFieldMapping('field_webform', 'webform')->sourceMigration('DFSDFHCWebformNode');
    // Created.
    $this->addFieldMapping('created', 'created')->defaultValue(strtotime("now"));
  }

  /**
   * @inheritdoc
   */
  public function csvcolumns() {
    $columns[0] = array('title', 'Title');
    $columns[1] = array('prefix', 'Prefix');
    $columns[2] = array('fname', 'Fname');
    $columns[3] = array('lname', 'Lname');
    $columns[4] = array('suffix', 'Suffix');
    $columns[5] = array('body', 'Body');
    $columns[6] = array('specialties', 'Specialties');
    $columns[7] = array('language', 'Language');
    $columns[8] = array('gender', 'Gender');
    $columns[9] = array('education', 'Education');
    $columns[10] = array('board', 'Board');
    $columns[11] = array('awards', 'Awards');
    $columns[12] = array('image', 'Image');
    $columns[13] = array('name', 'Name');
    $columns[14] = array('street', 'Street');
    $columns[15] = array('additional', 'Additional');
    $columns[16] = array('city', 'City');
    $columns[17] = array('province', 'Province');
    $columns[18] = array('postal_code', 'Postal_Code');
    $columns[19] = array('email', 'Email');
    $columns[20] = array('phone', 'Phone');
    $columns[21] = array('fax', 'Fax');
    $columns[22] = array('department', 'Department');
    $columns[23] = array('condition', 'Condition');
    $columns[24] = array('cta', 'Cta');
    $columns[25] = array('location', 'Location');
    $columns[26] = array('created', 'Created');
    $columns[27] = array('webform', 'Webform');
    return $columns;
  }

  /**
   * @inheritdoc
   */
  public function prepareRow($row) {
    // Need to make title.
    $profile_title = $row->prefix . ' ' . $row->fname . ' ' . $row->lname . ' ' . $row->suffix;
    $row->title_new = $profile_title;

    // Specialties.
    $row->specialties = explode(",", $row->specialties);
    // Languages.
    $row->language = explode(",", $row->language);


    // Entity reference by using node title for cta.
    $cta_title = $row->cta;
    $cta_object = entity_load('node', FALSE, array('type' => 'call_to_action', 'title' => $cta_title));
    $row->ctas = array_pop($cta_object)->nid;

    // Entity reference by using node title for locations.
    $location_title = $row->location;
    $location_object = entity_load('node', FALSE, array('type' => 'location', 'title' => $location_title));
    $row->locations = array_pop($location_object)->nid;

    // Entity reference by using node title for department.
    $department_title = $row->department;
    $department_object = entity_load('node', FALSE, array('type' => 'department_service', 'title' => $department_title));
    $row->departments = array_pop($department_object)->nid;

    // Entity reference by using node title for department.
    $condition_title = $row->condition;
    $condition_object = entity_load('node', FALSE, array('type' => 'condition_treatment', 'title' => $condition_title));
    $row->conditions = array_pop($condition_object)->nid;
  }

  /**
   * @inheritdoc
   */
  public function complete($entity) {

    $l = location_load_location($entity->field_profile_address[LANGUAGE_NONE][0]['lid']);
    module_load_include('inc', 'location', 'geocoding/google');
    $r = google_geocode_location($l);
    if ($r != NULL) {
      $l['latitude'] = $r['lat'];
      $l['longitude'] = $r['lon'];
      location_save($l, FALSE);
    }
  }

}
