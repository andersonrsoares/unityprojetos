#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_Database_Firebase_Database_Internal_Snapsh394951299.h"

// Firebase.Database.Internal.Core.SnapshotHolder
struct SnapshotHolder_t2504102480;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.ServerValues/ChildVisitor71
struct  ChildVisitor71_t2343739264  : public ChildVisitor_t394951299
{
public:
	// Firebase.Database.Internal.Core.SnapshotHolder Firebase.Database.Internal.Core.ServerValues/ChildVisitor71::_holder
	SnapshotHolder_t2504102480 * ____holder_0;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Firebase.Database.Internal.Core.ServerValues/ChildVisitor71::_serverValues
	Il2CppObject* ____serverValues_1;

public:
	inline static int32_t get_offset_of__holder_0() { return static_cast<int32_t>(offsetof(ChildVisitor71_t2343739264, ____holder_0)); }
	inline SnapshotHolder_t2504102480 * get__holder_0() const { return ____holder_0; }
	inline SnapshotHolder_t2504102480 ** get_address_of__holder_0() { return &____holder_0; }
	inline void set__holder_0(SnapshotHolder_t2504102480 * value)
	{
		____holder_0 = value;
		Il2CppCodeGenWriteBarrier(&____holder_0, value);
	}

	inline static int32_t get_offset_of__serverValues_1() { return static_cast<int32_t>(offsetof(ChildVisitor71_t2343739264, ____serverValues_1)); }
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
