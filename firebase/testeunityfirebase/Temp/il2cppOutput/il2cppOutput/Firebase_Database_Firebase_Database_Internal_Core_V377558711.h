#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Core.View.QueryParams
struct QueryParams_t526937568;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.View.QuerySpec
struct  QuerySpec_t377558711  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.View.QueryParams Firebase.Database.Internal.Core.View.QuerySpec::_params
	QueryParams_t526937568 * ____params_0;
	// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.View.QuerySpec::_path
	Path_t2568473163 * ____path_1;

public:
	inline static int32_t get_offset_of__params_0() { return static_cast<int32_t>(offsetof(QuerySpec_t377558711, ____params_0)); }
	inline QueryParams_t526937568 * get__params_0() const { return ____params_0; }
	inline QueryParams_t526937568 ** get_address_of__params_0() { return &____params_0; }
	inline void set__params_0(QueryParams_t526937568 * value)
	{
		____params_0 = value;
		Il2CppCodeGenWriteBarrier(&____params_0, value);
	}

	inline static int32_t get_offset_of__path_1() { return static_cast<int32_t>(offsetof(QuerySpec_t377558711, ____path_1)); }
	inline Path_t2568473163 * get__path_1() const { return ____path_1; }
	inline Path_t2568473163 ** get_address_of__path_1() { return &____path_1; }
	inline void set__path_1(Path_t2568473163 * value)
	{
		____path_1 = value;
		Il2CppCodeGenWriteBarrier(&____path_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
