#!/bin/bash

# Configuration variables
profile_root="$HOME/Sites/htdocs/restaurant/profiles/restaurant"
drops_profile_dest="$HOME/Sites/box/www/openrestaurant-drops-7/profiles/restaurant"

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
