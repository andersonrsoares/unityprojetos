#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Core.RepoInfo,Firebase.Database.FirebaseDatabase>>
struct IDictionary_2_t1173206723;
// System.Object
struct Il2CppObject;
// Firebase.Database.Internal.Core.DatabaseConfig
struct DatabaseConfig_t3004044241;
// Firebase.Database.Internal.Core.RepoInfo
struct RepoInfo_t4079583710;
// Firebase.Database.Internal.Core.Repo
struct Repo_t1244308462;
// Firebase.FirebaseApp
struct FirebaseApp_t210707726;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.FirebaseDatabase
struct  FirebaseDatabase_t1318758358  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.DatabaseConfig Firebase.Database.FirebaseDatabase::_config
	DatabaseConfig_t3004044241 * ____config_2;
	// Firebase.Database.Internal.Core.RepoInfo Firebase.Database.FirebaseDatabase::_repoInfo
	RepoInfo_t4079583710 * ____repoInfo_3;
	// System.Object Firebase.Database.FirebaseDatabase::_sync
	Il2CppObject * ____sync_4;
	// Firebase.Database.Internal.Core.Repo Firebase.Database.FirebaseDatabase::_repo
	Repo_t1244308462 * ____repo_5;
	// Firebase.FirebaseApp Firebase.Database.FirebaseDatabase::<App>k__BackingField
	FirebaseApp_t210707726 * ___U3CAppU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of__config_2() { return static_cast<int32_t>(offsetof(FirebaseDatabase_t1318758358, ____config_2)); }
	inline DatabaseConfig_t3004044241 * get__config_2() const { return ____config_2; }
	inline DatabaseConfig_t3004044241 ** get_address_of__config_2() { return &____config_2; }
	inline void set__config_2(DatabaseConfig_t3004044241 * value)
	{
		____config_2 = value;
		Il2CppCodeGenWriteBarrier(&____config_2, value);
	}

	inline static int32_t get_offset_of__repoInfo_3() { return static_cast<int32_t>(offsetof(FirebaseDatabase_t1318758358, ____repoInfo_3)); }
	inline RepoInfo_t4079583710 * get__repoInfo_3() const { return ____repoInfo_3; }
	inline RepoInfo_t4079583710 ** get_address_of__repoInfo_3() { return &____repoInfo_3; }
	inline void set__repoInfo_3(RepoInfo_t4079583710 * value)
	{
		____repoInfo_3 = value;
		Il2CppCodeGenWriteBarrier(&____repoInfo_3, value);
	}

	inline static int32_t get_offset_of__sync_4() { return static_cast<int32_t>(offsetof(FirebaseDatabase_t1318758358, ____sync_4)); }
	inline Il2CppObject * get__sync_4() const { return ____sync_4; }
	inline Il2CppObject ** get_address_of__sync_4() { return &____sync_4; }
	inline void set__sync_4(Il2CppObject * value)
	{
		____sync_4 = value;
		Il2CppCodeGenWriteBarrier(&____sync_4, value);
	}

	inline static int32_t get_offset_of__repo_5() { return static_cast<int32_t>(offsetof(FirebaseDatabase_t1318758358, ____repo_5)); }
	inline Repo_t1244308462 * get__repo_5() const { return ____repo_5; }
	inline Repo_t1244308462 ** get_address_of__repo_5() { return &____repo_5; }
	inline void set__repo_5(Repo_t1244308462 * value)
	{
		____repo_5 = value;
		Il2CppCodeGenWriteBarrier(&____repo_5, value);
	}

	inline static int32_t get_offset_of_U3CAppU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FirebaseDatabase_t1318758358, ___U3CAppU3Ek__BackingField_6)); }
	inline FirebaseApp_t210707726 * get_U3CAppU3Ek__BackingField_6() const { return ___U3CAppU3Ek__BackingField_6; }
	inline FirebaseApp_t210707726 ** get_address_of_U3CAppU3Ek__BackingField_6() { return &___U3CAppU3Ek__BackingField_6; }
	inline void set_U3CAppU3Ek__BackingField_6(FirebaseApp_t210707726 * value)
	{
		___U3CAppU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAppU3Ek__BackingField_6, value);
	}
};

struct FirebaseDatabase_t1318758358_StaticFields
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Core.RepoInfo,Firebase.Database.FirebaseDatabase>> Firebase.Database.FirebaseDatabase::DatabaseInstances
	Il2CppObject* ___DatabaseInstances_0;
	// System.Object Firebase.Database.FirebaseDatabase::SSync
	Il2CppObject * ___SSync_1;

public:
	inline static int32_t get_offset_of_DatabaseInstances_0() { return static_cast<int32_t>(offsetof(FirebaseDatabase_t1318758358_StaticFields, ___DatabaseInstances_0)); }
	inline Il2CppObject* get_DatabaseInstances_0() const { return ___DatabaseInstances_0; }
	inline Il2CppObject** get_address_of_DatabaseInstances_0() { return &___DatabaseInstances_0; }
	inline void set_DatabaseInstances_0(Il2CppObject* value)
	{
		___DatabaseInstances_0 = value;
		Il2CppCodeGenWriteBarrier(&___DatabaseInstances_0, value);
	}

	inline static int32_t get_offset_of_SSync_1() { return static_cast<int32_t>(offsetof(FirebaseDatabase_t1318758358_StaticFields, ___SSync_1)); }
	inline Il2CppObject * get_SSync_1() const { return ___SSync_1; }
	inline Il2CppObject ** get_address_of_SSync_1() { return &___SSync_1; }
	inline void set_SSync_1(Il2CppObject * value)
	{
		___SSync_1 = value;
		Il2CppCodeGenWriteBarrier(&___SSync_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
