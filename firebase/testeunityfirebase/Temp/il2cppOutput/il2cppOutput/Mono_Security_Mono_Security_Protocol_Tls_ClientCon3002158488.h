#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mono_Security_Mono_Security_Protocol_Tls_Context4285182719.h"

// Mono.Security.Protocol.Tls.SslClientStream
struct SslClientStream_t3918817353;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ClientContext
struct  ClientContext_t3002158488  : public Context_t4285182719
{
public:
	// Mono.Security.Protocol.Tls.SslClientStream Mono.Security.Protocol.Tls.ClientContext::sslStream
	SslClientStream_t3918817353 * ___sslStream_34;
	// System.Int16 Mono.Security.Protocol.Tls.ClientContext::clientHelloProtocol
	int16_t ___clientHelloProtocol_35;

public:
	inline static int32_t get_offset_of_sslStream_34() { return static_cast<int32_t>(offsetof(ClientContext_t3002158488, ___sslStream_34)); }
	inline SslClientStream_t3918817353 * get_sslStream_34() const { return ___sslStream_34; }
	inline SslClientStream_t3918817353 ** get_address_of_sslStream_34() { return &___sslStream_34; }
	inline void set_sslStream_34(SslClientStream_t3918817353 * value)
	{
		___sslStream_34 = value;
		Il2CppCodeGenWriteBarrier(&___sslStream_34, value);
	}

	inline static int32_t get_offset_of_clientHelloProtocol_35() { return static_cast<int32_t>(offsetof(ClientContext_t3002158488, ___clientHelloProtocol_35)); }
	inline int16_t get_clientHelloProtocol_35() const { return ___clientHelloProtocol_35; }
	inline int16_t* get_address_of_clientHelloProtocol_35() { return &___clientHelloProtocol_35; }
	inline void set_clientHelloProtocol_35(int16_t value)
	{
		___clientHelloProtocol_35 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
