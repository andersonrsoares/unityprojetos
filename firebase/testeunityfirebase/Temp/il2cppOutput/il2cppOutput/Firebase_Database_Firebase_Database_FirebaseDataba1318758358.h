#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
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
	DatabaseConfig_t3004044241 * ____config_4;
	// Firebase.Database.Internal.Core.RepoInfo Firebase.Database.FirebaseDatabase::_repoInfo
	RepoInfo_t4079583710 * ____repoInfo_5;
	// System.Object Firebase.Database.FirebaseDatabase::_sync
	Il2CppObject * ____sync_6;
	// Firebase.Database.Internal.Core.Repo Firebase.Database.FirebaseDatabase::_repo
	Repo_t1244308462 * ____repo_7;
	// Firebase.FirebaseApp Firebase.Database.FirebaseDatabase::<App>k__BackingField
	FirebaseApp_t210707726 * ___U3CAppU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of__config_4() { return static_cast<int32_t>(offsetof(FirebaseDatabase_t1318758358, ____config_4)); }
	inline DatabaseConfig_t3004044241 * get__config_4() const { return ____config_4; }
	inline DatabaseConfig_t3004044241 ** get_address_of__config_4() { return &____config_4; }
	inline void set__config_4(DatabaseConfig_t3004044241 * value)
	{
		____config_4 = value;
		Il2CppCodeGenWriteBarrier(&____config_4, value);
	}

	inline static int32_t get_offset_of__repoInfo_5() { return static_cast<int32_t>(offsetof(FirebaseDatabase_t1318758358, ____repoInfo_5)); }
	inline RepoInfo_t4079583710 * get__repoInfo_5() const { return ____repoInfo_5; }
	inline RepoInfo_t4079583710 ** get_address_of__repoInfo_5() { return &____repoInfo_5; }
	inline void set__repoInfo_5(RepoInfo_t4079583710 * value)
	{
		____repoInfo_5 = value;
		Il2CppCodeGenWriteBarrier(&____repoInfo_5, value);
	}

	inline static int32_t get_offset_of__sync_6() { return static_cast<int32_t>(offsetof(FirebaseDatabase_t1318758358, ____sync_6)); }
	inline Il2CppObject * get__sync_6() const { return ____sync_6; }
	inline Il2CppObject ** get_address_of__sync_6() { return &____sync_6; }
	inline void set__sync_6(Il2CppObject * value)
	{
		____sync_6 = value;
		Il2CppCodeGenWriteBarrier(&____sync_6, value);
	}

	inline static int32_t get_offset_of__repo_7() { return static_cast<int32_t>(offsetof(FirebaseDatabase_t1318758358, ____repo_7)); }
	inline Repo_t1244308462 * get__repo_7() const { return ____repo_7; }
	inline Repo_t1244308462 ** get_address_of__repo_7() { return &____repo_7; }
	inline void set__repo_7(Repo_t1244308462 * value)
	{
		____repo_7 = value;
		Il2CppCodeGenWriteBarrier(&____repo_7, value);
	}

	inline static int32_t get_offset_of_U3CAppU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(FirebaseDatabase_t1318758358, ___U3CAppU3Ek__BackingField_8)); }
	inline FirebaseApp_t210707726 * get_U3CAppU3Ek__BackingField_8() const { return ___U3CAppU3Ek__BackingField_8; }
	inline FirebaseApp_t210707726 ** get_address_of_U3CAppU3Ek__BackingField_8() { return &___U3CAppU3Ek__BackingField_8; }
	inline void set_U3CAppU3Ek__BackingField_8(FirebaseApp_t210707726 * value)
	{
		___U3CAppU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAppU3Ek__BackingField_8, value);
	}
};

struct FirebaseDatabase_t1318758358_StaticFields
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Core.RepoInfo,Firebase.Database.FirebaseDatabase>> Firebase.Database.FirebaseDatabase::DatabaseInstances
	Il2CppObject* ___DatabaseInstances_2;
	// System.Object Firebase.Database.FirebaseDatabase::SSync
	Il2CppObject * ___SSync_3;

public:
	inline static int32_t get_offset_of_DatabaseInstances_2() { return static_cast<int32_t>(offsetof(FirebaseDatabase_t1318758358_StaticFields, ___DatabaseInstances_2)); }
	inline Il2CppObject* get_DatabaseInstances_2() const { return ___DatabaseInstances_2; }
	inline Il2CppObject** get_address_of_DatabaseInstances_2() { return &___DatabaseInstances_2; }
	inline void set_DatabaseInstances_2(Il2CppObject* value)
	{
		___DatabaseInstances_2 = value;
		Il2CppCodeGenWriteBarrier(&___DatabaseInstances_2, value);
	}

	inline static int32_t get_offset_of_SSync_3() { return static_cast<int32_t>(offsetof(FirebaseDatabase_t1318758358_StaticFields, ___SSync_3)); }
	inline Il2CppObject * get_SSync_3() const { return ___SSync_3; }
	inline Il2CppObject ** get_address_of_SSync_3() { return &___SSync_3; }
	inline void set_SSync_3(Il2CppObject * value)
	{
		___SSync_3 = value;
		Il2CppCodeGenWriteBarrier(&___SSync_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
