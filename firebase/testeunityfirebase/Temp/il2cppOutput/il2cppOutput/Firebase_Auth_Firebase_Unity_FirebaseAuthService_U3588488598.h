#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Auth.FirebaseUser
struct FirebaseUser_t4046966602;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Unity.FirebaseAuthService/<RefreshExpiredTokens>c__AnonStorey2
struct  U3CRefreshExpiredTokensU3Ec__AnonStorey2_t588488598  : public Il2CppObject
{
public:
	// Firebase.Auth.FirebaseUser Firebase.Unity.FirebaseAuthService/<RefreshExpiredTokens>c__AnonStorey2::user
	FirebaseUser_t4046966602 * ___user_0;

public:
	inline static int32_t get_offset_of_user_0() { return static_cast<int32_t>(offsetof(U3CRefreshExpiredTokensU3Ec__AnonStorey2_t588488598, ___user_0)); }
	inline FirebaseUser_t4046966602 * get_user_0() const { return ___user_0; }
	inline FirebaseUser_t4046966602 ** get_address_of_user_0() { return &___user_0; }
	inline void set_user_0(FirebaseUser_t4046966602 * value)
	{
		___user_0 = value;
		Il2CppCodeGenWriteBarrier(&___user_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
