#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_System_Xml_XmlReader3675626668.h"

// Mono.Xml.EntityResolvingXmlReader
struct EntityResolvingXmlReader_t2086920314;
// System.Xml.XmlTextReader
struct XmlTextReader_t3514170725;
// System.Xml.XmlValidatingReader
struct XmlValidatingReader_t3416770767;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1113953282;
// System.Xml.XmlResolver
struct XmlResolver_t2024571559;
// System.String
struct String_t;
// Mono.Xml.DTDValidatingReader/AttributeSlot[]
struct AttributeSlotU5BU5D_t1168612672;
// System.Collections.Stack
struct Stack_t1043988394;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t545990600;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t486731501;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDValidatingReader
struct  DTDValidatingReader_t4120969348  : public XmlReader_t3675626668
{
public:
	// Mono.Xml.EntityResolvingXmlReader Mono.Xml.DTDValidatingReader::reader
	EntityResolvingXmlReader_t2086920314 * ___reader_3;
	// System.Xml.XmlTextReader Mono.Xml.DTDValidatingReader::sourceTextReader
	XmlTextReader_t3514170725 * ___sourceTextReader_4;
	// System.Xml.XmlValidatingReader Mono.Xml.DTDValidatingReader::validatingReader
	XmlValidatingReader_t3416770767 * ___validatingReader_5;
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDValidatingReader::dtd
	DTDObjectModel_t1113953282 * ___dtd_6;
	// System.Xml.XmlResolver Mono.Xml.DTDValidatingReader::resolver
	XmlResolver_t2024571559 * ___resolver_7;
	// System.String Mono.Xml.DTDValidatingReader::currentElement
	String_t* ___currentElement_8;
	// Mono.Xml.DTDValidatingReader/AttributeSlot[] Mono.Xml.DTDValidatingReader::attributes
	AttributeSlotU5BU5D_t1168612672* ___attributes_9;
	// System.Int32 Mono.Xml.DTDValidatingReader::attributeCount
	int32_t ___attributeCount_10;
	// System.Int32 Mono.Xml.DTDValidatingReader::currentAttribute
	int32_t ___currentAttribute_11;
	// System.Boolean Mono.Xml.DTDValidatingReader::consumedAttribute
	bool ___consumedAttribute_12;
	// System.Collections.Stack Mono.Xml.DTDValidatingReader::elementStack
	Stack_t1043988394 * ___elementStack_13;
	// System.Collections.Stack Mono.Xml.DTDValidatingReader::automataStack
	Stack_t1043988394 * ___automataStack_14;
	// System.Boolean Mono.Xml.DTDValidatingReader::popScope
	bool ___popScope_15;
	// System.Boolean Mono.Xml.DTDValidatingReader::isStandalone
	bool ___isStandalone_16;
	// Mono.Xml.DTDAutomata Mono.Xml.DTDValidatingReader::currentAutomata
	DTDAutomata_t545990600 * ___currentAutomata_17;
	// Mono.Xml.DTDAutomata Mono.Xml.DTDValidatingReader::previousAutomata
	DTDAutomata_t545990600 * ___previousAutomata_18;
	// System.Collections.ArrayList Mono.Xml.DTDValidatingReader::idList
	ArrayList_t4252133567 * ___idList_19;
	// System.Collections.ArrayList Mono.Xml.DTDValidatingReader::missingIDReferences
	ArrayList_t4252133567 * ___missingIDReferences_20;
	// System.Xml.XmlNamespaceManager Mono.Xml.DTDValidatingReader::nsmgr
	XmlNamespaceManager_t486731501 * ___nsmgr_21;
	// System.String Mono.Xml.DTDValidatingReader::currentTextValue
	String_t* ___currentTextValue_22;
	// System.String Mono.Xml.DTDValidatingReader::constructingTextValue
	String_t* ___constructingTextValue_23;
	// System.Boolean Mono.Xml.DTDValidatingReader::shouldResetCurrentTextValue
	bool ___shouldResetCurrentTextValue_24;
	// System.Boolean Mono.Xml.DTDValidatingReader::isSignificantWhitespace
	bool ___isSignificantWhitespace_25;
	// System.Boolean Mono.Xml.DTDValidatingReader::isWhitespace
	bool ___isWhitespace_26;
	// System.Boolean Mono.Xml.DTDValidatingReader::isText
	bool ___isText_27;
	// System.Collections.Stack Mono.Xml.DTDValidatingReader::attributeValueEntityStack
	Stack_t1043988394 * ___attributeValueEntityStack_28;
	// System.Text.StringBuilder Mono.Xml.DTDValidatingReader::valueBuilder
	StringBuilder_t1221177846 * ___valueBuilder_29;
	// System.Char[] Mono.Xml.DTDValidatingReader::whitespaceChars
	CharU5BU5D_t1328083999* ___whitespaceChars_30;

public:
	inline static int32_t get_offset_of_reader_3() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___reader_3)); }
	inline EntityResolvingXmlReader_t2086920314 * get_reader_3() const { return ___reader_3; }
	inline EntityResolvingXmlReader_t2086920314 ** get_address_of_reader_3() { return &___reader_3; }
	inline void set_reader_3(EntityResolvingXmlReader_t2086920314 * value)
	{
		___reader_3 = value;
		Il2CppCodeGenWriteBarrier(&___reader_3, value);
	}

	inline static int32_t get_offset_of_sourceTextReader_4() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___sourceTextReader_4)); }
	inline XmlTextReader_t3514170725 * get_sourceTextReader_4() const { return ___sourceTextReader_4; }
	inline XmlTextReader_t3514170725 ** get_address_of_sourceTextReader_4() { return &___sourceTextReader_4; }
	inline void set_sourceTextReader_4(XmlTextReader_t3514170725 * value)
	{
		___sourceTextReader_4 = value;
		Il2CppCodeGenWriteBarrier(&___sourceTextReader_4, value);
	}

	inline static int32_t get_offset_of_validatingReader_5() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___validatingReader_5)); }
	inline XmlValidatingReader_t3416770767 * get_validatingReader_5() const { return ___validatingReader_5; }
	inline XmlValidatingReader_t3416770767 ** get_address_of_validatingReader_5() { return &___validatingReader_5; }
	inline void set_validatingReader_5(XmlValidatingReader_t3416770767 * value)
	{
		___validatingReader_5 = value;
		Il2CppCodeGenWriteBarrier(&___validatingReader_5, value);
	}

	inline static int32_t get_offset_of_dtd_6() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___dtd_6)); }
	inline DTDObjectModel_t1113953282 * get_dtd_6() const { return ___dtd_6; }
	inline DTDObjectModel_t1113953282 ** get_address_of_dtd_6() { return &___dtd_6; }
	inline void set_dtd_6(DTDObjectModel_t1113953282 * value)
	{
		___dtd_6 = value;
		Il2CppCodeGenWriteBarrier(&___dtd_6, value);
	}

	inline static int32_t get_offset_of_resolver_7() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___resolver_7)); }
	inline XmlResolver_t2024571559 * get_resolver_7() const { return ___resolver_7; }
	inline XmlResolver_t2024571559 ** get_address_of_resolver_7() { return &___resolver_7; }
	inline void set_resolver_7(XmlResolver_t2024571559 * value)
	{
		___resolver_7 = value;
		Il2CppCodeGenWriteBarrier(&___resolver_7, value);
	}

	inline static int32_t get_offset_of_currentElement_8() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___currentElement_8)); }
	inline String_t* get_currentElement_8() const { return ___currentElement_8; }
	inline String_t** get_address_of_currentElement_8() { return &___currentElement_8; }
	inline void set_currentElement_8(String_t* value)
	{
		___currentElement_8 = value;
		Il2CppCodeGenWriteBarrier(&___currentElement_8, value);
	}

	inline static int32_t get_offset_of_attributes_9() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___attributes_9)); }
	inline AttributeSlotU5BU5D_t1168612672* get_attributes_9() const { return ___attributes_9; }
	inline AttributeSlotU5BU5D_t1168612672** get_address_of_attributes_9() { return &___attributes_9; }
	inline void set_attributes_9(AttributeSlotU5BU5D_t1168612672* value)
	{
		___attributes_9 = value;
		Il2CppCodeGenWriteBarrier(&___attributes_9, value);
	}

	inline static int32_t get_offset_of_attributeCount_10() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___attributeCount_10)); }
	inline int32_t get_attributeCount_10() const { return ___attributeCount_10; }
	inline int32_t* get_address_of_attributeCount_10() { return &___attributeCount_10; }
	inline void set_attributeCount_10(int32_t value)
	{
		___attributeCount_10 = value;
	}

	inline static int32_t get_offset_of_currentAttribute_11() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___currentAttribute_11)); }
	inline int32_t get_currentAttribute_11() const { return ___currentAttribute_11; }
	inline int32_t* get_address_of_currentAttribute_11() { return &___currentAttribute_11; }
	inline void set_currentAttribute_11(int32_t value)
	{
		___currentAttribute_11 = value;
	}

	inline static int32_t get_offset_of_consumedAttribute_12() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___consumedAttribute_12)); }
	inline bool get_consumedAttribute_12() const { return ___consumedAttribute_12; }
	inline bool* get_address_of_consumedAttribute_12() { return &___consumedAttribute_12; }
	inline void set_consumedAttribute_12(bool value)
	{
		___consumedAttribute_12 = value;
	}

	inline static int32_t get_offset_of_elementStack_13() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___elementStack_13)); }
	inline Stack_t1043988394 * get_elementStack_13() const { return ___elementStack_13; }
	inline Stack_t1043988394 ** get_address_of_elementStack_13() { return &___elementStack_13; }
	inline void set_elementStack_13(Stack_t1043988394 * value)
	{
		___elementStack_13 = value;
		Il2CppCodeGenWriteBarrier(&___elementStack_13, value);
	}

	inline static int32_t get_offset_of_automataStack_14() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___automataStack_14)); }
	inline Stack_t1043988394 * get_automataStack_14() const { return ___automataStack_14; }
	inline Stack_t1043988394 ** get_address_of_automataStack_14() { return &___automataStack_14; }
	inline void set_automataStack_14(Stack_t1043988394 * value)
	{
		___automataStack_14 = value;
		Il2CppCodeGenWriteBarrier(&___automataStack_14, value);
	}

	inline static int32_t get_offset_of_popScope_15() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___popScope_15)); }
	inline bool get_popScope_15() const { return ___popScope_15; }
	inline bool* get_address_of_popScope_15() { return &___popScope_15; }
	inline void set_popScope_15(bool value)
	{
		___popScope_15 = value;
	}

	inline static int32_t get_offset_of_isStandalone_16() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___isStandalone_16)); }
	inline bool get_isStandalone_16() const { return ___isStandalone_16; }
	inline bool* get_address_of_isStandalone_16() { return &___isStandalone_16; }
	inline void set_isStandalone_16(bool value)
	{
		___isStandalone_16 = value;
	}

	inline static int32_t get_offset_of_currentAutomata_17() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___currentAutomata_17)); }
	inline DTDAutomata_t545990600 * get_currentAutomata_17() const { return ___currentAutomata_17; }
	inline DTDAutomata_t545990600 ** get_address_of_currentAutomata_17() { return &___currentAutomata_17; }
	inline void set_currentAutomata_17(DTDAutomata_t545990600 * value)
	{
		___currentAutomata_17 = value;
		Il2CppCodeGenWriteBarrier(&___currentAutomata_17, value);
	}

	inline static int32_t get_offset_of_previousAutomata_18() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___previousAutomata_18)); }
	inline DTDAutomata_t545990600 * get_previousAutomata_18() const { return ___previousAutomata_18; }
	inline DTDAutomata_t545990600 ** get_address_of_previousAutomata_18() { return &___previousAutomata_18; }
	inline void set_previousAutomata_18(DTDAutomata_t545990600 * value)
	{
		___previousAutomata_18 = value;
		Il2CppCodeGenWriteBarrier(&___previousAutomata_18, value);
	}

	inline static int32_t get_offset_of_idList_19() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___idList_19)); }
	inline ArrayList_t4252133567 * get_idList_19() const { return ___idList_19; }
	inline ArrayList_t4252133567 ** get_address_of_idList_19() { return &___idList_19; }
	inline void set_idList_19(ArrayList_t4252133567 * value)
	{
		___idList_19 = value;
		Il2CppCodeGenWriteBarrier(&___idList_19, value);
	}

	inline static int32_t get_offset_of_missingIDReferences_20() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___missingIDReferences_20)); }
	inline ArrayList_t4252133567 * get_missingIDReferences_20() const { return ___missingIDReferences_20; }
	inline ArrayList_t4252133567 ** get_address_of_missingIDReferences_20() { return &___missingIDReferences_20; }
	inline void set_missingIDReferences_20(ArrayList_t4252133567 * value)
	{
		___missingIDReferences_20 = value;
		Il2CppCodeGenWriteBarrier(&___missingIDReferences_20, value);
	}

	inline static int32_t get_offset_of_nsmgr_21() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___nsmgr_21)); }
	inline XmlNamespaceManager_t486731501 * get_nsmgr_21() const { return ___nsmgr_21; }
	inline XmlNamespaceManager_t486731501 ** get_address_of_nsmgr_21() { return &___nsmgr_21; }
	inline void set_nsmgr_21(XmlNamespaceManager_t486731501 * value)
	{
		___nsmgr_21 = value;
		Il2CppCodeGenWriteBarrier(&___nsmgr_21, value);
	}

	inline static int32_t get_offset_of_currentTextValue_22() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___currentTextValue_22)); }
	inline String_t* get_currentTextValue_22() const { return ___currentTextValue_22; }
	inline String_t** get_address_of_currentTextValue_22() { return &___currentTextValue_22; }
	inline void set_currentTextValue_22(String_t* value)
	{
		___currentTextValue_22 = value;
		Il2CppCodeGenWriteBarrier(&___currentTextValue_22, value);
	}

	inline static int32_t get_offset_of_constructingTextValue_23() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___constructingTextValue_23)); }
	inline String_t* get_constructingTextValue_23() const { return ___constructingTextValue_23; }
	inline String_t** get_address_of_constructingTextValue_23() { return &___constructingTextValue_23; }
	inline void set_constructingTextValue_23(String_t* value)
	{
		___constructingTextValue_23 = value;
		Il2CppCodeGenWriteBarrier(&___constructingTextValue_23, value);
	}

	inline static int32_t get_offset_of_shouldResetCurrentTextValue_24() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___shouldResetCurrentTextValue_24)); }
	inline bool get_shouldResetCurrentTextValue_24() const { return ___shouldResetCurrentTextValue_24; }
	inline bool* get_address_of_shouldResetCurrentTextValue_24() { return &___shouldResetCurrentTextValue_24; }
	inline void set_shouldResetCurrentTextValue_24(bool value)
	{
		___shouldResetCurrentTextValue_24 = value;
	}

	inline static int32_t get_offset_of_isSignificantWhitespace_25() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___isSignificantWhitespace_25)); }
	inline bool get_isSignificantWhitespace_25() const { return ___isSignificantWhitespace_25; }
	inline bool* get_address_of_isSignificantWhitespace_25() { return &___isSignificantWhitespace_25; }
	inline void set_isSignificantWhitespace_25(bool value)
	{
		___isSignificantWhitespace_25 = value;
	}

	inline static int32_t get_offset_of_isWhitespace_26() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___isWhitespace_26)); }
	inline bool get_isWhitespace_26() const { return ___isWhitespace_26; }
	inline bool* get_address_of_isWhitespace_26() { return &___isWhitespace_26; }
	inline void set_isWhitespace_26(bool value)
	{
		___isWhitespace_26 = value;
	}

	inline static int32_t get_offset_of_isText_27() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___isText_27)); }
	inline bool get_isText_27() const { return ___isText_27; }
	inline bool* get_address_of_isText_27() { return &___isText_27; }
	inline void set_isText_27(bool value)
	{
		___isText_27 = value;
	}

	inline static int32_t get_offset_of_attributeValueEntityStack_28() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___attributeValueEntityStack_28)); }
	inline Stack_t1043988394 * get_attributeValueEntityStack_28() const { return ___attributeValueEntityStack_28; }
	inline Stack_t1043988394 ** get_address_of_attributeValueEntityStack_28() { return &___attributeValueEntityStack_28; }
	inline void set_attributeValueEntityStack_28(Stack_t1043988394 * value)
	{
		___attributeValueEntityStack_28 = value;
		Il2CppCodeGenWriteBarrier(&___attributeValueEntityStack_28, value);
	}

	inline static int32_t get_offset_of_valueBuilder_29() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___valueBuilder_29)); }
	inline StringBuilder_t1221177846 * get_valueBuilder_29() const { return ___valueBuilder_29; }
	inline StringBuilder_t1221177846 ** get_address_of_valueBuilder_29() { return &___valueBuilder_29; }
	inline void set_valueBuilder_29(StringBuilder_t1221177846 * value)
	{
		___valueBuilder_29 = value;
		Il2CppCodeGenWriteBarrier(&___valueBuilder_29, value);
	}

	inline static int32_t get_offset_of_whitespaceChars_30() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348, ___whitespaceChars_30)); }
	inline CharU5BU5D_t1328083999* get_whitespaceChars_30() const { return ___whitespaceChars_30; }
	inline CharU5BU5D_t1328083999** get_address_of_whitespaceChars_30() { return &___whitespaceChars_30; }
	inline void set_whitespaceChars_30(CharU5BU5D_t1328083999* value)
	{
		___whitespaceChars_30 = value;
		Il2CppCodeGenWriteBarrier(&___whitespaceChars_30, value);
	}
};

struct DTDValidatingReader_t4120969348_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.DTDValidatingReader::<>f__switch$map2A
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map2A_31;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2A_31() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t4120969348_StaticFields, ___U3CU3Ef__switchU24map2A_31)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map2A_31() const { return ___U3CU3Ef__switchU24map2A_31; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map2A_31() { return &___U3CU3Ef__switchU24map2A_31; }
	inline void set_U3CU3Ef__switchU24map2A_31(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map2A_31 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map2A_31, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
