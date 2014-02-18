<?php
/**
 * @file
 * hr_spaces.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function hr_spaces_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:hr_space:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'hr_space';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'e0ae0eaf-7618-46e5-9cba-3e5660a3c982';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2c681f13-f9a8-4b25-9c62-499433ac6fd5';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:group_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'og_group_subscribe',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_name' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2c681f13-f9a8-4b25-9c62-499433ac6fd5';
    $display->content['new-2c681f13-f9a8-4b25-9c62-499433ac6fd5'] = $pane;
    $display->panels['top'][0] = 'new-2c681f13-f9a8-4b25-9c62-499433ac6fd5';
    $pane = new stdClass();
    $pane->pid = 'new-112c0d9b-9235-4824-9b83-2603dc07f7ed';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '112c0d9b-9235-4824-9b83-2603dc07f7ed';
    $display->content['new-112c0d9b-9235-4824-9b83-2603dc07f7ed'] = $pane;
    $display->panels['top'][1] = 'new-112c0d9b-9235-4824-9b83-2603dc07f7ed';
    $pane = new stdClass();
    $pane->pid = 'new-c9de9ec0-561d-471f-b1e4-754907cf3070';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:title_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c9de9ec0-561d-471f-b1e4-754907cf3070';
    $display->content['new-c9de9ec0-561d-471f-b1e4-754907cf3070'] = $pane;
    $display->panels['top'][2] = 'new-c9de9ec0-561d-471f-b1e4-754907cf3070';
    $pane = new stdClass();
    $pane->pid = 'new-c40c47f3-f2d5-4172-b04a-01c3f47d4294';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_space_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c40c47f3-f2d5-4172-b04a-01c3f47d4294';
    $display->content['new-c40c47f3-f2d5-4172-b04a-01c3f47d4294'] = $pane;
    $display->panels['top'][3] = 'new-c40c47f3-f2d5-4172-b04a-01c3f47d4294';
    $pane = new stdClass();
    $pane->pid = 'new-5162033f-3aef-4d26-a981-c36209d0d0ee';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_space_category';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '5162033f-3aef-4d26-a981-c36209d0d0ee';
    $display->content['new-5162033f-3aef-4d26-a981-c36209d0d0ee'] = $pane;
    $display->panels['top'][4] = 'new-5162033f-3aef-4d26-a981-c36209d0d0ee';
    $pane = new stdClass();
    $pane->pid = 'new-784c28ff-97f1-4360-9efc-2187fe0d69a0';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => '',
        'image_style' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '784c28ff-97f1-4360-9efc-2187fe0d69a0';
    $display->content['new-784c28ff-97f1-4360-9efc-2187fe0d69a0'] = $pane;
    $display->panels['top'][5] = 'new-784c28ff-97f1-4360-9efc-2187fe0d69a0';
    $pane = new stdClass();
    $pane->pid = 'new-1e597a42-cd8f-4ce5-984a-42538881b97a';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_website';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '1e597a42-cd8f-4ce5-984a-42538881b97a';
    $display->content['new-1e597a42-cd8f-4ce5-984a-42538881b97a'] = $pane;
    $display->panels['top'][6] = 'new-1e597a42-cd8f-4ce5-984a-42538881b97a';
    $pane = new stdClass();
    $pane->pid = 'new-5c8affc9-8349-4b95-9b4a-9aaa728b552a';
    $pane->panel = 'top';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '5c8affc9-8349-4b95-9b4a-9aaa728b552a';
    $display->content['new-5c8affc9-8349-4b95-9b4a-9aaa728b552a'] = $pane;
    $display->panels['top'][7] = 'new-5c8affc9-8349-4b95-9b4a-9aaa728b552a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2c681f13-f9a8-4b25-9c62-499433ac6fd5';
  $panelizer->display = $display;
  $export['node:hr_space:default:default'] = $panelizer;

  return $export;
}
