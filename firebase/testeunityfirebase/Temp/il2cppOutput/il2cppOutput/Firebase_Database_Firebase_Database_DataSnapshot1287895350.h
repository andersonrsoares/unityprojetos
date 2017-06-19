#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Snapshot.IndexedNode
struct IndexedNode_t376444473;
// Firebase.Database.DatabaseReference
struct DatabaseReference_t1167676104;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.DataSnapshot
struct  DataSnapshot_t1287895350  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Snapshot.IndexedNode Firebase.Database.DataSnapshot::_node
	IndexedNode_t376444473 * ____node_0;
	// Firebase.Database.DatabaseReference Firebase.Database.DataSnapshot::<Reference>k__BackingField
	DatabaseReference_t1167676104 * ___U3CReferenceU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of__node_0() { return static_cast<int32_t>(offsetof(DataSnapshot_t1287895350, ____node_0)); }
	inline IndexedNode_t376444473 * get__node_0() const { return ____node_0; }
	inline IndexedNode_t376444473 ** get_address_of__node_0() { return &____node_0; }
	inline void set__node_0(IndexedNode_t376444473 * value)
	{
		____node_0 = value;
		Il2CppCodeGenWriteBarrier(&____node_0, value);
	}

	inline static int32_t get_offset_of_U3CReferenceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DataSnapshot_t1287895350, ___U3CReferenceU3Ek__BackingField_1)); }
	inline DatabaseReference_t1167676104 * get_U3CReferenceU3Ek__BackingField_1() const { return ___U3CReferenceU3Ek__BackingField_1; }
	inline DatabaseReference_t1167676104 ** get_address_of_U3CReferenceU3Ek__BackingField_1() { return &___U3CReferenceU3Ek__BackingField_1; }
	inline void set_U3CReferenceU3Ek__BackingField_1(DatabaseReference_t1167676104 * value)
	{
		___U3CReferenceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CReferenceU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
