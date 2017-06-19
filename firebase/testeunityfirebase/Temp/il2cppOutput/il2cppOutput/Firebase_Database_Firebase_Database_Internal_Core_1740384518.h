#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Core.View.Change>
struct IDictionary_2_t3697848557;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.View.Filter.ChildChangeAccumulator
struct  ChildChangeAccumulator_t1740384518  : public Il2CppObject
{
public:
	// System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Core.View.Change> Firebase.Database.Internal.Core.View.Filter.ChildChangeAccumulator::_changeMap
	Il2CppObject* ____changeMap_0;

public:
	inline static int32_t get_offset_of__changeMap_0() { return static_cast<int32_t>(offsetof(ChildChangeAccumulator_t1740384518, ____changeMap_0)); }
	inline Il2CppObject* get__changeMap_0() const { return ____changeMap_0; }
	inline Il2CppObject** get_address_of__changeMap_0() { return &____changeMap_0; }
	inline void set__changeMap_0(Il2CppObject* value)
	{
		____changeMap_0 = value;
		Il2CppCodeGenWriteBarrier(&____changeMap_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
