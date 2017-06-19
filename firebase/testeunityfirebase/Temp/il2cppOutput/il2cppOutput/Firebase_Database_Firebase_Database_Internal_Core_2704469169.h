#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Core.RepoManager
struct RepoManager_t2704469169;
// System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Core.Context,System.Collections.Generic.IDictionary`2<System.String,Firebase.Database.Internal.Core.Repo>>
struct IDictionary_2_t1445055544;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.RepoManager
struct  RepoManager_t2704469169  : public Il2CppObject
{
public:
	// System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Core.Context,System.Collections.Generic.IDictionary`2<System.String,Firebase.Database.Internal.Core.Repo>> Firebase.Database.Internal.Core.RepoManager::_repos
	Il2CppObject* ____repos_1;

public:
	inline static int32_t get_offset_of__repos_1() { return static_cast<int32_t>(offsetof(RepoManager_t2704469169, ____repos_1)); }
	inline Il2CppObject* get__repos_1() const { return ____repos_1; }
	inline Il2CppObject** get_address_of__repos_1() { return &____repos_1; }
	inline void set__repos_1(Il2CppObject* value)
	{
		____repos_1 = value;
		Il2CppCodeGenWriteBarrier(&____repos_1, value);
	}
};

struct RepoManager_t2704469169_StaticFields
{
public:
	// Firebase.Database.Internal.Core.RepoManager Firebase.Database.Internal.Core.RepoManager::Instance
	RepoManager_t2704469169 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(RepoManager_t2704469169_StaticFields, ___Instance_0)); }
	inline RepoManager_t2704469169 * get_Instance_0() const { return ___Instance_0; }
	inline RepoManager_t2704469169 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(RepoManager_t2704469169 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
