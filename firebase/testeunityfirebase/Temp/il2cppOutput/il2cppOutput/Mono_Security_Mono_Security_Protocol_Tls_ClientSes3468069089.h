#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ClientSessionInfo
struct  ClientSessionInfo_t3468069089  : public Il2CppObject
{
public:
	// System.Boolean Mono.Security.Protocol.Tls.ClientSessionInfo::disposed
	bool ___disposed_2;
	// System.DateTime Mono.Security.Protocol.Tls.ClientSessionInfo::validuntil
	DateTime_t693205669  ___validuntil_3;
	// System.String Mono.Security.Protocol.Tls.ClientSessionInfo::host
	String_t* ___host_4;
	// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionInfo::sid
	ByteU5BU5D_t3397334013* ___sid_5;
	// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionInfo::masterSecret
	ByteU5BU5D_t3397334013* ___masterSecret_6;

public:
	inline static int32_t get_offset_of_disposed_2() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t3468069089, ___disposed_2)); }
	inline bool get_disposed_2() const { return ___disposed_2; }
	inline bool* get_address_of_disposed_2() { return &___disposed_2; }
	inline void set_disposed_2(bool value)
	{
		___disposed_2 = value;
	}

	inline static int32_t get_offset_of_validuntil_3() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t3468069089, ___validuntil_3)); }
	inline DateTime_t693205669  get_validuntil_3() const { return ___validuntil_3; }
	inline DateTime_t693205669 * get_address_of_validuntil_3() { return &___validuntil_3; }
	inline void set_validuntil_3(DateTime_t693205669  value)
	{
		___validuntil_3 = value;
	}

	inline static int32_t get_offset_of_host_4() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t3468069089, ___host_4)); }
	inline String_t* get_host_4() const { return ___host_4; }
	inline String_t** get_address_of_host_4() { return &___host_4; }
	inline void set_host_4(String_t* value)
	{
		___host_4 = value;
		Il2CppCodeGenWriteBarrier(&___host_4, value);
	}

	inline static int32_t get_offset_of_sid_5() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t3468069089, ___sid_5)); }
	inline ByteU5BU5D_t3397334013* get_sid_5() const { return ___sid_5; }
	inline ByteU5BU5D_t3397334013** get_address_of_sid_5() { return &___sid_5; }
	inline void set_sid_5(ByteU5BU5D_t3397334013* value)
	{
		___sid_5 = value;
		Il2CppCodeGenWriteBarrier(&___sid_5, value);
	}

	inline static int32_t get_offset_of_masterSecret_6() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t3468069089, ___masterSecret_6)); }
	inline ByteU5BU5D_t3397334013* get_masterSecret_6() const { return ___masterSecret_6; }
	inline ByteU5BU5D_t3397334013** get_address_of_masterSecret_6() { return &___masterSecret_6; }
	inline void set_masterSecret_6(ByteU5BU5D_t3397334013* value)
	{
		___masterSecret_6 = value;
		Il2CppCodeGenWriteBarrier(&___masterSecret_6, value);
	}
};

struct ClientSessionInfo_t3468069089_StaticFields
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.ClientSessionInfo::ValidityInterval
	int32_t ___ValidityInterval_1;

public:
	inline static int32_t get_offset_of_ValidityInterval_1() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t3468069089_StaticFields, ___ValidityInterval_1)); }
	inline int32_t get_ValidityInterval_1() const { return ___ValidityInterval_1; }
	inline int32_t* get_address_of_ValidityInterval_1() { return &___ValidityInterval_1; }
	inline void set_ValidityInterval_1(int32_t value)
	{
		___ValidityInterval_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
