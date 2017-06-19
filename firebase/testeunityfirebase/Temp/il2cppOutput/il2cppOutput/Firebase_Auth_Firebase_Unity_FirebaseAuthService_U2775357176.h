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
// Firebase.Auth.FirebaseUser
struct FirebaseUser_t4046966602;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Unity.FirebaseAuthService/UserRefreshState
struct  UserRefreshState_t2775357176  : public Il2CppObject
{
public:
	// Firebase.FirebaseApp Firebase.Unity.FirebaseAuthService/UserRefreshState::app
	FirebaseApp_t210707726 * ___app_0;
	// Firebase.Auth.FirebaseUser Firebase.Unity.FirebaseAuthService/UserRefreshState::user
	FirebaseUser_t4046966602 * ___user_1;
	// System.Single Firebase.Unity.FirebaseAuthService/UserRefreshState::lastTokenRefreshTime
	float ___lastTokenRefreshTime_2;

public:
	inline static int32_t get_offset_of_app_0() { return static_cast<int32_t>(offsetof(UserRefreshState_t2775357176, ___app_0)); }
	inline FirebaseApp_t210707726 * get_app_0() const { return ___app_0; }
	inline FirebaseApp_t210707726 ** get_address_of_app_0() { return &___app_0; }
	inline void set_app_0(FirebaseApp_t210707726 * value)
	{
		___app_0 = value;
		Il2CppCodeGenWriteBarrier(&___app_0, value);
	}

	inline static int32_t get_offset_of_user_1() { return static_cast<int32_t>(offsetof(UserRefreshState_t2775357176, ___user_1)); }
	inline FirebaseUser_t4046966602 * get_user_1() const { return ___user_1; }
	inline FirebaseUser_t4046966602 ** get_address_of_user_1() { return &___user_1; }
	inline void set_user_1(FirebaseUser_t4046966602 * value)
	{
		___user_1 = value;
		Il2CppCodeGenWriteBarrier(&___user_1, value);
	}

	inline static int32_t get_offset_of_lastTokenRefreshTime_2() { return static_cast<int32_t>(offsetof(UserRefreshState_t2775357176, ___lastTokenRefreshTime_2)); }
	inline float get_lastTokenRefreshTime_2() const { return ___lastTokenRefreshTime_2; }
	inline float* get_address_of_lastTokenRefreshTime_2() { return &___lastTokenRefreshTime_2; }
	inline void set_lastTokenRefreshTime_2(float value)
	{
		___lastTokenRefreshTime_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
