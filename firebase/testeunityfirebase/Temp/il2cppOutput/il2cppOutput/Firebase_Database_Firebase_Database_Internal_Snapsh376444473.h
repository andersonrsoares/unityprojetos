#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Collection.ImmutableSortedSet`1<Firebase.Database.Internal.Snapshot.NamedNode>
struct ImmutableSortedSet_1_t447195634;
// Firebase.Database.Internal.Snapshot.Index
struct Index_t2425062456;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Snapshot.IndexedNode
struct  IndexedNode_t376444473  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Snapshot.Index Firebase.Database.Internal.Snapshot.IndexedNode::_index
	Index_t2425062456 * ____index_1;
	// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.IndexedNode::_node
	Node_t2640059010 * ____node_2;
	// Firebase.Database.Internal.Collection.ImmutableSortedSet`1<Firebase.Database.Internal.Snapshot.NamedNode> Firebase.Database.Internal.Snapshot.IndexedNode::_indexed
	ImmutableSortedSet_1_t447195634 * ____indexed_3;

public:
	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(IndexedNode_t376444473, ____index_1)); }
	inline Index_t2425062456 * get__index_1() const { return ____index_1; }
	inline Index_t2425062456 ** get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(Index_t2425062456 * value)
	{
		____index_1 = value;
		Il2CppCodeGenWriteBarrier(&____index_1, value);
	}

	inline static int32_t get_offset_of__node_2() { return static_cast<int32_t>(offsetof(IndexedNode_t376444473, ____node_2)); }
	inline Node_t2640059010 * get__node_2() const { return ____node_2; }
	inline Node_t2640059010 ** get_address_of__node_2() { return &____node_2; }
	inline void set__node_2(Node_t2640059010 * value)
	{
		____node_2 = value;
		Il2CppCodeGenWriteBarrier(&____node_2, value);
	}

	inline static int32_t get_offset_of__indexed_3() { return static_cast<int32_t>(offsetof(IndexedNode_t376444473, ____indexed_3)); }
	inline ImmutableSortedSet_1_t447195634 * get__indexed_3() const { return ____indexed_3; }
	inline ImmutableSortedSet_1_t447195634 ** get_address_of__indexed_3() { return &____indexed_3; }
	inline void set__indexed_3(ImmutableSortedSet_1_t447195634 * value)
	{
		____indexed_3 = value;
		Il2CppCodeGenWriteBarrier(&____indexed_3, value);
	}
};

struct IndexedNode_t376444473_StaticFields
{
public:
	// Firebase.Database.Internal.Collection.ImmutableSortedSet`1<Firebase.Database.Internal.Snapshot.NamedNode> Firebase.Database.Internal.Snapshot.IndexedNode::FallbackIndex
	ImmutableSortedSet_1_t447195634 * ___FallbackIndex_0;

public:
	inline static int32_t get_offset_of_FallbackIndex_0() { return static_cast<int32_t>(offsetof(IndexedNode_t376444473_StaticFields, ___FallbackIndex_0)); }
	inline ImmutableSortedSet_1_t447195634 * get_FallbackIndex_0() const { return ___FallbackIndex_0; }
	inline ImmutableSortedSet_1_t447195634 ** get_address_of_FallbackIndex_0() { return &___FallbackIndex_0; }
	inline void set_FallbackIndex_0(ImmutableSortedSet_1_t447195634 * value)
	{
		___FallbackIndex_0 = value;
		Il2CppCodeGenWriteBarrier(&___FallbackIndex_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
