#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_System_Xml_XmlText4111601336.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigXmlDocument/ConfigXmlText
struct  ConfigXmlText_t3977869426  : public XmlText_t4111601336
{
public:
	// System.String System.Configuration.ConfigXmlDocument/ConfigXmlText::fileName
	String_t* ___fileName_7;
	// System.Int32 System.Configuration.ConfigXmlDocument/ConfigXmlText::lineNumber
	int32_t ___lineNumber_8;

public:
	inline static int32_t get_offset_of_fileName_7() { return static_cast<int32_t>(offsetof(ConfigXmlText_t3977869426, ___fileName_7)); }
	inline String_t* get_fileName_7() const { return ___fileName_7; }
	inline String_t** get_address_of_fileName_7() { return &___fileName_7; }
	inline void set_fileName_7(String_t* value)
	{
		___fileName_7 = value;
		Il2CppCodeGenWriteBarrier(&___fileName_7, value);
	}

	inline static int32_t get_offset_of_lineNumber_8() { return static_cast<int32_t>(offsetof(ConfigXmlText_t3977869426, ___lineNumber_8)); }
	inline int32_t get_lineNumber_8() const { return ___lineNumber_8; }
	inline int32_t* get_address_of_lineNumber_8() { return &___lineNumber_8; }
	inline void set_lineNumber_8(int32_t value)
	{
		___lineNumber_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
