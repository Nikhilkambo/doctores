# @file dfs_dfhc.sh

drush en dfs_dfhc -vy
drush mi DFSDFHCSpecialtiesTerms
drush mi DFSDFHCLanguageTerms
drush mi DFSDFHCGenderTerms
drush mi DFSDFHCTopicTerms
drush mi DFSDFHCWebformNode
drush mi DFSDFHCWebformComponents
drush mi DFSDFHCWebformEmails
drush mi DFSDFHCCtaNodes
drush mi DFSDFHCLocationNodes
drush mi DFSDFHCDepartmentNodes
drush mi DFSDFHCConditionNodes
drush mi DFSDFHCProfileNodes
drush mi DFSDFHCNewsNodes
drush mi DFSDFHCPatientStoryNodes
drush mi DFSDFHCPageNodes
drush mi DFSDFHCMenuLinks
drush tei-rebuild
