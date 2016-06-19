﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Facebook.Unity.Mobile.IOS.IOSFacebook
struct IOSFacebook_t2693359753;
// Facebook.Unity.Mobile.IOS.IIOSWrapper
struct IIOSWrapper_t3835080613;
// Facebook.Unity.CallbackManager
struct CallbackManager_t1943358823;
// System.String
struct String_t;
// Facebook.Unity.HideUnityDelegate
struct HideUnityDelegate_t2364798903;
// Facebook.Unity.InitDelegate
struct InitDelegate_t1475272884;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3840643258;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>
struct FacebookDelegate_1_t2634519556;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t3709260776;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>
struct FacebookDelegate_1_t2757548155;
// System.Uri
struct Uri_t2776692961;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppInviteResult>
struct FacebookDelegate_1_t573598949;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>
struct FacebookDelegate_1_t1384006650;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>
struct FacebookDelegate_1_t2288646710;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>
struct FacebookDelegate_1_t1900386660;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct FacebookDelegate_1_t3690308374;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>
struct FacebookDelegate_1_t2422421107;
// Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict
struct NativeDict_t802211981;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Facebook_Unity_CallbackManager1943358823.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Facebook_Unity_HideUnityDelegate2364798903.h"
#include "AssemblyU2DCSharp_Facebook_Unity_InitDelegate1475272884.h"
#include "mscorlib_System_Nullable_1_gen3534247419.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_Nullable_1_gen3844246929.h"
#include "AssemblyU2DCSharp_Facebook_Unity_ShareDialogMode698979849.h"

// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::.ctor()
extern "C"  void IOSFacebook__ctor_m605863012 (IOSFacebook_t2693359753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::.ctor(Facebook.Unity.Mobile.IOS.IIOSWrapper,Facebook.Unity.CallbackManager)
extern "C"  void IOSFacebook__ctor_m1487271988 (IOSFacebook_t2693359753 * __this, Il2CppObject * ___iosWrapper0, CallbackManager_t1943358823 * ___callbackManager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Mobile.IOS.IOSFacebook::get_LimitEventUsage()
extern "C"  bool IOSFacebook_get_LimitEventUsage_m3867693199 (IOSFacebook_t2693359753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::set_LimitEventUsage(System.Boolean)
extern "C"  void IOSFacebook_set_LimitEventUsage_m3543523102 (IOSFacebook_t2693359753 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Mobile.IOS.IOSFacebook::get_SDKName()
extern "C"  String_t* IOSFacebook_get_SDKName_m2439632481 (IOSFacebook_t2693359753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Mobile.IOS.IOSFacebook::get_SDKVersion()
extern "C"  String_t* IOSFacebook_get_SDKVersion_m1361779236 (IOSFacebook_t2693359753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::Init(System.String,System.Boolean,System.String,Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
extern "C"  void IOSFacebook_Init_m2024924350 (IOSFacebook_t2693359753 * __this, String_t* ___appId0, bool ___frictionlessRequests1, String_t* ___iosURLSuffix2, HideUnityDelegate_t2364798903 * ___hideUnityDelegate3, InitDelegate_t1475272884 * ___onInitComplete4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::LogInWithReadPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void IOSFacebook_LogInWithReadPermissions_m956252619 (IOSFacebook_t2693359753 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t2634519556 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::LogInWithPublishPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void IOSFacebook_LogInWithPublishPermissions_m3762083410 (IOSFacebook_t2693359753 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t2634519556 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::LogOut()
extern "C"  void IOSFacebook_LogOut_m4005127050 (IOSFacebook_t2693359753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::AppRequest(System.String,System.Nullable`1<Facebook.Unity.OGActionType>,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void IOSFacebook_AppRequest_m394509307 (IOSFacebook_t2693359753 * __this, String_t* ___message0, Nullable_1_t3534247419  ___actionType1, String_t* ___objectId2, Il2CppObject* ___to3, Il2CppObject* ___filters4, Il2CppObject* ___excludeIds5, Nullable_1_t1438485399  ___maxRecipients6, String_t* ___data7, String_t* ___title8, FacebookDelegate_1_t2757548155 * ___callback9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::AppInvite(System.Uri,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppInviteResult>)
extern "C"  void IOSFacebook_AppInvite_m3852083022 (IOSFacebook_t2693359753 * __this, Uri_t2776692961 * ___appLinkUrl0, Uri_t2776692961 * ___previewImageUrl1, FacebookDelegate_1_t573598949 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::ShareLink(System.Uri,System.String,System.String,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void IOSFacebook_ShareLink_m3011305162 (IOSFacebook_t2693359753 * __this, Uri_t2776692961 * ___contentURL0, String_t* ___contentTitle1, String_t* ___contentDescription2, Uri_t2776692961 * ___photoURL3, FacebookDelegate_1_t1384006650 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::FeedShare(System.String,System.Uri,System.String,System.String,System.String,System.Uri,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void IOSFacebook_FeedShare_m3784891126 (IOSFacebook_t2693359753 * __this, String_t* ___toId0, Uri_t2776692961 * ___link1, String_t* ___linkName2, String_t* ___linkCaption3, String_t* ___linkDescription4, Uri_t2776692961 * ___picture5, String_t* ___mediaSource6, FacebookDelegate_1_t1384006650 * ___callback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>)
extern "C"  void IOSFacebook_GameGroupCreate_m1437940490 (IOSFacebook_t2693359753 * __this, String_t* ___name0, String_t* ___description1, String_t* ___privacy2, FacebookDelegate_1_t2288646710 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::GameGroupJoin(System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>)
extern "C"  void IOSFacebook_GameGroupJoin_m1387033822 (IOSFacebook_t2693359753 * __this, String_t* ___id0, FacebookDelegate_1_t1900386660 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void IOSFacebook_AppEventsLogEvent_m3584901937 (IOSFacebook_t2693359753 * __this, String_t* ___logEvent0, Nullable_1_t3844246929  ___valueToSum1, Dictionary_2_t2474804324 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void IOSFacebook_AppEventsLogPurchase_m3850812201 (IOSFacebook_t2693359753 * __this, float ___logPurchase0, String_t* ___currency1, Dictionary_2_t2474804324 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::ActivateApp(System.String)
extern "C"  void IOSFacebook_ActivateApp_m1646602130 (IOSFacebook_t2693359753 * __this, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::FetchDeferredAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void IOSFacebook_FetchDeferredAppLink_m113498869 (IOSFacebook_t2693359753 * __this, FacebookDelegate_1_t3690308374 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::GetAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void IOSFacebook_GetAppLink_m3614394296 (IOSFacebook_t2693359753 * __this, FacebookDelegate_1_t3690308374 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::RefreshCurrentAccessToken(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>)
extern "C"  void IOSFacebook_RefreshCurrentAccessToken_m1848430341 (IOSFacebook_t2693359753 * __this, FacebookDelegate_1_t2422421107 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::SetShareDialogMode(Facebook.Unity.ShareDialogMode)
extern "C"  void IOSFacebook_SetShareDialogMode_m311470591 (IOSFacebook_t2693359753 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict Facebook.Unity.Mobile.IOS.IOSFacebook::MarshallDict(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  NativeDict_t802211981 * IOSFacebook_MarshallDict_m2358816763 (Il2CppObject * __this /* static, unused */, Dictionary_2_t2474804324 * ___dict0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict Facebook.Unity.Mobile.IOS.IOSFacebook::MarshallDict(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  NativeDict_t802211981 * IOSFacebook_MarshallDict_m4063330381 (Il2CppObject * __this /* static, unused */, Dictionary_2_t2606186806 * ___dict0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
