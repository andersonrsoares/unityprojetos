#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.X509IssuerSerial
struct  X509IssuerSerial_t1582182491 
{
public:
	// System.String System.Security.Cryptography.Xml.X509IssuerSerial::_issuerName
	String_t* ____issuerName_0;
	// System.String System.Security.Cryptography.Xml.X509IssuerSerial::_serialNumber
	String_t* ____serialNumber_1;

public:
	inline static int32_t get_offset_of__issuerName_0() { return static_cast<int32_t>(offsetof(X509IssuerSerial_t1582182491, ____issuerName_0)); }
	inline String_t* get__issuerName_0() const { return ____issuerName_0; }
	inline String_t** get_address_of__issuerName_0() { return &____issuerName_0; }
	inline void set__issuerName_0(String_t* value)
	{
		____issuerName_0 = value;
		Il2CppCodeGenWriteBarrier(&____issuerName_0, value);
	}

	inline static int32_t get_offset_of__serialNumber_1() { return static_cast<int32_t>(offsetof(X509IssuerSerial_t1582182491, ____serialNumber_1)); }
	inline String_t* get__serialNumber_1() const { return ____serialNumber_1; }
	inline String_t** get_address_of__serialNumber_1() { return &____serialNumber_1; }
	inline void set__serialNumber_1(String_t* value)
	{
		____serialNumber_1 = value;
		Il2CppCodeGenWriteBarrier(&____serialNumber_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.Xml.X509IssuerSerial
struct X509IssuerSerial_t1582182491_marshaled_pinvoke
{
	char* ____issuerName_0;
	char* ____serialNumber_1;
};
// Native definition for COM marshalling of System.Security.Cryptography.Xml.X509IssuerSerial
struct X509IssuerSerial_t1582182491_marshaled_com
{
	Il2CppChar* ____issuerName_0;
	Il2CppChar* ____serialNumber_1;
};
