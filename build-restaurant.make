api = 2
core = 7.x

; Include the definition for how to build Drupal core directly, including patches:
includes[] = drupal-org-core.make

; Download the Restaurant install profile and recursively build its dependencies:
projects[restaurant][type] = profile 
projects[restaurant][version] = 1.15
