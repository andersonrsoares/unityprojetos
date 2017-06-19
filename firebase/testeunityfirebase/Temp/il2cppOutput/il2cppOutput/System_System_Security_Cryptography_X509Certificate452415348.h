#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Security_Cryptography_AsnEncodedData463456204.h"
#include "System_System_Security_Cryptography_X509Certificat2005802885.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct  X500DistinguishedName_t452415348  : public AsnEncodedData_t463456204
{
public:
	// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::name
	String_t* ___name_4;

public:
	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(X500DistinguishedName_t452415348, ___name_4)); }
	inline String_t* get_name_4() const { return ___name_4; }
	inline String_t** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(String_t* value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier(&___name_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
