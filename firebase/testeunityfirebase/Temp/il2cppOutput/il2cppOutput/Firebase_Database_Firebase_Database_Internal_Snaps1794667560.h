#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_Database_Firebase_Database_Internal_Snaps3399591604.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Snapshot.LongNode
struct  LongNode_t1794667560  : public LeafNode_t3399591604
{
public:
	// System.Int64 Firebase.Database.Internal.Snapshot.LongNode::_value
	int64_t ____value_3;

public:
	inline static int32_t get_offset_of__value_3() { return static_cast<int32_t>(offsetof(LongNode_t1794667560, ____value_3)); }
	inline int64_t get__value_3() const { return ____value_3; }
	inline int64_t* get_address_of__value_3() { return &____value_3; }
	inline void set__value_3(int64_t value)
	{
		____value_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
