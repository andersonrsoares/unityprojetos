#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_Database_Firebase_Database_Internal_Conne3406713242.h"

// Firebase.Database.Core.AuthTokenProvider
struct AuthTokenProvider_t3681374264;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Context/ConnectionAuthTokenProvider258
struct  ConnectionAuthTokenProvider258_t2291877717  : public ConnectionAuthTokenProvider_t3406713242
{
public:
	// Firebase.Database.Core.AuthTokenProvider Firebase.Database.Internal.Core.Context/ConnectionAuthTokenProvider258::_provider
	AuthTokenProvider_t3681374264 * ____provider_0;

public:
	inline static int32_t get_offset_of__provider_0() { return static_cast<int32_t>(offsetof(ConnectionAuthTokenProvider258_t2291877717, ____provider_0)); }
	inline AuthTokenProvider_t3681374264 * get__provider_0() const { return ____provider_0; }
	inline AuthTokenProvider_t3681374264 ** get_address_of__provider_0() { return &____provider_0; }
	inline void set__provider_0(AuthTokenProvider_t3681374264 * value)
	{
		____provider_0 = value;
		Il2CppCodeGenWriteBarrier(&____provider_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
