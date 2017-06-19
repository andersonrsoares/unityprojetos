#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Platform.Security.GAuthToken
struct  GAuthToken_t3916815478  : public Il2CppObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Firebase.Platform.Security.GAuthToken::_auth
	Il2CppObject* ____auth_0;
	// System.String Firebase.Platform.Security.GAuthToken::_token
	String_t* ____token_1;

public:
	inline static int32_t get_offset_of__auth_0() { return static_cast<int32_t>(offsetof(GAuthToken_t3916815478, ____auth_0)); }
	inline Il2CppObject* get__auth_0() const { return ____auth_0; }
	inline Il2CppObject** get_address_of__auth_0() { return &____auth_0; }
	inline void set__auth_0(Il2CppObject* value)
	{
		____auth_0 = value;
		Il2CppCodeGenWriteBarrier(&____auth_0, value);
	}

	inline static int32_t get_offset_of__token_1() { return static_cast<int32_t>(offsetof(GAuthToken_t3916815478, ____token_1)); }
	inline String_t* get__token_1() const { return ____token_1; }
	inline String_t** get_address_of__token_1() { return &____token_1; }
	inline void set__token_1(String_t* value)
	{
		____token_1 = value;
		Il2CppCodeGenWriteBarrier(&____token_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
