<?php

/**
 * Implements hook_skinr_skin_plugin_info()
 */

function jbase5_skinr_skin_blocktitles_info() {
  $skins['blocktitleframes'] = array(
    'status' => array('jbase5' => 1),
    'title' => t('Block titles'),
    'description' => t('Select the block title style.'),
    'type' => 'radios',
    'theme hooks' => array('page','block','node', 'view'),
    'options' => array(
      'blocktitle_1' => array(
        'class' => array('blocktitle-lightblue-rounded-whitetext'),
        'title' => t('Light blue background with rounded corners and white text'),
        'attached' => array('css' => array('css/blocktitles.css')),
      ),
    ),
  );
  return $skins;
}