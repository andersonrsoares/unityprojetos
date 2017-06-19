#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Security.Policy.IApplicationTrustManager
struct IApplicationTrustManager_t2152210378;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ApplicationSecurityManager
struct  ApplicationSecurityManager_t421834097  : public Il2CppObject
{
public:

public:
};

struct ApplicationSecurityManager_t421834097_StaticFields
{
public:
	// System.Security.Policy.IApplicationTrustManager System.Security.Policy.ApplicationSecurityManager::_appTrustManager
	Il2CppObject * ____appTrustManager_0;

public:
	inline static int32_t get_offset_of__appTrustManager_0() { return static_cast<int32_t>(offsetof(ApplicationSecurityManager_t421834097_StaticFields, ____appTrustManager_0)); }
	inline Il2CppObject * get__appTrustManager_0() const { return ____appTrustManager_0; }
	inline Il2CppObject ** get_address_of__appTrustManager_0() { return &____appTrustManager_0; }
	inline void set__appTrustManager_0(Il2CppObject * value)
	{
		____appTrustManager_0 = value;
		Il2CppCodeGenWriteBarrier(&____appTrustManager_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
