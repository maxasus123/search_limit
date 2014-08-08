<?php

function _search_limit_config_form($form, &$form_state) {


	$form['limit'] = array(
    	'#type' => 'fieldset',
    	'#title' => t('Search limit item settings'),
    	'#collapsible' => FALSE,
  	);


  	$form['limit']['search_limit_items'] = array(
    	'#type' => 'textfield', 
    	'#title' => t('Number limit items'), 
    	'#default_value' => variable_get('search_limit_items', '10'),
    	'#required' => TRUE,
  	);

	return system_settings_form($form);
}