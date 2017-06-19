#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Object
struct Il2CppObject;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Security.IPermission
struct IPermission_t182075948;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t43919632;
// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t502442079;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityManager
struct  SecurityManager_t3191249573  : public Il2CppObject
{
public:

public:
};

struct SecurityManager_t3191249573_StaticFields
{
public:
	// System.Object System.Security.SecurityManager::_lockObject
	Il2CppObject * ____lockObject_0;
	// System.Collections.ArrayList System.Security.SecurityManager::_hierarchy
	ArrayList_t4252133567 * ____hierarchy_1;
	// System.Security.IPermission System.Security.SecurityManager::_unmanagedCode
	Il2CppObject * ____unmanagedCode_2;
	// System.Collections.Hashtable System.Security.SecurityManager::_declsecCache
	Hashtable_t909839986 * ____declsecCache_3;
	// System.Security.Policy.PolicyLevel System.Security.SecurityManager::_level
	PolicyLevel_t43919632 * ____level_4;
	// System.Security.Permissions.SecurityPermission System.Security.SecurityManager::_execution
	SecurityPermission_t502442079 * ____execution_5;

public:
	inline static int32_t get_offset_of__lockObject_0() { return static_cast<int32_t>(offsetof(SecurityManager_t3191249573_StaticFields, ____lockObject_0)); }
	inline Il2CppObject * get__lockObject_0() const { return ____lockObject_0; }
	inline Il2CppObject ** get_address_of__lockObject_0() { return &____lockObject_0; }
	inline void set__lockObject_0(Il2CppObject * value)
	{
		____lockObject_0 = value;
		Il2CppCodeGenWriteBarrier(&____lockObject_0, value);
	}

	inline static int32_t get_offset_of__hierarchy_1() { return static_cast<int32_t>(offsetof(SecurityManager_t3191249573_StaticFields, ____hierarchy_1)); }
	inline ArrayList_t4252133567 * get__hierarchy_1() const { return ____hierarchy_1; }
	inline ArrayList_t4252133567 ** get_address_of__hierarchy_1() { return &____hierarchy_1; }
	inline void set__hierarchy_1(ArrayList_t4252133567 * value)
	{
		____hierarchy_1 = value;
		Il2CppCodeGenWriteBarrier(&____hierarchy_1, value);
	}

	inline static int32_t get_offset_of__unmanagedCode_2() { return static_cast<int32_t>(offsetof(SecurityManager_t3191249573_StaticFields, ____unmanagedCode_2)); }
	inline Il2CppObject * get__unmanagedCode_2() const { return ____unmanagedCode_2; }
	inline Il2CppObject ** get_address_of__unmanagedCode_2() { return &____unmanagedCode_2; }
	inline void set__unmanagedCode_2(Il2CppObject * value)
	{
		____unmanagedCode_2 = value;
		Il2CppCodeGenWriteBarrier(&____unmanagedCode_2, value);
	}

	inline static int32_t get_offset_of__declsecCache_3() { return static_cast<int32_t>(offsetof(SecurityManager_t3191249573_StaticFields, ____declsecCache_3)); }
	inline Hashtable_t909839986 * get__declsecCache_3() const { return ____declsecCache_3; }
	inline Hashtable_t909839986 ** get_address_of__declsecCache_3() { return &____declsecCache_3; }
	inline void set__declsecCache_3(Hashtable_t909839986 * value)
	{
		____declsecCache_3 = value;
		Il2CppCodeGenWriteBarrier(&____declsecCache_3, value);
	}

	inline static int32_t get_offset_of__level_4() { return static_cast<int32_t>(offsetof(SecurityManager_t3191249573_StaticFields, ____level_4)); }
	inline PolicyLevel_t43919632 * get__level_4() const { return ____level_4; }
	inline PolicyLevel_t43919632 ** get_address_of__level_4() { return &____level_4; }
	inline void set__level_4(PolicyLevel_t43919632 * value)
	{
		____level_4 = value;
		Il2CppCodeGenWriteBarrier(&____level_4, value);
	}

	inline static int32_t get_offset_of__execution_5() { return static_cast<int32_t>(offsetof(SecurityManager_t3191249573_StaticFields, ____execution_5)); }
	inline SecurityPermission_t502442079 * get__execution_5() const { return ____execution_5; }
	inline SecurityPermission_t502442079 ** get_address_of__execution_5() { return &____execution_5; }
	inline void set__execution_5(SecurityPermission_t502442079 * value)
	{
		____execution_5 = value;
		Il2CppCodeGenWriteBarrier(&____execution_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
