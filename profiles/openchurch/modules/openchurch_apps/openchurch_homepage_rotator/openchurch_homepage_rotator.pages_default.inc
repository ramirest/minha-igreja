<?php
/**
 * @file
 * openchurch_homepage_rotator.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function openchurch_homepage_rotator_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'openchurch_homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = 'The main page of a website. It serves as a website\'s introduction, starting point and guide.';
  $page->path = 'front';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_openchurch_homepage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'openchurch_homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Homepage',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => 'openchurch-homepage-rotator',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Welcome | [site:name]',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'geary';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      'center_' => NULL,
      'header' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Welcome';
  $display->uuid = 'b3180546-daa2-4cb2-bacb-a3fa9ad0c9f4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-17df5586-5bd1-4ba8-b8fa-41e9facfea15';
    $pane->panel = 'column1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Homepage Promo 1',
      'title' => '',
      'body' => '<p style="text-align: center;"><img src="profiles/openchurch/modules/openchurch_apps/openchurch_homepage_rotator/openchurch_homepage_rotator_demo_content/images/winter_sermons.jpg" alt="" width="220" height="110"></p>',
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
    $pane->locks = '';
    $pane->uuid = '17df5586-5bd1-4ba8-b8fa-41e9facfea15';
    $display->content['new-17df5586-5bd1-4ba8-b8fa-41e9facfea15'] = $pane;
    $display->panels['column1'][0] = 'new-17df5586-5bd1-4ba8-b8fa-41e9facfea15';
    $pane = new stdClass();
    $pane->pid = 'new-0284aa39-73f7-4c70-bcf3-3c5190e7a7b7';
    $pane->panel = 'column2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Homepage Promo 2',
      'title' => '',
      'body' => '<p style="text-align: center;"><img src="profiles/openchurch/modules/openchurch_apps/openchurch_homepage_rotator/openchurch_homepage_rotator_demo_content/images/food_pantry.jpg" alt="" width="220" height="110"></p>',
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
    $pane->locks = '';
    $pane->uuid = '0284aa39-73f7-4c70-bcf3-3c5190e7a7b7';
    $display->content['new-0284aa39-73f7-4c70-bcf3-3c5190e7a7b7'] = $pane;
    $display->panels['column2'][0] = 'new-0284aa39-73f7-4c70-bcf3-3c5190e7a7b7';
    $pane = new stdClass();
    $pane->pid = 'new-b73aaebc-49d9-488a-9aef-68a750a30ca1';
    $pane->panel = 'column3';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Homepage Promo 3',
      'title' => '',
      'body' => '<p style="text-align: center;"><img src="profiles/openchurch/modules/openchurch_apps/openchurch_homepage_rotator/openchurch_homepage_rotator_demo_content/images/childrens_church.jpg" alt="" width="220" height="110"></p>',
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
    $pane->locks = '';
    $pane->uuid = 'b73aaebc-49d9-488a-9aef-68a750a30ca1';
    $display->content['new-b73aaebc-49d9-488a-9aef-68a750a30ca1'] = $pane;
    $display->panels['column3'][0] = 'new-b73aaebc-49d9-488a-9aef-68a750a30ca1';
    $pane = new stdClass();
    $pane->pid = 'new-ebf7cd1a-0613-4a17-814b-57682f048387';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'views-6fecfdbc78165d726632dd0cc551ff58';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'ebf7cd1a-0613-4a17-814b-57682f048387';
    $display->content['new-ebf7cd1a-0613-4a17-814b-57682f048387'] = $pane;
    $display->panels['header'][0] = 'new-ebf7cd1a-0613-4a17-814b-57682f048387';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['openchurch_homepage'] = $page;

  return $pages;

}
