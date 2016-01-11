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
//   C++ generator version: 0.1.3

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Drive API (drive/v2)
// Generated from:
//   Version: v2
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.3
#ifndef  GOOGLE_DRIVE_API_USER_H_
#define  GOOGLE_DRIVE_API_USER_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_drive_api {
using namespace googleapis;

/**
 * Information about a Drive user.
 *
 * @ingroup DataObject
 */
class User : public client::JsonCppData {
 public:
  /**
   * The user's profile picture.
   *
   * @ingroup DataObject
   */
  class UserPicture : public client::JsonCppData {
   public:
    /**
     * Creates a new default instance.
     *
     * @return Ownership is passed back to the caller.
     */
    static UserPicture* New();

    /**
     * Standard constructor for an immutable data object instance.
     *
     * @param[in] storage  The underlying data storage for this instance.
     */
    explicit UserPicture(const Json::Value& storage);

    /**
     * Standard constructor for a mutable data object instance.
     *
     * @param[in] storage  The underlying data storage for this instance.
     */
    explicit UserPicture(Json::Value* storage);

    /**
     * Standard destructor.
     */
    virtual ~UserPicture();

    /**
     * Returns a string denoting the type of this data object.
     *
     * @return <code>google_drive_api::UserPicture</code>
     */
    const StringPiece GetTypeName() const {
      return StringPiece("google_drive_api::UserPicture");
    }

    /**
     * Determine if the '<code>url</code>' attribute was set.
     *
     * @return true if the '<code>url</code>' attribute was set.
     */
    bool has_url() const {
      return Storage().isMember("url");
    }

    /**
     * Clears the '<code>url</code>' attribute.
     */
    void clear_url() {
      MutableStorage()->removeMember("url");
    }


    /**
     * Get the value of the '<code>url</code>' attribute.
     */
    const StringPiece get_url() const {
      const Json::Value& v = Storage("url");
      if (v == Json::Value::null) return StringPiece("");
      return StringPiece(v.asCString());
    }

    /**
     * Change the '<code>url</code>' attribute.
     *
     * A URL that points to a profile picture of this user.
     *
     * @param[in] value The new value.
     */
    void set_url(const StringPiece& value) {
      *MutableStorage("url") = value.data();
    }

   private:
    void operator=(const UserPicture&);
  };  // UserPicture
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static User* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit User(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit User(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~User();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_drive_api::User</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_drive_api::User");
  }

  /**
   * Determine if the '<code>displayName</code>' attribute was set.
   *
   * @return true if the '<code>displayName</code>' attribute was set.
   */
  bool has_display_name() const {
    return Storage().isMember("displayName");
  }

  /**
   * Clears the '<code>displayName</code>' attribute.
   */
  void clear_display_name() {
    MutableStorage()->removeMember("displayName");
  }


  /**
   * Get the value of the '<code>displayName</code>' attribute.
   */
  const StringPiece get_display_name() const {
    const Json::Value& v = Storage("displayName");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>displayName</code>' attribute.
   *
   * A plain text displayable name for this user.
   *
   * @param[in] value The new value.
   */
  void set_display_name(const StringPiece& value) {
    *MutableStorage("displayName") = value.data();
  }

  /**
   * Determine if the '<code>emailAddress</code>' attribute was set.
   *
   * @return true if the '<code>emailAddress</code>' attribute was set.
   */
  bool has_email_address() const {
    return Storage().isMember("emailAddress");
  }

  /**
   * Clears the '<code>emailAddress</code>' attribute.
   */
  void clear_email_address() {
    MutableStorage()->removeMember("emailAddress");
  }


  /**
   * Get the value of the '<code>emailAddress</code>' attribute.
   */
  const StringPiece get_email_address() const {
    const Json::Value& v = Storage("emailAddress");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>emailAddress</code>' attribute.
   *
   * The email address of the user.
   *
   * @param[in] value The new value.
   */
  void set_email_address(const StringPiece& value) {
    *MutableStorage("emailAddress") = value.data();
  }

  /**
   * Determine if the '<code>isAuthenticatedUser</code>' attribute was set.
   *
   * @return true if the '<code>isAuthenticatedUser</code>' attribute was set.
   */
  bool has_is_authenticated_user() const {
    return Storage().isMember("isAuthenticatedUser");
  }

  /**
   * Clears the '<code>isAuthenticatedUser</code>' attribute.
   */
  void clear_is_authenticated_user() {
    MutableStorage()->removeMember("isAuthenticatedUser");
  }


  /**
   * Get the value of the '<code>isAuthenticatedUser</code>' attribute.
   */
  bool get_is_authenticated_user() const {
    const Json::Value& storage = Storage("isAuthenticatedUser");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>isAuthenticatedUser</code>' attribute.
   *
   * Whether this user is the same as the authenticated user for whom the
   * request was made.
   *
   * @param[in] value The new value.
   */
  void set_is_authenticated_user(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("isAuthenticatedUser"));
  }

  /**
   * Determine if the '<code>kind</code>' attribute was set.
   *
   * @return true if the '<code>kind</code>' attribute was set.
   */
  bool has_kind() const {
    return Storage().isMember("kind");
  }

  /**
   * Clears the '<code>kind</code>' attribute.
   */
  void clear_kind() {
    MutableStorage()->removeMember("kind");
  }


  /**
   * Get the value of the '<code>kind</code>' attribute.
   */
  const StringPiece get_kind() const {
    const Json::Value& v = Storage("kind");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>kind</code>' attribute.
   *
   * This is always drive#user.
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>permissionId</code>' attribute was set.
   *
   * @return true if the '<code>permissionId</code>' attribute was set.
   */
  bool has_permission_id() const {
    return Storage().isMember("permissionId");
  }

  /**
   * Clears the '<code>permissionId</code>' attribute.
   */
  void clear_permission_id() {
    MutableStorage()->removeMember("permissionId");
  }


  /**
   * Get the value of the '<code>permissionId</code>' attribute.
   */
  const StringPiece get_permission_id() const {
    const Json::Value& v = Storage("permissionId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>permissionId</code>' attribute.
   *
   * The user's ID as visible in the permissions collection.
   *
   * @param[in] value The new value.
   */
  void set_permission_id(const StringPiece& value) {
    *MutableStorage("permissionId") = value.data();
  }

  /**
   * Determine if the '<code>picture</code>' attribute was set.
   *
   * @return true if the '<code>picture</code>' attribute was set.
   */
  bool has_picture() const {
    return Storage().isMember("picture");
  }

  /**
   * Clears the '<code>picture</code>' attribute.
   */
  void clear_picture() {
    MutableStorage()->removeMember("picture");
  }


  /**
   * Get a reference to the value of the '<code>picture</code>' attribute.
   */
  const UserPicture get_picture() const {
     const Json::Value& storage = Storage("picture");
    return client::JsonValueToCppValueHelper<UserPicture >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>picture</code>' property.
   *
   * The user's profile picture.
   *
   * @return The result can be modified to change the attribute value.
   */
  UserPicture mutable_picture() {
    Json::Value* storage = MutableStorage("picture");
    return client::JsonValueToMutableCppValueHelper<UserPicture >(storage);
  }

 private:
  void operator=(const User&);
};  // User
}  // namespace google_drive_api
#endif  // GOOGLE_DRIVE_API_USER_H_
