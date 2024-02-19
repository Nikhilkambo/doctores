<?php
/**
 * @file
 * dfhc_menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function dfhc_menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-families-and-visitors.
  $menus['menu-families-and-visitors'] = array(
    'menu_name' => 'menu-families-and-visitors',
    'title' => 'Families and Visitors',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-footer-menu-1.
  $menus['menu-footer-menu-1'] = array(
    'menu_name' => 'menu-footer-menu-1',
    'title' => 'Patients',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-footer-menu-2.
  $menus['menu-footer-menu-2'] = array(
    'menu_name' => 'menu-footer-menu-2',
    'title' => 'Visitors',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-footer-menu-3.
  $menus['menu-footer-menu-3'] = array(
    'menu_name' => 'menu-footer-menu-3',
    'title' => 'Get involved',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-footer-menu-4.
  $menus['menu-footer-menu-4'] = array(
    'menu_name' => 'menu-footer-menu-4',
    'title' => 'About Us',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-getting-started.
  $menus['menu-getting-started'] = array(
    'menu_name' => 'menu-getting-started',
    'title' => 'Getting Started',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-plan-your-arrival.
  $menus['menu-plan-your-arrival'] = array(
    'menu_name' => 'menu-plan-your-arrival',
    'title' => 'Plan Your Arrival',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-sidebar-menu.
  $menus['menu-sidebar-menu'] = array(
    'menu_name' => 'menu-sidebar-menu',
    'title' => 'Sidebar Menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-top-links.
  $menus['menu-top-links'] = array(
    'menu_name' => 'menu-top-links',
    'title' => 'Top Links',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Families and Visitors');
  t('Get involved');
  t('Getting Started');
  t('Main menu');
  t('Patients');
  t('Plan Your Arrival');
  t('Sidebar Menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('Top Links');
  t('User menu');
  t('Visitors');

  return $menus;
}
