<?php
/**
 * @file
 * Template for Node form.
 */
?>
<div class="container">
  <div class="row">
    <div class="col-md-8">
      <?php hide($form['actions']); ?>
      <?php hide($form['additional_settings']); ?>
      <?php print drupal_render_children($form); ?>
    </div>
    <div class="col-md-4">
      <?php print drupal_render_children($form['additional_settings']); ?>
    </div>
  </div>
  <div class="form-item form-actions">
    <?php print drupal_render_children($form['actions']); ?>
  </div>
</div>