#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Connection.ConnectionAuthTokenProvider/IGetTokenCallback
struct IGetTokenCallback_t3391042181;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Context/ConnectionAuthTokenProvider258/GetTokenCompletionListener261
struct  GetTokenCompletionListener261_t1468635474  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Connection.ConnectionAuthTokenProvider/IGetTokenCallback Firebase.Database.Internal.Core.Context/ConnectionAuthTokenProvider258/GetTokenCompletionListener261::_callback
	Il2CppObject * ____callback_0;

public:
	inline static int32_t get_offset_of__callback_0() { return static_cast<int32_t>(offsetof(GetTokenCompletionListener261_t1468635474, ____callback_0)); }
	inline Il2CppObject * get__callback_0() const { return ____callback_0; }
	inline Il2CppObject ** get_address_of__callback_0() { return &____callback_0; }
	inline void set__callback_0(Il2CppObject * value)
	{
		____callback_0 = value;
		Il2CppCodeGenWriteBarrier(&____callback_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
