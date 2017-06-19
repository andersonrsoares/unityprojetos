#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Platform.Security.ServiceAccountCredential/OAuthRequest
struct  OAuthRequest_t1020070256  : public Il2CppObject
{
public:
	// System.String Firebase.Platform.Security.ServiceAccountCredential/OAuthRequest::Assertion
	String_t* ___Assertion_0;
	// System.String Firebase.Platform.Security.ServiceAccountCredential/OAuthRequest::ResponseBody
	String_t* ___ResponseBody_1;

public:
	inline static int32_t get_offset_of_Assertion_0() { return static_cast<int32_t>(offsetof(OAuthRequest_t1020070256, ___Assertion_0)); }
	inline String_t* get_Assertion_0() const { return ___Assertion_0; }
	inline String_t** get_address_of_Assertion_0() { return &___Assertion_0; }
	inline void set_Assertion_0(String_t* value)
	{
		___Assertion_0 = value;
		Il2CppCodeGenWriteBarrier(&___Assertion_0, value);
	}

	inline static int32_t get_offset_of_ResponseBody_1() { return static_cast<int32_t>(offsetof(OAuthRequest_t1020070256, ___ResponseBody_1)); }
	inline String_t* get_ResponseBody_1() const { return ___ResponseBody_1; }
	inline String_t** get_address_of_ResponseBody_1() { return &___ResponseBody_1; }
	inline void set_ResponseBody_1(String_t* value)
	{
		___ResponseBody_1 = value;
		Il2CppCodeGenWriteBarrier(&___ResponseBody_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
