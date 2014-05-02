<?php

use Behat\Behat\Context\ClosuredContextInterface,
    Behat\Behat\Context\TranslatedContextInterface,
    Behat\Behat\Context\BehatContext,
    Behat\Behat\Exception\PendingException;
use Behat\Gherkin\Node\PyStringNode,
    Behat\Gherkin\Node\TableNode;

//
// Require 3rd-party libraries here:
//
//   require_once 'PHPUnit/Autoload.php';
//   require_once 'PHPUnit/Framework/Assert/Functions.php';
//

/**
 * Features context.
 */
class FeatureContext extends Drupal\DrupalExtension\Context\DrupalContext {
  /**
   * Initializes context.
   * Every scenario gets its own context object.
   *
   * @param array $parameters context parameters (set them up through behat.yml)
   */
  public function __construct(array $parameters) {
    // Initialize your context here
  }

  /**
   * @Given /^I log in with the One Time Login Url$/
   */
  public function iLogInWithTheOneTimeLoginUrl() {
    $base_url = rtrim($this->locatePath('/'), '/');
    $login_link = $this->getMainContext()->getDriver('drush')->drush('uli', array(
      '--browser=0',
      "--uri=${base_url}",
    ));
    // Trim EOL characters. Required or else visiting the link won't work.
    $login_link = trim($login_link);
    $this->getSession()->visit($this->locatePath($login_link));
    return TRUE;
  }
}
