<?php
/**
 * @file
 * Theme override functions.
 */

/**
 * Implements hook_preprocess_HOOK().
 *
 * Make contact form link show up as "Contact us"
 */
function healthdemo_preprocess_node(&$variables) {
//  $node = $variables['node'];
//  if ($node->type == 'department_service' || $node->type == 'profile') {
//    $temp_array = array();
//    $delim = '"';
//    // @todo This is now broken.
//    if (isset($variables['content']['field_webform'])) {
//      $temp_array = explode($delim, $variables['content']['field_webform'][0]["#markup"]);
//      $temp_array[2] = '>Contact Us</a>';
//      $variables['content']['field_webform'][0]['#markup'] = implode($delim, $temp_array);
//    }
//  }

  // To display only phone and fax on profile page.
  // The address field needs to add ('city','name','street','additional',
  // 'province','postal_code','email') to its hidden fields.
//  if ($node->type == 'profile') {
//    $location_field = $variables['content']['group_top_section']['group_top_right_section']['group_second_column']['field_profile_address'];
//    $new_location_array = $location_field[0]['#hide'];
//    array_push($new_location_array,'city','name','street','additional','province','postal_code','email');
//
//    $variables['content']['group_top_section']['group_top_right_section']['group_second_column']['field_profile_address'][0]['#hide'] = $new_location_array;
//  }

}

/**
 * Implements theme_field override to remove semi colons from field labels.
 */
function healthdemo_field($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . '&nbsp;</div>';
  }

  // Render the items.
  $output .= '<div class="field-items"' . $variables['content_attributes'] . '>';
  foreach ($variables['items'] as $delta => $item) {
    $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
    $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
  }
  $output .= '</div>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}
