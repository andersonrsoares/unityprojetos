#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_IntPtr2504060609.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate/CertificateContext
struct  CertificateContext_t3886519681 
{
public:
	// System.UInt32 System.Security.Cryptography.X509Certificates.X509Certificate/CertificateContext::dwCertEncodingType
	uint32_t ___dwCertEncodingType_0;
	// System.IntPtr System.Security.Cryptography.X509Certificates.X509Certificate/CertificateContext::pbCertEncoded
	IntPtr_t ___pbCertEncoded_1;
	// System.UInt32 System.Security.Cryptography.X509Certificates.X509Certificate/CertificateContext::cbCertEncoded
	uint32_t ___cbCertEncoded_2;
	// System.IntPtr System.Security.Cryptography.X509Certificates.X509Certificate/CertificateContext::pCertInfo
	IntPtr_t ___pCertInfo_3;
	// System.IntPtr System.Security.Cryptography.X509Certificates.X509Certificate/CertificateContext::hCertStore
	IntPtr_t ___hCertStore_4;

public:
	inline static int32_t get_offset_of_dwCertEncodingType_0() { return static_cast<int32_t>(offsetof(CertificateContext_t3886519681, ___dwCertEncodingType_0)); }
	inline uint32_t get_dwCertEncodingType_0() const { return ___dwCertEncodingType_0; }
	inline uint32_t* get_address_of_dwCertEncodingType_0() { return &___dwCertEncodingType_0; }
	inline void set_dwCertEncodingType_0(uint32_t value)
	{
		___dwCertEncodingType_0 = value;
	}

	inline static int32_t get_offset_of_pbCertEncoded_1() { return static_cast<int32_t>(offsetof(CertificateContext_t3886519681, ___pbCertEncoded_1)); }
	inline IntPtr_t get_pbCertEncoded_1() const { return ___pbCertEncoded_1; }
	inline IntPtr_t* get_address_of_pbCertEncoded_1() { return &___pbCertEncoded_1; }
	inline void set_pbCertEncoded_1(IntPtr_t value)
	{
		___pbCertEncoded_1 = value;
	}

	inline static int32_t get_offset_of_cbCertEncoded_2() { return static_cast<int32_t>(offsetof(CertificateContext_t3886519681, ___cbCertEncoded_2)); }
	inline uint32_t get_cbCertEncoded_2() const { return ___cbCertEncoded_2; }
	inline uint32_t* get_address_of_cbCertEncoded_2() { return &___cbCertEncoded_2; }
	inline void set_cbCertEncoded_2(uint32_t value)
	{
		___cbCertEncoded_2 = value;
	}

	inline static int32_t get_offset_of_pCertInfo_3() { return static_cast<int32_t>(offsetof(CertificateContext_t3886519681, ___pCertInfo_3)); }
	inline IntPtr_t get_pCertInfo_3() const { return ___pCertInfo_3; }
	inline IntPtr_t* get_address_of_pCertInfo_3() { return &___pCertInfo_3; }
	inline void set_pCertInfo_3(IntPtr_t value)
	{
		___pCertInfo_3 = value;
	}

	inline static int32_t get_offset_of_hCertStore_4() { return static_cast<int32_t>(offsetof(CertificateContext_t3886519681, ___hCertStore_4)); }
	inline IntPtr_t get_hCertStore_4() const { return ___hCertStore_4; }
	inline IntPtr_t* get_address_of_hCertStore_4() { return &___hCertStore_4; }
	inline void set_hCertStore_4(IntPtr_t value)
	{
		___hCertStore_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
