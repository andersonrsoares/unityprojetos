#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_g38854645.h"

// System.Collections.Generic.Stack`1<Firebase.Database.Internal.Collection.LlrbValueNode`2<System.Object,System.Object>>
struct Stack_1_t2384585820;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Collection.ImmutableSortedMapIterator`2<System.Object,System.Object>
struct  ImmutableSortedMapIterator_2_t2384854130  : public Il2CppObject
{
public:
	// System.Boolean Firebase.Database.Internal.Collection.ImmutableSortedMapIterator`2::_isReverse
	bool ____isReverse_0;
	// System.Collections.Generic.Stack`1<Firebase.Database.Internal.Collection.LlrbValueNode`2<TK,TV>> Firebase.Database.Internal.Collection.ImmutableSortedMapIterator`2::_nodeStack
	Stack_1_t2384585820 * ____nodeStack_1;
	// System.Collections.Generic.KeyValuePair`2<TK,TV> Firebase.Database.Internal.Collection.ImmutableSortedMapIterator`2::<Current>k__BackingField
	KeyValuePair_2_t38854645  ___U3CCurrentU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of__isReverse_0() { return static_cast<int32_t>(offsetof(ImmutableSortedMapIterator_2_t2384854130, ____isReverse_0)); }
	inline bool get__isReverse_0() const { return ____isReverse_0; }
	inline bool* get_address_of__isReverse_0() { return &____isReverse_0; }
	inline void set__isReverse_0(bool value)
	{
		____isReverse_0 = value;
	}

	inline static int32_t get_offset_of__nodeStack_1() { return static_cast<int32_t>(offsetof(ImmutableSortedMapIterator_2_t2384854130, ____nodeStack_1)); }
	inline Stack_1_t2384585820 * get__nodeStack_1() const { return ____nodeStack_1; }
	inline Stack_1_t2384585820 ** get_address_of__nodeStack_1() { return &____nodeStack_1; }
	inline void set__nodeStack_1(Stack_1_t2384585820 * value)
	{
		____nodeStack_1 = value;
		Il2CppCodeGenWriteBarrier(&____nodeStack_1, value);
	}

	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ImmutableSortedMapIterator_2_t2384854130, ___U3CCurrentU3Ek__BackingField_2)); }
	inline KeyValuePair_2_t38854645  get_U3CCurrentU3Ek__BackingField_2() const { return ___U3CCurrentU3Ek__BackingField_2; }
	inline KeyValuePair_2_t38854645 * get_address_of_U3CCurrentU3Ek__BackingField_2() { return &___U3CCurrentU3Ek__BackingField_2; }
	inline void set_U3CCurrentU3Ek__BackingField_2(KeyValuePair_2_t38854645  value)
	{
		___U3CCurrentU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
