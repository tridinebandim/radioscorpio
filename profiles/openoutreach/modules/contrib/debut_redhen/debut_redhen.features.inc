<?php
/**
 * @file
 * debut_redhen.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function debut_redhen_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_redhen_contact_type().
 */
function debut_redhen_default_redhen_contact_type() {
  $items = array();
  $items['general'] = entity_import('redhen_contact_type', '{
    "name" : "general",
    "label" : "General",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "metatags" : [],
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_redhen_engagement_score().
 */
function debut_redhen_default_redhen_engagement_score() {
  $items = array();
  $items['high'] = entity_import('redhen_engagement_score', '{
    "name" : "high",
    "label" : "High-value engagement",
    "locked" : null,
    "score" : "10",
    "metatags" : [],
    "rdf_mapping" : []
  }');
  $items['standard'] = entity_import('redhen_engagement_score', '{
    "name" : "standard",
    "label" : "Standard-value engagement",
    "locked" : null,
    "score" : "5",
    "metatags" : [],
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_redhen_membership_type().
 */
function debut_redhen_default_redhen_membership_type() {
  $items = array();
  $items['standard'] = entity_import('redhen_membership_type', '{
    "name" : "standard",
    "label" : "Standard",
    "role_id" : null,
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "metatags" : [],
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_redhen_org_type().
 */
function debut_redhen_default_redhen_org_type() {
  $items = array();
  $items['general'] = entity_import('redhen_org_type', '{
    "name" : "general",
    "label" : "General",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "metatags" : [],
    "rdf_mapping" : []
  }');
  return $items;
}
