#!/bin/bash

# Configuration variables
profile_root="$HOME/Sites/vagrant-restaurant/www/profiles/restaurant"
drops_profile_dest="$HOME/Sites/restaurant-drops-7/profiles/restaurant"

# Make sure the profile_root directory is available
if [ ! -d ${profile_root} ]; then
    echo profile_root="$HOME/Sites/vagrant-restaurant/www/profiles/restaurant"
  fi

echo "Starting drops update..."

# Remove drops profile.
echo "Removing current drops profile..."
rm -rf ${drops_profile_dest}

# Copy profile to destination.
echo "Copying profile to drops..."
cp -R ${profile_root} ${drops_profile_dest}

# Remove git files.
echo "Removing all .git files";
find ${drops_profile_dest} -name ".git" -exec rm -rf {} \;
rm -rf ${drops_profile_dest}/.gitignore


# Remove .gitignore for profile.
# rm ${drops_profile_dest}/.gitignore;

echo "Drops update at ${drops_profile_dest}."
