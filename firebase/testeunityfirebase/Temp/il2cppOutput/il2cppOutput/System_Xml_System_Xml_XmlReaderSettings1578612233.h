#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_ConformanceLevel3761201363.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaValidationFla910489930.h"
#include "System_Xml_System_Xml_ValidationType1401987383.h"

// System.Xml.XmlNameTable
struct XmlNameTable_t1345805268;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t313318308;
// System.Xml.XmlResolver
struct XmlResolver_t2024571559;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1580700381;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlReaderSettings
struct  XmlReaderSettings_t1578612233  : public Il2CppObject
{
public:
	// System.Boolean System.Xml.XmlReaderSettings::checkCharacters
	bool ___checkCharacters_0;
	// System.Boolean System.Xml.XmlReaderSettings::closeInput
	bool ___closeInput_1;
	// System.Xml.ConformanceLevel System.Xml.XmlReaderSettings::conformance
	int32_t ___conformance_2;
	// System.Boolean System.Xml.XmlReaderSettings::ignoreComments
	bool ___ignoreComments_3;
	// System.Boolean System.Xml.XmlReaderSettings::ignoreProcessingInstructions
	bool ___ignoreProcessingInstructions_4;
	// System.Boolean System.Xml.XmlReaderSettings::ignoreWhitespace
	bool ___ignoreWhitespace_5;
	// System.Int32 System.Xml.XmlReaderSettings::lineNumberOffset
	int32_t ___lineNumberOffset_6;
	// System.Int32 System.Xml.XmlReaderSettings::linePositionOffset
	int32_t ___linePositionOffset_7;
	// System.Boolean System.Xml.XmlReaderSettings::prohibitDtd
	bool ___prohibitDtd_8;
	// System.Xml.XmlNameTable System.Xml.XmlReaderSettings::nameTable
	XmlNameTable_t1345805268 * ___nameTable_9;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlReaderSettings::schemas
	XmlSchemaSet_t313318308 * ___schemas_10;
	// System.Boolean System.Xml.XmlReaderSettings::schemasNeedsInitialization
	bool ___schemasNeedsInitialization_11;
	// System.Xml.Schema.XmlSchemaValidationFlags System.Xml.XmlReaderSettings::validationFlags
	int32_t ___validationFlags_12;
	// System.Xml.ValidationType System.Xml.XmlReaderSettings::validationType
	int32_t ___validationType_13;
	// System.Xml.XmlResolver System.Xml.XmlReaderSettings::xmlResolver
	XmlResolver_t2024571559 * ___xmlResolver_14;
	// System.Xml.Schema.ValidationEventHandler System.Xml.XmlReaderSettings::ValidationEventHandler
	ValidationEventHandler_t1580700381 * ___ValidationEventHandler_15;

public:
	inline static int32_t get_offset_of_checkCharacters_0() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t1578612233, ___checkCharacters_0)); }
	inline bool get_checkCharacters_0() const { return ___checkCharacters_0; }
	inline bool* get_address_of_checkCharacters_0() { return &___checkCharacters_0; }
	inline void set_checkCharacters_0(bool value)
	{
		___checkCharacters_0 = value;
	}

	inline static int32_t get_offset_of_closeInput_1() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t1578612233, ___closeInput_1)); }
	inline bool get_closeInput_1() const { return ___closeInput_1; }
	inline bool* get_address_of_closeInput_1() { return &___closeInput_1; }
	inline void set_closeInput_1(bool value)
	{
		___closeInput_1 = value;
	}

	inline static int32_t get_offset_of_conformance_2() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t1578612233, ___conformance_2)); }
	inline int32_t get_conformance_2() const { return ___conformance_2; }
	inline int32_t* get_address_of_conformance_2() { return &___conformance_2; }
	inline void set_conformance_2(int32_t value)
	{
		___conformance_2 = value;
	}

	inline static int32_t get_offset_of_ignoreComments_3() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t1578612233, ___ignoreComments_3)); }
	inline bool get_ignoreComments_3() const { return ___ignoreComments_3; }
	inline bool* get_address_of_ignoreComments_3() { return &___ignoreComments_3; }
	inline void set_ignoreComments_3(bool value)
	{
		___ignoreComments_3 = value;
	}

	inline static int32_t get_offset_of_ignoreProcessingInstructions_4() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t1578612233, ___ignoreProcessingInstructions_4)); }
	inline bool get_ignoreProcessingInstructions_4() const { return ___ignoreProcessingInstructions_4; }
	inline bool* get_address_of_ignoreProcessingInstructions_4() { return &___ignoreProcessingInstructions_4; }
	inline void set_ignoreProcessingInstructions_4(bool value)
	{
		___ignoreProcessingInstructions_4 = value;
	}

	inline static int32_t get_offset_of_ignoreWhitespace_5() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t1578612233, ___ignoreWhitespace_5)); }
	inline bool get_ignoreWhitespace_5() const { return ___ignoreWhitespace_5; }
	inline bool* get_address_of_ignoreWhitespace_5() { return &___ignoreWhitespace_5; }
	inline void set_ignoreWhitespace_5(bool value)
	{
		___ignoreWhitespace_5 = value;
	}

	inline static int32_t get_offset_of_lineNumberOffset_6() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t1578612233, ___lineNumberOffset_6)); }
	inline int32_t get_lineNumberOffset_6() const { return ___lineNumberOffset_6; }
	inline int32_t* get_address_of_lineNumberOffset_6() { return &___lineNumberOffset_6; }
	inline void set_lineNumberOffset_6(int32_t value)
	{
		___lineNumberOffset_6 = value;
	}

	inline static int32_t get_offset_of_linePositionOffset_7() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t1578612233, ___linePositionOffset_7)); }
	inline int32_t get_linePositionOffset_7() const { return ___linePositionOffset_7; }
	inline int32_t* get_address_of_linePositionOffset_7() { return &___linePositionOffset_7; }
	inline void set_linePositionOffset_7(int32_t value)
	{
		___linePositionOffset_7 = value;
	}

	inline static int32_t get_offset_of_prohibitDtd_8() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t1578612233, ___prohibitDtd_8)); }
	inline bool get_prohibitDtd_8() const { return ___prohibitDtd_8; }
	inline bool* get_address_of_prohibitDtd_8() { return &___prohibitDtd_8; }
	inline void set_prohibitDtd_8(bool value)
	{
		___prohibitDtd_8 = value;
	}

	inline static int32_t get_offset_of_nameTable_9() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t1578612233, ___nameTable_9)); }
	inline XmlNameTable_t1345805268 * get_nameTable_9() const { return ___nameTable_9; }
	inline XmlNameTable_t1345805268 ** get_address_of_nameTable_9() { return &___nameTable_9; }
	inline void set_nameTable_9(XmlNameTable_t1345805268 * value)
	{
		___nameTable_9 = value;
		Il2CppCodeGenWriteBarrier(&___nameTable_9, value);
	}

	inline static int32_t get_offset_of_schemas_10() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t1578612233, ___schemas_10)); }
	inline XmlSchemaSet_t313318308 * get_schemas_10() const { return ___schemas_10; }
	inline XmlSchemaSet_t313318308 ** get_address_of_schemas_10() { return &___schemas_10; }
	inline void set_schemas_10(XmlSchemaSet_t313318308 * value)
	{
		___schemas_10 = value;
		Il2CppCodeGenWriteBarrier(&___schemas_10, value);
	}

	inline static int32_t get_offset_of_schemasNeedsInitialization_11() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t1578612233, ___schemasNeedsInitialization_11)); }
	inline bool get_schemasNeedsInitialization_11() const { return ___schemasNeedsInitialization_11; }
	inline bool* get_address_of_schemasNeedsInitialization_11() { return &___schemasNeedsInitialization_11; }
	inline void set_schemasNeedsInitialization_11(bool value)
	{
		___schemasNeedsInitialization_11 = value;
	}

	inline static int32_t get_offset_of_validationFlags_12() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t1578612233, ___validationFlags_12)); }
	inline int32_t get_validationFlags_12() const { return ___validationFlags_12; }
	inline int32_t* get_address_of_validationFlags_12() { return &___validationFlags_12; }
	inline void set_validationFlags_12(int32_t value)
	{
		___validationFlags_12 = value;
	}

	inline static int32_t get_offset_of_validationType_13() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t1578612233, ___validationType_13)); }
	inline int32_t get_validationType_13() const { return ___validationType_13; }
	inline int32_t* get_address_of_validationType_13() { return &___validationType_13; }
	inline void set_validationType_13(int32_t value)
	{
		___validationType_13 = value;
	}

	inline static int32_t get_offset_of_xmlResolver_14() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t1578612233, ___xmlResolver_14)); }
	inline XmlResolver_t2024571559 * get_xmlResolver_14() const { return ___xmlResolver_14; }
	inline XmlResolver_t2024571559 ** get_address_of_xmlResolver_14() { return &___xmlResolver_14; }
	inline void set_xmlResolver_14(XmlResolver_t2024571559 * value)
	{
		___xmlResolver_14 = value;
		Il2CppCodeGenWriteBarrier(&___xmlResolver_14, value);
	}

	inline static int32_t get_offset_of_ValidationEventHandler_15() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t1578612233, ___ValidationEventHandler_15)); }
	inline ValidationEventHandler_t1580700381 * get_ValidationEventHandler_15() const { return ___ValidationEventHandler_15; }
	inline ValidationEventHandler_t1580700381 ** get_address_of_ValidationEventHandler_15() { return &___ValidationEventHandler_15; }
	inline void set_ValidationEventHandler_15(ValidationEventHandler_t1580700381 * value)
	{
		___ValidationEventHandler_15 = value;
		Il2CppCodeGenWriteBarrier(&___ValidationEventHandler_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
