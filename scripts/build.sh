#!/bin/sh
# Script to build the Restaurant installation profile
# Run from the Drupal root.
# To use this command you must have `drush make` and `git` installed.

echo '========================================================================='
echo '    Open Restaurant - www.open.restaurant                                '
echo '========================================================================='

echo "\nUse this command to build the Open Restaurant profile."
echo "\nRun this script from Drupal root.\n"
echo "  [1] Build profile in place in development mode from drupal.org"
echo "  [2] Build profile in place in release mode from drupal.org"
echo "\nSelection: \c"
read SELECTION

if [ $SELECTION = "1" ]; then
  echo "Building Open Restaurant development profile from drupal.org..."
  drush make -y --working-copy --no-gitinfofile --no-cache --contrib-destination=profiles/restaurant profiles/restaurant/build-restaurant-dev.make
elif [ $SELECTION = "2" ]; then
  echo "Building Open Restaurant release profile from drupal.org..."
  drush make -y --working-copy --no-gitinfofile --no-cache --contrib-destination=profiles/restaurant profiles/restaurant/build-restaurant.make
else
 echo "Invalid selection."
fi