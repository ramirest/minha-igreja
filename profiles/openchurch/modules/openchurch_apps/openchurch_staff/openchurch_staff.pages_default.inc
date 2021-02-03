<?php
/**
 * @file
 * openchurch_staff.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function openchurch_staff_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Staff Detail',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => 'openchurch-staff-detail',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'openchurch_staff' => 'openchurch_staff',
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
  $display->layout = 'bryant_flipped_flipped';
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
          0 => 1,
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
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'staff_info',
          1 => 'staff_photo',
        ),
        'parent' => 'main',
      ),
      'staff_info' => array(
        'type' => 'region',
        'title' => 'Staff Info',
        'width' => '68.98159638260199',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'staff-info',
      ),
      'staff_photo' => array(
        'type' => 'region',
        'title' => 'Staff Photo',
        'width' => '31.018403617398008',
        'width_type' => '%',
        'parent' => '1',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'staff_info' => NULL,
      'staff_photo' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
    'staff_info' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'Staff Directory';
  $display->uuid = 'e0949c1a-afab-4876-9fde-faabe339eec1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-83361605-e08c-4129-b5dc-188650c7361d';
    $pane->panel = 'contentmain';
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
      'css_class' => 'title',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '83361605-e08c-4129-b5dc-188650c7361d';
    $display->content['new-83361605-e08c-4129-b5dc-188650c7361d'] = $pane;
    $display->panels['contentmain'][0] = 'new-83361605-e08c-4129-b5dc-188650c7361d';
    $pane = new stdClass();
    $pane->pid = 'new-906cec52-b10b-4a28-818b-1356669662e1';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_oc_position';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
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
      'css_class' => 'position',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '906cec52-b10b-4a28-818b-1356669662e1';
    $display->content['new-906cec52-b10b-4a28-818b-1356669662e1'] = $pane;
    $display->panels['contentmain'][1] = 'new-906cec52-b10b-4a28-818b-1356669662e1';
    $pane = new stdClass();
    $pane->pid = 'new-14451c4d-097b-4bc1-9b1f-50cee2f71324';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_oc_phone';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '14451c4d-097b-4bc1-9b1f-50cee2f71324';
    $display->content['new-14451c4d-097b-4bc1-9b1f-50cee2f71324'] = $pane;
    $display->panels['contentmain'][2] = 'new-14451c4d-097b-4bc1-9b1f-50cee2f71324';
    $pane = new stdClass();
    $pane->pid = 'new-e1c32df4-462c-4db0-bddb-8ff35722e09f';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_oc_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'email_default',
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
    $pane->uuid = 'e1c32df4-462c-4db0-bddb-8ff35722e09f';
    $display->content['new-e1c32df4-462c-4db0-bddb-8ff35722e09f'] = $pane;
    $display->panels['contentmain'][3] = 'new-e1c32df4-462c-4db0-bddb-8ff35722e09f';
    $pane = new stdClass();
    $pane->pid = 'new-1812e1a3-308e-4cb1-b5a9-e5b81acd527c';
    $pane->panel = 'contentmain';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_nid_1',
      'override_title' => 1,
      'override_title_text' => 'About Me',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'about-me',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = '';
    $pane->uuid = '1812e1a3-308e-4cb1-b5a9-e5b81acd527c';
    $display->content['new-1812e1a3-308e-4cb1-b5a9-e5b81acd527c'] = $pane;
    $display->panels['contentmain'][4] = 'new-1812e1a3-308e-4cb1-b5a9-e5b81acd527c';
    $pane = new stdClass();
    $pane->pid = 'new-f2cc828b-4648-46b7-a1bc-e7f1686a3e97';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_oc_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'formatter_settings' => array(
        'image_style' => 'oc_staff_image',
        'image_link' => '',
      ),
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
      'css_class' => 'staff-image',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f2cc828b-4648-46b7-a1bc-e7f1686a3e97';
    $display->content['new-f2cc828b-4648-46b7-a1bc-e7f1686a3e97'] = $pane;
    $display->panels['sidebar'][0] = 'new-f2cc828b-4648-46b7-a1bc-e7f1686a3e97';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1812e1a3-308e-4cb1-b5a9-e5b81acd527c';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  return $export;
}
