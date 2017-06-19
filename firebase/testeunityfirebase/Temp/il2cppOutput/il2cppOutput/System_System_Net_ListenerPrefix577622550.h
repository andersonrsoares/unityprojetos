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
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t4087230954;
// System.Net.HttpListener
struct HttpListener_t4041012462;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.ListenerPrefix
struct  ListenerPrefix_t577622550  : public Il2CppObject
{
public:
	// System.String System.Net.ListenerPrefix::original
	String_t* ___original_0;
	// System.String System.Net.ListenerPrefix::host
	String_t* ___host_1;
	// System.UInt16 System.Net.ListenerPrefix::port
	uint16_t ___port_2;
	// System.String System.Net.ListenerPrefix::path
	String_t* ___path_3;
	// System.Boolean System.Net.ListenerPrefix::secure
	bool ___secure_4;
	// System.Net.IPAddress[] System.Net.ListenerPrefix::addresses
	IPAddressU5BU5D_t4087230954* ___addresses_5;
	// System.Net.HttpListener System.Net.ListenerPrefix::Listener
	HttpListener_t4041012462 * ___Listener_6;

public:
	inline static int32_t get_offset_of_original_0() { return static_cast<int32_t>(offsetof(ListenerPrefix_t577622550, ___original_0)); }
	inline String_t* get_original_0() const { return ___original_0; }
	inline String_t** get_address_of_original_0() { return &___original_0; }
	inline void set_original_0(String_t* value)
	{
		___original_0 = value;
		Il2CppCodeGenWriteBarrier(&___original_0, value);
	}

	inline static int32_t get_offset_of_host_1() { return static_cast<int32_t>(offsetof(ListenerPrefix_t577622550, ___host_1)); }
	inline String_t* get_host_1() const { return ___host_1; }
	inline String_t** get_address_of_host_1() { return &___host_1; }
	inline void set_host_1(String_t* value)
	{
		___host_1 = value;
		Il2CppCodeGenWriteBarrier(&___host_1, value);
	}

	inline static int32_t get_offset_of_port_2() { return static_cast<int32_t>(offsetof(ListenerPrefix_t577622550, ___port_2)); }
	inline uint16_t get_port_2() const { return ___port_2; }
	inline uint16_t* get_address_of_port_2() { return &___port_2; }
	inline void set_port_2(uint16_t value)
	{
		___port_2 = value;
	}

	inline static int32_t get_offset_of_path_3() { return static_cast<int32_t>(offsetof(ListenerPrefix_t577622550, ___path_3)); }
	inline String_t* get_path_3() const { return ___path_3; }
	inline String_t** get_address_of_path_3() { return &___path_3; }
	inline void set_path_3(String_t* value)
	{
		___path_3 = value;
		Il2CppCodeGenWriteBarrier(&___path_3, value);
	}

	inline static int32_t get_offset_of_secure_4() { return static_cast<int32_t>(offsetof(ListenerPrefix_t577622550, ___secure_4)); }
	inline bool get_secure_4() const { return ___secure_4; }
	inline bool* get_address_of_secure_4() { return &___secure_4; }
	inline void set_secure_4(bool value)
	{
		___secure_4 = value;
	}

	inline static int32_t get_offset_of_addresses_5() { return static_cast<int32_t>(offsetof(ListenerPrefix_t577622550, ___addresses_5)); }
	inline IPAddressU5BU5D_t4087230954* get_addresses_5() const { return ___addresses_5; }
	inline IPAddressU5BU5D_t4087230954** get_address_of_addresses_5() { return &___addresses_5; }
	inline void set_addresses_5(IPAddressU5BU5D_t4087230954* value)
	{
		___addresses_5 = value;
		Il2CppCodeGenWriteBarrier(&___addresses_5, value);
	}

	inline static int32_t get_offset_of_Listener_6() { return static_cast<int32_t>(offsetof(ListenerPrefix_t577622550, ___Listener_6)); }
	inline HttpListener_t4041012462 * get_Listener_6() const { return ___Listener_6; }
	inline HttpListener_t4041012462 ** get_address_of_Listener_6() { return &___Listener_6; }
	inline void set_Listener_6(HttpListener_t4041012462 * value)
	{
		___Listener_6 = value;
		Il2CppCodeGenWriteBarrier(&___Listener_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
