<?php
/**
 * @file
 * openchurch_events.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function openchurch_events_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Event Detail',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => 'openchurch-event-detail',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'openchurch_event' => 'openchurch_event',
            ),
          ),
          'context' => 'argument_nid_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'brenham_flipped';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 2,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'event_highlights_',
        ),
        'parent' => 'main',
      ),
      'event_highlights_' => array(
        'type' => 'region',
        'title' => 'Event Highlights',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'event-highlights',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'event_thumb' => NULL,
      'event_highlights' => NULL,
      'event_thumb_' => NULL,
      'event_highlights_' => NULL,
    ),
    'event_highlights_' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = 'Upcoming Events';
  $display->uuid = 'c0e9b611-eb9e-4317-94bc-f7d281246ed9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7750a8ca-ceb6-4c95-88e5-63e7f7ff0ff5';
    $pane->panel = 'contentmain';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_nid_1',
      'override_title' => 1,
      'override_title_text' => 'Event Details',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'event-details',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '7750a8ca-ceb6-4c95-88e5-63e7f7ff0ff5';
    $display->content['new-7750a8ca-ceb6-4c95-88e5-63e7f7ff0ff5'] = $pane;
    $display->panels['contentmain'][0] = 'new-7750a8ca-ceb6-4c95-88e5-63e7f7ff0ff5';
    $pane = new stdClass();
    $pane->pid = 'new-667eaa80-9e26-43ae-98b6-af26d7f06447';
    $pane->panel = 'header';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'context' => 'argument_nid_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'event-title',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '667eaa80-9e26-43ae-98b6-af26d7f06447';
    $display->content['new-667eaa80-9e26-43ae-98b6-af26d7f06447'] = $pane;
    $display->panels['header'][0] = 'new-667eaa80-9e26-43ae-98b6-af26d7f06447';
    $pane = new stdClass();
    $pane->pid = 'new-580ac1e9-bc70-4227-9e0d-84c45008790d';
    $pane->panel = 'header';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_oc_dates';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'date_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'format_type' => 'long',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
        'show_repeat_rule' => 'hide',
      ),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '580ac1e9-bc70-4227-9e0d-84c45008790d';
    $display->content['new-580ac1e9-bc70-4227-9e0d-84c45008790d'] = $pane;
    $display->panels['header'][1] = 'new-580ac1e9-bc70-4227-9e0d-84c45008790d';
    $pane = new stdClass();
    $pane->pid = 'new-3c6b5fbf-ba9a-4a59-97d1-6b56cd0bf569';
    $pane->panel = 'header';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_oc_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'addressfield_default',
      'formatter_settings' => array(
        'use_widget_handlers' => 1,
        'format_handlers' => array(
          'address' => 'address',
        ),
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3c6b5fbf-ba9a-4a59-97d1-6b56cd0bf569';
    $display->content['new-3c6b5fbf-ba9a-4a59-97d1-6b56cd0bf569'] = $pane;
    $display->panels['header'][2] = 'new-3c6b5fbf-ba9a-4a59-97d1-6b56cd0bf569';
    $pane = new stdClass();
    $pane->pid = 'new-a404dda0-a851-468d-a729-d3451f91822c';
    $pane->panel = 'header';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_oc_cost';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a404dda0-a851-468d-a729-d3451f91822c';
    $display->content['new-a404dda0-a851-468d-a729-d3451f91822c'] = $pane;
    $display->panels['header'][3] = 'new-a404dda0-a851-468d-a729-d3451f91822c';
    $pane = new stdClass();
    $pane->pid = 'new-8209e790-9de8-4261-9fc1-cc1072c674bb';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_oc_downloads';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'file_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8209e790-9de8-4261-9fc1-cc1072c674bb';
    $display->content['new-8209e790-9de8-4261-9fc1-cc1072c674bb'] = $pane;
    $display->panels['sidebar'][0] = 'new-8209e790-9de8-4261-9fc1-cc1072c674bb';
    $pane = new stdClass();
    $pane->pid = 'new-dd2755cd-317b-4380-8502-61c4adfed2bd';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_oc_url';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'link_default',
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'register-online',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dd2755cd-317b-4380-8502-61c4adfed2bd';
    $display->content['new-dd2755cd-317b-4380-8502-61c4adfed2bd'] = $pane;
    $display->panels['sidebar'][1] = 'new-dd2755cd-317b-4380-8502-61c4adfed2bd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7750a8ca-ceb6-4c95-88e5-63e7f7ff0ff5';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function openchurch_events_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'openchurch_upcoming_events';
  $page->task = 'page';
  $page->admin_title = 'OpenChurch Upcoming Events';
  $page->admin_description = 'Upcoming events page.';
  $page->path = 'events';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Events',
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
  $handler->name = 'page_openchurch_upcoming_events_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'openchurch_upcoming_events';
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
  $display->title = 'Upcoming Events';
  $display->uuid = '35b1de02-b84b-497e-9b92-597b9d4a7865';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-215a43cb-7c99-4016-8129-2c21d80ef4b7';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'openchurch_events_intro';
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
    $pane->uuid = '215a43cb-7c99-4016-8129-2c21d80ef4b7';
    $display->content['new-215a43cb-7c99-4016-8129-2c21d80ef4b7'] = $pane;
    $display->panels['contentmain'][0] = 'new-215a43cb-7c99-4016-8129-2c21d80ef4b7';
    $pane = new stdClass();
    $pane->pid = 'new-28092ad5-6fcf-4c09-a27c-6275b5785417';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openchurch_events-panel_pane_1';
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
    $pane->uuid = '28092ad5-6fcf-4c09-a27c-6275b5785417';
    $display->content['new-28092ad5-6fcf-4c09-a27c-6275b5785417'] = $pane;
    $display->panels['contentmain'][1] = 'new-28092ad5-6fcf-4c09-a27c-6275b5785417';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['openchurch_upcoming_events'] = $page;

  return $pages;

}
