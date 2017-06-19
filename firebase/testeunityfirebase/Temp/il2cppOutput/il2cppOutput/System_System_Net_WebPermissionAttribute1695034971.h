#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Security_Permissions_CodeAccessSec3161344859.h"

// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebPermissionAttribute
struct  WebPermissionAttribute_t1695034971  : public CodeAccessSecurityAttribute_t3161344859
{
public:
	// System.Object System.Net.WebPermissionAttribute::m_accept
	Il2CppObject * ___m_accept_2;
	// System.Object System.Net.WebPermissionAttribute::m_connect
	Il2CppObject * ___m_connect_3;

public:
	inline static int32_t get_offset_of_m_accept_2() { return static_cast<int32_t>(offsetof(WebPermissionAttribute_t1695034971, ___m_accept_2)); }
	inline Il2CppObject * get_m_accept_2() const { return ___m_accept_2; }
	inline Il2CppObject ** get_address_of_m_accept_2() { return &___m_accept_2; }
	inline void set_m_accept_2(Il2CppObject * value)
	{
		___m_accept_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_accept_2, value);
	}

	inline static int32_t get_offset_of_m_connect_3() { return static_cast<int32_t>(offsetof(WebPermissionAttribute_t1695034971, ___m_connect_3)); }
	inline Il2CppObject * get_m_connect_3() const { return ___m_connect_3; }
	inline Il2CppObject ** get_address_of_m_connect_3() { return &___m_connect_3; }
	inline void set_m_connect_3(Il2CppObject * value)
	{
		___m_connect_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_connect_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
