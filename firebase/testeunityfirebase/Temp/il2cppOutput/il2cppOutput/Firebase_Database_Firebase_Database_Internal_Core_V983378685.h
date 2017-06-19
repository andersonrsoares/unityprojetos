#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Core.View.CacheNode
struct CacheNode_t994563358;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.View.ViewCache
struct  ViewCache_t983378685  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.View.CacheNode Firebase.Database.Internal.Core.View.ViewCache::_eventSnap
	CacheNode_t994563358 * ____eventSnap_0;
	// Firebase.Database.Internal.Core.View.CacheNode Firebase.Database.Internal.Core.View.ViewCache::_serverSnap
	CacheNode_t994563358 * ____serverSnap_1;

public:
	inline static int32_t get_offset_of__eventSnap_0() { return static_cast<int32_t>(offsetof(ViewCache_t983378685, ____eventSnap_0)); }
	inline CacheNode_t994563358 * get__eventSnap_0() const { return ____eventSnap_0; }
	inline CacheNode_t994563358 ** get_address_of__eventSnap_0() { return &____eventSnap_0; }
	inline void set__eventSnap_0(CacheNode_t994563358 * value)
	{
		____eventSnap_0 = value;
		Il2CppCodeGenWriteBarrier(&____eventSnap_0, value);
	}

	inline static int32_t get_offset_of__serverSnap_1() { return static_cast<int32_t>(offsetof(ViewCache_t983378685, ____serverSnap_1)); }
	inline CacheNode_t994563358 * get__serverSnap_1() const { return ____serverSnap_1; }
	inline CacheNode_t994563358 ** get_address_of__serverSnap_1() { return &____serverSnap_1; }
	inline void set__serverSnap_1(CacheNode_t994563358 * value)
	{
		____serverSnap_1 = value;
		Il2CppCodeGenWriteBarrier(&____serverSnap_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
