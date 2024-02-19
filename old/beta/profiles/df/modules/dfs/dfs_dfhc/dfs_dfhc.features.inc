<?php
/**
 * @file
 * dfs_dfhc.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dfs_dfhc_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dfs_dfhc_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function dfs_dfhc_image_default_styles() {
  $styles = array();

  // Exported image style: doctor_view_image.
  $styles['doctor_view_image'] = array(
    'label' => 'Doctor view image 255x255',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 255,
          'height' => 255,
        ),
        'weight' => -10,
      ),
      6 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 255,
          'height' => 255,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: homepage_block_images.
  $styles['homepage_block_images'] = array(
    'label' => 'Homepage block images 250x250',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 250,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: homepage_news_view_100_80.
  $styles['homepage_news_view_100_80'] = array(
    'label' => 'Homepage news view 100 80',
    'effects' => array(
      3 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 100,
          'height' => 80,
        ),
        'weight' => -10,
      ),
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => 80,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: location_view_thumb_190x190.
  $styles['location_view_thumb_190x190'] = array(
    'label' => 'location view thumb 190x190',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 190,
          'height' => 190,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news_view_image_250x150.
  $styles['news_view_image_250x150'] = array(
    'label' => 'News view image 250x175',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 250,
          'height' => 175,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile_image_310x310.
  $styles['profile_image_310x310'] = array(
    'label' => 'Profile image 310x310',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 310,
          'height' => 310,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile_news_image_140x110.
  $styles['profile_news_image_140x110'] = array(
    'label' => 'profile news image 140x110',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 140,
          'height' => 110,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: static_page_body_image_390x390.
  $styles['static_page_body_image_390x390'] = array(
    'label' => 'static page body image 395x395',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 395,
          'height' => 395,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
