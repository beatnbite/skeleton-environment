<?php

/*
 * Overrides Drupal settings to match your local environemnt.
 */
 
$databases['default']['default'] = array(
    'driver'    => 'mysql',
    'database'  => 'db',
    'username'  => 'root',
    'password'  => 'root',
    'host'      => 'db',
    'prefix'    => '',
    'collation' => 'utf8_general_ci',
);