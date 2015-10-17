#!/bin/sh
# Script to build the Restaurant installation profile
# To use this command you must have `drush make` and `git` installed.

echo '========================================================================='
echo '    Open Restaurant - www.open.restaurant                                '
echo '========================================================================='

echo "\nThis command can be used to build the installation profile."
echo "\nRun this script from Drupal root."
echo "  [1] Build profile in place in development mode from Github"
echo "  [2] Build profile in place in development mode from Drupal"
echo "\nSelection: \c"
read SELECTION

if [ $SELECTION = "1" ]; then
  echo "Building Open Restaurant install profile from Github..."
  drush make -y --working-copy --no-gitinfofile --contrib-destination=profiles/restaurant profiles/restaurant/build-restaurant-github.make
elif [ $SELECTION = "2" ]; then
  echo "Building Open Restaurant install profile from Drupal..."
  drush make -y --working-copy --no-gitinfofile --contrib-destination=profiles/restaurant profiles/restaurant/build-restaurant.make
else
 echo "Invalid selection."
fi