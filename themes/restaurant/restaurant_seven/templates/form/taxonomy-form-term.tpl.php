<?php
/**
 * @file
 * Template for Taxonomy term form.
 */
?>
<div class="container">
  <div class="row">
    <div class="col-md-8">
      <?php hide($form['actions']); ?>
      <?php print drupal_render_children($form); ?>
      <div class="form-item form-actions">
        <?php print drupal_render_children($form['actions']); ?>
      </div>
    </div>
    <div class="col-md-4">
      <?php print drupal_render_children($form); ?>
    </div>
  </div>
</div>