#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_System_Net_TransportType754098103.h"

// System.Char[]
struct CharU5BU5D_t1328083999;
// System.String
struct String_t;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t4087230954;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.EndpointPermission
struct  EndpointPermission_t1770171204  : public Il2CppObject
{
public:
	// System.String System.Net.EndpointPermission::hostname
	String_t* ___hostname_1;
	// System.Int32 System.Net.EndpointPermission::port
	int32_t ___port_2;
	// System.Net.TransportType System.Net.EndpointPermission::transport
	int32_t ___transport_3;
	// System.Boolean System.Net.EndpointPermission::resolved
	bool ___resolved_4;
	// System.Boolean System.Net.EndpointPermission::hasWildcard
	bool ___hasWildcard_5;
	// System.Net.IPAddress[] System.Net.EndpointPermission::addresses
	IPAddressU5BU5D_t4087230954* ___addresses_6;

public:
	inline static int32_t get_offset_of_hostname_1() { return static_cast<int32_t>(offsetof(EndpointPermission_t1770171204, ___hostname_1)); }
	inline String_t* get_hostname_1() const { return ___hostname_1; }
	inline String_t** get_address_of_hostname_1() { return &___hostname_1; }
	inline void set_hostname_1(String_t* value)
	{
		___hostname_1 = value;
		Il2CppCodeGenWriteBarrier(&___hostname_1, value);
	}

	inline static int32_t get_offset_of_port_2() { return static_cast<int32_t>(offsetof(EndpointPermission_t1770171204, ___port_2)); }
	inline int32_t get_port_2() const { return ___port_2; }
	inline int32_t* get_address_of_port_2() { return &___port_2; }
	inline void set_port_2(int32_t value)
	{
		___port_2 = value;
	}

	inline static int32_t get_offset_of_transport_3() { return static_cast<int32_t>(offsetof(EndpointPermission_t1770171204, ___transport_3)); }
	inline int32_t get_transport_3() const { return ___transport_3; }
	inline int32_t* get_address_of_transport_3() { return &___transport_3; }
	inline void set_transport_3(int32_t value)
	{
		___transport_3 = value;
	}

	inline static int32_t get_offset_of_resolved_4() { return static_cast<int32_t>(offsetof(EndpointPermission_t1770171204, ___resolved_4)); }
	inline bool get_resolved_4() const { return ___resolved_4; }
	inline bool* get_address_of_resolved_4() { return &___resolved_4; }
	inline void set_resolved_4(bool value)
	{
		___resolved_4 = value;
	}

	inline static int32_t get_offset_of_hasWildcard_5() { return static_cast<int32_t>(offsetof(EndpointPermission_t1770171204, ___hasWildcard_5)); }
	inline bool get_hasWildcard_5() const { return ___hasWildcard_5; }
	inline bool* get_address_of_hasWildcard_5() { return &___hasWildcard_5; }
	inline void set_hasWildcard_5(bool value)
	{
		___hasWildcard_5 = value;
	}

	inline static int32_t get_offset_of_addresses_6() { return static_cast<int32_t>(offsetof(EndpointPermission_t1770171204, ___addresses_6)); }
	inline IPAddressU5BU5D_t4087230954* get_addresses_6() const { return ___addresses_6; }
	inline IPAddressU5BU5D_t4087230954** get_address_of_addresses_6() { return &___addresses_6; }
	inline void set_addresses_6(IPAddressU5BU5D_t4087230954* value)
	{
		___addresses_6 = value;
		Il2CppCodeGenWriteBarrier(&___addresses_6, value);
	}
};

struct EndpointPermission_t1770171204_StaticFields
{
public:
	// System.Char[] System.Net.EndpointPermission::dot_char
	CharU5BU5D_t1328083999* ___dot_char_0;

public:
	inline static int32_t get_offset_of_dot_char_0() { return static_cast<int32_t>(offsetof(EndpointPermission_t1770171204_StaticFields, ___dot_char_0)); }
	inline CharU5BU5D_t1328083999* get_dot_char_0() const { return ___dot_char_0; }
	inline CharU5BU5D_t1328083999** get_address_of_dot_char_0() { return &___dot_char_0; }
	inline void set_dot_char_0(CharU5BU5D_t1328083999* value)
	{
		___dot_char_0 = value;
		Il2CppCodeGenWriteBarrier(&___dot_char_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
