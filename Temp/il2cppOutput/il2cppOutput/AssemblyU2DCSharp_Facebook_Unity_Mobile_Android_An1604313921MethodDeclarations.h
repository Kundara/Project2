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

// Facebook.Unity.Mobile.Android.AndroidFacebook
struct AndroidFacebook_t1604313921;
// Facebook.Unity.Mobile.Android.IAndroidJavaClass
struct IAndroidJavaClass_t2276864572;
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
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct FacebookDelegate_1_t3690308374;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>
struct FacebookDelegate_1_t2422421107;

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

// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::.ctor()
extern "C"  void AndroidFacebook__ctor_m1308819104 (AndroidFacebook_t1604313921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::.ctor(Facebook.Unity.Mobile.Android.IAndroidJavaClass,Facebook.Unity.CallbackManager)
extern "C"  void AndroidFacebook__ctor_m1154862163 (AndroidFacebook_t1604313921 * __this, Il2CppObject * ___facebookJavaClass0, CallbackManager_t1943358823 * ___callbackManager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Mobile.Android.AndroidFacebook::get_KeyHash()
extern "C"  String_t* AndroidFacebook_get_KeyHash_m214487237 (AndroidFacebook_t1604313921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::set_KeyHash(System.String)
extern "C"  void AndroidFacebook_set_KeyHash_m607892 (AndroidFacebook_t1604313921 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Mobile.Android.AndroidFacebook::get_LimitEventUsage()
extern "C"  bool AndroidFacebook_get_LimitEventUsage_m2962621899 (AndroidFacebook_t1604313921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::set_LimitEventUsage(System.Boolean)
extern "C"  void AndroidFacebook_set_LimitEventUsage_m264154970 (AndroidFacebook_t1604313921 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Mobile.Android.AndroidFacebook::get_SDKName()
extern "C"  String_t* AndroidFacebook_get_SDKName_m3552651421 (AndroidFacebook_t1604313921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Mobile.Android.AndroidFacebook::get_SDKVersion()
extern "C"  String_t* AndroidFacebook_get_SDKVersion_m2161495656 (AndroidFacebook_t1604313921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::Init(System.String,Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
extern "C"  void AndroidFacebook_Init_m3528891639 (AndroidFacebook_t1604313921 * __this, String_t* ___appId0, HideUnityDelegate_t2364798903 * ___hideUnityDelegate1, InitDelegate_t1475272884 * ___onInitComplete2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::LogInWithReadPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void AndroidFacebook_LogInWithReadPermissions_m400655119 (AndroidFacebook_t1604313921 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t2634519556 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::LogInWithPublishPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void AndroidFacebook_LogInWithPublishPermissions_m465952398 (AndroidFacebook_t1604313921 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t2634519556 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::LogOut()
extern "C"  void AndroidFacebook_LogOut_m26962126 (AndroidFacebook_t1604313921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::AppRequest(System.String,System.Nullable`1<Facebook.Unity.OGActionType>,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void AndroidFacebook_AppRequest_m4222748223 (AndroidFacebook_t1604313921 * __this, String_t* ___message0, Nullable_1_t3534247419  ___actionType1, String_t* ___objectId2, Il2CppObject* ___to3, Il2CppObject* ___filters4, Il2CppObject* ___excludeIds5, Nullable_1_t1438485399  ___maxRecipients6, String_t* ___data7, String_t* ___title8, FacebookDelegate_1_t2757548155 * ___callback9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::AppInvite(System.Uri,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppInviteResult>)
extern "C"  void AndroidFacebook_AppInvite_m2894270346 (AndroidFacebook_t1604313921 * __this, Uri_t2776692961 * ___appLinkUrl0, Uri_t2776692961 * ___previewImageUrl1, FacebookDelegate_1_t573598949 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::ShareLink(System.Uri,System.String,System.String,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void AndroidFacebook_ShareLink_m2246564614 (AndroidFacebook_t1604313921 * __this, Uri_t2776692961 * ___contentURL0, String_t* ___contentTitle1, String_t* ___contentDescription2, Uri_t2776692961 * ___photoURL3, FacebookDelegate_1_t1384006650 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::FeedShare(System.String,System.Uri,System.String,System.String,System.String,System.Uri,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void AndroidFacebook_FeedShare_m870239282 (AndroidFacebook_t1604313921 * __this, String_t* ___toId0, Uri_t2776692961 * ___link1, String_t* ___linkName2, String_t* ___linkCaption3, String_t* ___linkDescription4, Uri_t2776692961 * ___picture5, String_t* ___mediaSource6, FacebookDelegate_1_t1384006650 * ___callback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>)
extern "C"  void AndroidFacebook_GameGroupCreate_m3314530630 (AndroidFacebook_t1604313921 * __this, String_t* ___name0, String_t* ___description1, String_t* ___privacy2, FacebookDelegate_1_t2288646710 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::GameGroupJoin(System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>)
extern "C"  void AndroidFacebook_GameGroupJoin_m422503194 (AndroidFacebook_t1604313921 * __this, String_t* ___id0, FacebookDelegate_1_t1900386660 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::GetAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void AndroidFacebook_GetAppLink_m1254681340 (AndroidFacebook_t1604313921 * __this, FacebookDelegate_1_t3690308374 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AndroidFacebook_AppEventsLogEvent_m3916401013 (AndroidFacebook_t1604313921 * __this, String_t* ___logEvent0, Nullable_1_t3844246929  ___valueToSum1, Dictionary_2_t2474804324 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AndroidFacebook_AppEventsLogPurchase_m2827356525 (AndroidFacebook_t1604313921 * __this, float ___logPurchase0, String_t* ___currency1, Dictionary_2_t2474804324 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::ActivateApp(System.String)
extern "C"  void AndroidFacebook_ActivateApp_m900850646 (AndroidFacebook_t1604313921 * __this, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::FetchDeferredAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void AndroidFacebook_FetchDeferredAppLink_m158153017 (AndroidFacebook_t1604313921 * __this, FacebookDelegate_1_t3690308374 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::RefreshCurrentAccessToken(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>)
extern "C"  void AndroidFacebook_RefreshCurrentAccessToken_m3413714249 (AndroidFacebook_t1604313921 * __this, FacebookDelegate_1_t2422421107 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::SetShareDialogMode(Facebook.Unity.ShareDialogMode)
extern "C"  void AndroidFacebook_SetShareDialogMode_m2541607491 (AndroidFacebook_t1604313921 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::CallFB(System.String,System.String)
extern "C"  void AndroidFacebook_CallFB_m560138752 (AndroidFacebook_t1604313921 * __this, String_t* ___method0, String_t* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;