#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Platform.IClockService
struct IClockService_t3133746056;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Platform.Default.SystemClock
struct  SystemClock_t3210207471  : public Il2CppObject
{
public:

public:
};

struct SystemClock_t3210207471_StaticFields
{
public:
	// Firebase.Platform.IClockService Firebase.Platform.Default.SystemClock::Instance
	Il2CppObject * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(SystemClock_t3210207471_StaticFields, ___Instance_0)); }
	inline Il2CppObject * get_Instance_0() const { return ___Instance_0; }
	inline Il2CppObject ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Il2CppObject * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
