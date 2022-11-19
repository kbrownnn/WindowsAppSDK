﻿// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

// Rely on _STRINGIZE(x) in yvals_core.h
#ifndef _STRINGIZE
#define _STRINGIZEX(x)  #x
#define _STRINGIZE(x)   _STRINGIZEX(x)
#endif

#define _WSTRINGIZEXX(x) L ## #x
#define _WSTRINGIZEX(x) _WSTRINGIZEXX(x)
#define _WSTRINGIZE(x) _WSTRINGIZEX({ ## x ## })

#define PUSHNOTIFICATIONS_IMPL_CLSID_UUID     E739C755-0D09-48DF-A468-A5DF0B5422DC
#define PUSHNOTIFICATIONS_IMPL_CLSID_STRING   _STRINGIZE(PUSHNOTIFICATIONS_IMPL_CLSID_UUID)
#define PUSHNOTIFICATIONS_IMPL_CLSID_WSTRING   _WSTRINGIZE(PUSHNOTIFICATIONS_IMPL_CLSID_UUID)

#define PUSHNOTIFICATIONS_LRP_CLSID_UUID      60FC21B2-B396-4D49-94F0-7555869FB93C
#define PUSHNOTIFICATIONS_LRP_CLSID_STRING    _STRINGIZE(PUSHNOTIFICATIONS_LRP_CLSID_UUID)
#define PUSHNOTIFICATIONS_LRP_CLSID_WSTRING   _WSTRINGIZE(PUSHNOTIFICATIONS_LRP_CLSID_UUID)

#define PUSHNOTIFICATIONS_FOREGROUNDSINK_CLSID_UUID        25604D55-9B17-426F-9D67-2B11B3A65598
#define PUSHNOTIFICATIONS_FOREGROUNDSINK2_CLSID_UUID       559B4205-F810-4947-B02B-3EA9A311C6AD

#if defined(WINDOWSAPPSDK_BUILD_PIPELINE) && (WINDOWSAPPSDK_BUILD_PIPELINE == 1)
#include "PushNotifications-Override.h"
#endif
