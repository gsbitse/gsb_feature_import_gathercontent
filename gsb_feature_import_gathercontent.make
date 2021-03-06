; GSB Feature Import GatherContent

api = 2
core = 7.x

; Modules for import - Feeds related basically

projects[job_scheduler][version] = 2.0-alpha3
projects[job_scheduler][subdir] = contrib

projects[feeds][version] = 2.x-dev
projects[feeds][download][type] = git
projects[feeds][download][revision] = f004629
projects[feeds][download][branch] = 7.x-2.x
projects[feeds][subdir] = contrib
;projects[feeds][patch][feeds-http_request-POST-handle] = https://raw.github.com/gsbitse/gsb-revamp-patches/master/feeds-http_request-POST-handle.patch
projects[feeds][patch][feeds-alt_and_title] = http://drupal.org/files/feeds-alt_and_title-reroll-1080386-78.patch

projects[feeds_tamper][version] = 1.0-beta4
projects[feeds_tamper][subdir] = contrib

projects[feeds_jsonpath_parser][version] = 1.0-beta2
projects[feeds_jsonpath_parser][subdir] = contrib
projects[feeds_jsonpath_parser][patch][add-jsonpatch-lib] = https://raw.github.com/gsbitse/gsb-revamp-patches/master/add-jsonpatch-lib.patch
