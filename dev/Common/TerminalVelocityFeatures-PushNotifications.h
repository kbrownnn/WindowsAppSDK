﻿// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

// THIS FILE IS AUTOMATICALLY GENERATED; DO NOT EDIT IT

// INPUT FILE: dev\Common\TerminalVelocityFeatures-PushNotifications.xml
// OPTIONS: -Channel Experimental -Language C++ -Namespace Microsoft.Windows.PushNotifications

#if defined(__midlrt)
namespace features
{
    feature_name Feature_PushNotifications = { DisabledByDefault, FALSE };
}
#endif // defined(__midlrt)

// Feature constants
#define WINDOWSAPPRUNTIME_MICROSOFT_WINDOWS_PUSHNOTIFICATIONS_FEATURE_PUSHNOTIFICATIONS_ENABLED 1

#if defined(__cplusplus)

namespace Microsoft::Windows::PushNotifications
{

__pragma(detect_mismatch("ODR_violation_WINDOWSAPPRUNTIME_MICROSOFT_WINDOWS_PUSHNOTIFICATIONS_FEATURE_PUSHNOTIFICATIONS_ENABLED_mismatch", "AlwaysEnabled"))
struct Feature_PushNotifications
{
    static constexpr bool IsEnabled() { return WINDOWSAPPRUNTIME_MICROSOFT_WINDOWS_PUSHNOTIFICATIONS_FEATURE_PUSHNOTIFICATIONS_ENABLED == 1; }
};

} // namespace Microsoft.Windows.PushNotifications

#endif // defined(__cplusplus)
