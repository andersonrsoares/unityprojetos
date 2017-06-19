#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Security_System_Security_Cryptography_Xml_Ke279567104.h"

// System.Security.Cryptography.RSA
struct RSA_t3719518354;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.RSAKeyValue
struct  RSAKeyValue_t2328376860  : public KeyInfoClause_t279567104
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.Xml.RSAKeyValue::rsa
	RSA_t3719518354 * ___rsa_0;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAKeyValue_t2328376860, ___rsa_0)); }
	inline RSA_t3719518354 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t3719518354 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t3719518354 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier(&___rsa_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
