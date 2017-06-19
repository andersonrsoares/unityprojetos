#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.FirebaseApp
struct FirebaseApp_t210707726;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Core.AuthTokenProvider
struct  AuthTokenProvider_t3681374264  : public Il2CppObject
{
public:
	// Firebase.FirebaseApp Firebase.Database.Core.AuthTokenProvider::_app
	FirebaseApp_t210707726 * ____app_0;

public:
	inline static int32_t get_offset_of__app_0() { return static_cast<int32_t>(offsetof(AuthTokenProvider_t3681374264, ____app_0)); }
	inline FirebaseApp_t210707726 * get__app_0() const { return ____app_0; }
	inline FirebaseApp_t210707726 ** get_address_of__app_0() { return &____app_0; }
	inline void set__app_0(FirebaseApp_t210707726 * value)
	{
		____app_0 = value;
		Il2CppCodeGenWriteBarrier(&____app_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
