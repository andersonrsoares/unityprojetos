#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Configuration.ConfigurationData
struct ConfigurationData_t2583411386;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationData
struct  ConfigurationData_t2583411386  : public Il2CppObject
{
public:
	// System.Configuration.ConfigurationData System.Configuration.ConfigurationData::parent
	ConfigurationData_t2583411386 * ___parent_0;
	// System.Collections.Hashtable System.Configuration.ConfigurationData::factories
	Hashtable_t909839986 * ___factories_1;
	// System.Collections.Hashtable System.Configuration.ConfigurationData::pending
	Hashtable_t909839986 * ___pending_4;
	// System.String System.Configuration.ConfigurationData::fileName
	String_t* ___fileName_5;
	// System.Collections.Hashtable System.Configuration.ConfigurationData::cache
	Hashtable_t909839986 * ___cache_7;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(ConfigurationData_t2583411386, ___parent_0)); }
	inline ConfigurationData_t2583411386 * get_parent_0() const { return ___parent_0; }
	inline ConfigurationData_t2583411386 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(ConfigurationData_t2583411386 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier(&___parent_0, value);
	}

	inline static int32_t get_offset_of_factories_1() { return static_cast<int32_t>(offsetof(ConfigurationData_t2583411386, ___factories_1)); }
	inline Hashtable_t909839986 * get_factories_1() const { return ___factories_1; }
	inline Hashtable_t909839986 ** get_address_of_factories_1() { return &___factories_1; }
	inline void set_factories_1(Hashtable_t909839986 * value)
	{
		___factories_1 = value;
		Il2CppCodeGenWriteBarrier(&___factories_1, value);
	}

	inline static int32_t get_offset_of_pending_4() { return static_cast<int32_t>(offsetof(ConfigurationData_t2583411386, ___pending_4)); }
	inline Hashtable_t909839986 * get_pending_4() const { return ___pending_4; }
	inline Hashtable_t909839986 ** get_address_of_pending_4() { return &___pending_4; }
	inline void set_pending_4(Hashtable_t909839986 * value)
	{
		___pending_4 = value;
		Il2CppCodeGenWriteBarrier(&___pending_4, value);
	}

	inline static int32_t get_offset_of_fileName_5() { return static_cast<int32_t>(offsetof(ConfigurationData_t2583411386, ___fileName_5)); }
	inline String_t* get_fileName_5() const { return ___fileName_5; }
	inline String_t** get_address_of_fileName_5() { return &___fileName_5; }
	inline void set_fileName_5(String_t* value)
	{
		___fileName_5 = value;
		Il2CppCodeGenWriteBarrier(&___fileName_5, value);
	}

	inline static int32_t get_offset_of_cache_7() { return static_cast<int32_t>(offsetof(ConfigurationData_t2583411386, ___cache_7)); }
	inline Hashtable_t909839986 * get_cache_7() const { return ___cache_7; }
	inline Hashtable_t909839986 ** get_address_of_cache_7() { return &___cache_7; }
	inline void set_cache_7(Hashtable_t909839986 * value)
	{
		___cache_7 = value;
		Il2CppCodeGenWriteBarrier(&___cache_7, value);
	}
};

struct ConfigurationData_t2583411386_StaticFields
{
public:
	// System.Object System.Configuration.ConfigurationData::removedMark
	Il2CppObject * ___removedMark_2;
	// System.Object System.Configuration.ConfigurationData::emptyMark
	Il2CppObject * ___emptyMark_3;
	// System.Object System.Configuration.ConfigurationData::groupMark
	Il2CppObject * ___groupMark_6;

public:
	inline static int32_t get_offset_of_removedMark_2() { return static_cast<int32_t>(offsetof(ConfigurationData_t2583411386_StaticFields, ___removedMark_2)); }
	inline Il2CppObject * get_removedMark_2() const { return ___removedMark_2; }
	inline Il2CppObject ** get_address_of_removedMark_2() { return &___removedMark_2; }
	inline void set_removedMark_2(Il2CppObject * value)
	{
		___removedMark_2 = value;
		Il2CppCodeGenWriteBarrier(&___removedMark_2, value);
	}

	inline static int32_t get_offset_of_emptyMark_3() { return static_cast<int32_t>(offsetof(ConfigurationData_t2583411386_StaticFields, ___emptyMark_3)); }
	inline Il2CppObject * get_emptyMark_3() const { return ___emptyMark_3; }
	inline Il2CppObject ** get_address_of_emptyMark_3() { return &___emptyMark_3; }
	inline void set_emptyMark_3(Il2CppObject * value)
	{
		___emptyMark_3 = value;
		Il2CppCodeGenWriteBarrier(&___emptyMark_3, value);
	}

	inline static int32_t get_offset_of_groupMark_6() { return static_cast<int32_t>(offsetof(ConfigurationData_t2583411386_StaticFields, ___groupMark_6)); }
	inline Il2CppObject * get_groupMark_6() const { return ___groupMark_6; }
	inline Il2CppObject ** get_address_of_groupMark_6() { return &___groupMark_6; }
	inline void set_groupMark_6(Il2CppObject * value)
	{
		___groupMark_6 = value;
		Il2CppCodeGenWriteBarrier(&___groupMark_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
