#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_Database_Firebase_Database_Internal_Colle4262869811.h"

// System.Object
struct Il2CppObject;
// Firebase.Database.Internal.Collection.LlrbNode`2<System.Object,System.Object>
struct LlrbNode_2_t4262869811;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Collection.LlrbValueNode`2<System.Object,System.Object>
struct  LlrbValueNode_2_t1296857666  : public LlrbNode_2_t4262869811
{
public:
	// TK Firebase.Database.Internal.Collection.LlrbValueNode`2::_key
	Il2CppObject * ____key_0;
	// Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV> Firebase.Database.Internal.Collection.LlrbValueNode`2::_right
	LlrbNode_2_t4262869811 * ____right_1;
	// TV Firebase.Database.Internal.Collection.LlrbValueNode`2::_value
	Il2CppObject * ____value_2;
	// Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV> Firebase.Database.Internal.Collection.LlrbValueNode`2::_left
	LlrbNode_2_t4262869811 * ____left_3;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(LlrbValueNode_2_t1296857666, ____key_0)); }
	inline Il2CppObject * get__key_0() const { return ____key_0; }
	inline Il2CppObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(Il2CppObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier(&____key_0, value);
	}

	inline static int32_t get_offset_of__right_1() { return static_cast<int32_t>(offsetof(LlrbValueNode_2_t1296857666, ____right_1)); }
	inline LlrbNode_2_t4262869811 * get__right_1() const { return ____right_1; }
	inline LlrbNode_2_t4262869811 ** get_address_of__right_1() { return &____right_1; }
	inline void set__right_1(LlrbNode_2_t4262869811 * value)
	{
		____right_1 = value;
		Il2CppCodeGenWriteBarrier(&____right_1, value);
	}

	inline static int32_t get_offset_of__value_2() { return static_cast<int32_t>(offsetof(LlrbValueNode_2_t1296857666, ____value_2)); }
	inline Il2CppObject * get__value_2() const { return ____value_2; }
	inline Il2CppObject ** get_address_of__value_2() { return &____value_2; }
	inline void set__value_2(Il2CppObject * value)
	{
		____value_2 = value;
		Il2CppCodeGenWriteBarrier(&____value_2, value);
	}

	inline static int32_t get_offset_of__left_3() { return static_cast<int32_t>(offsetof(LlrbValueNode_2_t1296857666, ____left_3)); }
	inline LlrbNode_2_t4262869811 * get__left_3() const { return ____left_3; }
	inline LlrbNode_2_t4262869811 ** get_address_of__left_3() { return &____left_3; }
	inline void set__left_3(LlrbNode_2_t4262869811 * value)
	{
		____left_3 = value;
		Il2CppCodeGenWriteBarrier(&____left_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
