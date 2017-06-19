#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_Database_Firebase_Database_Internal_Snaps3399591604.h"

// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Snapshot.DeferredValueNode
struct  DeferredValueNode_t3730276818  : public LeafNode_t3399591604
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Firebase.Database.Internal.Snapshot.DeferredValueNode::_value
	Il2CppObject* ____value_3;

public:
	inline static int32_t get_offset_of__value_3() { return static_cast<int32_t>(offsetof(DeferredValueNode_t3730276818, ____value_3)); }
	inline Il2CppObject* get__value_3() const { return ____value_3; }
	inline Il2CppObject** get_address_of__value_3() { return &____value_3; }
	inline void set__value_3(Il2CppObject* value)
	{
		____value_3 = value;
		Il2CppCodeGenWriteBarrier(&____value_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
