#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Net.HttpListenerRequest
struct HttpListenerRequest_t3367008939;
// System.Net.HttpListenerResponse
struct HttpListenerResponse_t3926738757;
// System.Security.Principal.IPrincipal
struct IPrincipal_t783141777;
// System.Net.HttpConnection
struct HttpConnection_t1376630038;
// System.String
struct String_t;
// System.Net.HttpListener
struct HttpListener_t4041012462;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpListenerContext
struct  HttpListenerContext_t506453093  : public Il2CppObject
{
public:
	// System.Net.HttpListenerRequest System.Net.HttpListenerContext::request
	HttpListenerRequest_t3367008939 * ___request_0;
	// System.Net.HttpListenerResponse System.Net.HttpListenerContext::response
	HttpListenerResponse_t3926738757 * ___response_1;
	// System.Security.Principal.IPrincipal System.Net.HttpListenerContext::user
	Il2CppObject * ___user_2;
	// System.Net.HttpConnection System.Net.HttpListenerContext::cnc
	HttpConnection_t1376630038 * ___cnc_3;
	// System.String System.Net.HttpListenerContext::error
	String_t* ___error_4;
	// System.Int32 System.Net.HttpListenerContext::err_status
	int32_t ___err_status_5;
	// System.Net.HttpListener System.Net.HttpListenerContext::Listener
	HttpListener_t4041012462 * ___Listener_6;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(HttpListenerContext_t506453093, ___request_0)); }
	inline HttpListenerRequest_t3367008939 * get_request_0() const { return ___request_0; }
	inline HttpListenerRequest_t3367008939 ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(HttpListenerRequest_t3367008939 * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier(&___request_0, value);
	}

	inline static int32_t get_offset_of_response_1() { return static_cast<int32_t>(offsetof(HttpListenerContext_t506453093, ___response_1)); }
	inline HttpListenerResponse_t3926738757 * get_response_1() const { return ___response_1; }
	inline HttpListenerResponse_t3926738757 ** get_address_of_response_1() { return &___response_1; }
	inline void set_response_1(HttpListenerResponse_t3926738757 * value)
	{
		___response_1 = value;
		Il2CppCodeGenWriteBarrier(&___response_1, value);
	}

	inline static int32_t get_offset_of_user_2() { return static_cast<int32_t>(offsetof(HttpListenerContext_t506453093, ___user_2)); }
	inline Il2CppObject * get_user_2() const { return ___user_2; }
	inline Il2CppObject ** get_address_of_user_2() { return &___user_2; }
	inline void set_user_2(Il2CppObject * value)
	{
		___user_2 = value;
		Il2CppCodeGenWriteBarrier(&___user_2, value);
	}

	inline static int32_t get_offset_of_cnc_3() { return static_cast<int32_t>(offsetof(HttpListenerContext_t506453093, ___cnc_3)); }
	inline HttpConnection_t1376630038 * get_cnc_3() const { return ___cnc_3; }
	inline HttpConnection_t1376630038 ** get_address_of_cnc_3() { return &___cnc_3; }
	inline void set_cnc_3(HttpConnection_t1376630038 * value)
	{
		___cnc_3 = value;
		Il2CppCodeGenWriteBarrier(&___cnc_3, value);
	}

	inline static int32_t get_offset_of_error_4() { return static_cast<int32_t>(offsetof(HttpListenerContext_t506453093, ___error_4)); }
	inline String_t* get_error_4() const { return ___error_4; }
	inline String_t** get_address_of_error_4() { return &___error_4; }
	inline void set_error_4(String_t* value)
	{
		___error_4 = value;
		Il2CppCodeGenWriteBarrier(&___error_4, value);
	}

	inline static int32_t get_offset_of_err_status_5() { return static_cast<int32_t>(offsetof(HttpListenerContext_t506453093, ___err_status_5)); }
	inline int32_t get_err_status_5() const { return ___err_status_5; }
	inline int32_t* get_address_of_err_status_5() { return &___err_status_5; }
	inline void set_err_status_5(int32_t value)
	{
		___err_status_5 = value;
	}

	inline static int32_t get_offset_of_Listener_6() { return static_cast<int32_t>(offsetof(HttpListenerContext_t506453093, ___Listener_6)); }
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
