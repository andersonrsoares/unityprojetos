#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_System_Xml_XmlDocument3649534162.h"

// System.Xml.XmlTextReader
struct XmlTextReader_t3514170725;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigXmlDocument
struct  ConfigXmlDocument_t3082117854  : public XmlDocument_t3649534162
{
public:
	// System.Xml.XmlTextReader System.Configuration.ConfigXmlDocument::reader
	XmlTextReader_t3514170725 * ___reader_25;
	// System.String System.Configuration.ConfigXmlDocument::fileName
	String_t* ___fileName_26;
	// System.Int32 System.Configuration.ConfigXmlDocument::lineNumber
	int32_t ___lineNumber_27;

public:
	inline static int32_t get_offset_of_reader_25() { return static_cast<int32_t>(offsetof(ConfigXmlDocument_t3082117854, ___reader_25)); }
	inline XmlTextReader_t3514170725 * get_reader_25() const { return ___reader_25; }
	inline XmlTextReader_t3514170725 ** get_address_of_reader_25() { return &___reader_25; }
	inline void set_reader_25(XmlTextReader_t3514170725 * value)
	{
		___reader_25 = value;
		Il2CppCodeGenWriteBarrier(&___reader_25, value);
	}

	inline static int32_t get_offset_of_fileName_26() { return static_cast<int32_t>(offsetof(ConfigXmlDocument_t3082117854, ___fileName_26)); }
	inline String_t* get_fileName_26() const { return ___fileName_26; }
	inline String_t** get_address_of_fileName_26() { return &___fileName_26; }
	inline void set_fileName_26(String_t* value)
	{
		___fileName_26 = value;
		Il2CppCodeGenWriteBarrier(&___fileName_26, value);
	}

	inline static int32_t get_offset_of_lineNumber_27() { return static_cast<int32_t>(offsetof(ConfigXmlDocument_t3082117854, ___lineNumber_27)); }
	inline int32_t get_lineNumber_27() const { return ___lineNumber_27; }
	inline int32_t* get_address_of_lineNumber_27() { return &___lineNumber_27; }
	inline void set_lineNumber_27(int32_t value)
	{
		___lineNumber_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
