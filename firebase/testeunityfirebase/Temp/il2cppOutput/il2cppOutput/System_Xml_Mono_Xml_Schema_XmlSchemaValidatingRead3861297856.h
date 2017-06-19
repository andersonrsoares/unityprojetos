#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaValidationFla910489930.h"

// System.Xml.Schema.XmlSchemaAttribute[]
struct XmlSchemaAttributeU5BU5D_t3434391819;
// System.Xml.XmlReader
struct XmlReader_t3675626668;
// System.Xml.Schema.XmlSchemaValidator
struct XmlSchemaValidator_t1978690704;
// System.Xml.Schema.XmlValueGetter
struct XmlValueGetter_t1685472371;
// System.Xml.Schema.XmlSchemaInfo
struct XmlSchemaInfo_t2864028808;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t135184468;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3928241465;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t1795078578;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t2433337156;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Schema.XmlSchemaValidatingReader
struct  XmlSchemaValidatingReader_t3861297856  : public XmlReader_t3675626668
{
public:
	// System.Xml.XmlReader Mono.Xml.Schema.XmlSchemaValidatingReader::reader
	XmlReader_t3675626668 * ___reader_4;
	// System.Xml.Schema.XmlSchemaValidationFlags Mono.Xml.Schema.XmlSchemaValidatingReader::options
	int32_t ___options_5;
	// System.Xml.Schema.XmlSchemaValidator Mono.Xml.Schema.XmlSchemaValidatingReader::v
	XmlSchemaValidator_t1978690704 * ___v_6;
	// System.Xml.Schema.XmlValueGetter Mono.Xml.Schema.XmlSchemaValidatingReader::getter
	XmlValueGetter_t1685472371 * ___getter_7;
	// System.Xml.Schema.XmlSchemaInfo Mono.Xml.Schema.XmlSchemaValidatingReader::xsinfo
	XmlSchemaInfo_t2864028808 * ___xsinfo_8;
	// System.Xml.IXmlLineInfo Mono.Xml.Schema.XmlSchemaValidatingReader::readerLineInfo
	Il2CppObject * ___readerLineInfo_9;
	// System.Xml.IXmlNamespaceResolver Mono.Xml.Schema.XmlSchemaValidatingReader::nsResolver
	Il2CppObject * ___nsResolver_10;
	// System.Xml.Schema.XmlSchemaAttribute[] Mono.Xml.Schema.XmlSchemaValidatingReader::defaultAttributes
	XmlSchemaAttributeU5BU5D_t3434391819* ___defaultAttributes_11;
	// System.Int32 Mono.Xml.Schema.XmlSchemaValidatingReader::currentDefaultAttribute
	int32_t ___currentDefaultAttribute_12;
	// System.Collections.ArrayList Mono.Xml.Schema.XmlSchemaValidatingReader::defaultAttributesCache
	ArrayList_t4252133567 * ___defaultAttributesCache_13;
	// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::defaultAttributeConsumed
	bool ___defaultAttributeConsumed_14;
	// System.Xml.Schema.XmlSchemaType Mono.Xml.Schema.XmlSchemaValidatingReader::currentAttrType
	XmlSchemaType_t1795078578 * ___currentAttrType_15;
	// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::validationDone
	bool ___validationDone_16;
	// System.Xml.Schema.XmlSchemaElement Mono.Xml.Schema.XmlSchemaValidatingReader::element
	XmlSchemaElement_t2433337156 * ___element_17;

public:
	inline static int32_t get_offset_of_reader_4() { return static_cast<int32_t>(offsetof(XmlSchemaValidatingReader_t3861297856, ___reader_4)); }
	inline XmlReader_t3675626668 * get_reader_4() const { return ___reader_4; }
	inline XmlReader_t3675626668 ** get_address_of_reader_4() { return &___reader_4; }
	inline void set_reader_4(XmlReader_t3675626668 * value)
	{
		___reader_4 = value;
		Il2CppCodeGenWriteBarrier(&___reader_4, value);
	}

	inline static int32_t get_offset_of_options_5() { return static_cast<int32_t>(offsetof(XmlSchemaValidatingReader_t3861297856, ___options_5)); }
	inline int32_t get_options_5() const { return ___options_5; }
	inline int32_t* get_address_of_options_5() { return &___options_5; }
	inline void set_options_5(int32_t value)
	{
		___options_5 = value;
	}

	inline static int32_t get_offset_of_v_6() { return static_cast<int32_t>(offsetof(XmlSchemaValidatingReader_t3861297856, ___v_6)); }
	inline XmlSchemaValidator_t1978690704 * get_v_6() const { return ___v_6; }
	inline XmlSchemaValidator_t1978690704 ** get_address_of_v_6() { return &___v_6; }
	inline void set_v_6(XmlSchemaValidator_t1978690704 * value)
	{
		___v_6 = value;
		Il2CppCodeGenWriteBarrier(&___v_6, value);
	}

	inline static int32_t get_offset_of_getter_7() { return static_cast<int32_t>(offsetof(XmlSchemaValidatingReader_t3861297856, ___getter_7)); }
	inline XmlValueGetter_t1685472371 * get_getter_7() const { return ___getter_7; }
	inline XmlValueGetter_t1685472371 ** get_address_of_getter_7() { return &___getter_7; }
	inline void set_getter_7(XmlValueGetter_t1685472371 * value)
	{
		___getter_7 = value;
		Il2CppCodeGenWriteBarrier(&___getter_7, value);
	}

	inline static int32_t get_offset_of_xsinfo_8() { return static_cast<int32_t>(offsetof(XmlSchemaValidatingReader_t3861297856, ___xsinfo_8)); }
	inline XmlSchemaInfo_t2864028808 * get_xsinfo_8() const { return ___xsinfo_8; }
	inline XmlSchemaInfo_t2864028808 ** get_address_of_xsinfo_8() { return &___xsinfo_8; }
	inline void set_xsinfo_8(XmlSchemaInfo_t2864028808 * value)
	{
		___xsinfo_8 = value;
		Il2CppCodeGenWriteBarrier(&___xsinfo_8, value);
	}

	inline static int32_t get_offset_of_readerLineInfo_9() { return static_cast<int32_t>(offsetof(XmlSchemaValidatingReader_t3861297856, ___readerLineInfo_9)); }
	inline Il2CppObject * get_readerLineInfo_9() const { return ___readerLineInfo_9; }
	inline Il2CppObject ** get_address_of_readerLineInfo_9() { return &___readerLineInfo_9; }
	inline void set_readerLineInfo_9(Il2CppObject * value)
	{
		___readerLineInfo_9 = value;
		Il2CppCodeGenWriteBarrier(&___readerLineInfo_9, value);
	}

	inline static int32_t get_offset_of_nsResolver_10() { return static_cast<int32_t>(offsetof(XmlSchemaValidatingReader_t3861297856, ___nsResolver_10)); }
	inline Il2CppObject * get_nsResolver_10() const { return ___nsResolver_10; }
	inline Il2CppObject ** get_address_of_nsResolver_10() { return &___nsResolver_10; }
	inline void set_nsResolver_10(Il2CppObject * value)
	{
		___nsResolver_10 = value;
		Il2CppCodeGenWriteBarrier(&___nsResolver_10, value);
	}

	inline static int32_t get_offset_of_defaultAttributes_11() { return static_cast<int32_t>(offsetof(XmlSchemaValidatingReader_t3861297856, ___defaultAttributes_11)); }
	inline XmlSchemaAttributeU5BU5D_t3434391819* get_defaultAttributes_11() const { return ___defaultAttributes_11; }
	inline XmlSchemaAttributeU5BU5D_t3434391819** get_address_of_defaultAttributes_11() { return &___defaultAttributes_11; }
	inline void set_defaultAttributes_11(XmlSchemaAttributeU5BU5D_t3434391819* value)
	{
		___defaultAttributes_11 = value;
		Il2CppCodeGenWriteBarrier(&___defaultAttributes_11, value);
	}

	inline static int32_t get_offset_of_currentDefaultAttribute_12() { return static_cast<int32_t>(offsetof(XmlSchemaValidatingReader_t3861297856, ___currentDefaultAttribute_12)); }
	inline int32_t get_currentDefaultAttribute_12() const { return ___currentDefaultAttribute_12; }
	inline int32_t* get_address_of_currentDefaultAttribute_12() { return &___currentDefaultAttribute_12; }
	inline void set_currentDefaultAttribute_12(int32_t value)
	{
		___currentDefaultAttribute_12 = value;
	}

	inline static int32_t get_offset_of_defaultAttributesCache_13() { return static_cast<int32_t>(offsetof(XmlSchemaValidatingReader_t3861297856, ___defaultAttributesCache_13)); }
	inline ArrayList_t4252133567 * get_defaultAttributesCache_13() const { return ___defaultAttributesCache_13; }
	inline ArrayList_t4252133567 ** get_address_of_defaultAttributesCache_13() { return &___defaultAttributesCache_13; }
	inline void set_defaultAttributesCache_13(ArrayList_t4252133567 * value)
	{
		___defaultAttributesCache_13 = value;
		Il2CppCodeGenWriteBarrier(&___defaultAttributesCache_13, value);
	}

	inline static int32_t get_offset_of_defaultAttributeConsumed_14() { return static_cast<int32_t>(offsetof(XmlSchemaValidatingReader_t3861297856, ___defaultAttributeConsumed_14)); }
	inline bool get_defaultAttributeConsumed_14() const { return ___defaultAttributeConsumed_14; }
	inline bool* get_address_of_defaultAttributeConsumed_14() { return &___defaultAttributeConsumed_14; }
	inline void set_defaultAttributeConsumed_14(bool value)
	{
		___defaultAttributeConsumed_14 = value;
	}

	inline static int32_t get_offset_of_currentAttrType_15() { return static_cast<int32_t>(offsetof(XmlSchemaValidatingReader_t3861297856, ___currentAttrType_15)); }
	inline XmlSchemaType_t1795078578 * get_currentAttrType_15() const { return ___currentAttrType_15; }
	inline XmlSchemaType_t1795078578 ** get_address_of_currentAttrType_15() { return &___currentAttrType_15; }
	inline void set_currentAttrType_15(XmlSchemaType_t1795078578 * value)
	{
		___currentAttrType_15 = value;
		Il2CppCodeGenWriteBarrier(&___currentAttrType_15, value);
	}

	inline static int32_t get_offset_of_validationDone_16() { return static_cast<int32_t>(offsetof(XmlSchemaValidatingReader_t3861297856, ___validationDone_16)); }
	inline bool get_validationDone_16() const { return ___validationDone_16; }
	inline bool* get_address_of_validationDone_16() { return &___validationDone_16; }
	inline void set_validationDone_16(bool value)
	{
		___validationDone_16 = value;
	}

	inline static int32_t get_offset_of_element_17() { return static_cast<int32_t>(offsetof(XmlSchemaValidatingReader_t3861297856, ___element_17)); }
	inline XmlSchemaElement_t2433337156 * get_element_17() const { return ___element_17; }
	inline XmlSchemaElement_t2433337156 ** get_address_of_element_17() { return &___element_17; }
	inline void set_element_17(XmlSchemaElement_t2433337156 * value)
	{
		___element_17 = value;
		Il2CppCodeGenWriteBarrier(&___element_17, value);
	}
};

struct XmlSchemaValidatingReader_t3861297856_StaticFields
{
public:
	// System.Xml.Schema.XmlSchemaAttribute[] Mono.Xml.Schema.XmlSchemaValidatingReader::emptyAttributeArray
	XmlSchemaAttributeU5BU5D_t3434391819* ___emptyAttributeArray_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XmlSchemaValidatingReader::<>f__switch$map0
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map0_18;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XmlSchemaValidatingReader::<>f__switch$map1
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map1_19;

public:
	inline static int32_t get_offset_of_emptyAttributeArray_3() { return static_cast<int32_t>(offsetof(XmlSchemaValidatingReader_t3861297856_StaticFields, ___emptyAttributeArray_3)); }
	inline XmlSchemaAttributeU5BU5D_t3434391819* get_emptyAttributeArray_3() const { return ___emptyAttributeArray_3; }
	inline XmlSchemaAttributeU5BU5D_t3434391819** get_address_of_emptyAttributeArray_3() { return &___emptyAttributeArray_3; }
	inline void set_emptyAttributeArray_3(XmlSchemaAttributeU5BU5D_t3434391819* value)
	{
		___emptyAttributeArray_3 = value;
		Il2CppCodeGenWriteBarrier(&___emptyAttributeArray_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_18() { return static_cast<int32_t>(offsetof(XmlSchemaValidatingReader_t3861297856_StaticFields, ___U3CU3Ef__switchU24map0_18)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map0_18() const { return ___U3CU3Ef__switchU24map0_18; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map0_18() { return &___U3CU3Ef__switchU24map0_18; }
	inline void set_U3CU3Ef__switchU24map0_18(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map0_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_18, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_19() { return static_cast<int32_t>(offsetof(XmlSchemaValidatingReader_t3861297856_StaticFields, ___U3CU3Ef__switchU24map1_19)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map1_19() const { return ___U3CU3Ef__switchU24map1_19; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map1_19() { return &___U3CU3Ef__switchU24map1_19; }
	inline void set_U3CU3Ef__switchU24map1_19(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map1_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
