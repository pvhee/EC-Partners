<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _ec_partners_node_info() {
  $items = array(
    'partner' => array(
      'name' => t('Partner'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'partner_feed' => array(
      'name' => t('Partner Feed'),
      'module' => 'features',
      'description' => t('Feed which generates nodes of type "partner". It is created by the "master" importer and contains a link to the remote XML file of the partners at the Master Template.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
