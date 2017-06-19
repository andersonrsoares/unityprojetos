#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_Database_Firebase_Database_Internal_Colle1517776026.h"

// System.Collections.Generic.IComparer`1<Firebase.Database.Internal.Snapshot.NamedNode>
struct IComparer_1_t3037316203;
// Firebase.Database.Internal.Snapshot.NamedNode[]
struct NamedNodeU5BU5D_t1915315620;
// System.Object[]
struct ObjectU5BU5D_t3614634134;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Collection.ArraySortedMap`2<Firebase.Database.Internal.Snapshot.NamedNode,System.Object>
struct  ArraySortedMap_2_t1698747799  : public ImmutableSortedMap_2_t1517776026
{
public:
	// System.Collections.Generic.IComparer`1<TK> Firebase.Database.Internal.Collection.ArraySortedMap`2::_comparator
	Il2CppObject* ____comparator_0;
	// TK[] Firebase.Database.Internal.Collection.ArraySortedMap`2::_keys
	NamedNodeU5BU5D_t1915315620* ____keys_1;
	// TV[] Firebase.Database.Internal.Collection.ArraySortedMap`2::_values
	ObjectU5BU5D_t3614634134* ____values_2;

public:
	inline static int32_t get_offset_of__comparator_0() { return static_cast<int32_t>(offsetof(ArraySortedMap_2_t1698747799, ____comparator_0)); }
	inline Il2CppObject* get__comparator_0() const { return ____comparator_0; }
	inline Il2CppObject** get_address_of__comparator_0() { return &____comparator_0; }
	inline void set__comparator_0(Il2CppObject* value)
	{
		____comparator_0 = value;
		Il2CppCodeGenWriteBarrier(&____comparator_0, value);
	}

	inline static int32_t get_offset_of__keys_1() { return static_cast<int32_t>(offsetof(ArraySortedMap_2_t1698747799, ____keys_1)); }
	inline NamedNodeU5BU5D_t1915315620* get__keys_1() const { return ____keys_1; }
	inline NamedNodeU5BU5D_t1915315620** get_address_of__keys_1() { return &____keys_1; }
	inline void set__keys_1(NamedNodeU5BU5D_t1915315620* value)
	{
		____keys_1 = value;
		Il2CppCodeGenWriteBarrier(&____keys_1, value);
	}

	inline static int32_t get_offset_of__values_2() { return static_cast<int32_t>(offsetof(ArraySortedMap_2_t1698747799, ____values_2)); }
	inline ObjectU5BU5D_t3614634134* get__values_2() const { return ____values_2; }
	inline ObjectU5BU5D_t3614634134** get_address_of__values_2() { return &____values_2; }
	inline void set__values_2(ObjectU5BU5D_t3614634134* value)
	{
		____values_2 = value;
		Il2CppCodeGenWriteBarrier(&____values_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
