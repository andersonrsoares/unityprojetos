#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_System_Net_AuthenticationSchemes4122484730.h"

// System.Net.HttpListenerPrefixCollection
struct HttpListenerPrefixCollection_t3802522018;
// System.Net.AuthenticationSchemeSelector
struct AuthenticationSchemeSelector_t1076949500;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Collections.ArrayList
struct ArrayList_t4252133567;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpListener
struct  HttpListener_t4041012462  : public Il2CppObject
{
public:
	// System.Net.AuthenticationSchemes System.Net.HttpListener::auth_schemes
	int32_t ___auth_schemes_0;
	// System.Net.HttpListenerPrefixCollection System.Net.HttpListener::prefixes
	HttpListenerPrefixCollection_t3802522018 * ___prefixes_1;
	// System.Net.AuthenticationSchemeSelector System.Net.HttpListener::auth_selector
	AuthenticationSchemeSelector_t1076949500 * ___auth_selector_2;
	// System.String System.Net.HttpListener::realm
	String_t* ___realm_3;
	// System.Boolean System.Net.HttpListener::ignore_write_exceptions
	bool ___ignore_write_exceptions_4;
	// System.Boolean System.Net.HttpListener::unsafe_ntlm_auth
	bool ___unsafe_ntlm_auth_5;
	// System.Boolean System.Net.HttpListener::listening
	bool ___listening_6;
	// System.Boolean System.Net.HttpListener::disposed
	bool ___disposed_7;
	// System.Collections.Hashtable System.Net.HttpListener::registry
	Hashtable_t909839986 * ___registry_8;
	// System.Collections.ArrayList System.Net.HttpListener::ctx_queue
	ArrayList_t4252133567 * ___ctx_queue_9;
	// System.Collections.ArrayList System.Net.HttpListener::wait_queue
	ArrayList_t4252133567 * ___wait_queue_10;

public:
	inline static int32_t get_offset_of_auth_schemes_0() { return static_cast<int32_t>(offsetof(HttpListener_t4041012462, ___auth_schemes_0)); }
	inline int32_t get_auth_schemes_0() const { return ___auth_schemes_0; }
	inline int32_t* get_address_of_auth_schemes_0() { return &___auth_schemes_0; }
	inline void set_auth_schemes_0(int32_t value)
	{
		___auth_schemes_0 = value;
	}

	inline static int32_t get_offset_of_prefixes_1() { return static_cast<int32_t>(offsetof(HttpListener_t4041012462, ___prefixes_1)); }
	inline HttpListenerPrefixCollection_t3802522018 * get_prefixes_1() const { return ___prefixes_1; }
	inline HttpListenerPrefixCollection_t3802522018 ** get_address_of_prefixes_1() { return &___prefixes_1; }
	inline void set_prefixes_1(HttpListenerPrefixCollection_t3802522018 * value)
	{
		___prefixes_1 = value;
		Il2CppCodeGenWriteBarrier(&___prefixes_1, value);
	}

	inline static int32_t get_offset_of_auth_selector_2() { return static_cast<int32_t>(offsetof(HttpListener_t4041012462, ___auth_selector_2)); }
	inline AuthenticationSchemeSelector_t1076949500 * get_auth_selector_2() const { return ___auth_selector_2; }
	inline AuthenticationSchemeSelector_t1076949500 ** get_address_of_auth_selector_2() { return &___auth_selector_2; }
	inline void set_auth_selector_2(AuthenticationSchemeSelector_t1076949500 * value)
	{
		___auth_selector_2 = value;
		Il2CppCodeGenWriteBarrier(&___auth_selector_2, value);
	}

	inline static int32_t get_offset_of_realm_3() { return static_cast<int32_t>(offsetof(HttpListener_t4041012462, ___realm_3)); }
	inline String_t* get_realm_3() const { return ___realm_3; }
	inline String_t** get_address_of_realm_3() { return &___realm_3; }
	inline void set_realm_3(String_t* value)
	{
		___realm_3 = value;
		Il2CppCodeGenWriteBarrier(&___realm_3, value);
	}

	inline static int32_t get_offset_of_ignore_write_exceptions_4() { return static_cast<int32_t>(offsetof(HttpListener_t4041012462, ___ignore_write_exceptions_4)); }
	inline bool get_ignore_write_exceptions_4() const { return ___ignore_write_exceptions_4; }
	inline bool* get_address_of_ignore_write_exceptions_4() { return &___ignore_write_exceptions_4; }
	inline void set_ignore_write_exceptions_4(bool value)
	{
		___ignore_write_exceptions_4 = value;
	}

	inline static int32_t get_offset_of_unsafe_ntlm_auth_5() { return static_cast<int32_t>(offsetof(HttpListener_t4041012462, ___unsafe_ntlm_auth_5)); }
	inline bool get_unsafe_ntlm_auth_5() const { return ___unsafe_ntlm_auth_5; }
	inline bool* get_address_of_unsafe_ntlm_auth_5() { return &___unsafe_ntlm_auth_5; }
	inline void set_unsafe_ntlm_auth_5(bool value)
	{
		___unsafe_ntlm_auth_5 = value;
	}

	inline static int32_t get_offset_of_listening_6() { return static_cast<int32_t>(offsetof(HttpListener_t4041012462, ___listening_6)); }
	inline bool get_listening_6() const { return ___listening_6; }
	inline bool* get_address_of_listening_6() { return &___listening_6; }
	inline void set_listening_6(bool value)
	{
		___listening_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(HttpListener_t4041012462, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}

	inline static int32_t get_offset_of_registry_8() { return static_cast<int32_t>(offsetof(HttpListener_t4041012462, ___registry_8)); }
	inline Hashtable_t909839986 * get_registry_8() const { return ___registry_8; }
	inline Hashtable_t909839986 ** get_address_of_registry_8() { return &___registry_8; }
	inline void set_registry_8(Hashtable_t909839986 * value)
	{
		___registry_8 = value;
		Il2CppCodeGenWriteBarrier(&___registry_8, value);
	}

	inline static int32_t get_offset_of_ctx_queue_9() { return static_cast<int32_t>(offsetof(HttpListener_t4041012462, ___ctx_queue_9)); }
	inline ArrayList_t4252133567 * get_ctx_queue_9() const { return ___ctx_queue_9; }
	inline ArrayList_t4252133567 ** get_address_of_ctx_queue_9() { return &___ctx_queue_9; }
	inline void set_ctx_queue_9(ArrayList_t4252133567 * value)
	{
		___ctx_queue_9 = value;
		Il2CppCodeGenWriteBarrier(&___ctx_queue_9, value);
	}

	inline static int32_t get_offset_of_wait_queue_10() { return static_cast<int32_t>(offsetof(HttpListener_t4041012462, ___wait_queue_10)); }
	inline ArrayList_t4252133567 * get_wait_queue_10() const { return ___wait_queue_10; }
	inline ArrayList_t4252133567 ** get_address_of_wait_queue_10() { return &___wait_queue_10; }
	inline void set_wait_queue_10(ArrayList_t4252133567 * value)
	{
		___wait_queue_10 = value;
		Il2CppCodeGenWriteBarrier(&___wait_queue_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
