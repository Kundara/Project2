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

// Facebook.Unity.Mobile.MobileFacebook
struct MobileFacebook_t974549177;
// Facebook.Unity.CallbackManager
struct CallbackManager_t1943358823;
// Facebook.Unity.ResultContainer
struct ResultContainer_t79372963;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Facebook_Unity_CallbackManager1943358823.h"
#include "AssemblyU2DCSharp_Facebook_Unity_ShareDialogMode698979849.h"
#include "AssemblyU2DCSharp_Facebook_Unity_ResultContainer79372963.h"
#include "mscorlib_System_String968488902.h"

// System.Void Facebook.Unity.Mobile.MobileFacebook::.ctor(Facebook.Unity.CallbackManager)
extern "C"  void MobileFacebook__ctor_m2525648705 (MobileFacebook_t974549177 * __this, CallbackManager_t1943358823 * ___callbackManager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.ShareDialogMode Facebook.Unity.Mobile.MobileFacebook::get_ShareDialogMode()
extern "C"  int32_t MobileFacebook_get_ShareDialogMode_m3994491891 (MobileFacebook_t974549177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::set_ShareDialogMode(Facebook.Unity.ShareDialogMode)
extern "C"  void MobileFacebook_set_ShareDialogMode_m1467972906 (MobileFacebook_t974549177 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnLoginComplete(Facebook.Unity.ResultContainer)
extern "C"  void MobileFacebook_OnLoginComplete_m3691155462 (MobileFacebook_t974549177 * __this, ResultContainer_t79372963 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnGetAppLinkComplete(Facebook.Unity.ResultContainer)
extern "C"  void MobileFacebook_OnGetAppLinkComplete_m3582112214 (MobileFacebook_t974549177 * __this, ResultContainer_t79372963 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnGroupCreateComplete(Facebook.Unity.ResultContainer)
extern "C"  void MobileFacebook_OnGroupCreateComplete_m3547075192 (MobileFacebook_t974549177 * __this, ResultContainer_t79372963 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnGroupJoinComplete(Facebook.Unity.ResultContainer)
extern "C"  void MobileFacebook_OnGroupJoinComplete_m3590831590 (MobileFacebook_t974549177 * __this, ResultContainer_t79372963 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnAppRequestsComplete(Facebook.Unity.ResultContainer)
extern "C"  void MobileFacebook_OnAppRequestsComplete_m1512424738 (MobileFacebook_t974549177 * __this, ResultContainer_t79372963 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnAppInviteComplete(Facebook.Unity.ResultContainer)
extern "C"  void MobileFacebook_OnAppInviteComplete_m1169584423 (MobileFacebook_t974549177 * __this, ResultContainer_t79372963 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnFetchDeferredAppLinkComplete(Facebook.Unity.ResultContainer)
extern "C"  void MobileFacebook_OnFetchDeferredAppLinkComplete_m2828452243 (MobileFacebook_t974549177 * __this, ResultContainer_t79372963 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnShareLinkComplete(Facebook.Unity.ResultContainer)
extern "C"  void MobileFacebook_OnShareLinkComplete_m4127017494 (MobileFacebook_t974549177 * __this, ResultContainer_t79372963 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnRefreshCurrentAccessTokenComplete(Facebook.Unity.ResultContainer)
extern "C"  void MobileFacebook_OnRefreshCurrentAccessTokenComplete_m1061974420 (MobileFacebook_t974549177 * __this, ResultContainer_t79372963 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.Mobile.MobileFacebook::DeserializeMessage(System.String)
extern "C"  Il2CppObject* MobileFacebook_DeserializeMessage_m1681838625 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Mobile.MobileFacebook::SerializeDictionary(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  String_t* MobileFacebook_SerializeDictionary_m2760557123 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___dict0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Mobile.MobileFacebook::TryGetCallbackId(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String&)
extern "C"  bool MobileFacebook_TryGetCallbackId_m2368855007 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___result0, String_t** ___callbackId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Mobile.MobileFacebook::TryGetError(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String&)
extern "C"  bool MobileFacebook_TryGetError_m1498725139 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___result0, String_t** ___errorMessage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
