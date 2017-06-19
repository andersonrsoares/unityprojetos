#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Platform.ITokenChangeListener
struct ITokenChangeListener_t1241321258;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Unity.FirebaseAuthService/<AddTokenChangeListener>c__AnonStorey4
struct  U3CAddTokenChangeListenerU3Ec__AnonStorey4_t3402664514  : public Il2CppObject
{
public:
	// Firebase.Platform.ITokenChangeListener Firebase.Unity.FirebaseAuthService/<AddTokenChangeListener>c__AnonStorey4::listener
	Il2CppObject * ___listener_0;

public:
	inline static int32_t get_offset_of_listener_0() { return static_cast<int32_t>(offsetof(U3CAddTokenChangeListenerU3Ec__AnonStorey4_t3402664514, ___listener_0)); }
	inline Il2CppObject * get_listener_0() const { return ___listener_0; }
	inline Il2CppObject ** get_address_of_listener_0() { return &___listener_0; }
	inline void set_listener_0(Il2CppObject * value)
	{
		___listener_0 = value;
		Il2CppCodeGenWriteBarrier(&___listener_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
