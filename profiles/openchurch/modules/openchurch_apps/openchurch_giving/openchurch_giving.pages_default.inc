<?php
/**
 * @file
 * openchurch_giving.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function openchurch_giving_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'openchurch_giving';
  $page->task = 'page';
  $page->admin_title = 'OpenChurch Giving';
  $page->admin_description = 'Giving homepage.';
  $page->path = 'give';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Give',
    'name' => 'main-menu',
    'weight' => '4',
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
  $handler->name = 'page_openchurch_giving_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'openchurch_giving';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Faithful Giving';
  $display->uuid = 'af5db16e-f037-4e50-8f41-b4bfacda5070';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c4f24ba5-7253-4b6d-aced-d502c3834b03';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'openchurch_giving_intro';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'panopoly_wysiwyg_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c4f24ba5-7253-4b6d-aced-d502c3834b03';
    $display->content['new-c4f24ba5-7253-4b6d-aced-d502c3834b03'] = $pane;
    $display->panels['contentmain'][0] = 'new-c4f24ba5-7253-4b6d-aced-d502c3834b03';
    $pane = new stdClass();
    $pane->pid = 'new-6a27d364-8660-4cbd-9e34-4ba7a56c8388';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openchurch_giving-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6a27d364-8660-4cbd-9e34-4ba7a56c8388';
    $display->content['new-6a27d364-8660-4cbd-9e34-4ba7a56c8388'] = $pane;
    $display->panels['contentmain'][1] = 'new-6a27d364-8660-4cbd-9e34-4ba7a56c8388';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['openchurch_giving'] = $page;

  return $pages;

}
