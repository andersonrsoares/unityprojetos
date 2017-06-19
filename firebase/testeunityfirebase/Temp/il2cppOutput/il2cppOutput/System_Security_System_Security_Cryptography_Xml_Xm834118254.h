#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Security_System_Security_Cryptography_Xml_Tr729562346.h"

// Mono.Xml.XmlCanonicalizer
struct XmlCanonicalizer_t2205787307;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.XmlDsigExcC14NTransform
struct  XmlDsigExcC14NTransform_t834118254  : public Transform_t729562346
{
public:
	// Mono.Xml.XmlCanonicalizer System.Security.Cryptography.Xml.XmlDsigExcC14NTransform::canonicalizer
	XmlCanonicalizer_t2205787307 * ___canonicalizer_3;
	// System.String System.Security.Cryptography.Xml.XmlDsigExcC14NTransform::inclusiveNamespacesPrefixList
	String_t* ___inclusiveNamespacesPrefixList_4;

public:
	inline static int32_t get_offset_of_canonicalizer_3() { return static_cast<int32_t>(offsetof(XmlDsigExcC14NTransform_t834118254, ___canonicalizer_3)); }
	inline XmlCanonicalizer_t2205787307 * get_canonicalizer_3() const { return ___canonicalizer_3; }
	inline XmlCanonicalizer_t2205787307 ** get_address_of_canonicalizer_3() { return &___canonicalizer_3; }
	inline void set_canonicalizer_3(XmlCanonicalizer_t2205787307 * value)
	{
		___canonicalizer_3 = value;
		Il2CppCodeGenWriteBarrier(&___canonicalizer_3, value);
	}

	inline static int32_t get_offset_of_inclusiveNamespacesPrefixList_4() { return static_cast<int32_t>(offsetof(XmlDsigExcC14NTransform_t834118254, ___inclusiveNamespacesPrefixList_4)); }
	inline String_t* get_inclusiveNamespacesPrefixList_4() const { return ___inclusiveNamespacesPrefixList_4; }
	inline String_t** get_address_of_inclusiveNamespacesPrefixList_4() { return &___inclusiveNamespacesPrefixList_4; }
	inline void set_inclusiveNamespacesPrefixList_4(String_t* value)
	{
		___inclusiveNamespacesPrefixList_4 = value;
		Il2CppCodeGenWriteBarrier(&___inclusiveNamespacesPrefixList_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
