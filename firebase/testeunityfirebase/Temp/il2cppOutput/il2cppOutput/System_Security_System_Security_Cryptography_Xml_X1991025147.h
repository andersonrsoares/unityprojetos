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

// System.Security.Cryptography.Xml.XmlDsigXsltTransform
struct  XmlDsigXsltTransform_t1991025147  : public Transform_t729562346
{
public:
	// System.Boolean System.Security.Cryptography.Xml.XmlDsigXsltTransform::comments
	bool ___comments_3;
	// System.Xml.XmlNodeList System.Security.Cryptography.Xml.XmlDsigXsltTransform::xnl
	XmlNodeList_t497326455 * ___xnl_4;

public:
	inline static int32_t get_offset_of_comments_3() { return static_cast<int32_t>(offsetof(XmlDsigXsltTransform_t1991025147, ___comments_3)); }
	inline bool get_comments_3() const { return ___comments_3; }
	inline bool* get_address_of_comments_3() { return &___comments_3; }
	inline void set_comments_3(bool value)
	{
		___comments_3 = value;
	}

	inline static int32_t get_offset_of_xnl_4() { return static_cast<int32_t>(offsetof(XmlDsigXsltTransform_t1991025147, ___xnl_4)); }
	inline XmlNodeList_t497326455 * get_xnl_4() const { return ___xnl_4; }
	inline XmlNodeList_t497326455 ** get_address_of_xnl_4() { return &___xnl_4; }
	inline void set_xnl_4(XmlNodeList_t497326455 * value)
	{
		___xnl_4 = value;
		Il2CppCodeGenWriteBarrier(&___xnl_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
