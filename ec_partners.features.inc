<?php

/**
 * Implementation of hook_content_default_fields().
 */
function ec_partners_content_default_fields() {
  module_load_include('inc', 'ec_partners', 'ec_partners.defaults');
  $args = func_get_args();
  return call_user_func_array('_ec_partners_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ec_partners_ctools_plugin_api() {
  module_load_include('inc', 'ec_partners', 'ec_partners.defaults');
  $args = func_get_args();
  return call_user_func_array('_ec_partners_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_feeds_importer_default().
 */
function ec_partners_feeds_importer_default() {
  module_load_include('inc', 'ec_partners', 'ec_partners.defaults');
  $args = func_get_args();
  return call_user_func_array('_ec_partners_feeds_importer_default', $args);
}

/**
 * Implementation of hook_node_info().
 */
function ec_partners_node_info() {
  module_load_include('inc', 'ec_partners', 'ec_partners.features.node');
  $args = func_get_args();
  return call_user_func_array('_ec_partners_node_info', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function ec_partners_strongarm() {
  module_load_include('inc', 'ec_partners', 'ec_partners.defaults');
  $args = func_get_args();
  return call_user_func_array('_ec_partners_strongarm', $args);
}
