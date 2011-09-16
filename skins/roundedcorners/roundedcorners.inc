<?php

/**
 * Implements hook_skinr_skin_plugin_info()
 */

function jbase5_skinr_skin_roundedcorners_info() {
  $skins['roundedcorners'] = array(
    'status' => array('jbase5' => 1),
    'title' => t('Rounded corners'),
    'description' => t('Select the rounded corners style.'),
    'type' => 'radios',
    'theme hooks' => array('page','block','node', 'view'),
    'options' => array(
      'roundedcorner_1' => array(
        'class' => array('roundedcorner-blue-thick'),
        'title' => t('Thick blue rounded corner with white content area'),
        'attached' => array('css' => array('css/roundedcorners.css')),
      ),
    ),
  );
  return $skins;
}