# This is a CMake file for Cloud Storage JSON API v1
# using the Google APIs Client Library for C++.
#
# See http://google.github.io/google-api-cpp-client/latest/start/get_started
# for more information about what to do with this file.

project (google_storage_api)

MESSAGE("Storage API included")
# These sources assume that the CMakeLists.txt in ../.. added itself to
# the include directories so that include paths are specified explicitly
# with the directory #include "google/storage_api/..."
add_library(google_storage_api
            bucket.cc
            bucket_access_control.cc
            bucket_access_controls.cc
            buckets.cc
            channel.cc
            compose_request.cc
            notification.cc
            notifications.cc
            object.cc
            object_access_control.cc
            object_access_controls.cc
            objects.cc
            policy.cc
            rewrite_response.cc
            service_account.cc
            test_iam_permissions_response.cc
            storage_service.cc)
target_link_libraries(google_storage_api googleapis_http)
target_link_libraries(google_storage_api googleapis_internal)
target_link_libraries(google_storage_api googleapis_jsoncpp)
target_link_libraries(google_storage_api googleapis_utils)

set(STORAGE_API_INSTALL_INCLUDE_DIR
    ${GOOGLEAPIS_INSTALL_BASE_DIR}/include/google/storage_api)

install(FILES
bucket.h
bucket_access_control.h
bucket_access_controls.h
buckets.h
channel.h
compose_request.h
notification.h
notifications.h
object.h
object_access_control.h
object_access_controls.h
objects.h
policy.h
rewrite_response.h
service_account.h
storage_api.h
test_iam_permissions_response.h
storage_service.h
DESTINATION ${STORAGE_API_INSTALL_INCLUDE_DIR})

install(TARGETS google_storage_api DESTINATION ${GOOGLEAPIS_INSTALL_LIB_DIR})
