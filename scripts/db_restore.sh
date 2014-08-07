#!/bin/bash

# Configuration variables
drupal_root="$HOME/Sites/restaurant"
backup_file="$HOME/backups/restaurant.sql"

# Check if file exists
if [ ! -f ${backup_file} ]; then
    backup_file="$HOME/backups/restaurant.sql"
  fi

  # Check if file exists
  if [ ! -f ${backup_file} ]; then
      echo "No backupfile exists, please run db_dump first."; exit 1
    fi

    cd ${drupal_root}

    echo "Restoring db from ${backup_file}"

    # remove current tables
    `drush sql-connect` -e "show tables" -s | xargs -I "@@" `drush sql-connect` -e "DROP TABLE @@"

    # perform import
    `drush sql-connect` < ${backup_file}

    echo "Database restored."
