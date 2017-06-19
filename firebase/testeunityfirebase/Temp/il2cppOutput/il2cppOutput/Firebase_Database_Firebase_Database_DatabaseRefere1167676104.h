#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_Database_Firebase_Database_Query2792659010.h"

// Firebase.Database.Internal.Core.DatabaseConfig
struct DatabaseConfig_t3004044241;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.DatabaseReference
struct  DatabaseReference_t1167676104  : public Query_t2792659010
{
public:

public:
};

struct DatabaseReference_t1167676104_StaticFields
{
public:
	// Firebase.Database.Internal.Core.DatabaseConfig Firebase.Database.DatabaseReference::_defaultConfig
	DatabaseConfig_t3004044241 * ____defaultConfig_4;
	// System.Object Firebase.Database.DatabaseReference::SSync
	Il2CppObject * ___SSync_5;

public:
	inline static int32_t get_offset_of__defaultConfig_4() { return static_cast<int32_t>(offsetof(DatabaseReference_t1167676104_StaticFields, ____defaultConfig_4)); }
	inline DatabaseConfig_t3004044241 * get__defaultConfig_4() const { return ____defaultConfig_4; }
	inline DatabaseConfig_t3004044241 ** get_address_of__defaultConfig_4() { return &____defaultConfig_4; }
	inline void set__defaultConfig_4(DatabaseConfig_t3004044241 * value)
	{
		____defaultConfig_4 = value;
		Il2CppCodeGenWriteBarrier(&____defaultConfig_4, value);
	}

	inline static int32_t get_offset_of_SSync_5() { return static_cast<int32_t>(offsetof(DatabaseReference_t1167676104_StaticFields, ___SSync_5)); }
	inline Il2CppObject * get_SSync_5() const { return ___SSync_5; }
	inline Il2CppObject ** get_address_of_SSync_5() { return &___SSync_5; }
	inline void set_SSync_5(Il2CppObject * value)
	{
		___SSync_5 = value;
		Il2CppCodeGenWriteBarrier(&___SSync_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
