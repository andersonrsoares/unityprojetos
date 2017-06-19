#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Core.SnapshotHolder
struct SnapshotHolder_t2504102480;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.MutableData
struct  MutableData_t1171022152  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.SnapshotHolder Firebase.Database.MutableData::_holder
	SnapshotHolder_t2504102480 * ____holder_0;
	// Firebase.Database.Internal.Core.Path Firebase.Database.MutableData::_prefixPath
	Path_t2568473163 * ____prefixPath_1;

public:
	inline static int32_t get_offset_of__holder_0() { return static_cast<int32_t>(offsetof(MutableData_t1171022152, ____holder_0)); }
	inline SnapshotHolder_t2504102480 * get__holder_0() const { return ____holder_0; }
	inline SnapshotHolder_t2504102480 ** get_address_of__holder_0() { return &____holder_0; }
	inline void set__holder_0(SnapshotHolder_t2504102480 * value)
	{
		____holder_0 = value;
		Il2CppCodeGenWriteBarrier(&____holder_0, value);
	}

	inline static int32_t get_offset_of__prefixPath_1() { return static_cast<int32_t>(offsetof(MutableData_t1171022152, ____prefixPath_1)); }
	inline Path_t2568473163 * get__prefixPath_1() const { return ____prefixPath_1; }
	inline Path_t2568473163 ** get_address_of__prefixPath_1() { return &____prefixPath_1; }
	inline void set__prefixPath_1(Path_t2568473163 * value)
	{
		____prefixPath_1 = value;
		Il2CppCodeGenWriteBarrier(&____prefixPath_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
