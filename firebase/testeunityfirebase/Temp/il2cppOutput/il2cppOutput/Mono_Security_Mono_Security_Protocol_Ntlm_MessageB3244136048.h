#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "Mono_Security_Mono_Security_Protocol_Ntlm_NtlmFlag1066937602.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Ntlm.MessageBase
struct  MessageBase_t3244136048  : public Il2CppObject
{
public:
	// System.Int32 Mono.Security.Protocol.Ntlm.MessageBase::_type
	int32_t ____type_1;
	// Mono.Security.Protocol.Ntlm.NtlmFlags Mono.Security.Protocol.Ntlm.MessageBase::_flags
	int32_t ____flags_2;

public:
	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(MessageBase_t3244136048, ____type_1)); }
	inline int32_t get__type_1() const { return ____type_1; }
	inline int32_t* get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(int32_t value)
	{
		____type_1 = value;
	}

	inline static int32_t get_offset_of__flags_2() { return static_cast<int32_t>(offsetof(MessageBase_t3244136048, ____flags_2)); }
	inline int32_t get__flags_2() const { return ____flags_2; }
	inline int32_t* get_address_of__flags_2() { return &____flags_2; }
	inline void set__flags_2(int32_t value)
	{
		____flags_2 = value;
	}
};

struct MessageBase_t3244136048_StaticFields
{
public:
	// System.Byte[] Mono.Security.Protocol.Ntlm.MessageBase::header
	ByteU5BU5D_t3397334013* ___header_0;

public:
	inline static int32_t get_offset_of_header_0() { return static_cast<int32_t>(offsetof(MessageBase_t3244136048_StaticFields, ___header_0)); }
	inline ByteU5BU5D_t3397334013* get_header_0() const { return ___header_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_header_0() { return &___header_0; }
	inline void set_header_0(ByteU5BU5D_t3397334013* value)
	{
		___header_0 = value;
		Il2CppCodeGenWriteBarrier(&___header_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
