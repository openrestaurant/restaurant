<?php
/**
 * @file
 * Template for View content
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $row): ?>
  <?php print $row; ?>
<?php endforeach; ?>
