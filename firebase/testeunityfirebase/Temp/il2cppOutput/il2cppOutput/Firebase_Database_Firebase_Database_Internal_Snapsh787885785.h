#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Snapshot.NamedNode
struct NamedNode_t787885785;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Snapshot.NamedNode
struct  NamedNode_t787885785  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Snapshot.NamedNode::_name
	ChildKey_t1197802383 * ____name_2;
	// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.NamedNode::_node
	Node_t2640059010 * ____node_3;

public:
	inline static int32_t get_offset_of__name_2() { return static_cast<int32_t>(offsetof(NamedNode_t787885785, ____name_2)); }
	inline ChildKey_t1197802383 * get__name_2() const { return ____name_2; }
	inline ChildKey_t1197802383 ** get_address_of__name_2() { return &____name_2; }
	inline void set__name_2(ChildKey_t1197802383 * value)
	{
		____name_2 = value;
		Il2CppCodeGenWriteBarrier(&____name_2, value);
	}

	inline static int32_t get_offset_of__node_3() { return static_cast<int32_t>(offsetof(NamedNode_t787885785, ____node_3)); }
	inline Node_t2640059010 * get__node_3() const { return ____node_3; }
	inline Node_t2640059010 ** get_address_of__node_3() { return &____node_3; }
	inline void set__node_3(Node_t2640059010 * value)
	{
		____node_3 = value;
		Il2CppCodeGenWriteBarrier(&____node_3, value);
	}
};

struct NamedNode_t787885785_StaticFields
{
public:
	// Firebase.Database.Internal.Snapshot.NamedNode Firebase.Database.Internal.Snapshot.NamedNode::MinNode
	NamedNode_t787885785 * ___MinNode_0;
	// Firebase.Database.Internal.Snapshot.NamedNode Firebase.Database.Internal.Snapshot.NamedNode::MaxNode
	NamedNode_t787885785 * ___MaxNode_1;

public:
	inline static int32_t get_offset_of_MinNode_0() { return static_cast<int32_t>(offsetof(NamedNode_t787885785_StaticFields, ___MinNode_0)); }
	inline NamedNode_t787885785 * get_MinNode_0() const { return ___MinNode_0; }
	inline NamedNode_t787885785 ** get_address_of_MinNode_0() { return &___MinNode_0; }
	inline void set_MinNode_0(NamedNode_t787885785 * value)
	{
		___MinNode_0 = value;
		Il2CppCodeGenWriteBarrier(&___MinNode_0, value);
	}

	inline static int32_t get_offset_of_MaxNode_1() { return static_cast<int32_t>(offsetof(NamedNode_t787885785_StaticFields, ___MaxNode_1)); }
	inline NamedNode_t787885785 * get_MaxNode_1() const { return ___MaxNode_1; }
	inline NamedNode_t787885785 ** get_address_of_MaxNode_1() { return &___MaxNode_1; }
	inline void set_MaxNode_1(NamedNode_t787885785 * value)
	{
		___MaxNode_1 = value;
		Il2CppCodeGenWriteBarrier(&___MaxNode_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
