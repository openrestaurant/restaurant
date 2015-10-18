#!/usr/bin/env bash

# Include configs
source ./config.sh

# New tag.
new_tag=$1

# Move up on level into the profile root.
cd ..
TARGET=`pwd -P`

# Open Restaurant modules.
for module in "${modules[@]}"
do
  echo ""
  echo ""
  echo "----------------------------------"
  echo "Module: $module"
  echo "----------------------------------"
  cd $TARGET/modules/restaurant/$module

  # Get the latest tag.
  current_tag="$(git describe --abbrev=0 --tags)"

  # Tag should match 7.x-1.0-rc1
  if [[ $current_tag =~ ^[78]+\.x\-[0-9]+\.[0-9]+ ]] ; then
    # Create release notes using current tag.
    echo "Creating CHANGELOG.txt for $module..."
    git push github --tags
    git push drupal --tags
  else
    # If no tag is found then we have not created a tag yet i.e first release.
    # Create the tag and push it.
    echo "Creating $new_tag release for $module..."
    git tag $new_tag

    git push github --tags
    git push drupal --tags
  fi
done

# Open Restaurant themes.
for theme in "${themes[@]}"
do
  echo ""
  echo ""
  echo "----------------------------------"
  echo "Theme: $theme"
  echo "----------------------------------"
  cd $TARGET/themes/$theme

  # Get the latest tag.
  current_tag="$(git describe --abbrev=0 --tags)"

  # Tag should match 7.x-1.0-rc1
  if [[ $current_tag =~ ^[78]+\.x\-[0-9]+\.[0-9]+ ]] ; then
    # Create release notes using current tag.
    echo "Creating CHANGELOG.txt for $theme..."
    git push github --tags
    git push drupal --tags
  else
    # If no tag is found then we have not created a tag yet i.e first release.
    # Create the tag and push it.
    echo "Creating $new_tag release for $theme..."
    git tag $new_tag

    # Push the tags.
    git push github --tags
    git push drupal --tags
  fi
done

# Create release for profile
echo ""
echo ""
echo "----------------------------------"
echo "Profile: Restaurant"
echo "----------------------------------"
cd $TARGET

