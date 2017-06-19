#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_Database_Firebase_Database_Internal_Colle3217094540.h"

// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t643912417;
// Firebase.Database.Internal.Collection.LlrbNode`2<System.Object,System.Object>
struct LlrbNode_2_t4262869811;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Collection.RbTreeSortedMap`2<System.Object,System.Object>
struct  RbTreeSortedMap_2_t791914602  : public ImmutableSortedMap_2_t3217094540
{
public:
	// System.Collections.Generic.IComparer`1<TK> Firebase.Database.Internal.Collection.RbTreeSortedMap`2::_comparator
	Il2CppObject* ____comparator_0;
	// Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV> Firebase.Database.Internal.Collection.RbTreeSortedMap`2::_root
	LlrbNode_2_t4262869811 * ____root_1;

public:
	inline static int32_t get_offset_of__comparator_0() { return static_cast<int32_t>(offsetof(RbTreeSortedMap_2_t791914602, ____comparator_0)); }
	inline Il2CppObject* get__comparator_0() const { return ____comparator_0; }
	inline Il2CppObject** get_address_of__comparator_0() { return &____comparator_0; }
	inline void set__comparator_0(Il2CppObject* value)
	{
		____comparator_0 = value;
		Il2CppCodeGenWriteBarrier(&____comparator_0, value);
	}

	inline static int32_t get_offset_of__root_1() { return static_cast<int32_t>(offsetof(RbTreeSortedMap_2_t791914602, ____root_1)); }
	inline LlrbNode_2_t4262869811 * get__root_1() const { return ____root_1; }
	inline LlrbNode_2_t4262869811 ** get_address_of__root_1() { return &____root_1; }
	inline void set__root_1(LlrbNode_2_t4262869811 * value)
	{
		____root_1 = value;
		Il2CppCodeGenWriteBarrier(&____root_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
