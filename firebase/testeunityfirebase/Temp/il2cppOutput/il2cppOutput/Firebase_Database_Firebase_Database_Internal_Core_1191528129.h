#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_Database_Firebase_Database_Internal_Core_3598067969.h"

// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Operation.Overwrite
struct  Overwrite_t1191528129  : public Operation_t3598067969
{
public:
	// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.Operation.Overwrite::_snapshot
	Node_t2640059010 * ____snapshot_3;

public:
	inline static int32_t get_offset_of__snapshot_3() { return static_cast<int32_t>(offsetof(Overwrite_t1191528129, ____snapshot_3)); }
	inline Node_t2640059010 * get__snapshot_3() const { return ____snapshot_3; }
	inline Node_t2640059010 ** get_address_of__snapshot_3() { return &____snapshot_3; }
	inline void set__snapshot_3(Node_t2640059010 * value)
	{
		____snapshot_3 = value;
		Il2CppCodeGenWriteBarrier(&____snapshot_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
