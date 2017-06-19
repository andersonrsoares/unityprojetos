#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Change>
struct IList_1_t1180527849;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.DataEvent>
struct IList_1_t3871132203;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.View.View/OperationResult
struct  OperationResult_t335720575  : public Il2CppObject
{
public:
	// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Change> Firebase.Database.Internal.Core.View.View/OperationResult::Changes
	Il2CppObject* ___Changes_0;
	// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.DataEvent> Firebase.Database.Internal.Core.View.View/OperationResult::Events
	Il2CppObject* ___Events_1;

public:
	inline static int32_t get_offset_of_Changes_0() { return static_cast<int32_t>(offsetof(OperationResult_t335720575, ___Changes_0)); }
	inline Il2CppObject* get_Changes_0() const { return ___Changes_0; }
	inline Il2CppObject** get_address_of_Changes_0() { return &___Changes_0; }
	inline void set_Changes_0(Il2CppObject* value)
	{
		___Changes_0 = value;
		Il2CppCodeGenWriteBarrier(&___Changes_0, value);
	}

	inline static int32_t get_offset_of_Events_1() { return static_cast<int32_t>(offsetof(OperationResult_t335720575, ___Events_1)); }
	inline Il2CppObject* get_Events_1() const { return ___Events_1; }
	inline Il2CppObject** get_address_of_Events_1() { return &___Events_1; }
	inline void set_Events_1(Il2CppObject* value)
	{
		___Events_1 = value;
		Il2CppCodeGenWriteBarrier(&___Events_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
