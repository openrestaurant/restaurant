api = 2
core = 7.x

projects[drupal][version] = 7.23
includes[] = drupal-org-core.make

; Download the Restaurant install profile and recurively build its dependencies:
projects[restaurant][type] = profile 
projects[restaurant][download][type] = git
projects[restaurant][download][branch] = 7.x-1.x
