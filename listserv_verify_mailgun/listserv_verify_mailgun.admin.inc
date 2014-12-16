<?php

/**
 * @file
 * Administrative page callbacks for the listserv_verify_mailgun module.
 */

/**
 * listserv_verify_mailgun admin configuration form.
 */
function listserv_verify_mailgun_admin_config_form($form, &$form_state) {
  $form['listserv_verify_mailgun_key'] = array(
    '#type' => 'textfield',
    '#title' => t('API key'),
    '#description' => t('Mailgun API Key'),
    '#default_value' => variable_get('listserv_verify_mailgun_key', ''),
    '#required' => TRUE,
    '#size' => 32,
  );

  return system_settings_form($form);
}
