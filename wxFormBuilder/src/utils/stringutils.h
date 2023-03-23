///////////////////////////////////////////////////////////////////////////////
//
// wxFormBuilder - A Visual Dialog Editor for wxWidgets.
// Copyright (C) 2005 José Antonio Hurtado
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
// Written by
//   José Antonio Hurtado - joseantonio.hurtado@gmail.com
//   Juan Antonio Ortega  - jortegalalmolda@gmail.com
//
///////////////////////////////////////////////////////////////////////////////

#ifndef UTILS_STRINGUTILS_H
#define UTILS_STRINGUTILS_H

#include <wx/string.h>

namespace ticpp
{
class Document;
}

class TiXmlDocument;
class wxArrayString;


namespace StringUtils
{
wxString IntToStr(int num);

wxString GetSupportedEncodings(bool columnateWithTab = true, wxArrayString* array = NULL);
wxFontEncoding GetEncodingFromUser(const wxString& message);
}  // namespace StringUtils

namespace XMLUtils
{
// These are only vaguely string related, perhaps they deserve their own files.
// These load xml files and verify the encoding is correct, optionally converting
// the files using wxWidgets.
void LoadXMLFile(ticpp::Document& doc, bool condenseWhiteSpace, const wxString& path = wxEmptyString);
void LoadXMLFile(TiXmlDocument& doc, bool condenseWhiteSpace, const wxString& path = wxEmptyString);

// Converts to UTF-8 and prepends declaration
void ConvertAndAddDeclaration(
  const wxString& path, wxFontEncoding encoding = wxFONTENCODING_SYSTEM, bool backup = true);
void ConvertAndChangeDeclaration(
  const wxString& path, const wxString& version, const wxString& standalone,
  wxFontEncoding encoding = wxFONTENCODING_SYSTEM, bool backup = true);
}  // namespace XMLUtils

#endif  // UTILS_STRINGUTILS_H
