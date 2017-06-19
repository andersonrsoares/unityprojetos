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
// Firebase.Database.Internal.Core.Repo
struct Repo_t1244308462;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Query
struct  Query_t2792659010  : public Il2CppObject
{
public:
	// System.Boolean Firebase.Database.Query::_orderByCalled
	bool ____orderByCalled_0;
	// Firebase.Database.Internal.Core.View.QueryParams Firebase.Database.Query::Params
	QueryParams_t526937568 * ___Params_1;
	// Firebase.Database.Internal.Core.Path Firebase.Database.Query::Path
	Path_t2568473163 * ___Path_2;
	// Firebase.Database.Internal.Core.Repo Firebase.Database.Query::Repo
	Repo_t1244308462 * ___Repo_3;

public:
	inline static int32_t get_offset_of__orderByCalled_0() { return static_cast<int32_t>(offsetof(Query_t2792659010, ____orderByCalled_0)); }
	inline bool get__orderByCalled_0() const { return ____orderByCalled_0; }
	inline bool* get_address_of__orderByCalled_0() { return &____orderByCalled_0; }
	inline void set__orderByCalled_0(bool value)
	{
		____orderByCalled_0 = value;
	}

	inline static int32_t get_offset_of_Params_1() { return static_cast<int32_t>(offsetof(Query_t2792659010, ___Params_1)); }
	inline QueryParams_t526937568 * get_Params_1() const { return ___Params_1; }
	inline QueryParams_t526937568 ** get_address_of_Params_1() { return &___Params_1; }
	inline void set_Params_1(QueryParams_t526937568 * value)
	{
		___Params_1 = value;
		Il2CppCodeGenWriteBarrier(&___Params_1, value);
	}

	inline static int32_t get_offset_of_Path_2() { return static_cast<int32_t>(offsetof(Query_t2792659010, ___Path_2)); }
	inline Path_t2568473163 * get_Path_2() const { return ___Path_2; }
	inline Path_t2568473163 ** get_address_of_Path_2() { return &___Path_2; }
	inline void set_Path_2(Path_t2568473163 * value)
	{
		___Path_2 = value;
		Il2CppCodeGenWriteBarrier(&___Path_2, value);
	}

	inline static int32_t get_offset_of_Repo_3() { return static_cast<int32_t>(offsetof(Query_t2792659010, ___Repo_3)); }
	inline Repo_t1244308462 * get_Repo_3() const { return ___Repo_3; }
	inline Repo_t1244308462 ** get_address_of_Repo_3() { return &___Repo_3; }
	inline void set_Repo_3(Repo_t1244308462 * value)
	{
		___Repo_3 = value;
		Il2CppCodeGenWriteBarrier(&___Repo_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
