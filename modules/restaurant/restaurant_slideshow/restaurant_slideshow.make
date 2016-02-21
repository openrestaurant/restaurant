core = 7.x
api  = 2

; Dependencies

projects[field_slideshow][version] = 1.8
projects[field_slideshow][subdir] = contrib
projects[field_slideshow][patch][1366226] = http://drupal.org/files/field_slideshow-long-text-field-support-1366226-11.patch

libraries[jquery.cycle][download][type] = get
libraries[jquery.cycle][download][url] = http://malsup.com/jquery/cycle/release/jquery.cycle.zip?v2.99
libraries[jquery.cycle][destination] = libraries
