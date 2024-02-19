<?php
/**
 * @file
 * Template for the DemoHealth 2 column with header content layout.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>
<div<?php print $attributes ?>>
  <?php
  if (!empty($content['header'])):
  ?>
    <div<?php print drupal_attributes($region_attributes_array['header'])?>>
    <?php print $content['header']; ?>
  </div>
  <?php
    unset($content['header']);
  endif;
  ?>
  <?php if (!empty($content)): ?>
    <div class="panel-body-content panel-two-column-header-body-content">
    <?php foreach($content as $name => $item): ?>
      <?php if (!empty($item)): ?>
        <div<?php print drupal_attributes($region_attributes_array[$name])?>>
          <?php print $item ?>
        </div>
      <?php endif; ?>
    <?php endforeach; ?>
    </div>
  <?php endif; ?>
</div>
