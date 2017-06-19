#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"

// Firebase.Database.Internal.Collection.ImmutableSortedMap`2<Firebase.Database.Internal.Snapshot.ChildKey,System.Object>
struct ImmutableSortedMap_2_t94277708;
// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>
struct ImmutableTree_1_t368550071;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>
struct  ImmutableTree_1_t368550071  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Collection.ImmutableSortedMap`2<Firebase.Database.Internal.Snapshot.ChildKey,System.Object> Firebase.Database.Internal.Core.Utilities.ImmutableTree`1::_children
	ImmutableSortedMap_2_t94277708 * ____children_2;
	// T Firebase.Database.Internal.Core.Utilities.ImmutableTree`1::_value
	Nullable_1_t2088641033  ____value_3;

public:
	inline static int32_t get_offset_of__children_2() { return static_cast<int32_t>(offsetof(ImmutableTree_1_t368550071, ____children_2)); }
	inline ImmutableSortedMap_2_t94277708 * get__children_2() const { return ____children_2; }
	inline ImmutableSortedMap_2_t94277708 ** get_address_of__children_2() { return &____children_2; }
	inline void set__children_2(ImmutableSortedMap_2_t94277708 * value)
	{
		____children_2 = value;
		Il2CppCodeGenWriteBarrier(&____children_2, value);
	}

	inline static int32_t get_offset_of__value_3() { return static_cast<int32_t>(offsetof(ImmutableTree_1_t368550071, ____value_3)); }
	inline Nullable_1_t2088641033  get__value_3() const { return ____value_3; }
	inline Nullable_1_t2088641033 * get_address_of__value_3() { return &____value_3; }
	inline void set__value_3(Nullable_1_t2088641033  value)
	{
		____value_3 = value;
	}
};

struct ImmutableTree_1_t368550071_StaticFields
{
public:
	// Firebase.Database.Internal.Collection.ImmutableSortedMap`2<Firebase.Database.Internal.Snapshot.ChildKey,System.Object> Firebase.Database.Internal.Core.Utilities.ImmutableTree`1::EmptyChildren
	ImmutableSortedMap_2_t94277708 * ___EmptyChildren_0;
	// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<T> Firebase.Database.Internal.Core.Utilities.ImmutableTree`1::Empty
	ImmutableTree_1_t368550071 * ___Empty_1;

public:
	inline static int32_t get_offset_of_EmptyChildren_0() { return static_cast<int32_t>(offsetof(ImmutableTree_1_t368550071_StaticFields, ___EmptyChildren_0)); }
	inline ImmutableSortedMap_2_t94277708 * get_EmptyChildren_0() const { return ___EmptyChildren_0; }
	inline ImmutableSortedMap_2_t94277708 ** get_address_of_EmptyChildren_0() { return &___EmptyChildren_0; }
	inline void set_EmptyChildren_0(ImmutableSortedMap_2_t94277708 * value)
	{
		___EmptyChildren_0 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyChildren_0, value);
	}

	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(ImmutableTree_1_t368550071_StaticFields, ___Empty_1)); }
	inline ImmutableTree_1_t368550071 * get_Empty_1() const { return ___Empty_1; }
	inline ImmutableTree_1_t368550071 ** get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(ImmutableTree_1_t368550071 * value)
	{
		___Empty_1 = value;
		Il2CppCodeGenWriteBarrier(&___Empty_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
