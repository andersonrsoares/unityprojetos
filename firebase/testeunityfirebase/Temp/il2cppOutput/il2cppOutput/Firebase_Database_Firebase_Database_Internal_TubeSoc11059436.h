#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Random
struct Random_t1044426839;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t1943082916;
// System.String
struct String_t;
// System.Uri
struct Uri_t19570940;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.TubeSock.WebSocketHandshake
struct  WebSocketHandshake_t11059436  : public Il2CppObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Firebase.Database.Internal.TubeSock.WebSocketHandshake::_extraHeaders
	Il2CppObject* ____extraHeaders_1;
	// System.String Firebase.Database.Internal.TubeSock.WebSocketHandshake::_nonce
	String_t* ____nonce_2;
	// System.String Firebase.Database.Internal.TubeSock.WebSocketHandshake::_protocol
	String_t* ____protocol_3;
	// System.Uri Firebase.Database.Internal.TubeSock.WebSocketHandshake::_url
	Uri_t19570940 * ____url_4;

public:
	inline static int32_t get_offset_of__extraHeaders_1() { return static_cast<int32_t>(offsetof(WebSocketHandshake_t11059436, ____extraHeaders_1)); }
	inline Il2CppObject* get__extraHeaders_1() const { return ____extraHeaders_1; }
	inline Il2CppObject** get_address_of__extraHeaders_1() { return &____extraHeaders_1; }
	inline void set__extraHeaders_1(Il2CppObject* value)
	{
		____extraHeaders_1 = value;
		Il2CppCodeGenWriteBarrier(&____extraHeaders_1, value);
	}

	inline static int32_t get_offset_of__nonce_2() { return static_cast<int32_t>(offsetof(WebSocketHandshake_t11059436, ____nonce_2)); }
	inline String_t* get__nonce_2() const { return ____nonce_2; }
	inline String_t** get_address_of__nonce_2() { return &____nonce_2; }
	inline void set__nonce_2(String_t* value)
	{
		____nonce_2 = value;
		Il2CppCodeGenWriteBarrier(&____nonce_2, value);
	}

	inline static int32_t get_offset_of__protocol_3() { return static_cast<int32_t>(offsetof(WebSocketHandshake_t11059436, ____protocol_3)); }
	inline String_t* get__protocol_3() const { return ____protocol_3; }
	inline String_t** get_address_of__protocol_3() { return &____protocol_3; }
	inline void set__protocol_3(String_t* value)
	{
		____protocol_3 = value;
		Il2CppCodeGenWriteBarrier(&____protocol_3, value);
	}

	inline static int32_t get_offset_of__url_4() { return static_cast<int32_t>(offsetof(WebSocketHandshake_t11059436, ____url_4)); }
	inline Uri_t19570940 * get__url_4() const { return ____url_4; }
	inline Uri_t19570940 ** get_address_of__url_4() { return &____url_4; }
	inline void set__url_4(Uri_t19570940 * value)
	{
		____url_4 = value;
		Il2CppCodeGenWriteBarrier(&____url_4, value);
	}
};

struct WebSocketHandshake_t11059436_StaticFields
{
public:
	// System.Random Firebase.Database.Internal.TubeSock.WebSocketHandshake::Random
	Random_t1044426839 * ___Random_0;

public:
	inline static int32_t get_offset_of_Random_0() { return static_cast<int32_t>(offsetof(WebSocketHandshake_t11059436_StaticFields, ___Random_0)); }
	inline Random_t1044426839 * get_Random_0() const { return ___Random_0; }
	inline Random_t1044426839 ** get_address_of_Random_0() { return &___Random_0; }
	inline void set_Random_0(Random_t1044426839 * value)
	{
		___Random_0 = value;
		Il2CppCodeGenWriteBarrier(&___Random_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
