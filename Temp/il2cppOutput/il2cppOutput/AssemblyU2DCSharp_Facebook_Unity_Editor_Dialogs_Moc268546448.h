﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "AssemblyU2DCSharp_Facebook_Unity_Editor_EditorFace3697284607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Editor.Dialogs.MockLoginDialog
struct  MockLoginDialog_t268546448  : public EditorFacebookMockDialog_t3697284607
{
public:
	// System.String Facebook.Unity.Editor.Dialogs.MockLoginDialog::accessToken
	String_t* ___accessToken_6;

public:
	inline static int32_t get_offset_of_accessToken_6() { return static_cast<int32_t>(offsetof(MockLoginDialog_t268546448, ___accessToken_6)); }
	inline String_t* get_accessToken_6() const { return ___accessToken_6; }
	inline String_t** get_address_of_accessToken_6() { return &___accessToken_6; }
	inline void set_accessToken_6(String_t* value)
	{
		___accessToken_6 = value;
		Il2CppCodeGenWriteBarrier(&___accessToken_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif