<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_intranet_context_default_contexts() {
  module_load_include('inc', 'atrium_intranet', 'atrium_intranet.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_intranet_context_default_contexts', $args);
}

/**
 * Implementation of hook_filter_default_formats().
 */
function atrium_intranet_filter_default_formats() {
  module_load_include('inc', 'atrium_intranet', 'atrium_intranet.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_intranet_filter_default_formats', $args);
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function atrium_intranet_imagecache_default_presets() {
  module_load_include('inc', 'atrium_intranet', 'atrium_intranet.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_intranet_imagecache_default_presets', $args);
}

/**
 * Implementation of hook_menu_default_items().
 */
function atrium_intranet_menu_default_items() {
  module_load_include('inc', 'atrium_intranet', 'atrium_intranet.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_intranet_menu_default_items', $args);
}

/**
 * Implementation of hook_node_info().
 */
function atrium_intranet_node_info() {
  module_load_include('inc', 'atrium_intranet', 'atrium_intranet.features.node');
  $args = func_get_args();
  return call_user_func_array('_atrium_intranet_node_info', $args);
}

/**
 * Implementation of hook_spaces_presets().
 */
function atrium_intranet_spaces_presets() {
  module_load_include('inc', 'atrium_intranet', 'atrium_intranet.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_intranet_spaces_presets', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function atrium_intranet_user_default_permissions() {
  module_load_include('inc', 'atrium_intranet', 'atrium_intranet.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_intranet_user_default_permissions', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function atrium_intranet_views_default_views() {
  module_load_include('inc', 'atrium_intranet', 'atrium_intranet.features.views');
  $args = func_get_args();
  return call_user_func_array('_atrium_intranet_views_default_views', $args);
}
