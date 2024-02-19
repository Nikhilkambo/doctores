api = 2
core = 7.x

; Include the definition of how to build Drupal core directly, including patches.
includes[] = drupal-org-core.make

; Download the DF install profile and recursively build all its dependencies.
projects[df][type] = "profile"
projects[df][download][type] = "git"
projects[df][download][url] = "http://git.drupal.org/project/df.git"
projects[df][download][branch] = "7.x-1.x"
