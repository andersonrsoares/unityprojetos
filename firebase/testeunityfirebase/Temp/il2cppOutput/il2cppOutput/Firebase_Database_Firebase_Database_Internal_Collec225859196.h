#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_Database_Firebase_Database_Internal_Collect44887423.h"

// System.Collections.Generic.IComparer`1<Firebase.Database.Internal.Snapshot.ChildKey>
struct IComparer_1_t3447232801;
// Firebase.Database.Internal.Snapshot.ChildKey[]
struct ChildKeyU5BU5D_t491817302;
// Firebase.Database.Internal.Snapshot.Node[]
struct NodeU5BU5D_t25489719;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Collection.ArraySortedMap`2<Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node>
struct  ArraySortedMap_2_t225859196  : public ImmutableSortedMap_2_t44887423
{
public:
	// System.Collections.Generic.IComparer`1<TK> Firebase.Database.Internal.Collection.ArraySortedMap`2::_comparator
	Il2CppObject* ____comparator_0;
	// TK[] Firebase.Database.Internal.Collection.ArraySortedMap`2::_keys
	ChildKeyU5BU5D_t491817302* ____keys_1;
	// TV[] Firebase.Database.Internal.Collection.ArraySortedMap`2::_values
	NodeU5BU5D_t25489719* ____values_2;

public:
	inline static int32_t get_offset_of__comparator_0() { return static_cast<int32_t>(offsetof(ArraySortedMap_2_t225859196, ____comparator_0)); }
	inline Il2CppObject* get__comparator_0() const { return ____comparator_0; }
	inline Il2CppObject** get_address_of__comparator_0() { return &____comparator_0; }
	inline void set__comparator_0(Il2CppObject* value)
	{
		____comparator_0 = value;
		Il2CppCodeGenWriteBarrier(&____comparator_0, value);
	}

	inline static int32_t get_offset_of__keys_1() { return static_cast<int32_t>(offsetof(ArraySortedMap_2_t225859196, ____keys_1)); }
	inline ChildKeyU5BU5D_t491817302* get__keys_1() const { return ____keys_1; }
	inline ChildKeyU5BU5D_t491817302** get_address_of__keys_1() { return &____keys_1; }
	inline void set__keys_1(ChildKeyU5BU5D_t491817302* value)
	{
		____keys_1 = value;
		Il2CppCodeGenWriteBarrier(&____keys_1, value);
	}

	inline static int32_t get_offset_of__values_2() { return static_cast<int32_t>(offsetof(ArraySortedMap_2_t225859196, ____values_2)); }
	inline NodeU5BU5D_t25489719* get__values_2() const { return ____values_2; }
	inline NodeU5BU5D_t25489719** get_address_of__values_2() { return &____values_2; }
	inline void set__values_2(NodeU5BU5D_t25489719* value)
	{
		____values_2 = value;
		Il2CppCodeGenWriteBarrier(&____values_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
