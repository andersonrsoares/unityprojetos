#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Snapshot.CompoundHash/SimpleSizeSplitStrategy
struct  SimpleSizeSplitStrategy_t202416347  : public Il2CppObject
{
public:
	// System.Int64 Firebase.Database.Internal.Snapshot.CompoundHash/SimpleSizeSplitStrategy::_splitThreshold
	int64_t ____splitThreshold_0;

public:
	inline static int32_t get_offset_of__splitThreshold_0() { return static_cast<int32_t>(offsetof(SimpleSizeSplitStrategy_t202416347, ____splitThreshold_0)); }
	inline int64_t get__splitThreshold_0() const { return ____splitThreshold_0; }
	inline int64_t* get_address_of__splitThreshold_0() { return &____splitThreshold_0; }
	inline void set__splitThreshold_0(int64_t value)
	{
		____splitThreshold_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
