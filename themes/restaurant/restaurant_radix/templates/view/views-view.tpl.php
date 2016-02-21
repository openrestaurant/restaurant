<?php
/**
 * @file
 * Template for main view.
 */
?>
<div class="<?php print $classes; ?>">
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <?php print $title; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($header): ?>
    <div class="view__header">
      <?php print $header; ?>
    </div>
  <?php endif; ?>

  <?php if ($exposed): ?>
    <div class="view__filters">
      <?php print $exposed; ?>
    </div>
  <?php endif; ?>

  <?php if ($attachment_before): ?>
    <div class="view__attachment view__attachment--before">
      <?php print $attachment_before; ?>
    </div>
  <?php endif; ?>

  <?php if ($rows): ?>
    <div class="view__content">
      <?php print $content; ?>
    </div>
  <?php elseif ($empty): ?>
    <div class="view__empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>

  <?php if ($pager): ?>
    <div class="view__pager">
      <?php print $pager; ?>
    </div>
  <?php endif; ?>

  <?php if ($attachment_after): ?>
    <div class="view__attachment view__attachment--after">
      <?php print $attachment_after; ?>
    </div>
  <?php endif; ?>

  <?php if ($footer): ?>
    <div class="view__footer">
      <?php print $footer; ?>
    </div>
  <?php endif; ?>
</div>
