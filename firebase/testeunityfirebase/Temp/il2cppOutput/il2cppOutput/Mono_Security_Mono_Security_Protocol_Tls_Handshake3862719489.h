#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake3938752374.h"

// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3592472866;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate
struct  TlsClientCertificate_t3862719489  : public HandshakeMessage_t3938752374
{
public:
	// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::clientCertificates
	X509CertificateCollection_t3592472866 * ___clientCertificates_11;

public:
	inline static int32_t get_offset_of_clientCertificates_11() { return static_cast<int32_t>(offsetof(TlsClientCertificate_t3862719489, ___clientCertificates_11)); }
	inline X509CertificateCollection_t3592472866 * get_clientCertificates_11() const { return ___clientCertificates_11; }
	inline X509CertificateCollection_t3592472866 ** get_address_of_clientCertificates_11() { return &___clientCertificates_11; }
	inline void set_clientCertificates_11(X509CertificateCollection_t3592472866 * value)
	{
		___clientCertificates_11 = value;
		Il2CppCodeGenWriteBarrier(&___clientCertificates_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
