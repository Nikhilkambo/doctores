<?php

/**
 * @file
 * Drush integration for Owl Carousel module.
 */

/**
 * The Owl Carousel library URI.
 */
define('OWLCAROUSEL_DOWNLOAD_URL', 'https://github.com/OwlFonk/OwlCarousel/archive/master.zip');

/**
 * Implements hook_drush_command().
 */
function owlcarousel_drush_command() {
  $commands = array();

  $commands['owlcarousel-download'] = array(
    'aliases' => array('owl-download', 'owld'),
    'bootstrap' => DRUSH_BOOTSTRAP_NONE,
    'description' => dt('Download Owl Carousel library.'),
    'arguments' => array(
      'path' => dt('Optional. A path where to install the Owl Carousel library. If omitted Drush will use the default location (sites/all/libraries).'),
    ),
    'examples' => array(
      'drush owlcarousel-download' => dt('Download Owl Carousel library into libraries folder.'),
    ),
    'callback' => 'drush_owlcarousel_download',
  );

  return $commands;
}

/**
 * Implements hook_drush_help().
 */
function owlcarousel_drush_help($subject) {
  switch ($subject) {
    case 'drush:owlcarousel-download':
      return dt('Downloads the Owl Carousel library from https://github.com/OwlFonk/OwlCarousel. Takes an optional path argument.');
  }
}

/**
 * Implements drush_MODULE_post_pm_enable().
 *
 * Auto-downloads plugin if module enabled via drush command.
 */
function drush_owlcarousel_post_pm_enable() {
  $modules = func_get_args();
  if (in_array('owlcarousel', $modules)) {
    drush_owlcarousel_download();
  }
}

/**
 * Command to download Owl Carousel library.
 */
function drush_owlcarousel_download() {
  $args = func_get_args();
  if (!empty($args[0])) {
    $path = $args[0];
  }
  else {
    $path = 'sites/all/libraries';
  }

  // Check whether the user wants to install the library.
  if (!drush_confirm(dt('Do you want to install Owl Carousel library in @path?', array('@path' => $path)))) {
    return drush_user_abort();
  }

  // Create the directory if it does not exist.
  if (!is_dir($path)) {
    if (!drush_mkdir($path)) {
      return FALSE;
    }
    drush_log(dt('Directory @path was created', array('@path' => $path)), 'notice');
  }

  // Set the directory to the download location.
  $old_dir = getcwd();
  chdir($path);

  // Directory name with Owl Carousel library.
  $owlcarousel_dir_name = 'owl-carousel';
  // Path to Owl Carousel library directory.
  $owlcarousel_path = $path . '/' . $owlcarousel_dir_name;

  // Download the zip archive.
  if ($file_patch = drush_download_file(OWLCAROUSEL_DOWNLOAD_URL)) {
    // Remove any existing Owl Carousel library directory.
    if (is_dir($owlcarousel_dir_name)) {
      if (drush_confirm(dt('The folder "owl-carousel" in @path already exists. Do you want to delete and re-download it again?', array('@path' => $path)))) {
        drush_delete_dir($owlcarousel_dir_name, TRUE);
        drush_log(dt('A existing Owl Carousel library was deleted from @path', array('@path' => $owlcarousel_path)), 'notice');
      }
      else {
        return drush_user_abort(dt('Owl Carousel library is already installed.'));
      }
    }

    $file_name = basename($file_patch);
    $temp_dir = drush_tempdir();
    // Extract downloaded file in temp directory.
    drush_tarball_extract($file_name, $temp_dir);

    // Change the directory name to "owl-carousel".
    drush_move_dir($temp_dir . '/OwlCarousel-master/owl-carousel', $owlcarousel_dir_name, TRUE);
  }

  if (is_file($owlcarousel_dir_name . '/owl.carousel.min.js')) {
    drush_log(dt('Owl Carousel library has been installed in @path', array('@path' => $owlcarousel_path)), 'success');
  }
  else {
    drush_log(dt('Drush was unable to install the Owl Carousel library to @path', array('@path' => $owlcarousel_path)), 'error');
  }

  // Set working directory back to the previous working directory.
  chdir($old_dir);
}
