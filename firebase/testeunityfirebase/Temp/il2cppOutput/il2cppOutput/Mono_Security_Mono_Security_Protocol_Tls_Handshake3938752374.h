#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStream4089752859.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake2540099417.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentTyp859870085.h"

// Mono.Security.Protocol.Tls.Context
struct Context_t4285182719;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct  HandshakeMessage_t3938752374  : public TlsStream_t4089752859
{
public:
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::context
	Context_t4285182719 * ___context_7;
	// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::handshakeType
	uint8_t ___handshakeType_8;
	// Mono.Security.Protocol.Tls.ContentType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::contentType
	uint8_t ___contentType_9;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::cache
	ByteU5BU5D_t3397334013* ___cache_10;

public:
	inline static int32_t get_offset_of_context_7() { return static_cast<int32_t>(offsetof(HandshakeMessage_t3938752374, ___context_7)); }
	inline Context_t4285182719 * get_context_7() const { return ___context_7; }
	inline Context_t4285182719 ** get_address_of_context_7() { return &___context_7; }
	inline void set_context_7(Context_t4285182719 * value)
	{
		___context_7 = value;
		Il2CppCodeGenWriteBarrier(&___context_7, value);
	}

	inline static int32_t get_offset_of_handshakeType_8() { return static_cast<int32_t>(offsetof(HandshakeMessage_t3938752374, ___handshakeType_8)); }
	inline uint8_t get_handshakeType_8() const { return ___handshakeType_8; }
	inline uint8_t* get_address_of_handshakeType_8() { return &___handshakeType_8; }
	inline void set_handshakeType_8(uint8_t value)
	{
		___handshakeType_8 = value;
	}

	inline static int32_t get_offset_of_contentType_9() { return static_cast<int32_t>(offsetof(HandshakeMessage_t3938752374, ___contentType_9)); }
	inline uint8_t get_contentType_9() const { return ___contentType_9; }
	inline uint8_t* get_address_of_contentType_9() { return &___contentType_9; }
	inline void set_contentType_9(uint8_t value)
	{
		___contentType_9 = value;
	}

	inline static int32_t get_offset_of_cache_10() { return static_cast<int32_t>(offsetof(HandshakeMessage_t3938752374, ___cache_10)); }
	inline ByteU5BU5D_t3397334013* get_cache_10() const { return ___cache_10; }
	inline ByteU5BU5D_t3397334013** get_address_of_cache_10() { return &___cache_10; }
	inline void set_cache_10(ByteU5BU5D_t3397334013* value)
	{
		___cache_10 = value;
		Il2CppCodeGenWriteBarrier(&___cache_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
