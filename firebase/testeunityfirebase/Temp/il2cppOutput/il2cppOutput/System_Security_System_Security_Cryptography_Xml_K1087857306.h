#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Security_System_Security_Cryptography_Xml_Ke279567104.h"

// System.String
struct String_t;
// System.Xml.XmlElement
struct XmlElement_t2877111883;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.KeyInfoRetrievalMethod
struct  KeyInfoRetrievalMethod_t1087857306  : public KeyInfoClause_t279567104
{
public:
	// System.String System.Security.Cryptography.Xml.KeyInfoRetrievalMethod::URI
	String_t* ___URI_0;
	// System.Xml.XmlElement System.Security.Cryptography.Xml.KeyInfoRetrievalMethod::element
	XmlElement_t2877111883 * ___element_1;
	// System.String System.Security.Cryptography.Xml.KeyInfoRetrievalMethod::type
	String_t* ___type_2;

public:
	inline static int32_t get_offset_of_URI_0() { return static_cast<int32_t>(offsetof(KeyInfoRetrievalMethod_t1087857306, ___URI_0)); }
	inline String_t* get_URI_0() const { return ___URI_0; }
	inline String_t** get_address_of_URI_0() { return &___URI_0; }
	inline void set_URI_0(String_t* value)
	{
		___URI_0 = value;
		Il2CppCodeGenWriteBarrier(&___URI_0, value);
	}

	inline static int32_t get_offset_of_element_1() { return static_cast<int32_t>(offsetof(KeyInfoRetrievalMethod_t1087857306, ___element_1)); }
	inline XmlElement_t2877111883 * get_element_1() const { return ___element_1; }
	inline XmlElement_t2877111883 ** get_address_of_element_1() { return &___element_1; }
	inline void set_element_1(XmlElement_t2877111883 * value)
	{
		___element_1 = value;
		Il2CppCodeGenWriteBarrier(&___element_1, value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(KeyInfoRetrievalMethod_t1087857306, ___type_2)); }
	inline String_t* get_type_2() const { return ___type_2; }
	inline String_t** get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(String_t* value)
	{
		___type_2 = value;
		Il2CppCodeGenWriteBarrier(&___type_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
