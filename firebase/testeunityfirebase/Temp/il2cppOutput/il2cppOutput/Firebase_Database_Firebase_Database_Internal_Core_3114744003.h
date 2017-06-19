#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// Firebase.Database.Internal.Core.Utilities.TreeNode`1<System.Object>
struct TreeNode_1_t3829898795;
// Firebase.Database.Internal.Core.Utilities.Tree`1<System.Object>
struct Tree_1_t3114744003;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Utilities.Tree`1<System.Object>
struct  Tree_1_t3114744003  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Core.Utilities.Tree`1::_name
	ChildKey_t1197802383 * ____name_0;
	// Firebase.Database.Internal.Core.Utilities.TreeNode`1<T> Firebase.Database.Internal.Core.Utilities.Tree`1::_node
	TreeNode_1_t3829898795 * ____node_1;
	// Firebase.Database.Internal.Core.Utilities.Tree`1<T> Firebase.Database.Internal.Core.Utilities.Tree`1::_parent
	Tree_1_t3114744003 * ____parent_2;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(Tree_1_t3114744003, ____name_0)); }
	inline ChildKey_t1197802383 * get__name_0() const { return ____name_0; }
	inline ChildKey_t1197802383 ** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(ChildKey_t1197802383 * value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier(&____name_0, value);
	}

	inline static int32_t get_offset_of__node_1() { return static_cast<int32_t>(offsetof(Tree_1_t3114744003, ____node_1)); }
	inline TreeNode_1_t3829898795 * get__node_1() const { return ____node_1; }
	inline TreeNode_1_t3829898795 ** get_address_of__node_1() { return &____node_1; }
	inline void set__node_1(TreeNode_1_t3829898795 * value)
	{
		____node_1 = value;
		Il2CppCodeGenWriteBarrier(&____node_1, value);
	}

	inline static int32_t get_offset_of__parent_2() { return static_cast<int32_t>(offsetof(Tree_1_t3114744003, ____parent_2)); }
	inline Tree_1_t3114744003 * get__parent_2() const { return ____parent_2; }
	inline Tree_1_t3114744003 ** get_address_of__parent_2() { return &____parent_2; }
	inline void set__parent_2(Tree_1_t3114744003 * value)
	{
		____parent_2 = value;
		Il2CppCodeGenWriteBarrier(&____parent_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
