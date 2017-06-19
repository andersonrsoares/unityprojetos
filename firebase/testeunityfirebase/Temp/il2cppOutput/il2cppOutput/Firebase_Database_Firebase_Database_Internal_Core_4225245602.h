#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Core.SparseSnapshotTree
struct SparseSnapshotTree_t504080338;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.ServerValues/SparseSnapshotTreeVisitor40
struct  SparseSnapshotTreeVisitor40_t4225245602  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.SparseSnapshotTree Firebase.Database.Internal.Core.ServerValues/SparseSnapshotTreeVisitor40::_resolvedTree
	SparseSnapshotTree_t504080338 * ____resolvedTree_0;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Firebase.Database.Internal.Core.ServerValues/SparseSnapshotTreeVisitor40::_serverValues
	Il2CppObject* ____serverValues_1;

public:
	inline static int32_t get_offset_of__resolvedTree_0() { return static_cast<int32_t>(offsetof(SparseSnapshotTreeVisitor40_t4225245602, ____resolvedTree_0)); }
	inline SparseSnapshotTree_t504080338 * get__resolvedTree_0() const { return ____resolvedTree_0; }
	inline SparseSnapshotTree_t504080338 ** get_address_of__resolvedTree_0() { return &____resolvedTree_0; }
	inline void set__resolvedTree_0(SparseSnapshotTree_t504080338 * value)
	{
		____resolvedTree_0 = value;
		Il2CppCodeGenWriteBarrier(&____resolvedTree_0, value);
	}

	inline static int32_t get_offset_of__serverValues_1() { return static_cast<int32_t>(offsetof(SparseSnapshotTreeVisitor40_t4225245602, ____serverValues_1)); }
	inline Il2CppObject* get__serverValues_1() const { return ____serverValues_1; }
	inline Il2CppObject** get_address_of__serverValues_1() { return &____serverValues_1; }
	inline void set__serverValues_1(Il2CppObject* value)
	{
		____serverValues_1 = value;
		Il2CppCodeGenWriteBarrier(&____serverValues_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
