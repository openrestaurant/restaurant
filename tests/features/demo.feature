Feature: Demo content
  In order to test out the site
  As a site owner
  I need to view demo content

  @javascript
  Scenario: Homepage
    Given I am an anonymous user
    When I visit "/"
    Then the ".jumbotron h1" element should contain "Drupal Restaurant"
