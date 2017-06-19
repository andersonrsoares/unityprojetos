#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Core.SparseSnapshotTree/ISparseSnapshotTreeVisitor
struct ISparseSnapshotTreeVisitor_t690780912;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.SparseSnapshotTree/SparseSnapshotChildVisitor107
struct  SparseSnapshotChildVisitor107_t150939507  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.SparseSnapshotTree/SparseSnapshotChildVisitor107::_prefixPath
	Path_t2568473163 * ____prefixPath_0;
	// Firebase.Database.Internal.Core.SparseSnapshotTree/ISparseSnapshotTreeVisitor Firebase.Database.Internal.Core.SparseSnapshotTree/SparseSnapshotChildVisitor107::_visitor
	Il2CppObject * ____visitor_1;

public:
	inline static int32_t get_offset_of__prefixPath_0() { return static_cast<int32_t>(offsetof(SparseSnapshotChildVisitor107_t150939507, ____prefixPath_0)); }
	inline Path_t2568473163 * get__prefixPath_0() const { return ____prefixPath_0; }
	inline Path_t2568473163 ** get_address_of__prefixPath_0() { return &____prefixPath_0; }
	inline void set__prefixPath_0(Path_t2568473163 * value)
	{
		____prefixPath_0 = value;
		Il2CppCodeGenWriteBarrier(&____prefixPath_0, value);
	}

	inline static int32_t get_offset_of__visitor_1() { return static_cast<int32_t>(offsetof(SparseSnapshotChildVisitor107_t150939507, ____visitor_1)); }
	inline Il2CppObject * get__visitor_1() const { return ____visitor_1; }
	inline Il2CppObject ** get_address_of__visitor_1() { return &____visitor_1; }
	inline void set__visitor_1(Il2CppObject * value)
	{
		____visitor_1 = value;
		Il2CppCodeGenWriteBarrier(&____visitor_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
