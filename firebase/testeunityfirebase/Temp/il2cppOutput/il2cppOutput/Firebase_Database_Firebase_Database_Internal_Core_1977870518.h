#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Core.Repo
struct Repo_t1244308462;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.RepoManager/Runnable36
struct  Runnable36_t1977870518  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.Repo Firebase.Database.Internal.Core.RepoManager/Runnable36::_repo
	Repo_t1244308462 * ____repo_0;

public:
	inline static int32_t get_offset_of__repo_0() { return static_cast<int32_t>(offsetof(Runnable36_t1977870518, ____repo_0)); }
	inline Repo_t1244308462 * get__repo_0() const { return ____repo_0; }
	inline Repo_t1244308462 ** get_address_of__repo_0() { return &____repo_0; }
	inline void set__repo_0(Repo_t1244308462 * value)
	{
		____repo_0 = value;
		Il2CppCodeGenWriteBarrier(&____repo_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
