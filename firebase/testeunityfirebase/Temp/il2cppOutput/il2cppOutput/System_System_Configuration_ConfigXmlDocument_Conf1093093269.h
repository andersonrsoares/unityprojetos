#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_System_Xml_XmlElement2877111883.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigXmlDocument/ConfigXmlElement
struct  ConfigXmlElement_t1093093269  : public XmlElement_t2877111883
{
public:
	// System.String System.Configuration.ConfigXmlDocument/ConfigXmlElement::fileName
	String_t* ___fileName_11;
	// System.Int32 System.Configuration.ConfigXmlDocument/ConfigXmlElement::lineNumber
	int32_t ___lineNumber_12;

public:
	inline static int32_t get_offset_of_fileName_11() { return static_cast<int32_t>(offsetof(ConfigXmlElement_t1093093269, ___fileName_11)); }
	inline String_t* get_fileName_11() const { return ___fileName_11; }
	inline String_t** get_address_of_fileName_11() { return &___fileName_11; }
	inline void set_fileName_11(String_t* value)
	{
		___fileName_11 = value;
		Il2CppCodeGenWriteBarrier(&___fileName_11, value);
	}

	inline static int32_t get_offset_of_lineNumber_12() { return static_cast<int32_t>(offsetof(ConfigXmlElement_t1093093269, ___lineNumber_12)); }
	inline int32_t get_lineNumber_12() const { return ___lineNumber_12; }
	inline int32_t* get_address_of_lineNumber_12() { return &___lineNumber_12; }
	inline void set_lineNumber_12(int32_t value)
	{
		___lineNumber_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
