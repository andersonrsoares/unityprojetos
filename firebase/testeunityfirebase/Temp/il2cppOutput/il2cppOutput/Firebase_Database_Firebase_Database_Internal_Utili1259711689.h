#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Utilities.Pair`2<System.Object,System.Object>
struct  Pair_2_t1259711689  : public Il2CppObject
{
public:
	// T Firebase.Database.Internal.Utilities.Pair`2::_first
	Il2CppObject * ____first_0;
	// TU Firebase.Database.Internal.Utilities.Pair`2::_second
	Il2CppObject * ____second_1;

public:
	inline static int32_t get_offset_of__first_0() { return static_cast<int32_t>(offsetof(Pair_2_t1259711689, ____first_0)); }
	inline Il2CppObject * get__first_0() const { return ____first_0; }
	inline Il2CppObject ** get_address_of__first_0() { return &____first_0; }
	inline void set__first_0(Il2CppObject * value)
	{
		____first_0 = value;
		Il2CppCodeGenWriteBarrier(&____first_0, value);
	}

	inline static int32_t get_offset_of__second_1() { return static_cast<int32_t>(offsetof(Pair_2_t1259711689, ____second_1)); }
	inline Il2CppObject * get__second_1() const { return ____second_1; }
	inline Il2CppObject ** get_address_of__second_1() { return &____second_1; }
	inline void set__second_1(Il2CppObject * value)
	{
		____second_1 = value;
		Il2CppCodeGenWriteBarrier(&____second_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
