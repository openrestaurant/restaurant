#!/usr/bin/env bash

# Include configs
source ./config.sh

# New tag.
current_tag=7.x-$1
current_branch=7.x-$2
new_tag=7.x-$3

# Move up on level into the profile root.
cd ..
TARGET=`pwd -P`

# Remove current release notes
rm $TARGET/RELEASE_NOTES.txt

echo ""
echo ""
echo "----------------------------------"
echo "Profile: Open Restaurant"
echo "----------------------------------"
cd $TARGET
echo "Updating the version number in build-restaurant.make to $3..."
perl -i -pe "s/^projects\[restaurant\]\[version\]\s?=\s?(.*)$/projects[restaurant][version] = ${3}/g" build-restaurant.make

# Open Restaurant modules.
for module in "${modules[@]}"
do
  echo ""
  echo ""
  echo "----------------------------------"
  echo "Module: $module"
  echo "----------------------------------"
  cd $TARGET/modules/restaurant/$module

  # Create the CHANGELOG.txt
  echo "Creating CHANGELOG.txt for $module with tag $current_tag and branch $current_branch..."
  drush rn $current_tag $current_branch --changelog >> CHANGELOG.txt

  # Replace the current branch with the new tag.
  echo "Updating branch $current_branch in CHANGELOG.txt to $new_tag..."
  perl -i -pe "s/${current_branch}/${new_tag}/g" CHANGELOG.txt

  # Replace date.
  current_date=`date +%Y-%m-%d`
  echo "Updating the date to $current_date..."
  perl -i -pe "s/%ad/${current_date}/g" CHANGELOG.txt

  # Fix empty releases.
  empty_text="- No changes since last release."
  perl -i -pe "s/^\-\s?\.$/${empty_text}/g" CHANGELOG.txt

  # Update version in .info file.
  echo "Updating the version number in $module.info..."
  perl -i -pe "s/^version\s?=\s?(.*)$/version = ${new_tag}/g" $module.info

  # Update release notes.
  # Use this to create a release on drupal.org
  cat CHANGELOG.txt >> $TARGET/RELEASE_NOTES.txt

  # Update versions in drupal.org.make
  cd $TARGET
  echo "Updating the version number in drupal-org.make to $3..."
  perl -i -pe "s/^projects\[${module}\]\[version\]\s?=\s?(.*)$/projects[${module}][version] = ${3}/g" drupal-org.make
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

  # Create the CHANGELOG.txt
  echo "Creating CHANGELOG.txt for $theme with tag $current_tag and branch $current_branch..."
  drush rn $current_tag $current_branch --changelog >> CHANGELOG.txt

  # Replace the current branch with the new tag.
  echo "Updating branch $current_branch in CHANGELOG.txt to $new_tag..."
  perl -i -pe "s/${current_branch}/${new_tag}/g" CHANGELOG.txt

  # Replace date.
  current_date=`date +%Y-%m-%d`
  echo "Updating the date to $current_date..."
  perl -i -pe "s/%ad/${current_date}/g" CHANGELOG.txt

  # Fix empty releases.
  empty_text="- No changes since last release."
  perl -i -pe "s/^\-\s?\.$/${empty_text}/g" CHANGELOG.txt

  # Update version in .info file.
  echo "Updating the version number in $theme.info..."
  perl -i -pe "s/^version\s?=\s?(.*)$/version = ${new_tag}/g" $theme.info

  # Update release notes.
  # Use this to create a release on drupal.org
  cat CHANGELOG.txt >> $TARGET/RELEASE_NOTES.txt

  # Update versions in drupal.org.make
  cd $TARGET
  echo "Updating the version number in drupal-org.make to $3..."
  perl -i -pe "s/^projects\[${theme}\]\[version\]\s?=\s?(.*)$/projects[${theme}][version] = ${3}/g" drupal-org.make
done