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
// Firebase.Database.Internal.Core.WriteTree
struct WriteTree_t736318673;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.WriteTreeRef
struct  WriteTreeRef_t351426802  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.WriteTreeRef::_treePath
	Path_t2568473163 * ____treePath_0;
	// Firebase.Database.Internal.Core.WriteTree Firebase.Database.Internal.Core.WriteTreeRef::_writeTree
	WriteTree_t736318673 * ____writeTree_1;

public:
	inline static int32_t get_offset_of__treePath_0() { return static_cast<int32_t>(offsetof(WriteTreeRef_t351426802, ____treePath_0)); }
	inline Path_t2568473163 * get__treePath_0() const { return ____treePath_0; }
	inline Path_t2568473163 ** get_address_of__treePath_0() { return &____treePath_0; }
	inline void set__treePath_0(Path_t2568473163 * value)
	{
		____treePath_0 = value;
		Il2CppCodeGenWriteBarrier(&____treePath_0, value);
	}

	inline static int32_t get_offset_of__writeTree_1() { return static_cast<int32_t>(offsetof(WriteTreeRef_t351426802, ____writeTree_1)); }
	inline WriteTree_t736318673 * get__writeTree_1() const { return ____writeTree_1; }
	inline WriteTree_t736318673 ** get_address_of__writeTree_1() { return &____writeTree_1; }
	inline void set__writeTree_1(WriteTree_t736318673 * value)
	{
		____writeTree_1 = value;
		Il2CppCodeGenWriteBarrier(&____writeTree_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
