<?php
/**
 * @file
 * openchurch_homepage_rotator.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openchurch_homepage_rotator_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'openchurch_homepage_rotator';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OpenChurch Homepage Rotator';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'Homepage Rotator Nodequeue';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'openchurch_homepage_rotator' => 'openchurch_homepage_rotator',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_oc_link']['id'] = 'field_oc_link';
  $handler->display->display_options['fields']['field_oc_link']['table'] = 'field_data_field_oc_link';
  $handler->display->display_options['fields']['field_oc_link']['field'] = 'field_oc_link';
  $handler->display->display_options['fields']['field_oc_link']['label'] = '';
  $handler->display->display_options['fields']['field_oc_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_oc_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_oc_link']['type'] = 'link_url';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_oc_image']['id'] = 'field_oc_image';
  $handler->display->display_options['fields']['field_oc_image']['table'] = 'field_data_field_oc_image';
  $handler->display->display_options['fields']['field_oc_image']['field'] = 'field_oc_image';
  $handler->display->display_options['fields']['field_oc_image']['label'] = '';
  $handler->display->display_options['fields']['field_oc_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_oc_image']['alter']['text'] = '[field_oc_image]';
  $handler->display->display_options['fields']['field_oc_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_oc_image']['alter']['path'] = '[field_oc_link]';
  $handler->display->display_options['fields']['field_oc_image']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_oc_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_oc_image']['settings'] = array(
    'image_style' => 'oc_homepage_rotator',
    'image_link' => '',
  );
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'openchurch_homepage_rotator' => 'openchurch_homepage_rotator',
  );

  /* Display: Homepage Rotator Block */
  $handler = $view->new_display('block', 'Homepage Rotator Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['openchurch_homepage_rotator'] = $view;

  return $export;
}
