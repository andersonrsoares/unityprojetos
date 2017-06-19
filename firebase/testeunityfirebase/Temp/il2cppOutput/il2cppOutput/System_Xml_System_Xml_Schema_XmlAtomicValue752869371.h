#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_System_Xml_XPath_XPathItem3130801258.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_Decimal724701077.h"
#include "System_Xml_System_Xml_Schema_XmlTypeCode58293802.h"

// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t1795078578;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlAtomicValue
struct  XmlAtomicValue_t752869371  : public XPathItem_t3130801258
{
public:
	// System.Boolean System.Xml.Schema.XmlAtomicValue::booleanValue
	bool ___booleanValue_0;
	// System.DateTime System.Xml.Schema.XmlAtomicValue::dateTimeValue
	DateTime_t693205669  ___dateTimeValue_1;
	// System.Decimal System.Xml.Schema.XmlAtomicValue::decimalValue
	Decimal_t724701077  ___decimalValue_2;
	// System.Double System.Xml.Schema.XmlAtomicValue::doubleValue
	double ___doubleValue_3;
	// System.Int32 System.Xml.Schema.XmlAtomicValue::intValue
	int32_t ___intValue_4;
	// System.Int64 System.Xml.Schema.XmlAtomicValue::longValue
	int64_t ___longValue_5;
	// System.Object System.Xml.Schema.XmlAtomicValue::objectValue
	Il2CppObject * ___objectValue_6;
	// System.Single System.Xml.Schema.XmlAtomicValue::floatValue
	float ___floatValue_7;
	// System.String System.Xml.Schema.XmlAtomicValue::stringValue
	String_t* ___stringValue_8;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlAtomicValue::schemaType
	XmlSchemaType_t1795078578 * ___schemaType_9;
	// System.Xml.Schema.XmlTypeCode System.Xml.Schema.XmlAtomicValue::xmlTypeCode
	int32_t ___xmlTypeCode_10;

public:
	inline static int32_t get_offset_of_booleanValue_0() { return static_cast<int32_t>(offsetof(XmlAtomicValue_t752869371, ___booleanValue_0)); }
	inline bool get_booleanValue_0() const { return ___booleanValue_0; }
	inline bool* get_address_of_booleanValue_0() { return &___booleanValue_0; }
	inline void set_booleanValue_0(bool value)
	{
		___booleanValue_0 = value;
	}

	inline static int32_t get_offset_of_dateTimeValue_1() { return static_cast<int32_t>(offsetof(XmlAtomicValue_t752869371, ___dateTimeValue_1)); }
	inline DateTime_t693205669  get_dateTimeValue_1() const { return ___dateTimeValue_1; }
	inline DateTime_t693205669 * get_address_of_dateTimeValue_1() { return &___dateTimeValue_1; }
	inline void set_dateTimeValue_1(DateTime_t693205669  value)
	{
		___dateTimeValue_1 = value;
	}

	inline static int32_t get_offset_of_decimalValue_2() { return static_cast<int32_t>(offsetof(XmlAtomicValue_t752869371, ___decimalValue_2)); }
	inline Decimal_t724701077  get_decimalValue_2() const { return ___decimalValue_2; }
	inline Decimal_t724701077 * get_address_of_decimalValue_2() { return &___decimalValue_2; }
	inline void set_decimalValue_2(Decimal_t724701077  value)
	{
		___decimalValue_2 = value;
	}

	inline static int32_t get_offset_of_doubleValue_3() { return static_cast<int32_t>(offsetof(XmlAtomicValue_t752869371, ___doubleValue_3)); }
	inline double get_doubleValue_3() const { return ___doubleValue_3; }
	inline double* get_address_of_doubleValue_3() { return &___doubleValue_3; }
	inline void set_doubleValue_3(double value)
	{
		___doubleValue_3 = value;
	}

	inline static int32_t get_offset_of_intValue_4() { return static_cast<int32_t>(offsetof(XmlAtomicValue_t752869371, ___intValue_4)); }
	inline int32_t get_intValue_4() const { return ___intValue_4; }
	inline int32_t* get_address_of_intValue_4() { return &___intValue_4; }
	inline void set_intValue_4(int32_t value)
	{
		___intValue_4 = value;
	}

	inline static int32_t get_offset_of_longValue_5() { return static_cast<int32_t>(offsetof(XmlAtomicValue_t752869371, ___longValue_5)); }
	inline int64_t get_longValue_5() const { return ___longValue_5; }
	inline int64_t* get_address_of_longValue_5() { return &___longValue_5; }
	inline void set_longValue_5(int64_t value)
	{
		___longValue_5 = value;
	}

	inline static int32_t get_offset_of_objectValue_6() { return static_cast<int32_t>(offsetof(XmlAtomicValue_t752869371, ___objectValue_6)); }
	inline Il2CppObject * get_objectValue_6() const { return ___objectValue_6; }
	inline Il2CppObject ** get_address_of_objectValue_6() { return &___objectValue_6; }
	inline void set_objectValue_6(Il2CppObject * value)
	{
		___objectValue_6 = value;
		Il2CppCodeGenWriteBarrier(&___objectValue_6, value);
	}

	inline static int32_t get_offset_of_floatValue_7() { return static_cast<int32_t>(offsetof(XmlAtomicValue_t752869371, ___floatValue_7)); }
	inline float get_floatValue_7() const { return ___floatValue_7; }
	inline float* get_address_of_floatValue_7() { return &___floatValue_7; }
	inline void set_floatValue_7(float value)
	{
		___floatValue_7 = value;
	}

	inline static int32_t get_offset_of_stringValue_8() { return static_cast<int32_t>(offsetof(XmlAtomicValue_t752869371, ___stringValue_8)); }
	inline String_t* get_stringValue_8() const { return ___stringValue_8; }
	inline String_t** get_address_of_stringValue_8() { return &___stringValue_8; }
	inline void set_stringValue_8(String_t* value)
	{
		___stringValue_8 = value;
		Il2CppCodeGenWriteBarrier(&___stringValue_8, value);
	}

	inline static int32_t get_offset_of_schemaType_9() { return static_cast<int32_t>(offsetof(XmlAtomicValue_t752869371, ___schemaType_9)); }
	inline XmlSchemaType_t1795078578 * get_schemaType_9() const { return ___schemaType_9; }
	inline XmlSchemaType_t1795078578 ** get_address_of_schemaType_9() { return &___schemaType_9; }
	inline void set_schemaType_9(XmlSchemaType_t1795078578 * value)
	{
		___schemaType_9 = value;
		Il2CppCodeGenWriteBarrier(&___schemaType_9, value);
	}

	inline static int32_t get_offset_of_xmlTypeCode_10() { return static_cast<int32_t>(offsetof(XmlAtomicValue_t752869371, ___xmlTypeCode_10)); }
	inline int32_t get_xmlTypeCode_10() const { return ___xmlTypeCode_10; }
	inline int32_t* get_address_of_xmlTypeCode_10() { return &___xmlTypeCode_10; }
	inline void set_xmlTypeCode_10(int32_t value)
	{
		___xmlTypeCode_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
