#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mono_Security_Mono_Security_Protocol_Ntlm_MessageB3244136048.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Ntlm.Type2Message
struct  Type2Message_t1242122263  : public MessageBase_t3244136048
{
public:
	// System.Byte[] Mono.Security.Protocol.Ntlm.Type2Message::_nonce
	ByteU5BU5D_t3397334013* ____nonce_3;

public:
	inline static int32_t get_offset_of__nonce_3() { return static_cast<int32_t>(offsetof(Type2Message_t1242122263, ____nonce_3)); }
	inline ByteU5BU5D_t3397334013* get__nonce_3() const { return ____nonce_3; }
	inline ByteU5BU5D_t3397334013** get_address_of__nonce_3() { return &____nonce_3; }
	inline void set__nonce_3(ByteU5BU5D_t3397334013* value)
	{
		____nonce_3 = value;
		Il2CppCodeGenWriteBarrier(&____nonce_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
