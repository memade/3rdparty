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
// $hash=027842b89846614ba6d0e3056db65004bc3a6b06$
//

#include "libcef_dll/ctocpp/post_data_element_ctocpp.h"

// STATIC METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
CefRefPtr<CefPostDataElement> CefPostDataElement::Create() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_post_data_element_t* _retval = cef_post_data_element_create();

  // Return type: refptr_same
  return CefPostDataElementCToCpp::Wrap(_retval);
}

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall") bool CefPostDataElementCToCpp::IsReadOnly() {
  cef_post_data_element_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_read_only))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_read_only(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") void CefPostDataElementCToCpp::SetToEmpty() {
  cef_post_data_element_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_to_empty))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_to_empty(_struct);
}

NO_SANITIZE("cfi-icall")
void CefPostDataElementCToCpp::SetToFile(const CefString& fileName) {
  cef_post_data_element_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_to_file))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: fileName; type: string_byref_const
  DCHECK(!fileName.empty());
  if (fileName.empty())
    return;

  // Execute
  _struct->set_to_file(_struct, fileName.GetStruct());
}

NO_SANITIZE("cfi-icall")
void CefPostDataElementCToCpp::SetToBytes(size_t size, const void* bytes) {
  cef_post_data_element_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_to_bytes))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: bytes; type: simple_byaddr
  DCHECK(bytes);
  if (!bytes)
    return;

  // Execute
  _struct->set_to_bytes(_struct, size, bytes);
}

NO_SANITIZE("cfi-icall")
CefPostDataElement::Type CefPostDataElementCToCpp::GetType() {
  cef_post_data_element_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_type))
    return PDE_TYPE_EMPTY;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_postdataelement_type_t _retval = _struct->get_type(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") CefString CefPostDataElementCToCpp::GetFile() {
  cef_post_data_element_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_file))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_file(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall") size_t CefPostDataElementCToCpp::GetBytesCount() {
  cef_post_data_element_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_bytes_count))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  size_t _retval = _struct->get_bytes_count(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
size_t CefPostDataElementCToCpp::GetBytes(size_t size, void* bytes) {
  cef_post_data_element_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_bytes))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: bytes; type: simple_byaddr
  DCHECK(bytes);
  if (!bytes)
    return 0;

  // Execute
  size_t _retval = _struct->get_bytes(_struct, size, bytes);

  // Return type: simple
  return _retval;
}

// CONSTRUCTOR - Do not edit by hand.

CefPostDataElementCToCpp::CefPostDataElementCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefPostDataElementCToCpp::~CefPostDataElementCToCpp() {}

template <>
cef_post_data_element_t* CefCToCppRefCounted<
    CefPostDataElementCToCpp,
    CefPostDataElement,
    cef_post_data_element_t>::UnwrapDerived(CefWrapperType type,
                                            CefPostDataElement* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefPostDataElementCToCpp,
                                   CefPostDataElement,
                                   cef_post_data_element_t>::kWrapperType =
    WT_POST_DATA_ELEMENT;
