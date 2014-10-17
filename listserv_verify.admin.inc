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
    '#description' => t('Customizing the listener URL gives you protection against fraudulent push notifications.') . '<br />' . t('Based on your current key, your listener endpoint would be @url.', array('@url' => url(_listserv_verify_get_listener_url(), array('absolute' => TRUE)))),
    '#default_value' => variable_get('listserv_verify_listener_key', ''),
    '#required' => TRUE,
    '#size' => 32,
    '#field_prefix' => url('listserv-verify/api/', array('absolute' => TRUE)),
  );
  $form['listserv_verify_ip_whitelist'] = array(
    '#type' => 'textfield',
    '#title' => t('IP Whitelist'),
    '#description' => t('Optionally add a whitelisted IP address that can post to the listserv verify endpoint.  If an IP is provided then only requests from that sender will be processed.  If no IP address is provided, the endpoint will process requests from any sender.'),
    '#default_value' => variable_get('listserv_verify_ip_whitelist', ''),
  );

  return system_settings_form($form);
}
