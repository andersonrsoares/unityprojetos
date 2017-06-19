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
// Firebase.Database.Internal.Core.RepoInfo
struct RepoInfo_t4079583710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Utilities.ParsedUrl
struct  ParsedUrl_t1255537880  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Utilities.ParsedUrl::Path
	Path_t2568473163 * ___Path_0;
	// Firebase.Database.Internal.Core.RepoInfo Firebase.Database.Internal.Utilities.ParsedUrl::RepoInfo
	RepoInfo_t4079583710 * ___RepoInfo_1;

public:
	inline static int32_t get_offset_of_Path_0() { return static_cast<int32_t>(offsetof(ParsedUrl_t1255537880, ___Path_0)); }
	inline Path_t2568473163 * get_Path_0() const { return ___Path_0; }
	inline Path_t2568473163 ** get_address_of_Path_0() { return &___Path_0; }
	inline void set_Path_0(Path_t2568473163 * value)
	{
		___Path_0 = value;
		Il2CppCodeGenWriteBarrier(&___Path_0, value);
	}

	inline static int32_t get_offset_of_RepoInfo_1() { return static_cast<int32_t>(offsetof(ParsedUrl_t1255537880, ___RepoInfo_1)); }
	inline RepoInfo_t4079583710 * get_RepoInfo_1() const { return ___RepoInfo_1; }
	inline RepoInfo_t4079583710 ** get_address_of_RepoInfo_1() { return &___RepoInfo_1; }
	inline void set_RepoInfo_1(RepoInfo_t4079583710 * value)
	{
		___RepoInfo_1 = value;
		Il2CppCodeGenWriteBarrier(&___RepoInfo_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
