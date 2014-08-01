#!/bin/sh
# Script to rebuild the Restaurant installation profile
# This command expects to be run within the Restaurant profile.
# To use this command you must have `drush make` and `git` installed.

if [ -f drupal-org.make ]; then
  echo '=========================='
  echo '    Drupal Restaurant     '
  echo '=========================='

  echo "\nThis command can be used to rebuild the installation profile in place.\n"
  echo "  [1] Rebuild profile in place in release mode (latest stable release)"
  echo "  [2] Rebuild profile in place in development mode (latest dev code)"
  echo "  [3] Rebuild profile in place in development mode (latest dev code with .git working-copy)\n"
  echo "Selection: \c"
  read SELECTION

  if [ $SELECTION = "1" ]; then

    echo "Building Drupal Restaurant install profile in release mode..."
    drush make -y --no-core --no-gitinfofile --contrib-destination=. drupal-org-release.make

  elif [ $SELECTION = "2" ]; then

    echo "Building Drupal Restaurant install in development mode (latest dev code)..."
    drush make -y --no-core --no-gitinfofile --contrib-destination=. drupal-org.make

  elif [ $SELECTION = "3" ]; then

    echo "Building Drupal Restaurant install profile in development mode (latest dev code with .git working-copy)"
    drush make -y --working-copy --no-core --no-gitinfofile --contrib-destination=. github.make

  else
   echo "Invalid selection."
  fi
else
  echo 'Could not locate file "drupal-org.make"'
fi