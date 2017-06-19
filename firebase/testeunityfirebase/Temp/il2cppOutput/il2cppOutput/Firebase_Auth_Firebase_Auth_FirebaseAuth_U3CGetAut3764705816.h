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
// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_t3105883899;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey0
struct  U3CGetAuthU3Ec__AnonStorey0_t3764705816  : public Il2CppObject
{
public:
	// Firebase.FirebaseApp Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey0::app
	FirebaseApp_t210707726 * ___app_0;
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey0::auth
	FirebaseAuth_t3105883899 * ___auth_1;

public:
	inline static int32_t get_offset_of_app_0() { return static_cast<int32_t>(offsetof(U3CGetAuthU3Ec__AnonStorey0_t3764705816, ___app_0)); }
	inline FirebaseApp_t210707726 * get_app_0() const { return ___app_0; }
	inline FirebaseApp_t210707726 ** get_address_of_app_0() { return &___app_0; }
	inline void set_app_0(FirebaseApp_t210707726 * value)
	{
		___app_0 = value;
		Il2CppCodeGenWriteBarrier(&___app_0, value);
	}

	inline static int32_t get_offset_of_auth_1() { return static_cast<int32_t>(offsetof(U3CGetAuthU3Ec__AnonStorey0_t3764705816, ___auth_1)); }
	inline FirebaseAuth_t3105883899 * get_auth_1() const { return ___auth_1; }
	inline FirebaseAuth_t3105883899 ** get_address_of_auth_1() { return &___auth_1; }
	inline void set_auth_1(FirebaseAuth_t3105883899 * value)
	{
		___auth_1 = value;
		Il2CppCodeGenWriteBarrier(&___auth_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
