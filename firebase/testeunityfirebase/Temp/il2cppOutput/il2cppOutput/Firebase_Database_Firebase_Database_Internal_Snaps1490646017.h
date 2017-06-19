#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"

// System.Collections.Generic.IComparer`1<Firebase.Database.Internal.Snapshot.ChildKey>
struct IComparer_1_t3447232801;
// Firebase.Database.Internal.Collection.ImmutableSortedMap`2<Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node>
struct ImmutableSortedMap_2_t44887423;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Snapshot.ChildrenNode
struct  ChildrenNode_t1490646017  : public Node_t2640059010
{
public:
	// Firebase.Database.Internal.Collection.ImmutableSortedMap`2<Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node> Firebase.Database.Internal.Snapshot.ChildrenNode::_children
	ImmutableSortedMap_2_t44887423 * ____children_2;
	// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.ChildrenNode::_priority
	Node_t2640059010 * ____priority_3;
	// System.String Firebase.Database.Internal.Snapshot.ChildrenNode::_lazyHash
	String_t* ____lazyHash_4;

public:
	inline static int32_t get_offset_of__children_2() { return static_cast<int32_t>(offsetof(ChildrenNode_t1490646017, ____children_2)); }
	inline ImmutableSortedMap_2_t44887423 * get__children_2() const { return ____children_2; }
	inline ImmutableSortedMap_2_t44887423 ** get_address_of__children_2() { return &____children_2; }
	inline void set__children_2(ImmutableSortedMap_2_t44887423 * value)
	{
		____children_2 = value;
		Il2CppCodeGenWriteBarrier(&____children_2, value);
	}

	inline static int32_t get_offset_of__priority_3() { return static_cast<int32_t>(offsetof(ChildrenNode_t1490646017, ____priority_3)); }
	inline Node_t2640059010 * get__priority_3() const { return ____priority_3; }
	inline Node_t2640059010 ** get_address_of__priority_3() { return &____priority_3; }
	inline void set__priority_3(Node_t2640059010 * value)
	{
		____priority_3 = value;
		Il2CppCodeGenWriteBarrier(&____priority_3, value);
	}

	inline static int32_t get_offset_of__lazyHash_4() { return static_cast<int32_t>(offsetof(ChildrenNode_t1490646017, ____lazyHash_4)); }
	inline String_t* get__lazyHash_4() const { return ____lazyHash_4; }
	inline String_t** get_address_of__lazyHash_4() { return &____lazyHash_4; }
	inline void set__lazyHash_4(String_t* value)
	{
		____lazyHash_4 = value;
		Il2CppCodeGenWriteBarrier(&____lazyHash_4, value);
	}
};

struct ChildrenNode_t1490646017_StaticFields
{
public:
	// System.Collections.Generic.IComparer`1<Firebase.Database.Internal.Snapshot.ChildKey> Firebase.Database.Internal.Snapshot.ChildrenNode::NameOnlyComparator
	Il2CppObject* ___NameOnlyComparator_1;

public:
	inline static int32_t get_offset_of_NameOnlyComparator_1() { return static_cast<int32_t>(offsetof(ChildrenNode_t1490646017_StaticFields, ___NameOnlyComparator_1)); }
	inline Il2CppObject* get_NameOnlyComparator_1() const { return ___NameOnlyComparator_1; }
	inline Il2CppObject** get_address_of_NameOnlyComparator_1() { return &___NameOnlyComparator_1; }
	inline void set_NameOnlyComparator_1(Il2CppObject* value)
	{
		___NameOnlyComparator_1 = value;
		Il2CppCodeGenWriteBarrier(&___NameOnlyComparator_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
