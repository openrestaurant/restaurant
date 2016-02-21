<?php
/**
 * @file
 * Template for Page.
 */
?>
<div id="page" class="container">
  <div id="header" class="clearfix">
    <?php print $breadcrumb; ?>
    <?php print render($title_prefix); ?>
    <?php if ($title): ?>
      <h1 class="page-title"><?php print $title; ?></h1>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    <?php print render($primary_local_tasks); ?>
  </div>
  <div id="content" class="clearfix">
    <div class="clearfix">
      <?php if ($secondary_local_tasks): ?>
        <?php print render($secondary_local_tasks); ?>
      <?php endif; ?>
    </div>
    <div class="element-invisible"><a id="main-content"></a></div>
    <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
    <?php if ($messages): ?>
      <div id="console" class="clearfix"><?php print $messages; ?></div>
    <?php endif; ?>
    <?php if ($page['help']): ?>
      <div id="help">
        <?php print render($page['help']); ?>
      </div>
    <?php endif; ?>
    <?php print render($page['content']); ?>
  </div>
</div>
