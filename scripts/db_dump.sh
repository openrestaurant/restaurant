#!/bin/bash

# Configuration variables
drupal_root="$HOME/Sites/restaurant"
backup_dest="$HOME/backups"
dbname="restaurant.sql"

# time_stamp=$(date +%Y-%m-%d-%H-%M-%S);
# dbname="restaurant-${time_stamp}.sql"

# Make sure the backup directory is available
if [ ! -d ${backup_dest} ]; then
    echo backup_dest="$HOME/backups"
  fi

  # Make sure the backup directory is available
  if [ ! -d ${backup_dest} ]; then
      echo "Backup directory $HOME/backups is missing or not writeable... exiting."; exit 1
    else
        echo "Starting db dump..."
      fi

      # Dump our SQL DATABASE
      drush -r ${drupal_root} sql-dump > ${backup_dest}/${dbname}

      echo "Backup for restaurant created: ${backup_dest}/${dbname}"
