#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake3938752374.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityC3722381418.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t491456551;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
struct  TlsServerHello_t1289300668  : public HandshakeMessage_t3938752374
{
public:
	// Mono.Security.Protocol.Tls.SecurityCompressionType Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::compressionMethod
	int32_t ___compressionMethod_11;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::random
	ByteU5BU5D_t3397334013* ___random_12;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::sessionId
	ByteU5BU5D_t3397334013* ___sessionId_13;
	// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::cipherSuite
	CipherSuite_t491456551 * ___cipherSuite_14;

public:
	inline static int32_t get_offset_of_compressionMethod_11() { return static_cast<int32_t>(offsetof(TlsServerHello_t1289300668, ___compressionMethod_11)); }
	inline int32_t get_compressionMethod_11() const { return ___compressionMethod_11; }
	inline int32_t* get_address_of_compressionMethod_11() { return &___compressionMethod_11; }
	inline void set_compressionMethod_11(int32_t value)
	{
		___compressionMethod_11 = value;
	}

	inline static int32_t get_offset_of_random_12() { return static_cast<int32_t>(offsetof(TlsServerHello_t1289300668, ___random_12)); }
	inline ByteU5BU5D_t3397334013* get_random_12() const { return ___random_12; }
	inline ByteU5BU5D_t3397334013** get_address_of_random_12() { return &___random_12; }
	inline void set_random_12(ByteU5BU5D_t3397334013* value)
	{
		___random_12 = value;
		Il2CppCodeGenWriteBarrier(&___random_12, value);
	}

	inline static int32_t get_offset_of_sessionId_13() { return static_cast<int32_t>(offsetof(TlsServerHello_t1289300668, ___sessionId_13)); }
	inline ByteU5BU5D_t3397334013* get_sessionId_13() const { return ___sessionId_13; }
	inline ByteU5BU5D_t3397334013** get_address_of_sessionId_13() { return &___sessionId_13; }
	inline void set_sessionId_13(ByteU5BU5D_t3397334013* value)
	{
		___sessionId_13 = value;
		Il2CppCodeGenWriteBarrier(&___sessionId_13, value);
	}

	inline static int32_t get_offset_of_cipherSuite_14() { return static_cast<int32_t>(offsetof(TlsServerHello_t1289300668, ___cipherSuite_14)); }
	inline CipherSuite_t491456551 * get_cipherSuite_14() const { return ___cipherSuite_14; }
	inline CipherSuite_t491456551 ** get_address_of_cipherSuite_14() { return &___cipherSuite_14; }
	inline void set_cipherSuite_14(CipherSuite_t491456551 * value)
	{
		___cipherSuite_14 = value;
		Il2CppCodeGenWriteBarrier(&___cipherSuite_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
