#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22634503427.h"

// Firebase.Database.Internal.Collection.ArraySortedMap`2<Firebase.Database.Internal.Snapshot.NamedNode,System.Object>
struct ArraySortedMap_2_t1698747799;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Collection.ArraySortedMap`2/Enumerator134<Firebase.Database.Internal.Snapshot.NamedNode,System.Object>
struct  Enumerator134_t4075203803  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Collection.ArraySortedMap`2<TK,TV> Firebase.Database.Internal.Collection.ArraySortedMap`2/Enumerator134::_enclosing
	ArraySortedMap_2_t1698747799 * ____enclosing_0;
	// System.Boolean Firebase.Database.Internal.Collection.ArraySortedMap`2/Enumerator134::_reverse
	bool ____reverse_1;
	// System.Int32 Firebase.Database.Internal.Collection.ArraySortedMap`2/Enumerator134::_currentPos
	int32_t ____currentPos_2;
	// System.Collections.Generic.KeyValuePair`2<TK,TV> Firebase.Database.Internal.Collection.ArraySortedMap`2/Enumerator134::<Current>k__BackingField
	KeyValuePair_2_t2634503427  ___U3CCurrentU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(Enumerator134_t4075203803, ____enclosing_0)); }
	inline ArraySortedMap_2_t1698747799 * get__enclosing_0() const { return ____enclosing_0; }
	inline ArraySortedMap_2_t1698747799 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(ArraySortedMap_2_t1698747799 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__reverse_1() { return static_cast<int32_t>(offsetof(Enumerator134_t4075203803, ____reverse_1)); }
	inline bool get__reverse_1() const { return ____reverse_1; }
	inline bool* get_address_of__reverse_1() { return &____reverse_1; }
	inline void set__reverse_1(bool value)
	{
		____reverse_1 = value;
	}

	inline static int32_t get_offset_of__currentPos_2() { return static_cast<int32_t>(offsetof(Enumerator134_t4075203803, ____currentPos_2)); }
	inline int32_t get__currentPos_2() const { return ____currentPos_2; }
	inline int32_t* get_address_of__currentPos_2() { return &____currentPos_2; }
	inline void set__currentPos_2(int32_t value)
	{
		____currentPos_2 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Enumerator134_t4075203803, ___U3CCurrentU3Ek__BackingField_3)); }
	inline KeyValuePair_2_t2634503427  get_U3CCurrentU3Ek__BackingField_3() const { return ___U3CCurrentU3Ek__BackingField_3; }
	inline KeyValuePair_2_t2634503427 * get_address_of_U3CCurrentU3Ek__BackingField_3() { return &___U3CCurrentU3Ek__BackingField_3; }
	inline void set_U3CCurrentU3Ek__BackingField_3(KeyValuePair_2_t2634503427  value)
	{
		___U3CCurrentU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
