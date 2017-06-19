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
// Firebase.Database.Internal.Core.View.ViewCache
struct ViewCache_t983378685;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.View.ViewProcessor/ProcessorResult
struct  ProcessorResult_t3891512348  : public Il2CppObject
{
public:
	// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Change> Firebase.Database.Internal.Core.View.ViewProcessor/ProcessorResult::Changes
	Il2CppObject* ___Changes_0;
	// Firebase.Database.Internal.Core.View.ViewCache Firebase.Database.Internal.Core.View.ViewProcessor/ProcessorResult::ViewCache
	ViewCache_t983378685 * ___ViewCache_1;

public:
	inline static int32_t get_offset_of_Changes_0() { return static_cast<int32_t>(offsetof(ProcessorResult_t3891512348, ___Changes_0)); }
	inline Il2CppObject* get_Changes_0() const { return ___Changes_0; }
	inline Il2CppObject** get_address_of_Changes_0() { return &___Changes_0; }
	inline void set_Changes_0(Il2CppObject* value)
	{
		___Changes_0 = value;
		Il2CppCodeGenWriteBarrier(&___Changes_0, value);
	}

	inline static int32_t get_offset_of_ViewCache_1() { return static_cast<int32_t>(offsetof(ProcessorResult_t3891512348, ___ViewCache_1)); }
	inline ViewCache_t983378685 * get_ViewCache_1() const { return ___ViewCache_1; }
	inline ViewCache_t983378685 ** get_address_of_ViewCache_1() { return &___ViewCache_1; }
	inline void set_ViewCache_1(ViewCache_t983378685 * value)
	{
		___ViewCache_1 = value;
		Il2CppCodeGenWriteBarrier(&___ViewCache_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
