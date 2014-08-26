#Listserv Verify

##Description
This is a Drupal module that gives a website the ability to confirm Listserv approval email that the website sent to a list on the Listserv system. A unique key is included at the bottom of every outgoing email from the Drupal mail system. If an email is posted back to the Drupal Listserv Verify endpoint, the contents of the email will be parsed to look for the unique key. If a unique key is present, the module verifies that the key is active and, if it is, posts the confirmation link contained in the email. The key is then set to 'inactive' in the database.

##Requirements:
UUID module: This is used to generate the unique verify keys.

HTTPRL module: This module is used to send non-blocking http requests to the Listserv system.
