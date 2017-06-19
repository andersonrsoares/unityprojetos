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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.CompoundWrite/TreeVisitor88
struct  TreeVisitor88_t1326285479  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.CompoundWrite/TreeVisitor88::_path
	Path_t2568473163 * ____path_0;

public:
	inline static int32_t get_offset_of__path_0() { return static_cast<int32_t>(offsetof(TreeVisitor88_t1326285479, ____path_0)); }
	inline Path_t2568473163 * get__path_0() const { return ____path_0; }
	inline Path_t2568473163 ** get_address_of__path_0() { return &____path_0; }
	inline void set__path_0(Path_t2568473163 * value)
	{
		____path_0 = value;
		Il2CppCodeGenWriteBarrier(&____path_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
