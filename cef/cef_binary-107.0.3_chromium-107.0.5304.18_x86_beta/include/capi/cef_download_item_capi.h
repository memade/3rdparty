// Copyright (c) 2022 Marshall A. Greenblatt. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//    * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//    * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//    * Neither the name of Google Inc. nor the name Chromium Embedded
// Framework nor the names of its contributors may be used to endorse
// or promote products derived from this software without specific prior
// written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool and should not edited
// by hand. See the translator.README.txt file in the tools directory for
// more information.
//
// $hash=a218058d7ceb842c9ea0cf0c252f9787de6562e7$
//

#ifndef CEF_INCLUDE_CAPI_CEF_DOWNLOAD_ITEM_CAPI_H_
#define CEF_INCLUDE_CAPI_CEF_DOWNLOAD_ITEM_CAPI_H_
#pragma once

#include "include/capi/cef_base_capi.h"

#ifdef __cplusplus
extern "C" {
#endif

///
/// Structure used to represent a download item.
///
typedef struct _cef_download_item_t {
  ///
  /// Base structure.
  ///
  cef_base_ref_counted_t base;

  ///
  /// Returns true (1) if this object is valid. Do not call any other functions
  /// if this function returns false (0).
  ///
  int(CEF_CALLBACK* is_valid)(struct _cef_download_item_t* self);

  ///
  /// Returns true (1) if the download is in progress.
  ///
  int(CEF_CALLBACK* is_in_progress)(struct _cef_download_item_t* self);

  ///
  /// Returns true (1) if the download is complete.
  ///
  int(CEF_CALLBACK* is_complete)(struct _cef_download_item_t* self);

  ///
  /// Returns true (1) if the download has been canceled or interrupted.
  ///
  int(CEF_CALLBACK* is_canceled)(struct _cef_download_item_t* self);

  ///
  /// Returns a simple speed estimate in bytes/s.
  ///
  int64(CEF_CALLBACK* get_current_speed)(struct _cef_download_item_t* self);

  ///
  /// Returns the rough percent complete or -1 if the receive total size is
  /// unknown.
  ///
  int(CEF_CALLBACK* get_percent_complete)(struct _cef_download_item_t* self);

  ///
  /// Returns the total number of bytes.
  ///
  int64(CEF_CALLBACK* get_total_bytes)(struct _cef_download_item_t* self);

  ///
  /// Returns the number of received bytes.
  ///
  int64(CEF_CALLBACK* get_received_bytes)(struct _cef_download_item_t* self);

  ///
  /// Returns the time that the download started.
  ///
  cef_basetime_t(CEF_CALLBACK* get_start_time)(
      struct _cef_download_item_t* self);

  ///
  /// Returns the time that the download ended.
  ///
  cef_basetime_t(CEF_CALLBACK* get_end_time)(struct _cef_download_item_t* self);

  ///
  /// Returns the full path to the downloaded or downloading file.
  ///
  // The resulting string must be freed by calling cef_string_userfree_free().
  cef_string_userfree_t(CEF_CALLBACK* get_full_path)(
      struct _cef_download_item_t* self);

  ///
  /// Returns the unique identifier for this download.
  ///
  uint32(CEF_CALLBACK* get_id)(struct _cef_download_item_t* self);

  ///
  /// Returns the URL.
  ///
  // The resulting string must be freed by calling cef_string_userfree_free().
  cef_string_userfree_t(CEF_CALLBACK* get_url)(
      struct _cef_download_item_t* self);

  ///
  /// Returns the original URL before any redirections.
  ///
  // The resulting string must be freed by calling cef_string_userfree_free().
  cef_string_userfree_t(CEF_CALLBACK* get_original_url)(
      struct _cef_download_item_t* self);

  ///
  /// Returns the suggested file name.
  ///
  // The resulting string must be freed by calling cef_string_userfree_free().
  cef_string_userfree_t(CEF_CALLBACK* get_suggested_file_name)(
      struct _cef_download_item_t* self);

  ///
  /// Returns the content disposition.
  ///
  // The resulting string must be freed by calling cef_string_userfree_free().
  cef_string_userfree_t(CEF_CALLBACK* get_content_disposition)(
      struct _cef_download_item_t* self);

  ///
  /// Returns the mime type.
  ///
  // The resulting string must be freed by calling cef_string_userfree_free().
  cef_string_userfree_t(CEF_CALLBACK* get_mime_type)(
      struct _cef_download_item_t* self);
} cef_download_item_t;

#ifdef __cplusplus
}
#endif

#endif  // CEF_INCLUDE_CAPI_CEF_DOWNLOAD_ITEM_CAPI_H_
