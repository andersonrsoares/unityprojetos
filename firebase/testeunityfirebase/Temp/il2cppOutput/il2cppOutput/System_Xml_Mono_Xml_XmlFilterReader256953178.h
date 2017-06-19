#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_System_Xml_XmlReader3675626668.h"

// System.Xml.XmlReader
struct XmlReader_t3675626668;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t1578612233;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t135184468;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.XmlFilterReader
struct  XmlFilterReader_t256953178  : public XmlReader_t3675626668
{
public:
	// System.Xml.XmlReader Mono.Xml.XmlFilterReader::reader
	XmlReader_t3675626668 * ___reader_3;
	// System.Xml.XmlReaderSettings Mono.Xml.XmlFilterReader::settings
	XmlReaderSettings_t1578612233 * ___settings_4;
	// System.Xml.IXmlLineInfo Mono.Xml.XmlFilterReader::lineInfo
	Il2CppObject * ___lineInfo_5;

public:
	inline static int32_t get_offset_of_reader_3() { return static_cast<int32_t>(offsetof(XmlFilterReader_t256953178, ___reader_3)); }
	inline XmlReader_t3675626668 * get_reader_3() const { return ___reader_3; }
	inline XmlReader_t3675626668 ** get_address_of_reader_3() { return &___reader_3; }
	inline void set_reader_3(XmlReader_t3675626668 * value)
	{
		___reader_3 = value;
		Il2CppCodeGenWriteBarrier(&___reader_3, value);
	}

	inline static int32_t get_offset_of_settings_4() { return static_cast<int32_t>(offsetof(XmlFilterReader_t256953178, ___settings_4)); }
	inline XmlReaderSettings_t1578612233 * get_settings_4() const { return ___settings_4; }
	inline XmlReaderSettings_t1578612233 ** get_address_of_settings_4() { return &___settings_4; }
	inline void set_settings_4(XmlReaderSettings_t1578612233 * value)
	{
		___settings_4 = value;
		Il2CppCodeGenWriteBarrier(&___settings_4, value);
	}

	inline static int32_t get_offset_of_lineInfo_5() { return static_cast<int32_t>(offsetof(XmlFilterReader_t256953178, ___lineInfo_5)); }
	inline Il2CppObject * get_lineInfo_5() const { return ___lineInfo_5; }
	inline Il2CppObject ** get_address_of_lineInfo_5() { return &___lineInfo_5; }
	inline void set_lineInfo_5(Il2CppObject * value)
	{
		___lineInfo_5 = value;
		Il2CppCodeGenWriteBarrier(&___lineInfo_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
