#!/bin/bash
# Script to add the remote Github repos for dev versions.
# Run this script inside /profiles/restaurant/scripts.
TARGET=$1
# Use current dir as default
if [ -z "$TARGET" ]; then
  # Move up on level
  cd ..
  TARGET=`pwd -P`
fi
TARGET=`cd "$TARGET"; pwd -P`
echo ""
echo ""
echo "----------------------------------"
echo "Profile: Restaurant"
echo "----------------------------------"
if ! (git remote | grep drupal -q); then
  # Rename origin to drupal
  git remote rename origin drupal
  git remote set-url drupal arshad@git.drupal.org:project/restaurant.git
fi
if ! (git remote | grep github -q); then
  # Add Github remote
  git remote add github git@github.com:openrestaurant/restaurant.git
fi
# Pull latest code from Github
echo "Pulling latest version of profile restaurant from Github..."
git pull github 7.x-1.x
git push -u github 7.x-1.x

# Push latest code to Drupal
echo "Pushing latest version of profile restaurant to Drupal..."
git push drupal 7.x-1.x

# Update core remotes.
core_modules=( "admin" "base" "mail" "pages" "theme" "toolbar" "user" "wysiwyg" )
for subdir in "${core_modules[@]}"
do
  echo ""
  echo ""
  echo "----------------------------------"
  echo "Core module: restaurant_$subdir"
  echo "----------------------------------"
  cd $TARGET/modules/restaurant/core/restaurant_$subdir
  if ! [ -e "$TARGET/modules/restaurant/core/restaurant_$subdir/.git" ]; then
    echo "git repository missing in `pwd`";
    cd $TARGET/modules/restaurant/core/
    rm -rf restaurant_$subdir
    git clone git@github.com:openrestaurant/restaurant_$subdir.git
    cd $TARGET/modules/restaurant/core/restaurant_$subdir
  fi
  if ! (git remote | grep github -q); then
    # Rename origin to github
    git remote rename origin github
    git remote set-url github git@github.com:openrestaurant/restaurant_$subdir.git
  fi
  if ! (git remote | grep drupal -q); then
    # Add Drupal remote
    git remote add drupal arshad@git.drupal.org:project/restaurant_$subdir.git
  fi
  # Pull latest code from Github
  echo "Pulling latest version of module restaurant_$subdir from Github..."
  git pull github 7.x-1.x
  git push -u github 7.x-1.x

  # Push latest code to Drupal
  echo "Pushing latest version of module restaurant_$subdir to Drupal..."
  git push drupal 7.x-1.x
done

# Update app remotes
apps_modules=( "blog" "contact" "demo" "event" "location" "menu" "reservation" "seo" "slideshow")
for subdir in "${apps_modules[@]}"
do
  echo ""
  echo ""
  echo "----------------------------------"
  echo "App module: restaurant_$subdir"
  echo "----------------------------------"
  cd $TARGET/modules/restaurant/apps/restaurant_$subdir
  if ! [ -e "$TARGET/modules/restaurant/apps/restaurant_$subdir/.git" ]; then
    echo "git repository missing in `pwd`";
    cd $TARGET/modules/restaurant/apps/
    rm -rf restaurant_$subdir
    git clone git@github.com:openrestaurant/restaurant_$subdir.git
    cd $TARGET/modules/restaurant/apps/restaurant_$subdir
  fi
  if ! (git remote | grep github -q); then
    # Rename origin to github
    git remote rename origin github
    git remote set-url github git@github.com:openrestaurant/restaurant_$subdir.git
  fi
  if ! (git remote | grep drupal -q); then
    # Add Drupal remote
    git remote add drupal arshad@git.drupal.org:project/restaurant_$subdir.git
  fi
  # Pull latest code from Github
  echo "Pulling latest version of module restaurant_$subdir from Github..."
  git pull github 7.x-1.x
  git push -u github 7.x-1.x

  # Push latest code to Drupal
  echo "Pushing latest version of module restaurant_$subdir to Drupal..."
  git push drupal 7.x-1.x
done

subthemes=( "restaurant_radix" "restaurant_seven" )
for subdir in "${subthemes[@]}"
do
  if [ -e "$TARGET/themes/restaurant/$subdir/.git" ]; then
    cd $TARGET/themes/$subdir
    echo ""
    echo ""
    echo "----------------------------------"
    echo "Theme: $subdir"
    echo "----------------------------------"
    if ! (git remote | grep github -q); then
    # Rename origin to github
    git remote rename origin github
    git remote set-url github git@github.com:openrestaurant/restaurant_$subdir.git
    fi
    if ! (git remote | grep drupal -q); then
      # Add Drupal remote
      git remote add drupal arshad@git.drupal.org:project/restaurant_$subdir.git
    fi
    # Pull latest code from Github
    echo "Pulling latest version of module restaurant_$subdir from Github..."
    git pull github 7.x-1.x
    git push -u github 7.x-1.x

    # Push latest code to Drupal
    echo "Pushing latest version of module restaurant_$subdir to Drupal..."
    git push drupal 7.x-1.x
  else
    echo "No git repository found for theme $subdir"
  fi
done
