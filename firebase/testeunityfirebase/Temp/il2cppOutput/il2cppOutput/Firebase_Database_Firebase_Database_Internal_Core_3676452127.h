#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Core.View.Filter.NodeFilter/ICompleteChildSource
struct ICompleteChildSource_t716019391;
// Firebase.Database.Internal.Core.View.Filter.NodeFilter
struct NodeFilter_t1410970950;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.View.ViewProcessor
struct  ViewProcessor_t3676452127  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.View.Filter.NodeFilter Firebase.Database.Internal.Core.View.ViewProcessor::_filter
	NodeFilter_t1410970950 * ____filter_1;

public:
	inline static int32_t get_offset_of__filter_1() { return static_cast<int32_t>(offsetof(ViewProcessor_t3676452127, ____filter_1)); }
	inline NodeFilter_t1410970950 * get__filter_1() const { return ____filter_1; }
	inline NodeFilter_t1410970950 ** get_address_of__filter_1() { return &____filter_1; }
	inline void set__filter_1(NodeFilter_t1410970950 * value)
	{
		____filter_1 = value;
		Il2CppCodeGenWriteBarrier(&____filter_1, value);
	}
};

struct ViewProcessor_t3676452127_StaticFields
{
public:
	// Firebase.Database.Internal.Core.View.Filter.NodeFilter/ICompleteChildSource Firebase.Database.Internal.Core.View.ViewProcessor::NoCompleteSource
	Il2CppObject * ___NoCompleteSource_0;

public:
	inline static int32_t get_offset_of_NoCompleteSource_0() { return static_cast<int32_t>(offsetof(ViewProcessor_t3676452127_StaticFields, ___NoCompleteSource_0)); }
	inline Il2CppObject * get_NoCompleteSource_0() const { return ___NoCompleteSource_0; }
	inline Il2CppObject ** get_address_of_NoCompleteSource_0() { return &___NoCompleteSource_0; }
	inline void set_NoCompleteSource_0(Il2CppObject * value)
	{
		___NoCompleteSource_0 = value;
		Il2CppCodeGenWriteBarrier(&___NoCompleteSource_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
