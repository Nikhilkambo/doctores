# Demo Framework
[![Travis build status](https://img.shields.io/travis/acquia/df/7.x-1.x.svg)](https://travis-ci.org/acquia/df) [![Scrutinizer code quality](https://img.shields.io/scrutinizer/g/acquia/df/7.x-1.x.svg)](https://scrutinizer-ci.com/g/acquia/df)

The Demo Framework (DF) is a distribution consisting of modules, themes and libraries. It highlights powerful features created by the Drupal community. It is intended to be used as a starterkit for promoting enterprise-ready solutions.

### Basics

*Powered by Lightning!*
- DF is built upon the Lightning base distribution.
- We employ the Lightning Features modules to enable DF core componenets
- A set of features including a make file that Drush picks up recursively
- See http://github.com/acquia/lightning and http://github.com/acquia/lightning-features

The following modules are stored on D.O. as projects as they are provided by Lightning:
- Assemble -- Manifest enables Panels, Views, Beans, and Webform/Form Builder
- Curate -- Manifest enables In-place Editing, Site Previews and Workbench
- Import -- Migrate extensions for injecting demo entities from CSV

All other DF  modules are in this repo, they are:
- DF Admin -- Demo Framework's drush commands and user interfaces
- DF Commerce -- Drupal Commerce configurations and migrate classes
- DF Connect -- Integrations with 3rd Party Apps (ex: Mollom)
- DF Engage -- Personalization, Rules, Groups, Segmentation
- DF Search -- Search API configurations and core search overrides
- DF Translate -- Translation Tools, i18n, l10n, Multilingual

### Installation

Enable a Demo Framework Scenario using the ``df-es`` command provided by DF Admin.

  ``drush df-es dfs_dev``

If everything worked correctly, you should see console output that some migrations ran.

You may now login to your site.

  ``drush uli -l http://mysite.dd``

You may also reset the content of a Demo Framework Scenario if it is enabled.

  ``drush df-rs dfs_dev``

### Behat tests

Use Composer to install the drupal-extension for mink/behat in the DF profile.

  ``cd profiles/df/tests && composer install``

Use the behat.template.yml file as a template for a behat.yml file, replacing ``BASE_URL`` with your own url.

  ``cp behat.template.yml behat.yml``

Check that behat is installed and running

  ``bin/behat --help``

Run tests tagged for the entire profile or a specific scenario.

  ``bin/behat --tags=df``
  ``bin/behat --tags=dfs_wem``

Selenium is required to run the JavaScript tests. You can download Selenium from
http://www.seleniumhq.org and run it with:

  ``java -jar selenium.jar``

Note that you may require a newer version of Java which can be downloaded from
http://www.oracle.com/technetwork/java/javase/downloads/index.html.

### Demo Scenario Logins

As a standard across all of our internally built demos, there are some persistant user logins to remember. Each of these usernames has the password of 'password' and they are as follows:
- End User: JenniferThomson  (basic logged in user with no editing)
- Editor: EricaWebb  (can edit content but cannot publish)
- Reviewer: PaulSimon  (can edit content and publish it)
- Marketer: EmilyPhillips  (can edit layouts and use the Panels IPE)

