<?php

/**
 * @file
 * Template for views exposed filter form.
 */
?>
<?php if (!empty($q)): ?>
  <?php
    // This ensures that, if clean URLs are off, the 'q' is added first so that
    // it shows up first in the URL.
    print $q;
  ?>
<?php endif; ?>
<div class="views-exposed-form">
  <?php foreach ($widgets as $id => $widget): ?>
    <div class="views-exposed-form__widget views-exposed-form__widget--<?php print $id; ?> views-exposed-form__widget--<?php print $widget->type; ?>">
      <?php if (!empty($widget->label)): ?>
        <label for="<?php print $widget->id; ?>">
          <?php print $widget->label; ?>
        </label>
      <?php endif; ?>
      <?php if (!empty($widget->operator)): ?>
        <div class="views-operator">
          <?php print $widget->operator; ?>
        </div>
      <?php endif; ?>
      <?php print $widget->widget; ?>
      <?php if (!empty($widget->description)): ?>
        <div class="description">
          <?php print $widget->description; ?>
        </div>
      <?php endif; ?>
    </div>
  <?php endforeach; ?>
  <?php if (!empty($sort_by)): ?>
    <div class="views-exposed-form__widget views-exposed-form__widget--sort-by">
      <?php print $sort_by; ?>
    </div>
    <div class="views-exposed-form__widget views-exposed-form__widget--sort-order">
      <?php print $sort_order; ?>
    </div>
  <?php endif; ?>
  <?php if (!empty($items_per_page)): ?>
    <div class="views-exposed-form__widget views-exposed-form__widget--page">
      <?php print $items_per_page; ?>
    </div>
  <?php endif; ?>
  <?php if (!empty($offset)): ?>
    <div class="views-exposed-form__widget views-exposed-form__widget--offset">
      <?php print $offset; ?>
    </div>
  <?php endif; ?>
  <div class="views-exposed-form__widget views-exposed-form__widget--submit">
    <?php print $button; ?>
  </div>
  <?php if (!empty($reset_button)): ?>
    <div class="views-exposed-form__widget views-exposed-form__widget--reset">
      <?php print $reset_button; ?>
    </div>
  <?php endif; ?>
</div>
