#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mono_Security_Mono_Security_Protocol_Tls_Context4285182719.h"

// Mono.Security.Protocol.Tls.SslServerStream
struct SslServerStream_t330206493;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ServerContext
struct  ServerContext_t3823737132  : public Context_t4285182719
{
public:
	// Mono.Security.Protocol.Tls.SslServerStream Mono.Security.Protocol.Tls.ServerContext::sslStream
	SslServerStream_t330206493 * ___sslStream_34;
	// System.Boolean Mono.Security.Protocol.Tls.ServerContext::request_client_certificate
	bool ___request_client_certificate_35;
	// System.Boolean Mono.Security.Protocol.Tls.ServerContext::clientCertificateRequired
	bool ___clientCertificateRequired_36;

public:
	inline static int32_t get_offset_of_sslStream_34() { return static_cast<int32_t>(offsetof(ServerContext_t3823737132, ___sslStream_34)); }
	inline SslServerStream_t330206493 * get_sslStream_34() const { return ___sslStream_34; }
	inline SslServerStream_t330206493 ** get_address_of_sslStream_34() { return &___sslStream_34; }
	inline void set_sslStream_34(SslServerStream_t330206493 * value)
	{
		___sslStream_34 = value;
		Il2CppCodeGenWriteBarrier(&___sslStream_34, value);
	}

	inline static int32_t get_offset_of_request_client_certificate_35() { return static_cast<int32_t>(offsetof(ServerContext_t3823737132, ___request_client_certificate_35)); }
	inline bool get_request_client_certificate_35() const { return ___request_client_certificate_35; }
	inline bool* get_address_of_request_client_certificate_35() { return &___request_client_certificate_35; }
	inline void set_request_client_certificate_35(bool value)
	{
		___request_client_certificate_35 = value;
	}

	inline static int32_t get_offset_of_clientCertificateRequired_36() { return static_cast<int32_t>(offsetof(ServerContext_t3823737132, ___clientCertificateRequired_36)); }
	inline bool get_clientCertificateRequired_36() const { return ___clientCertificateRequired_36; }
	inline bool* get_address_of_clientCertificateRequired_36() { return &___clientCertificateRequired_36; }
	inline void set_clientCertificateRequired_36(bool value)
	{
		___clientCertificateRequired_36 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
