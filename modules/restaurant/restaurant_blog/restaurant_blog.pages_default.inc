<?php
/**
 * @file
 * restaurant_blog.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function restaurant_blog_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__blog_post';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Blog Post',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'blog_post',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'blog_post' => 'blog_post',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'layout_blog_post_node';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'slideshow' => NULL,
      'top' => NULL,
      'contentmain' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'e3f16c5b-ba26-4ce1-aea2-ea87e017370a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-467470ad-7293-42f3-b8f4-69e4ce964bf8';
  $pane->panel = 'region_a';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:8ff764c1-26fd-404c-b9d1-7edfb9a778eb';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '467470ad-7293-42f3-b8f4-69e4ce964bf8';
  $display->content['new-467470ad-7293-42f3-b8f4-69e4ce964bf8'] = $pane;
  $display->panels['region_a'][0] = 'new-467470ad-7293-42f3-b8f4-69e4ce964bf8';
  $pane = new stdClass();
  $pane->pid = 'new-e4c31bf6-cb68-4634-bdbf-0902a0a7e7e0';
  $pane->panel = 'region_b';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:5b264544-6c07-4423-944a-a4b58c37a086';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'timestamp' => 1442252727,
      'uid' => '1',
      'title' => '',
      'log' => '',
      'vuuid' => 'f78dfc9d-604e-4ac1-aebb-95434b71ebb2',
      'fpid' => '6',
      'bundle' => 'text',
      'link' => 0,
      'path' => '',
      'reusable' => 1,
      'admin_title' => 'See all News',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'view_access' => NULL,
      'edit_access' => NULL,
      'created' => '1442252556',
      'changed' => 1442252727,
      'uuid' => '5b264544-6c07-4423-944a-a4b58c37a086',
      'language' => 'und',
      'current_vid' => '7',
      'field_basic_text_text' => array(
        'und' => array(
          0 => array(
            'value' => '<h2 style="text-align: center;" class="clear-margin--bottom"><a href="/news"><i class="fa fa-long-arrow-left">&nbsp;</i> See all News</a></h2>',
            'format' => 'panopoly_wysiwyg_text',
          ),
        ),
      ),
      'revision' => 1,
      'is_new' => FALSE,
      'original' => (object) array(
        'vid' => '7',
        'timestamp' => '1442252644',
        'uid' => '1',
        'title' => '',
        'log' => '',
        'vuuid' => 'bca06ab6-3e7f-4ab6-89ad-0db64c30a543',
        'fpid' => '6',
        'bundle' => 'text',
        'link' => '0',
        'path' => '',
        'reusable' => '1',
        'admin_title' => 'Back to News',
        'admin_description' => '',
        'category' => 'Reusable Content',
        'view_access' => NULL,
        'edit_access' => NULL,
        'created' => '1442252556',
        'changed' => '1442252644',
        'uuid' => '5b264544-6c07-4423-944a-a4b58c37a086',
        'language' => 'und',
        'current_vid' => '7',
        'field_basic_text_text' => array(
          'und' => array(
            0 => array(
              'value' => '<h2 class="clear-margin--bottom"><a href="/news"><i class="fa fa-long-arrow-left">&nbsp;</i> Back to News</a></h2><p></p>',
              'format' => 'panopoly_html_text',
              'safe_value' => '<h2 class="clear-margin--bottom"><a href="/news"><i class="fa fa-long-arrow-left"> </i> Back to News</a></h2>
</p>
',
            ),
          ),
        ),
      ),
      'old_vid' => '7',
      'vid' => '8',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e4c31bf6-cb68-4634-bdbf-0902a0a7e7e0';
  $display->content['new-e4c31bf6-cb68-4634-bdbf-0902a0a7e7e0'] = $pane;
  $display->panels['region_b'][0] = 'new-e4c31bf6-cb68-4634-bdbf-0902a0a7e7e0';
  $pane = new stdClass();
  $pane->pid = 'new-a4bf86f2-67be-421c-a39d-7da7b9cceffb';
  $pane->panel = 'region_c';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 0,
    'no_extras' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 0,
    'leave_node_title' => 1,
    'build_mode' => 'full',
    'context' => array(),
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a4bf86f2-67be-421c-a39d-7da7b9cceffb';
  $display->content['new-a4bf86f2-67be-421c-a39d-7da7b9cceffb'] = $pane;
  $display->panels['region_c'][0] = 'new-a4bf86f2-67be-421c-a39d-7da7b9cceffb';
  $pane = new stdClass();
  $pane->pid = 'new-31995f25-9518-4997-8920-d01b091c5c62';
  $pane->panel = 'region_c';
  $pane->type = 'block';
  $pane->subtype = 'disqus-disqus_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '31995f25-9518-4997-8920-d01b091c5c62';
  $display->content['new-31995f25-9518-4997-8920-d01b091c5c62'] = $pane;
  $display->panels['region_c'][1] = 'new-31995f25-9518-4997-8920-d01b091c5c62';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__blog_post'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function restaurant_blog_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news';
  $page->task = 'page';
  $page->admin_title = 'News';
  $page->admin_description = '';
  $page->path = 'news';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'News',
    'name' => 'main-menu',
    'weight' => '3',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news__news';
  $handler->task = 'page';
  $handler->subtask = 'news';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'News',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'news',
  );
  $display = new panels_display();
  $display->layout = 'layout_news';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'contentmain' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'News';
  $display->uuid = 'f4525f8c-9249-4869-b5cf-90742b4f4e6b';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5a604288-b791-43c0-b20a-79680ae11f63';
  $pane->panel = 'region_a';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:8ff764c1-26fd-404c-b9d1-7edfb9a778eb';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'bundle' => 'slideshow',
      'language' => '',
      'is_new' => TRUE,
      'title' => '',
      'link' => 0,
      'path' => '',
      'reusable' => 1,
      'admin_title' => 'News slideshow',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'vid' => '6',
      'current_vid' => '',
      'revision' => 1,
      'fpid' => '5',
      'field_slideshow_slides' => array(
        'und' => array(
          0 => array(
            'value' => '22',
          ),
        ),
      ),
      'log' => '',
      'created' => 1441654852,
      'timestamp' => 1441654852,
      'changed' => 1441654852,
      'uuid' => '',
      'uid' => '1',
      'vuuid' => '',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5a604288-b791-43c0-b20a-79680ae11f63';
  $display->content['new-5a604288-b791-43c0-b20a-79680ae11f63'] = $pane;
  $display->panels['region_a'][0] = 'new-5a604288-b791-43c0-b20a-79680ae11f63';
  $pane = new stdClass();
  $pane->pid = 'new-92395d49-4676-4ce0-8407-fa555c2e6d7c';
  $pane->panel = 'region_b';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-blog-blog';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '92395d49-4676-4ce0-8407-fa555c2e6d7c';
  $display->content['new-92395d49-4676-4ce0-8407-fa555c2e6d7c'] = $pane;
  $display->panels['region_b'][0] = 'new-92395d49-4676-4ce0-8407-fa555c2e6d7c';
  $pane = new stdClass();
  $pane->pid = 'new-ee403e81-1e9b-4055-9735-30c2e8b0ed52';
  $pane->panel = 'region_c';
  $pane->type = 'views_panes';
  $pane->subtype = 'blog-blog';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ee403e81-1e9b-4055-9735-30c2e8b0ed52';
  $display->content['new-ee403e81-1e9b-4055-9735-30c2e8b0ed52'] = $pane;
  $display->panels['region_c'][0] = 'new-ee403e81-1e9b-4055-9735-30c2e8b0ed52';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news'] = $page;

  return $pages;

}
