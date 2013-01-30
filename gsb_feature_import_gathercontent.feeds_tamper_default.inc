<?php
/**
 * @file
 * gsb_feature_import_gathercontent.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function gsb_feature_import_gathercontent_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gathercontent-jsonpath_parser_0-html_entity_decode';
  $feeds_tamper->importer = 'gathercontent';
  $feeds_tamper->source = 'jsonpath_parser:0';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['gathercontent-jsonpath_parser_0-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gathercontent-jsonpath_parser_1-implode';
  $feeds_tamper->importer = 'gathercontent';
  $feeds_tamper->source = 'jsonpath_parser:1';
  $feeds_tamper->plugin_id = 'implode';
  $feeds_tamper->settings = array(
    'glue' => '',
    'real_glue' => '',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Implode';
  $export['gathercontent-jsonpath_parser_1-implode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gathercontent-jsonpath_parser_3-keyword_filter';
  $feeds_tamper->importer = 'gathercontent';
  $feeds_tamper->source = 'jsonpath_parser:3';
  $feeds_tamper->plugin_id = 'keyword_filter';
  $feeds_tamper->settings = array(
    'words' => 'page',
    'word_boundaries' => 1,
    'case_sensitive' => 0,
    'invert' => 0,
    'word_list' => array(
      0 => '/\\b\\Qpage\\E\\b/iu',
    ),
    'regex' => TRUE,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Keyword filter';
  $export['gathercontent-jsonpath_parser_3-keyword_filter'] = $feeds_tamper;

  return $export;
}
