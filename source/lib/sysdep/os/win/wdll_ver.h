/* Copyright (c) 2010 Wildfire Games
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/*
 * return DLL version information
 */

#ifndef INCLUDED_WDLL_VER
#define INCLUDED_WDLL_VER

#include "lib/native_path.h"

typedef std::wstring VersionList;

/**
 * Read DLL version information and append it to a string.
 *
 * @param pathname of DLL (preferably the complete path, so that we don't
 *		  inadvertently load another one on the library search path.)
 *		  If no extension is given, .dll will be appended.
 *
 * The text output includes the module name.
 * On failure, the version is given as "unknown".
 **/
extern void wdll_ver_Append(const OsPath& pathname, VersionList& list);

#endif	// #ifndef INCLUDED_WDLL_VER
