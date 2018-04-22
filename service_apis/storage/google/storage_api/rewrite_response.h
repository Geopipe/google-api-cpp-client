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

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Cloud Storage JSON API (storage/v1)
// Generated from:
//   Version: v1
//   Revision: 20171004
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.5
#ifndef  GOOGLE_STORAGE_API_REWRITE_RESPONSE_H_
#define  GOOGLE_STORAGE_API_REWRITE_RESPONSE_H_

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/storage_api/object.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_storage_api {
using namespace googleapis;

/**
 * A rewrite response.
 *
 * @ingroup DataObject
 */
class RewriteResponse : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static RewriteResponse* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit RewriteResponse(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit RewriteResponse(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~RewriteResponse();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_storage_api::RewriteResponse</code>
   */
  const char* GetTypeName() const {
    return "google_storage_api::RewriteResponse";
  }

  /**
   * Determine if the '<code>done</code>' attribute was set.
   *
   * @return true if the '<code>done</code>' attribute was set.
   */
  bool has_done() const {
    return Storage().isMember("done");
  }

  /**
   * Clears the '<code>done</code>' attribute.
   */
  void clear_done() {
    MutableStorage()->removeMember("done");
  }


  /**
   * Get the value of the '<code>done</code>' attribute.
   */
  bool get_done() const {
    const Json::Value& storage = Storage("done");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>done</code>' attribute.
   *
   * true if the copy is finished; otherwise, false if the copy is in progress.
   * This property is always present in the response.
   *
   * @param[in] value The new value.
   */
  void set_done(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("done"));
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
   * The kind of item this is.
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>objectSize</code>' attribute was set.
   *
   * @return true if the '<code>objectSize</code>' attribute was set.
   */
  bool has_object_size() const {
    return Storage().isMember("objectSize");
  }

  /**
   * Clears the '<code>objectSize</code>' attribute.
   */
  void clear_object_size() {
    MutableStorage()->removeMember("objectSize");
  }


  /**
   * Get the value of the '<code>objectSize</code>' attribute.
   */
  int64 get_object_size() const {
    const Json::Value& storage = Storage("objectSize");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>objectSize</code>' attribute.
   *
   * The total size of the object being copied in bytes. This property is always
   * present in the response.
   *
   * @param[in] value The new value.
   */
  void set_object_size(uint64 value) {
    client::SetJsonValueFromCppValueHelper<uint64 >(
      value, MutableStorage("objectSize"));
  }

  /**
   * Determine if the '<code>resource</code>' attribute was set.
   *
   * @return true if the '<code>resource</code>' attribute was set.
   */
  bool has_resource() const {
    return Storage().isMember("resource");
  }

  /**
   * Clears the '<code>resource</code>' attribute.
   */
  void clear_resource() {
    MutableStorage()->removeMember("resource");
  }


  /**
   * Get a reference to the value of the '<code>resource</code>' attribute.
   */
  const Object get_resource() const;

  /**
   * Gets a reference to a mutable value of the '<code>resource</code>'
   * property.
   *
   * A resource containing the metadata for the copied-to object. This property
   * is present in the response only when copying completes.
   *
   * @return The result can be modified to change the attribute value.
   */
  Object mutable_resource();

  /**
   * Determine if the '<code>rewriteToken</code>' attribute was set.
   *
   * @return true if the '<code>rewriteToken</code>' attribute was set.
   */
  bool has_rewrite_token() const {
    return Storage().isMember("rewriteToken");
  }

  /**
   * Clears the '<code>rewriteToken</code>' attribute.
   */
  void clear_rewrite_token() {
    MutableStorage()->removeMember("rewriteToken");
  }


  /**
   * Get the value of the '<code>rewriteToken</code>' attribute.
   */
  const StringPiece get_rewrite_token() const {
    const Json::Value& v = Storage("rewriteToken");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>rewriteToken</code>' attribute.
   *
   * A token to use in subsequent requests to continue copying data. This token
   * is present in the response only when there is more data to copy.
   *
   * @param[in] value The new value.
   */
  void set_rewrite_token(const StringPiece& value) {
    *MutableStorage("rewriteToken") = value.data();
  }

  /**
   * Determine if the '<code>totalBytesRewritten</code>' attribute was set.
   *
   * @return true if the '<code>totalBytesRewritten</code>' attribute was set.
   */
  bool has_total_bytes_rewritten() const {
    return Storage().isMember("totalBytesRewritten");
  }

  /**
   * Clears the '<code>totalBytesRewritten</code>' attribute.
   */
  void clear_total_bytes_rewritten() {
    MutableStorage()->removeMember("totalBytesRewritten");
  }


  /**
   * Get the value of the '<code>totalBytesRewritten</code>' attribute.
   */
  int64 get_total_bytes_rewritten() const {
    const Json::Value& storage = Storage("totalBytesRewritten");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>totalBytesRewritten</code>' attribute.
   *
   * The total bytes written so far, which can be used to provide a waiting user
   * with a progress indicator. This property is always present in the response.
   *
   * @param[in] value The new value.
   */
  void set_total_bytes_rewritten(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("totalBytesRewritten"));
  }

 private:
  void operator=(const RewriteResponse&);
};  // RewriteResponse
}  // namespace google_storage_api
#endif  // GOOGLE_STORAGE_API_REWRITE_RESPONSE_H_