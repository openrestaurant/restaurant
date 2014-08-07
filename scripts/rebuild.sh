#!/bin/sh
# Script to rebuild the Restaurant installation profile
# This command expects to be run within the Drupal root directory.
# To use this command you must have `drush make` and `git` installed.

echo '=========================='
echo '    Drupal Restaurant     '
echo '=========================='

echo "\nThis command can be used to rebuild the installation profile.\n"
echo "  [1] Rebuild profile in place in development mode from Github\n"
echo "Selection: \c"
read SELECTION

if [ $SELECTION = "1" ]; then
  echo "Building Drupal Restaurant install profile from Github..."
  drush make -y --working-copy --no-gitinfofile --contrib-destination=profiles/restaurant profiles/restaurant/github.make
else
 echo "Invalid selection."
fi