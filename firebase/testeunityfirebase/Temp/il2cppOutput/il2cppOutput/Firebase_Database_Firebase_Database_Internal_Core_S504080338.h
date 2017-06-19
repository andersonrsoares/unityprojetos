#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Core.SparseSnapshotTree>
struct IDictionary_2_t3562341647;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.SparseSnapshotTree
struct  SparseSnapshotTree_t504080338  : public Il2CppObject
{
public:
	// System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Core.SparseSnapshotTree> Firebase.Database.Internal.Core.SparseSnapshotTree::_children
	Il2CppObject* ____children_0;
	// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.SparseSnapshotTree::_value
	Node_t2640059010 * ____value_1;

public:
	inline static int32_t get_offset_of__children_0() { return static_cast<int32_t>(offsetof(SparseSnapshotTree_t504080338, ____children_0)); }
	inline Il2CppObject* get__children_0() const { return ____children_0; }
	inline Il2CppObject** get_address_of__children_0() { return &____children_0; }
	inline void set__children_0(Il2CppObject* value)
	{
		____children_0 = value;
		Il2CppCodeGenWriteBarrier(&____children_0, value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(SparseSnapshotTree_t504080338, ____value_1)); }
	inline Node_t2640059010 * get__value_1() const { return ____value_1; }
	inline Node_t2640059010 ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(Node_t2640059010 * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier(&____value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
