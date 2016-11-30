// Copyright 2010 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.1
//   Build date: 2016-10-17 16:43:55 UTC
//   on: 2016-11-18, 01:59:07 UTC
//   C++ generator version: 0.1.4

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Cloud Storage JSON API (storage/v1)
// Description:
//   Stores and retrieves potentially large, immutable data objects.
// Classes:
//   ObjectAccessControl
// Documentation:
//   https://developers.google.com/storage/docs/json_api/

#include "google/storage_api/object_access_control.h"
#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_storage_api {
using namespace googleapis;



// Object factory method (static).
ObjectAccessControl::ObjectAccessControlProjectTeam* ObjectAccessControl::ObjectAccessControlProjectTeam::New() {
  return new client::JsonCppCapsule<ObjectAccessControlProjectTeam>;
}

// Standard immutable constructor.
ObjectAccessControl::ObjectAccessControlProjectTeam::ObjectAccessControlProjectTeam(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
ObjectAccessControl::ObjectAccessControlProjectTeam::ObjectAccessControlProjectTeam(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
ObjectAccessControl::ObjectAccessControlProjectTeam::~ObjectAccessControlProjectTeam() {
}
// Object factory method (static).
ObjectAccessControl* ObjectAccessControl::New() {
  return new client::JsonCppCapsule<ObjectAccessControl>;
}

// Standard immutable constructor.
ObjectAccessControl::ObjectAccessControl(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
ObjectAccessControl::ObjectAccessControl(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
ObjectAccessControl::~ObjectAccessControl() {
}
}  // namespace google_storage_api
