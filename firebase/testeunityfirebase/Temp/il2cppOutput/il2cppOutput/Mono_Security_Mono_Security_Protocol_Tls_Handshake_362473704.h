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
// System.Int16[]
struct Int16U5BU5D_t3104283263;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello
struct  TlsClientHello_t362473704  : public HandshakeMessage_t3938752374
{
public:
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::random
	ByteU5BU5D_t3397334013* ___random_11;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::sessionId
	ByteU5BU5D_t3397334013* ___sessionId_12;
	// System.Int16[] Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::cipherSuites
	Int16U5BU5D_t3104283263* ___cipherSuites_13;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::compressionMethods
	ByteU5BU5D_t3397334013* ___compressionMethods_14;

public:
	inline static int32_t get_offset_of_random_11() { return static_cast<int32_t>(offsetof(TlsClientHello_t362473704, ___random_11)); }
	inline ByteU5BU5D_t3397334013* get_random_11() const { return ___random_11; }
	inline ByteU5BU5D_t3397334013** get_address_of_random_11() { return &___random_11; }
	inline void set_random_11(ByteU5BU5D_t3397334013* value)
	{
		___random_11 = value;
		Il2CppCodeGenWriteBarrier(&___random_11, value);
	}

	inline static int32_t get_offset_of_sessionId_12() { return static_cast<int32_t>(offsetof(TlsClientHello_t362473704, ___sessionId_12)); }
	inline ByteU5BU5D_t3397334013* get_sessionId_12() const { return ___sessionId_12; }
	inline ByteU5BU5D_t3397334013** get_address_of_sessionId_12() { return &___sessionId_12; }
	inline void set_sessionId_12(ByteU5BU5D_t3397334013* value)
	{
		___sessionId_12 = value;
		Il2CppCodeGenWriteBarrier(&___sessionId_12, value);
	}

	inline static int32_t get_offset_of_cipherSuites_13() { return static_cast<int32_t>(offsetof(TlsClientHello_t362473704, ___cipherSuites_13)); }
	inline Int16U5BU5D_t3104283263* get_cipherSuites_13() const { return ___cipherSuites_13; }
	inline Int16U5BU5D_t3104283263** get_address_of_cipherSuites_13() { return &___cipherSuites_13; }
	inline void set_cipherSuites_13(Int16U5BU5D_t3104283263* value)
	{
		___cipherSuites_13 = value;
		Il2CppCodeGenWriteBarrier(&___cipherSuites_13, value);
	}

	inline static int32_t get_offset_of_compressionMethods_14() { return static_cast<int32_t>(offsetof(TlsClientHello_t362473704, ___compressionMethods_14)); }
	inline ByteU5BU5D_t3397334013* get_compressionMethods_14() const { return ___compressionMethods_14; }
	inline ByteU5BU5D_t3397334013** get_address_of_compressionMethods_14() { return &___compressionMethods_14; }
	inline void set_compressionMethods_14(ByteU5BU5D_t3397334013* value)
	{
		___compressionMethods_14 = value;
		Il2CppCodeGenWriteBarrier(&___compressionMethods_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
