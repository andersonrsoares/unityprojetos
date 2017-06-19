#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_Database_Firebase_Database_Internal_Snaps2425062456.h"

// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Snapshot.PathIndex
struct  PathIndex_t1571943617  : public Index_t2425062456
{
public:
	// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Snapshot.PathIndex::_indexPath
	Path_t2568473163 * ____indexPath_0;

public:
	inline static int32_t get_offset_of__indexPath_0() { return static_cast<int32_t>(offsetof(PathIndex_t1571943617, ____indexPath_0)); }
	inline Path_t2568473163 * get__indexPath_0() const { return ____indexPath_0; }
	inline Path_t2568473163 ** get_address_of__indexPath_0() { return &____indexPath_0; }
	inline void set__indexPath_0(Path_t2568473163 * value)
	{
		____indexPath_0 = value;
		Il2CppCodeGenWriteBarrier(&____indexPath_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
