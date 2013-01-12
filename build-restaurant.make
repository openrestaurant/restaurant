api = 2
core = 7.x

projects[drupal][version] = 7.18
includes[] = drupal-org-core.make
includes[] = drupal-org.make

; Download the Panopoly install profile and recurively build its dependencies:
projects[restaurant][type] = profile 
projects[restaurant][download][type] = git
projects[restaurant][download][branch] = 7.x-1.x
