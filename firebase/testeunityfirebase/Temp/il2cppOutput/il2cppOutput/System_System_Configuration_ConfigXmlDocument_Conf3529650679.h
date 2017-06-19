#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_System_Xml_XmlAttribute175731005.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigXmlDocument/ConfigXmlAttribute
struct  ConfigXmlAttribute_t3529650679  : public XmlAttribute_t175731005
{
public:
	// System.String System.Configuration.ConfigXmlDocument/ConfigXmlAttribute::fileName
	String_t* ___fileName_9;
	// System.Int32 System.Configuration.ConfigXmlDocument/ConfigXmlAttribute::lineNumber
	int32_t ___lineNumber_10;

public:
	inline static int32_t get_offset_of_fileName_9() { return static_cast<int32_t>(offsetof(ConfigXmlAttribute_t3529650679, ___fileName_9)); }
	inline String_t* get_fileName_9() const { return ___fileName_9; }
	inline String_t** get_address_of_fileName_9() { return &___fileName_9; }
	inline void set_fileName_9(String_t* value)
	{
		___fileName_9 = value;
		Il2CppCodeGenWriteBarrier(&___fileName_9, value);
	}

	inline static int32_t get_offset_of_lineNumber_10() { return static_cast<int32_t>(offsetof(ConfigXmlAttribute_t3529650679, ___lineNumber_10)); }
	inline int32_t get_lineNumber_10() const { return ___lineNumber_10; }
	inline int32_t* get_address_of_lineNumber_10() { return &___lineNumber_10; }
	inline void set_lineNumber_10(int32_t value)
	{
		___lineNumber_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
