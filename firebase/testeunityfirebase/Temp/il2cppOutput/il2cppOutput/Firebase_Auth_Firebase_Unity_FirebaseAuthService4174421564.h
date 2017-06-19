#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_App_Firebase_Platform_Default_BaseAuthSer1401274330.h"

// Firebase.Unity.FirebaseAuthService
struct FirebaseAuthService_t4174421564;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Unity.FirebaseAuthService/UserRefreshState>
struct Dictionary_2_t3217382494;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Unity.FirebaseAuthService
struct  FirebaseAuthService_t4174421564  : public BaseAuthService_t1401274330
{
public:
	// System.Single Firebase.Unity.FirebaseAuthService::TOKEN_REFRESH_PERIOD_SECONDS
	float ___TOKEN_REFRESH_PERIOD_SECONDS_2;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Unity.FirebaseAuthService/UserRefreshState> Firebase.Unity.FirebaseAuthService::userRefreshStateByAuthCPtr
	Dictionary_2_t3217382494 * ___userRefreshStateByAuthCPtr_3;

public:
	inline static int32_t get_offset_of_TOKEN_REFRESH_PERIOD_SECONDS_2() { return static_cast<int32_t>(offsetof(FirebaseAuthService_t4174421564, ___TOKEN_REFRESH_PERIOD_SECONDS_2)); }
	inline float get_TOKEN_REFRESH_PERIOD_SECONDS_2() const { return ___TOKEN_REFRESH_PERIOD_SECONDS_2; }
	inline float* get_address_of_TOKEN_REFRESH_PERIOD_SECONDS_2() { return &___TOKEN_REFRESH_PERIOD_SECONDS_2; }
	inline void set_TOKEN_REFRESH_PERIOD_SECONDS_2(float value)
	{
		___TOKEN_REFRESH_PERIOD_SECONDS_2 = value;
	}

	inline static int32_t get_offset_of_userRefreshStateByAuthCPtr_3() { return static_cast<int32_t>(offsetof(FirebaseAuthService_t4174421564, ___userRefreshStateByAuthCPtr_3)); }
	inline Dictionary_2_t3217382494 * get_userRefreshStateByAuthCPtr_3() const { return ___userRefreshStateByAuthCPtr_3; }
	inline Dictionary_2_t3217382494 ** get_address_of_userRefreshStateByAuthCPtr_3() { return &___userRefreshStateByAuthCPtr_3; }
	inline void set_userRefreshStateByAuthCPtr_3(Dictionary_2_t3217382494 * value)
	{
		___userRefreshStateByAuthCPtr_3 = value;
		Il2CppCodeGenWriteBarrier(&___userRefreshStateByAuthCPtr_3, value);
	}
};

struct FirebaseAuthService_t4174421564_StaticFields
{
public:
	// Firebase.Unity.FirebaseAuthService Firebase.Unity.FirebaseAuthService::_instance
	FirebaseAuthService_t4174421564 * ____instance_1;

public:
	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(FirebaseAuthService_t4174421564_StaticFields, ____instance_1)); }
	inline FirebaseAuthService_t4174421564 * get__instance_1() const { return ____instance_1; }
	inline FirebaseAuthService_t4174421564 ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(FirebaseAuthService_t4174421564 * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier(&____instance_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
