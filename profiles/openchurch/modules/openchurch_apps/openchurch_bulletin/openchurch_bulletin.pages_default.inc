<?php
/**
 * @file
 * openchurch_bulletin.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function openchurch_bulletin_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'openchurch_bulletins';
  $page->task = 'page';
  $page->admin_title = 'OpenChurch Bulletins';
  $page->admin_description = 'OpenChurch bulletins archive page.';
  $page->path = 'media/bulletins';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Weekly Bulletins',
    'name' => 'main-menu',
    'weight' => '0',
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
  $handler->name = 'page_openchurch_bulletins_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'openchurch_bulletins';
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
  $display->title = 'Weekly Bulletins';
  $display->uuid = '6221c25d-a9db-493b-a667-ac382d3c99a9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e22c5a4d-9c9f-4d06-8de7-789c81e6851e';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'openchurch_bulletins_intro';
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
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e22c5a4d-9c9f-4d06-8de7-789c81e6851e';
    $display->content['new-e22c5a4d-9c9f-4d06-8de7-789c81e6851e'] = $pane;
    $display->panels['contentmain'][0] = 'new-e22c5a4d-9c9f-4d06-8de7-789c81e6851e';
    $pane = new stdClass();
    $pane->pid = 'new-98781b7a-0b48-4c89-ab06-07a028a2f837';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openchurch_bulletins-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '98781b7a-0b48-4c89-ab06-07a028a2f837';
    $display->content['new-98781b7a-0b48-4c89-ab06-07a028a2f837'] = $pane;
    $display->panels['contentmain'][1] = 'new-98781b7a-0b48-4c89-ab06-07a028a2f837';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['openchurch_bulletins'] = $page;

  return $pages;

}
