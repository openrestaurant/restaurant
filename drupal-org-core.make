api = 2
core = 7.x

; Drupal Core
projects[drupal][type] = core
projects[drupal][version] = 7.54

; Patches

; Ignore node_modules and bower_components on file_scan_directory.
projects[drupal][patch][2672654] = https://www.drupal.org/files/issues/drupal-ignore-directories-file-scan-directory-2672654-1.patch
