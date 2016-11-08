<?php
/**
 * @file
 * feature_services.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_services_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'services_security_update_1';
  $strongarm->value = TRUE;
  $export['services_security_update_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_api_key_role';
  $strongarm->value = 'administrator';
  $export['service_api_key_role'] = $strongarm;

  return $export;
}
