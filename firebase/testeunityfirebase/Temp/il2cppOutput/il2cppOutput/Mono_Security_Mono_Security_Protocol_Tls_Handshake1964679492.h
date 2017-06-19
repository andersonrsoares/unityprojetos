#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake3938752374.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHello
struct  TlsServerHello_t1964679492  : public HandshakeMessage_t3938752374
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHello::unixTime
	int32_t ___unixTime_11;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHello::random
	ByteU5BU5D_t3397334013* ___random_12;

public:
	inline static int32_t get_offset_of_unixTime_11() { return static_cast<int32_t>(offsetof(TlsServerHello_t1964679492, ___unixTime_11)); }
	inline int32_t get_unixTime_11() const { return ___unixTime_11; }
	inline int32_t* get_address_of_unixTime_11() { return &___unixTime_11; }
	inline void set_unixTime_11(int32_t value)
	{
		___unixTime_11 = value;
	}

	inline static int32_t get_offset_of_random_12() { return static_cast<int32_t>(offsetof(TlsServerHello_t1964679492, ___random_12)); }
	inline ByteU5BU5D_t3397334013* get_random_12() const { return ___random_12; }
	inline ByteU5BU5D_t3397334013** get_address_of_random_12() { return &___random_12; }
	inline void set_random_12(ByteU5BU5D_t3397334013* value)
	{
		___random_12 = value;
		Il2CppCodeGenWriteBarrier(&___random_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
