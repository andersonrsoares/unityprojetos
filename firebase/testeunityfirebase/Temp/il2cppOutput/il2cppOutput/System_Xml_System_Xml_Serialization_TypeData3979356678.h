#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_Serialization_SchemaTypes3045759914.h"

// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Xml.Serialization.TypeData
struct TypeData_t3979356678;
// System.Xml.Schema.XmlSchemaPatternFacet
struct XmlSchemaPatternFacet_t2024909611;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.TypeData
struct  TypeData_t3979356678  : public Il2CppObject
{
public:
	// System.Type System.Xml.Serialization.TypeData::type
	Type_t * ___type_0;
	// System.String System.Xml.Serialization.TypeData::elementName
	String_t* ___elementName_1;
	// System.Xml.Serialization.SchemaTypes System.Xml.Serialization.TypeData::sType
	int32_t ___sType_2;
	// System.Type System.Xml.Serialization.TypeData::listItemType
	Type_t * ___listItemType_3;
	// System.String System.Xml.Serialization.TypeData::typeName
	String_t* ___typeName_4;
	// System.String System.Xml.Serialization.TypeData::fullTypeName
	String_t* ___fullTypeName_5;
	// System.String System.Xml.Serialization.TypeData::csharpName
	String_t* ___csharpName_6;
	// System.String System.Xml.Serialization.TypeData::csharpFullName
	String_t* ___csharpFullName_7;
	// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeData::listItemTypeData
	TypeData_t3979356678 * ___listItemTypeData_8;
	// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeData::mappedType
	TypeData_t3979356678 * ___mappedType_9;
	// System.Xml.Schema.XmlSchemaPatternFacet System.Xml.Serialization.TypeData::facet
	XmlSchemaPatternFacet_t2024909611 * ___facet_10;
	// System.Boolean System.Xml.Serialization.TypeData::hasPublicConstructor
	bool ___hasPublicConstructor_11;
	// System.Boolean System.Xml.Serialization.TypeData::nullableOverride
	bool ___nullableOverride_12;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(TypeData_t3979356678, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier(&___type_0, value);
	}

	inline static int32_t get_offset_of_elementName_1() { return static_cast<int32_t>(offsetof(TypeData_t3979356678, ___elementName_1)); }
	inline String_t* get_elementName_1() const { return ___elementName_1; }
	inline String_t** get_address_of_elementName_1() { return &___elementName_1; }
	inline void set_elementName_1(String_t* value)
	{
		___elementName_1 = value;
		Il2CppCodeGenWriteBarrier(&___elementName_1, value);
	}

	inline static int32_t get_offset_of_sType_2() { return static_cast<int32_t>(offsetof(TypeData_t3979356678, ___sType_2)); }
	inline int32_t get_sType_2() const { return ___sType_2; }
	inline int32_t* get_address_of_sType_2() { return &___sType_2; }
	inline void set_sType_2(int32_t value)
	{
		___sType_2 = value;
	}

	inline static int32_t get_offset_of_listItemType_3() { return static_cast<int32_t>(offsetof(TypeData_t3979356678, ___listItemType_3)); }
	inline Type_t * get_listItemType_3() const { return ___listItemType_3; }
	inline Type_t ** get_address_of_listItemType_3() { return &___listItemType_3; }
	inline void set_listItemType_3(Type_t * value)
	{
		___listItemType_3 = value;
		Il2CppCodeGenWriteBarrier(&___listItemType_3, value);
	}

	inline static int32_t get_offset_of_typeName_4() { return static_cast<int32_t>(offsetof(TypeData_t3979356678, ___typeName_4)); }
	inline String_t* get_typeName_4() const { return ___typeName_4; }
	inline String_t** get_address_of_typeName_4() { return &___typeName_4; }
	inline void set_typeName_4(String_t* value)
	{
		___typeName_4 = value;
		Il2CppCodeGenWriteBarrier(&___typeName_4, value);
	}

	inline static int32_t get_offset_of_fullTypeName_5() { return static_cast<int32_t>(offsetof(TypeData_t3979356678, ___fullTypeName_5)); }
	inline String_t* get_fullTypeName_5() const { return ___fullTypeName_5; }
	inline String_t** get_address_of_fullTypeName_5() { return &___fullTypeName_5; }
	inline void set_fullTypeName_5(String_t* value)
	{
		___fullTypeName_5 = value;
		Il2CppCodeGenWriteBarrier(&___fullTypeName_5, value);
	}

	inline static int32_t get_offset_of_csharpName_6() { return static_cast<int32_t>(offsetof(TypeData_t3979356678, ___csharpName_6)); }
	inline String_t* get_csharpName_6() const { return ___csharpName_6; }
	inline String_t** get_address_of_csharpName_6() { return &___csharpName_6; }
	inline void set_csharpName_6(String_t* value)
	{
		___csharpName_6 = value;
		Il2CppCodeGenWriteBarrier(&___csharpName_6, value);
	}

	inline static int32_t get_offset_of_csharpFullName_7() { return static_cast<int32_t>(offsetof(TypeData_t3979356678, ___csharpFullName_7)); }
	inline String_t* get_csharpFullName_7() const { return ___csharpFullName_7; }
	inline String_t** get_address_of_csharpFullName_7() { return &___csharpFullName_7; }
	inline void set_csharpFullName_7(String_t* value)
	{
		___csharpFullName_7 = value;
		Il2CppCodeGenWriteBarrier(&___csharpFullName_7, value);
	}

	inline static int32_t get_offset_of_listItemTypeData_8() { return static_cast<int32_t>(offsetof(TypeData_t3979356678, ___listItemTypeData_8)); }
	inline TypeData_t3979356678 * get_listItemTypeData_8() const { return ___listItemTypeData_8; }
	inline TypeData_t3979356678 ** get_address_of_listItemTypeData_8() { return &___listItemTypeData_8; }
	inline void set_listItemTypeData_8(TypeData_t3979356678 * value)
	{
		___listItemTypeData_8 = value;
		Il2CppCodeGenWriteBarrier(&___listItemTypeData_8, value);
	}

	inline static int32_t get_offset_of_mappedType_9() { return static_cast<int32_t>(offsetof(TypeData_t3979356678, ___mappedType_9)); }
	inline TypeData_t3979356678 * get_mappedType_9() const { return ___mappedType_9; }
	inline TypeData_t3979356678 ** get_address_of_mappedType_9() { return &___mappedType_9; }
	inline void set_mappedType_9(TypeData_t3979356678 * value)
	{
		___mappedType_9 = value;
		Il2CppCodeGenWriteBarrier(&___mappedType_9, value);
	}

	inline static int32_t get_offset_of_facet_10() { return static_cast<int32_t>(offsetof(TypeData_t3979356678, ___facet_10)); }
	inline XmlSchemaPatternFacet_t2024909611 * get_facet_10() const { return ___facet_10; }
	inline XmlSchemaPatternFacet_t2024909611 ** get_address_of_facet_10() { return &___facet_10; }
	inline void set_facet_10(XmlSchemaPatternFacet_t2024909611 * value)
	{
		___facet_10 = value;
		Il2CppCodeGenWriteBarrier(&___facet_10, value);
	}

	inline static int32_t get_offset_of_hasPublicConstructor_11() { return static_cast<int32_t>(offsetof(TypeData_t3979356678, ___hasPublicConstructor_11)); }
	inline bool get_hasPublicConstructor_11() const { return ___hasPublicConstructor_11; }
	inline bool* get_address_of_hasPublicConstructor_11() { return &___hasPublicConstructor_11; }
	inline void set_hasPublicConstructor_11(bool value)
	{
		___hasPublicConstructor_11 = value;
	}

	inline static int32_t get_offset_of_nullableOverride_12() { return static_cast<int32_t>(offsetof(TypeData_t3979356678, ___nullableOverride_12)); }
	inline bool get_nullableOverride_12() const { return ___nullableOverride_12; }
	inline bool* get_address_of_nullableOverride_12() { return &___nullableOverride_12; }
	inline void set_nullableOverride_12(bool value)
	{
		___nullableOverride_12 = value;
	}
};

struct TypeData_t3979356678_StaticFields
{
public:
	// System.Collections.Hashtable System.Xml.Serialization.TypeData::keywordsTable
	Hashtable_t909839986 * ___keywordsTable_13;
	// System.String[] System.Xml.Serialization.TypeData::keywords
	StringU5BU5D_t1642385972* ___keywords_14;

public:
	inline static int32_t get_offset_of_keywordsTable_13() { return static_cast<int32_t>(offsetof(TypeData_t3979356678_StaticFields, ___keywordsTable_13)); }
	inline Hashtable_t909839986 * get_keywordsTable_13() const { return ___keywordsTable_13; }
	inline Hashtable_t909839986 ** get_address_of_keywordsTable_13() { return &___keywordsTable_13; }
	inline void set_keywordsTable_13(Hashtable_t909839986 * value)
	{
		___keywordsTable_13 = value;
		Il2CppCodeGenWriteBarrier(&___keywordsTable_13, value);
	}

	inline static int32_t get_offset_of_keywords_14() { return static_cast<int32_t>(offsetof(TypeData_t3979356678_StaticFields, ___keywords_14)); }
	inline StringU5BU5D_t1642385972* get_keywords_14() const { return ___keywords_14; }
	inline StringU5BU5D_t1642385972** get_address_of_keywords_14() { return &___keywords_14; }
	inline void set_keywords_14(StringU5BU5D_t1642385972* value)
	{
		___keywords_14 = value;
		Il2CppCodeGenWriteBarrier(&___keywords_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
