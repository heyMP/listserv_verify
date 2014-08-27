<?php

/**
 * @file
 * Administrative page callbacks for the Listserv module.
 */

/**
 * Listserv admin configuration form.
 */
function listserv_verify_admin_config_form($form, &$form_state) {
  $form['listserv_verify_listener_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Listener URL key'),
    '#description' => t('Customizing the listener URL gives you protection against fraudulent push notifications.') . '<br />' . t('Based on your current key, your listener endpoint would be @url.', array('@url' => url('listserv-verify/api/' . variable_get('listserv_verify_listener_key', ''), array('absolute' => TRUE)))),
    '#default_value' => variable_get('listserv_verify_listener_key', ''),
    '#required' => TRUE,
    '#size' => 32,
    '#field_prefix' => url('listserv-verify/api/', array('absolute' => TRUE)),
  );

  return system_settings_form($form);
}
