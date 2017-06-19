#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Snapshot.ChildrenNode
struct ChildrenNode_t1490646017;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Snapshot.Node
struct  Node_t2640059010  : public Il2CppObject
{
public:

public:
};

struct Node_t2640059010_StaticFields
{
public:
	// Firebase.Database.Internal.Snapshot.ChildrenNode Firebase.Database.Internal.Snapshot.Node::MaxNode
	ChildrenNode_t1490646017 * ___MaxNode_0;

public:
	inline static int32_t get_offset_of_MaxNode_0() { return static_cast<int32_t>(offsetof(Node_t2640059010_StaticFields, ___MaxNode_0)); }
	inline ChildrenNode_t1490646017 * get_MaxNode_0() const { return ___MaxNode_0; }
	inline ChildrenNode_t1490646017 ** get_address_of_MaxNode_0() { return &___MaxNode_0; }
	inline void set_MaxNode_0(ChildrenNode_t1490646017 * value)
	{
		___MaxNode_0 = value;
		Il2CppCodeGenWriteBarrier(&___MaxNode_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
