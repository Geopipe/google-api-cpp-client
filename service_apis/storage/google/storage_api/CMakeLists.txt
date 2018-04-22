# This is a CMake file for Cloud Storage JSON API v1
# using the Google APIs Client Library for C++.
#
# See http://google.github.io/google-api-cpp-client/latest/start/get_started
# for more information about what to do with this file.

project (google_storage_api)

# These sources assume that the CMakeLists.txt in ../.. added itself to
# the include directories so that include paths are specified explicitly
# with the directory #include "google/storage_api/..."
add_library(google_storage_api STATIC
            bucket.cc
            bucket_access_control.cc
            bucket_access_controls.cc
            buckets.cc
            channel.cc
            compose_request.cc
<<<<<<< HEAD
=======
            notification.cc
            notifications.cc
>>>>>>> upstream/master
            object.cc
            object_access_control.cc
            object_access_controls.cc
            objects.cc
<<<<<<< HEAD
            rewrite_response.cc
=======
            policy.cc
            rewrite_response.cc
            service_account.cc
            test_iam_permissions_response.cc
>>>>>>> upstream/master
            storage_service.cc)
target_link_libraries(google_storage_api googleapis_http)
target_link_libraries(google_storage_api googleapis_internal)
target_link_libraries(google_storage_api googleapis_jsoncpp)
target_link_libraries(google_storage_api googleapis_utils)
<<<<<<< HEAD

set(STORAGE_API_INSTALL_INCLUDE_DIR
    ${GOOGLEAPIS_INSTALL_BASE_DIR}/include/google/storage_api)

install(FILES
bucket.h
bucket_access_control.h
bucket_access_controls.h
buckets.h
channel.h
compose_request.h
object.h
object_access_control.h
object_access_controls.h
objects.h
rewrite_response.h
storage_api.h
storage_service.h
DESTINATION ${STORAGE_API_INSTALL_INCLUDE_DIR})
=======
>>>>>>> upstream/master
