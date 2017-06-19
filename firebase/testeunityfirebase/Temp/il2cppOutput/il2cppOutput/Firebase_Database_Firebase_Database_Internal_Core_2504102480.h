#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.SnapshotHolder
struct  SnapshotHolder_t2504102480  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.SnapshotHolder::_rootNode
	Node_t2640059010 * ____rootNode_0;

public:
	inline static int32_t get_offset_of__rootNode_0() { return static_cast<int32_t>(offsetof(SnapshotHolder_t2504102480, ____rootNode_0)); }
	inline Node_t2640059010 * get__rootNode_0() const { return ____rootNode_0; }
	inline Node_t2640059010 ** get_address_of__rootNode_0() { return &____rootNode_0; }
	inline void set__rootNode_0(Node_t2640059010 * value)
	{
		____rootNode_0 = value;
		Il2CppCodeGenWriteBarrier(&____rootNode_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
