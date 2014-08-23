#!/bin/bash

# Configuration variables
drupal_root="/home/vagrant/www"

# Check if file exists
cd ${drupal_root}
chmod 755 sites/default

echo "Dropping all tables"
`drush sql-connect` -e "show tables" -s | xargs -I "@@" `drush sql-connect` -e "DROP TABLE @@"

echo "Copying settings.php"
rm -rf sites/default/settings.php
cp sites/default/default.settings.php settings.php

echo "Creating files directory"
rm -rf files
mkdir files
chmod -R 777 settings.php files

echo "Installing the site"
drush si restaurant --db-url=mysql://root:root@localhost/restaurant --account-name=root --account-pass=root --site-mail=admin@example.com --site-name="Restaurant" --yes
