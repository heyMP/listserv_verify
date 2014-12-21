Feature: Test DrupalContext
  In order to prove the Drupal context using the blackbox driver is working properly
  As a developer
  I need to use the step definitions of this context

  @javascript
  Scenario: Messages
     Given I am on "/user/register"
     When I press "Create new account"
     Then I should see "Listserv Subscribe"
     But I should not see the message "Registration successful. You are now logged in"
     Then show me a screenshot
