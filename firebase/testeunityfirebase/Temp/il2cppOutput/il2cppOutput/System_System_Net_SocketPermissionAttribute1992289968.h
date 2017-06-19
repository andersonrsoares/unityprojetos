#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Security_Permissions_CodeAccessSec3161344859.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.SocketPermissionAttribute
struct  SocketPermissionAttribute_t1992289968  : public CodeAccessSecurityAttribute_t3161344859
{
public:
	// System.String System.Net.SocketPermissionAttribute::m_access
	String_t* ___m_access_2;
	// System.String System.Net.SocketPermissionAttribute::m_host
	String_t* ___m_host_3;
	// System.String System.Net.SocketPermissionAttribute::m_port
	String_t* ___m_port_4;
	// System.String System.Net.SocketPermissionAttribute::m_transport
	String_t* ___m_transport_5;

public:
	inline static int32_t get_offset_of_m_access_2() { return static_cast<int32_t>(offsetof(SocketPermissionAttribute_t1992289968, ___m_access_2)); }
	inline String_t* get_m_access_2() const { return ___m_access_2; }
	inline String_t** get_address_of_m_access_2() { return &___m_access_2; }
	inline void set_m_access_2(String_t* value)
	{
		___m_access_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_access_2, value);
	}

	inline static int32_t get_offset_of_m_host_3() { return static_cast<int32_t>(offsetof(SocketPermissionAttribute_t1992289968, ___m_host_3)); }
	inline String_t* get_m_host_3() const { return ___m_host_3; }
	inline String_t** get_address_of_m_host_3() { return &___m_host_3; }
	inline void set_m_host_3(String_t* value)
	{
		___m_host_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_host_3, value);
	}

	inline static int32_t get_offset_of_m_port_4() { return static_cast<int32_t>(offsetof(SocketPermissionAttribute_t1992289968, ___m_port_4)); }
	inline String_t* get_m_port_4() const { return ___m_port_4; }
	inline String_t** get_address_of_m_port_4() { return &___m_port_4; }
	inline void set_m_port_4(String_t* value)
	{
		___m_port_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_port_4, value);
	}

	inline static int32_t get_offset_of_m_transport_5() { return static_cast<int32_t>(offsetof(SocketPermissionAttribute_t1992289968, ___m_transport_5)); }
	inline String_t* get_m_transport_5() const { return ___m_transport_5; }
	inline String_t** get_address_of_m_transport_5() { return &___m_transport_5; }
	inline void set_m_transport_5(String_t* value)
	{
		___m_transport_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_transport_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
