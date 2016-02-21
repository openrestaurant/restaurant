<?php
/**
 * @file
 * Template for a reservation entity.
 */
?>
<div class="reservation clearfix">
  <div class="col-left">
    <?php hide($content['group_update']); ?>
    <?php print render($content); ?>
  </div>
  <div class="col-right">
    <?php print render($content['group_update']); ?>
  </div>
</div>

