; Drupal core make file.

api = 2
core = 7.x

; Not specifying a drupal core version will use the latest stable release.
projects[drupal][version] = "7.19"

; CORE PATCHES

; node_access integrity constraint violation on module_invoke_all('node_' . $op, $node); http://drupal.org/node/1146244
; http://drupal.org/node/1146244#comment-6644078
projects[drupal][patch][] = http://drupal.org/files/1146244-82-node-save-on-insert.patch

; user_role_grant_permissions() throws PDOException when used for a disabled module's permission or with non-existent permissions
; http://drupal.org/node/737816#comment-6978566
; (fixes integrity constraint violation when adding permissions, see http://drupal.org/node/1063204)
projects[drupal][patch][] = http://drupal.org/files/drupal-7.x-fix_pdoexception_grant_permissions-737816-26-do-not-test.patch

; Recruiter profile preselection on installation, scheduled for 7.20 (drupal.org/node/1727430#comment-6623174)
projects[drupal][patch][] = "http://drupal.org/files/drupal-provide_exclusive_property_install_profiles-1727430-35-d7.patch"
