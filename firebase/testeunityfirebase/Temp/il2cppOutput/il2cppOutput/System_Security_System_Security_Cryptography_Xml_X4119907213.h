#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Security_System_Security_Cryptography_Xml_Tr729562346.h"

// System.Xml.XmlNodeList
struct XmlNodeList_t497326455;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.XmlDsigXPathTransform
struct  XmlDsigXPathTransform_t4119907213  : public Transform_t729562346
{
public:
	// System.Xml.XmlNodeList System.Security.Cryptography.Xml.XmlDsigXPathTransform::xpath
	XmlNodeList_t497326455 * ___xpath_3;

public:
	inline static int32_t get_offset_of_xpath_3() { return static_cast<int32_t>(offsetof(XmlDsigXPathTransform_t4119907213, ___xpath_3)); }
	inline XmlNodeList_t497326455 * get_xpath_3() const { return ___xpath_3; }
	inline XmlNodeList_t497326455 ** get_address_of_xpath_3() { return &___xpath_3; }
	inline void set_xpath_3(XmlNodeList_t497326455 * value)
	{
		___xpath_3 = value;
		Il2CppCodeGenWriteBarrier(&___xpath_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
