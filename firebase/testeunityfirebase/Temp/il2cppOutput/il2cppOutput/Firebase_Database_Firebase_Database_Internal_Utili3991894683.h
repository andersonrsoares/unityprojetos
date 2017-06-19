#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Utilities.IClock
struct IClock_t2325879361;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Utilities.OffsetClock
struct  OffsetClock_t3991894683  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Utilities.IClock Firebase.Database.Internal.Utilities.OffsetClock::_baseClock
	Il2CppObject * ____baseClock_0;
	// System.Int64 Firebase.Database.Internal.Utilities.OffsetClock::_offset
	int64_t ____offset_1;

public:
	inline static int32_t get_offset_of__baseClock_0() { return static_cast<int32_t>(offsetof(OffsetClock_t3991894683, ____baseClock_0)); }
	inline Il2CppObject * get__baseClock_0() const { return ____baseClock_0; }
	inline Il2CppObject ** get_address_of__baseClock_0() { return &____baseClock_0; }
	inline void set__baseClock_0(Il2CppObject * value)
	{
		____baseClock_0 = value;
		Il2CppCodeGenWriteBarrier(&____baseClock_0, value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(OffsetClock_t3991894683, ____offset_1)); }
	inline int64_t get__offset_1() const { return ____offset_1; }
	inline int64_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int64_t value)
	{
		____offset_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
