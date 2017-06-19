#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Unity.FirebaseAuthService/UserRefreshState
struct UserRefreshState_t2775357176;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Unity.FirebaseAuthService/<RefreshExpiredTokens>c__AnonStorey1
struct  U3CRefreshExpiredTokensU3Ec__AnonStorey1_t588488601  : public Il2CppObject
{
public:
	// Firebase.Unity.FirebaseAuthService/UserRefreshState Firebase.Unity.FirebaseAuthService/<RefreshExpiredTokens>c__AnonStorey1::userRefreshState
	UserRefreshState_t2775357176 * ___userRefreshState_0;

public:
	inline static int32_t get_offset_of_userRefreshState_0() { return static_cast<int32_t>(offsetof(U3CRefreshExpiredTokensU3Ec__AnonStorey1_t588488601, ___userRefreshState_0)); }
	inline UserRefreshState_t2775357176 * get_userRefreshState_0() const { return ___userRefreshState_0; }
	inline UserRefreshState_t2775357176 ** get_address_of_userRefreshState_0() { return &___userRefreshState_0; }
	inline void set_userRefreshState_0(UserRefreshState_t2775357176 * value)
	{
		___userRefreshState_0 = value;
		Il2CppCodeGenWriteBarrier(&___userRefreshState_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
