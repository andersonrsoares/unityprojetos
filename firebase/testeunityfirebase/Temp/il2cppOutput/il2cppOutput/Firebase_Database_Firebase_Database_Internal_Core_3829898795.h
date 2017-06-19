#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<Firebase.Database.Internal.Snapshot.ChildKey,System.Object>
struct Dictionary_2_t3453659887;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Utilities.TreeNode`1<System.Object>
struct  TreeNode_1_t3829898795  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<Firebase.Database.Internal.Snapshot.ChildKey,System.Object> Firebase.Database.Internal.Core.Utilities.TreeNode`1::Children
	Dictionary_2_t3453659887 * ___Children_0;
	// T Firebase.Database.Internal.Core.Utilities.TreeNode`1::Value
	Il2CppObject * ___Value_1;

public:
	inline static int32_t get_offset_of_Children_0() { return static_cast<int32_t>(offsetof(TreeNode_1_t3829898795, ___Children_0)); }
	inline Dictionary_2_t3453659887 * get_Children_0() const { return ___Children_0; }
	inline Dictionary_2_t3453659887 ** get_address_of_Children_0() { return &___Children_0; }
	inline void set_Children_0(Dictionary_2_t3453659887 * value)
	{
		___Children_0 = value;
		Il2CppCodeGenWriteBarrier(&___Children_0, value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(TreeNode_1_t3829898795, ___Value_1)); }
	inline Il2CppObject * get_Value_1() const { return ___Value_1; }
	inline Il2CppObject ** get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(Il2CppObject * value)
	{
		___Value_1 = value;
		Il2CppCodeGenWriteBarrier(&___Value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
