<?php
/**
 * @file
 * custom_views_and_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function custom_views_and_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_page';
  $page->task = 'page';
  $page->admin_title = 'Home Page';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_page__panel_context_03d74aac-899b-497e-9740-4de25f14f796';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'home_panel',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f7caf1fb-4cf6-43e6-8ce5-9ea01057f339';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-99c51adc-e10f-4977-b41a-c6086b164372';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'views-pages-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '99c51adc-e10f-4977-b41a-c6086b164372';
    $display->content['new-99c51adc-e10f-4977-b41a-c6086b164372'] = $pane;
    $display->panels['bottom'][0] = 'new-99c51adc-e10f-4977-b41a-c6086b164372';
    $pane = new stdClass();
    $pane->pid = 'new-c13375b0-6208-461b-a073-d5d7a6081c92';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-home_slider-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c13375b0-6208-461b-a073-d5d7a6081c92';
    $display->content['new-c13375b0-6208-461b-a073-d5d7a6081c92'] = $pane;
    $display->panels['left'][0] = 'new-c13375b0-6208-461b-a073-d5d7a6081c92';
    $pane = new stdClass();
    $pane->pid = 'new-b665d0ee-dee5-48ba-ba69-6fda2c749590';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-pages-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b665d0ee-dee5-48ba-ba69-6fda2c749590';
    $display->content['new-b665d0ee-dee5-48ba-ba69-6fda2c749590'] = $pane;
    $display->panels['right'][0] = 'new-b665d0ee-dee5-48ba-ba69-6fda2c749590';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page'] = $page;

  return $pages;

}
