// Copyright (c) 2022 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=8fa9cd400d5a9ecce87183cdbbee8673845b2228$
//

#include "libcef_dll/ctocpp/jsdialog_callback_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefJSDialogCallbackCToCpp::Continue(bool success,
                                         const CefString& user_input) {
  shutdown_checker::AssertNotShutdown();

  cef_jsdialog_callback_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, cont))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: user_input

  // Execute
  _struct->cont(_struct, success, user_input.GetStruct());
}

// CONSTRUCTOR - Do not edit by hand.

CefJSDialogCallbackCToCpp::CefJSDialogCallbackCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefJSDialogCallbackCToCpp::~CefJSDialogCallbackCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_jsdialog_callback_t* CefCToCppRefCounted<
    CefJSDialogCallbackCToCpp,
    CefJSDialogCallback,
    cef_jsdialog_callback_t>::UnwrapDerived(CefWrapperType type,
                                            CefJSDialogCallback* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefJSDialogCallbackCToCpp,
                                   CefJSDialogCallback,
                                   cef_jsdialog_callback_t>::kWrapperType =
    WT_JSDIALOG_CALLBACK;
