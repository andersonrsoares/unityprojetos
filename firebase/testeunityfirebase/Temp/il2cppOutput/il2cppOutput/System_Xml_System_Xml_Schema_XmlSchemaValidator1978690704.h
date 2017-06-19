#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaValidationFla910489930.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaValidator_Tran34209471.h"

// System.Xml.Schema.XmlSchemaAttribute[]
struct XmlSchemaAttributeU5BU5D_t3434391819;
// System.Object
struct Il2CppObject;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t135184468;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3928241465;
// System.Uri
struct Uri_t19570940;
// System.Xml.XmlNameTable
struct XmlNameTable_t1345805268;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t313318308;
// System.Xml.XmlResolver
struct XmlResolver_t2024571559;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t4119977941;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// Mono.Xml.Schema.XsdIDManager
struct XsdIDManager_t3860002335;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t1195946242;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1580700381;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaValidator
struct  XmlSchemaValidator_t1978690704  : public Il2CppObject
{
public:
	// System.Object System.Xml.Schema.XmlSchemaValidator::nominalEventSender
	Il2CppObject * ___nominalEventSender_1;
	// System.Xml.IXmlLineInfo System.Xml.Schema.XmlSchemaValidator::lineInfo
	Il2CppObject * ___lineInfo_2;
	// System.Xml.IXmlNamespaceResolver System.Xml.Schema.XmlSchemaValidator::nsResolver
	Il2CppObject * ___nsResolver_3;
	// System.Uri System.Xml.Schema.XmlSchemaValidator::sourceUri
	Uri_t19570940 * ___sourceUri_4;
	// System.Xml.XmlNameTable System.Xml.Schema.XmlSchemaValidator::nameTable
	XmlNameTable_t1345805268 * ___nameTable_5;
	// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchemaValidator::schemas
	XmlSchemaSet_t313318308 * ___schemas_6;
	// System.Xml.XmlResolver System.Xml.Schema.XmlSchemaValidator::xmlResolver
	XmlResolver_t2024571559 * ___xmlResolver_7;
	// System.Xml.Schema.XmlSchemaValidationFlags System.Xml.Schema.XmlSchemaValidator::options
	int32_t ___options_8;
	// System.Xml.Schema.XmlSchemaValidator/Transition System.Xml.Schema.XmlSchemaValidator::transition
	int32_t ___transition_9;
	// Mono.Xml.Schema.XsdParticleStateManager System.Xml.Schema.XmlSchemaValidator::state
	XsdParticleStateManager_t4119977941 * ___state_10;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaValidator::occuredAtts
	ArrayList_t4252133567 * ___occuredAtts_11;
	// System.Xml.Schema.XmlSchemaAttribute[] System.Xml.Schema.XmlSchemaValidator::defaultAttributes
	XmlSchemaAttributeU5BU5D_t3434391819* ___defaultAttributes_12;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaValidator::defaultAttributesCache
	ArrayList_t4252133567 * ___defaultAttributesCache_13;
	// Mono.Xml.Schema.XsdIDManager System.Xml.Schema.XmlSchemaValidator::idManager
	XsdIDManager_t3860002335 * ___idManager_14;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaValidator::keyTables
	ArrayList_t4252133567 * ___keyTables_15;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaValidator::currentKeyFieldConsumers
	ArrayList_t4252133567 * ___currentKeyFieldConsumers_16;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaValidator::tmpKeyrefPool
	ArrayList_t4252133567 * ___tmpKeyrefPool_17;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaValidator::elementQNameStack
	ArrayList_t4252133567 * ___elementQNameStack_18;
	// System.Text.StringBuilder System.Xml.Schema.XmlSchemaValidator::storedCharacters
	StringBuilder_t1221177846 * ___storedCharacters_19;
	// System.Boolean System.Xml.Schema.XmlSchemaValidator::shouldValidateCharacters
	bool ___shouldValidateCharacters_20;
	// System.Int32 System.Xml.Schema.XmlSchemaValidator::depth
	int32_t ___depth_21;
	// System.Int32 System.Xml.Schema.XmlSchemaValidator::xsiNilDepth
	int32_t ___xsiNilDepth_22;
	// System.Int32 System.Xml.Schema.XmlSchemaValidator::skipValidationDepth
	int32_t ___skipValidationDepth_23;
	// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaValidator::CurrentAttributeType
	XmlSchemaDatatype_t1195946242 * ___CurrentAttributeType_24;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.XmlSchemaValidator::ValidationEventHandler
	ValidationEventHandler_t1580700381 * ___ValidationEventHandler_25;

public:
	inline static int32_t get_offset_of_nominalEventSender_1() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_t1978690704, ___nominalEventSender_1)); }
	inline Il2CppObject * get_nominalEventSender_1() const { return ___nominalEventSender_1; }
	inline Il2CppObject ** get_address_of_nominalEventSender_1() { return &___nominalEventSender_1; }
	inline void set_nominalEventSender_1(Il2CppObject * value)
	{
		___nominalEventSender_1 = value;
		Il2CppCodeGenWriteBarrier(&___nominalEventSender_1, value);
	}

	inline static int32_t get_offset_of_lineInfo_2() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_t1978690704, ___lineInfo_2)); }
	inline Il2CppObject * get_lineInfo_2() const { return ___lineInfo_2; }
	inline Il2CppObject ** get_address_of_lineInfo_2() { return &___lineInfo_2; }
	inline void set_lineInfo_2(Il2CppObject * value)
	{
		___lineInfo_2 = value;
		Il2CppCodeGenWriteBarrier(&___lineInfo_2, value);
	}

	inline static int32_t get_offset_of_nsResolver_3() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_t1978690704, ___nsResolver_3)); }
	inline Il2CppObject * get_nsResolver_3() const { return ___nsResolver_3; }
	inline Il2CppObject ** get_address_of_nsResolver_3() { return &___nsResolver_3; }
	inline void set_nsResolver_3(Il2CppObject * value)
	{
		___nsResolver_3 = value;
		Il2CppCodeGenWriteBarrier(&___nsResolver_3, value);
	}

	inline static int32_t get_offset_of_sourceUri_4() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_t1978690704, ___sourceUri_4)); }
	inline Uri_t19570940 * get_sourceUri_4() const { return ___sourceUri_4; }
	inline Uri_t19570940 ** get_address_of_sourceUri_4() { return &___sourceUri_4; }
	inline void set_sourceUri_4(Uri_t19570940 * value)
	{
		___sourceUri_4 = value;
		Il2CppCodeGenWriteBarrier(&___sourceUri_4, value);
	}

	inline static int32_t get_offset_of_nameTable_5() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_t1978690704, ___nameTable_5)); }
	inline XmlNameTable_t1345805268 * get_nameTable_5() const { return ___nameTable_5; }
	inline XmlNameTable_t1345805268 ** get_address_of_nameTable_5() { return &___nameTable_5; }
	inline void set_nameTable_5(XmlNameTable_t1345805268 * value)
	{
		___nameTable_5 = value;
		Il2CppCodeGenWriteBarrier(&___nameTable_5, value);
	}

	inline static int32_t get_offset_of_schemas_6() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_t1978690704, ___schemas_6)); }
	inline XmlSchemaSet_t313318308 * get_schemas_6() const { return ___schemas_6; }
	inline XmlSchemaSet_t313318308 ** get_address_of_schemas_6() { return &___schemas_6; }
	inline void set_schemas_6(XmlSchemaSet_t313318308 * value)
	{
		___schemas_6 = value;
		Il2CppCodeGenWriteBarrier(&___schemas_6, value);
	}

	inline static int32_t get_offset_of_xmlResolver_7() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_t1978690704, ___xmlResolver_7)); }
	inline XmlResolver_t2024571559 * get_xmlResolver_7() const { return ___xmlResolver_7; }
	inline XmlResolver_t2024571559 ** get_address_of_xmlResolver_7() { return &___xmlResolver_7; }
	inline void set_xmlResolver_7(XmlResolver_t2024571559 * value)
	{
		___xmlResolver_7 = value;
		Il2CppCodeGenWriteBarrier(&___xmlResolver_7, value);
	}

	inline static int32_t get_offset_of_options_8() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_t1978690704, ___options_8)); }
	inline int32_t get_options_8() const { return ___options_8; }
	inline int32_t* get_address_of_options_8() { return &___options_8; }
	inline void set_options_8(int32_t value)
	{
		___options_8 = value;
	}

	inline static int32_t get_offset_of_transition_9() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_t1978690704, ___transition_9)); }
	inline int32_t get_transition_9() const { return ___transition_9; }
	inline int32_t* get_address_of_transition_9() { return &___transition_9; }
	inline void set_transition_9(int32_t value)
	{
		___transition_9 = value;
	}

	inline static int32_t get_offset_of_state_10() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_t1978690704, ___state_10)); }
	inline XsdParticleStateManager_t4119977941 * get_state_10() const { return ___state_10; }
	inline XsdParticleStateManager_t4119977941 ** get_address_of_state_10() { return &___state_10; }
	inline void set_state_10(XsdParticleStateManager_t4119977941 * value)
	{
		___state_10 = value;
		Il2CppCodeGenWriteBarrier(&___state_10, value);
	}

	inline static int32_t get_offset_of_occuredAtts_11() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_t1978690704, ___occuredAtts_11)); }
	inline ArrayList_t4252133567 * get_occuredAtts_11() const { return ___occuredAtts_11; }
	inline ArrayList_t4252133567 ** get_address_of_occuredAtts_11() { return &___occuredAtts_11; }
	inline void set_occuredAtts_11(ArrayList_t4252133567 * value)
	{
		___occuredAtts_11 = value;
		Il2CppCodeGenWriteBarrier(&___occuredAtts_11, value);
	}

	inline static int32_t get_offset_of_defaultAttributes_12() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_t1978690704, ___defaultAttributes_12)); }
	inline XmlSchemaAttributeU5BU5D_t3434391819* get_defaultAttributes_12() const { return ___defaultAttributes_12; }
	inline XmlSchemaAttributeU5BU5D_t3434391819** get_address_of_defaultAttributes_12() { return &___defaultAttributes_12; }
	inline void set_defaultAttributes_12(XmlSchemaAttributeU5BU5D_t3434391819* value)
	{
		___defaultAttributes_12 = value;
		Il2CppCodeGenWriteBarrier(&___defaultAttributes_12, value);
	}

	inline static int32_t get_offset_of_defaultAttributesCache_13() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_t1978690704, ___defaultAttributesCache_13)); }
	inline ArrayList_t4252133567 * get_defaultAttributesCache_13() const { return ___defaultAttributesCache_13; }
	inline ArrayList_t4252133567 ** get_address_of_defaultAttributesCache_13() { return &___defaultAttributesCache_13; }
	inline void set_defaultAttributesCache_13(ArrayList_t4252133567 * value)
	{
		___defaultAttributesCache_13 = value;
		Il2CppCodeGenWriteBarrier(&___defaultAttributesCache_13, value);
	}

	inline static int32_t get_offset_of_idManager_14() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_t1978690704, ___idManager_14)); }
	inline XsdIDManager_t3860002335 * get_idManager_14() const { return ___idManager_14; }
	inline XsdIDManager_t3860002335 ** get_address_of_idManager_14() { return &___idManager_14; }
	inline void set_idManager_14(XsdIDManager_t3860002335 * value)
	{
		___idManager_14 = value;
		Il2CppCodeGenWriteBarrier(&___idManager_14, value);
	}

	inline static int32_t get_offset_of_keyTables_15() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_t1978690704, ___keyTables_15)); }
	inline ArrayList_t4252133567 * get_keyTables_15() const { return ___keyTables_15; }
	inline ArrayList_t4252133567 ** get_address_of_keyTables_15() { return &___keyTables_15; }
	inline void set_keyTables_15(ArrayList_t4252133567 * value)
	{
		___keyTables_15 = value;
		Il2CppCodeGenWriteBarrier(&___keyTables_15, value);
	}

	inline static int32_t get_offset_of_currentKeyFieldConsumers_16() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_t1978690704, ___currentKeyFieldConsumers_16)); }
	inline ArrayList_t4252133567 * get_currentKeyFieldConsumers_16() const { return ___currentKeyFieldConsumers_16; }
	inline ArrayList_t4252133567 ** get_address_of_currentKeyFieldConsumers_16() { return &___currentKeyFieldConsumers_16; }
	inline void set_currentKeyFieldConsumers_16(ArrayList_t4252133567 * value)
	{
		___currentKeyFieldConsumers_16 = value;
		Il2CppCodeGenWriteBarrier(&___currentKeyFieldConsumers_16, value);
	}

	inline static int32_t get_offset_of_tmpKeyrefPool_17() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_t1978690704, ___tmpKeyrefPool_17)); }
	inline ArrayList_t4252133567 * get_tmpKeyrefPool_17() const { return ___tmpKeyrefPool_17; }
	inline ArrayList_t4252133567 ** get_address_of_tmpKeyrefPool_17() { return &___tmpKeyrefPool_17; }
	inline void set_tmpKeyrefPool_17(ArrayList_t4252133567 * value)
	{
		___tmpKeyrefPool_17 = value;
		Il2CppCodeGenWriteBarrier(&___tmpKeyrefPool_17, value);
	}

	inline static int32_t get_offset_of_elementQNameStack_18() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_t1978690704, ___elementQNameStack_18)); }
	inline ArrayList_t4252133567 * get_elementQNameStack_18() const { return ___elementQNameStack_18; }
	inline ArrayList_t4252133567 ** get_address_of_elementQNameStack_18() { return &___elementQNameStack_18; }
	inline void set_elementQNameStack_18(ArrayList_t4252133567 * value)
	{
		___elementQNameStack_18 = value;
		Il2CppCodeGenWriteBarrier(&___elementQNameStack_18, value);
	}

	inline static int32_t get_offset_of_storedCharacters_19() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_t1978690704, ___storedCharacters_19)); }
	inline StringBuilder_t1221177846 * get_storedCharacters_19() const { return ___storedCharacters_19; }
	inline StringBuilder_t1221177846 ** get_address_of_storedCharacters_19() { return &___storedCharacters_19; }
	inline void set_storedCharacters_19(StringBuilder_t1221177846 * value)
	{
		___storedCharacters_19 = value;
		Il2CppCodeGenWriteBarrier(&___storedCharacters_19, value);
	}

	inline static int32_t get_offset_of_shouldValidateCharacters_20() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_t1978690704, ___shouldValidateCharacters_20)); }
	inline bool get_shouldValidateCharacters_20() const { return ___shouldValidateCharacters_20; }
	inline bool* get_address_of_shouldValidateCharacters_20() { return &___shouldValidateCharacters_20; }
	inline void set_shouldValidateCharacters_20(bool value)
	{
		___shouldValidateCharacters_20 = value;
	}

	inline static int32_t get_offset_of_depth_21() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_t1978690704, ___depth_21)); }
	inline int32_t get_depth_21() const { return ___depth_21; }
	inline int32_t* get_address_of_depth_21() { return &___depth_21; }
	inline void set_depth_21(int32_t value)
	{
		___depth_21 = value;
	}

	inline static int32_t get_offset_of_xsiNilDepth_22() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_t1978690704, ___xsiNilDepth_22)); }
	inline int32_t get_xsiNilDepth_22() const { return ___xsiNilDepth_22; }
	inline int32_t* get_address_of_xsiNilDepth_22() { return &___xsiNilDepth_22; }
	inline void set_xsiNilDepth_22(int32_t value)
	{
		___xsiNilDepth_22 = value;
	}

	inline static int32_t get_offset_of_skipValidationDepth_23() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_t1978690704, ___skipValidationDepth_23)); }
	inline int32_t get_skipValidationDepth_23() const { return ___skipValidationDepth_23; }
	inline int32_t* get_address_of_skipValidationDepth_23() { return &___skipValidationDepth_23; }
	inline void set_skipValidationDepth_23(int32_t value)
	{
		___skipValidationDepth_23 = value;
	}

	inline static int32_t get_offset_of_CurrentAttributeType_24() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_t1978690704, ___CurrentAttributeType_24)); }
	inline XmlSchemaDatatype_t1195946242 * get_CurrentAttributeType_24() const { return ___CurrentAttributeType_24; }
	inline XmlSchemaDatatype_t1195946242 ** get_address_of_CurrentAttributeType_24() { return &___CurrentAttributeType_24; }
	inline void set_CurrentAttributeType_24(XmlSchemaDatatype_t1195946242 * value)
	{
		___CurrentAttributeType_24 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentAttributeType_24, value);
	}

	inline static int32_t get_offset_of_ValidationEventHandler_25() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_t1978690704, ___ValidationEventHandler_25)); }
	inline ValidationEventHandler_t1580700381 * get_ValidationEventHandler_25() const { return ___ValidationEventHandler_25; }
	inline ValidationEventHandler_t1580700381 ** get_address_of_ValidationEventHandler_25() { return &___ValidationEventHandler_25; }
	inline void set_ValidationEventHandler_25(ValidationEventHandler_t1580700381 * value)
	{
		___ValidationEventHandler_25 = value;
		Il2CppCodeGenWriteBarrier(&___ValidationEventHandler_25, value);
	}
};

struct XmlSchemaValidator_t1978690704_StaticFields
{
public:
	// System.Xml.Schema.XmlSchemaAttribute[] System.Xml.Schema.XmlSchemaValidator::emptyAttributeArray
	XmlSchemaAttributeU5BU5D_t3434391819* ___emptyAttributeArray_0;

public:
	inline static int32_t get_offset_of_emptyAttributeArray_0() { return static_cast<int32_t>(offsetof(XmlSchemaValidator_t1978690704_StaticFields, ___emptyAttributeArray_0)); }
	inline XmlSchemaAttributeU5BU5D_t3434391819* get_emptyAttributeArray_0() const { return ___emptyAttributeArray_0; }
	inline XmlSchemaAttributeU5BU5D_t3434391819** get_address_of_emptyAttributeArray_0() { return &___emptyAttributeArray_0; }
	inline void set_emptyAttributeArray_0(XmlSchemaAttributeU5BU5D_t3434391819* value)
	{
		___emptyAttributeArray_0 = value;
		Il2CppCodeGenWriteBarrier(&___emptyAttributeArray_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
