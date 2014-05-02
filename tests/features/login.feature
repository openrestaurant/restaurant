Feature: Anonymous user login
In order to access content for authenticated users
As an anonymous user
I want to be able to login
 
  @javascript
  Scenario: Admin user is able to login using one-time-login-url
    Given I log in with the One Time Login Url
    Then I should see "You have just used your one-time login link"
