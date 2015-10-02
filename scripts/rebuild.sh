#!/bin/sh
# Script to rebuild the Restaurant installation profile
# To use this command you must have `drush make` and `git` installed.

echo '=========================='
echo '    Open Restaurant     '
echo '=========================='

echo "\nThis command can be used to rebuild the installation profile.\n"
echo "\nRun this script from Drupal root.\n"
echo "  [1] Rebuild profile in place in development mode from Github\n"
echo "Selection: \c"
read SELECTION

if [ $SELECTION = "1" ]; then
  echo "Building Open Restaurant install profile from Github..."
  drush make -y --working-copy --no-gitinfofile --contrib-destination=profiles/restaurant profiles/restaurant/build-restaurant-github.make
else
 echo "Invalid selection."
fi