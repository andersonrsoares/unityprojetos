#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Net.IAuthenticationModule
struct IAuthenticationModule_t3093891015;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NtlmClient
struct  NtlmClient_t1998072160  : public Il2CppObject
{
public:
	// System.Net.IAuthenticationModule System.Net.NtlmClient::authObject
	Il2CppObject * ___authObject_0;

public:
	inline static int32_t get_offset_of_authObject_0() { return static_cast<int32_t>(offsetof(NtlmClient_t1998072160, ___authObject_0)); }
	inline Il2CppObject * get_authObject_0() const { return ___authObject_0; }
	inline Il2CppObject ** get_address_of_authObject_0() { return &___authObject_0; }
	inline void set_authObject_0(Il2CppObject * value)
	{
		___authObject_0 = value;
		Il2CppCodeGenWriteBarrier(&___authObject_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
