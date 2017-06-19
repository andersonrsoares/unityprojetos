#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Net.ICredentials
struct ICredentials_t3855617113;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.GlobalProxySelection/EmptyWebProxy
struct  EmptyWebProxy_t3297389645  : public Il2CppObject
{
public:
	// System.Net.ICredentials System.Net.GlobalProxySelection/EmptyWebProxy::credentials
	Il2CppObject * ___credentials_0;

public:
	inline static int32_t get_offset_of_credentials_0() { return static_cast<int32_t>(offsetof(EmptyWebProxy_t3297389645, ___credentials_0)); }
	inline Il2CppObject * get_credentials_0() const { return ___credentials_0; }
	inline Il2CppObject ** get_address_of_credentials_0() { return &___credentials_0; }
	inline void set_credentials_0(Il2CppObject * value)
	{
		___credentials_0 = value;
		Il2CppCodeGenWriteBarrier(&___credentials_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
