#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Xml.Serialization.XmlMapping
struct XmlMapping_t1597064667;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.GenerationResult
struct  GenerationResult_t2691853749  : public Il2CppObject
{
public:
	// System.Xml.Serialization.XmlMapping System.Xml.Serialization.GenerationResult::Mapping
	XmlMapping_t1597064667 * ___Mapping_0;
	// System.String System.Xml.Serialization.GenerationResult::ReaderClassName
	String_t* ___ReaderClassName_1;
	// System.String System.Xml.Serialization.GenerationResult::ReadMethodName
	String_t* ___ReadMethodName_2;
	// System.String System.Xml.Serialization.GenerationResult::WriterClassName
	String_t* ___WriterClassName_3;
	// System.String System.Xml.Serialization.GenerationResult::WriteMethodName
	String_t* ___WriteMethodName_4;
	// System.String System.Xml.Serialization.GenerationResult::Namespace
	String_t* ___Namespace_5;
	// System.String System.Xml.Serialization.GenerationResult::SerializerClassName
	String_t* ___SerializerClassName_6;
	// System.String System.Xml.Serialization.GenerationResult::BaseSerializerClassName
	String_t* ___BaseSerializerClassName_7;
	// System.String System.Xml.Serialization.GenerationResult::ImplementationClassName
	String_t* ___ImplementationClassName_8;

public:
	inline static int32_t get_offset_of_Mapping_0() { return static_cast<int32_t>(offsetof(GenerationResult_t2691853749, ___Mapping_0)); }
	inline XmlMapping_t1597064667 * get_Mapping_0() const { return ___Mapping_0; }
	inline XmlMapping_t1597064667 ** get_address_of_Mapping_0() { return &___Mapping_0; }
	inline void set_Mapping_0(XmlMapping_t1597064667 * value)
	{
		___Mapping_0 = value;
		Il2CppCodeGenWriteBarrier(&___Mapping_0, value);
	}

	inline static int32_t get_offset_of_ReaderClassName_1() { return static_cast<int32_t>(offsetof(GenerationResult_t2691853749, ___ReaderClassName_1)); }
	inline String_t* get_ReaderClassName_1() const { return ___ReaderClassName_1; }
	inline String_t** get_address_of_ReaderClassName_1() { return &___ReaderClassName_1; }
	inline void set_ReaderClassName_1(String_t* value)
	{
		___ReaderClassName_1 = value;
		Il2CppCodeGenWriteBarrier(&___ReaderClassName_1, value);
	}

	inline static int32_t get_offset_of_ReadMethodName_2() { return static_cast<int32_t>(offsetof(GenerationResult_t2691853749, ___ReadMethodName_2)); }
	inline String_t* get_ReadMethodName_2() const { return ___ReadMethodName_2; }
	inline String_t** get_address_of_ReadMethodName_2() { return &___ReadMethodName_2; }
	inline void set_ReadMethodName_2(String_t* value)
	{
		___ReadMethodName_2 = value;
		Il2CppCodeGenWriteBarrier(&___ReadMethodName_2, value);
	}

	inline static int32_t get_offset_of_WriterClassName_3() { return static_cast<int32_t>(offsetof(GenerationResult_t2691853749, ___WriterClassName_3)); }
	inline String_t* get_WriterClassName_3() const { return ___WriterClassName_3; }
	inline String_t** get_address_of_WriterClassName_3() { return &___WriterClassName_3; }
	inline void set_WriterClassName_3(String_t* value)
	{
		___WriterClassName_3 = value;
		Il2CppCodeGenWriteBarrier(&___WriterClassName_3, value);
	}

	inline static int32_t get_offset_of_WriteMethodName_4() { return static_cast<int32_t>(offsetof(GenerationResult_t2691853749, ___WriteMethodName_4)); }
	inline String_t* get_WriteMethodName_4() const { return ___WriteMethodName_4; }
	inline String_t** get_address_of_WriteMethodName_4() { return &___WriteMethodName_4; }
	inline void set_WriteMethodName_4(String_t* value)
	{
		___WriteMethodName_4 = value;
		Il2CppCodeGenWriteBarrier(&___WriteMethodName_4, value);
	}

	inline static int32_t get_offset_of_Namespace_5() { return static_cast<int32_t>(offsetof(GenerationResult_t2691853749, ___Namespace_5)); }
	inline String_t* get_Namespace_5() const { return ___Namespace_5; }
	inline String_t** get_address_of_Namespace_5() { return &___Namespace_5; }
	inline void set_Namespace_5(String_t* value)
	{
		___Namespace_5 = value;
		Il2CppCodeGenWriteBarrier(&___Namespace_5, value);
	}

	inline static int32_t get_offset_of_SerializerClassName_6() { return static_cast<int32_t>(offsetof(GenerationResult_t2691853749, ___SerializerClassName_6)); }
	inline String_t* get_SerializerClassName_6() const { return ___SerializerClassName_6; }
	inline String_t** get_address_of_SerializerClassName_6() { return &___SerializerClassName_6; }
	inline void set_SerializerClassName_6(String_t* value)
	{
		___SerializerClassName_6 = value;
		Il2CppCodeGenWriteBarrier(&___SerializerClassName_6, value);
	}

	inline static int32_t get_offset_of_BaseSerializerClassName_7() { return static_cast<int32_t>(offsetof(GenerationResult_t2691853749, ___BaseSerializerClassName_7)); }
	inline String_t* get_BaseSerializerClassName_7() const { return ___BaseSerializerClassName_7; }
	inline String_t** get_address_of_BaseSerializerClassName_7() { return &___BaseSerializerClassName_7; }
	inline void set_BaseSerializerClassName_7(String_t* value)
	{
		___BaseSerializerClassName_7 = value;
		Il2CppCodeGenWriteBarrier(&___BaseSerializerClassName_7, value);
	}

	inline static int32_t get_offset_of_ImplementationClassName_8() { return static_cast<int32_t>(offsetof(GenerationResult_t2691853749, ___ImplementationClassName_8)); }
	inline String_t* get_ImplementationClassName_8() const { return ___ImplementationClassName_8; }
	inline String_t** get_address_of_ImplementationClassName_8() { return &___ImplementationClassName_8; }
	inline void set_ImplementationClassName_8(String_t* value)
	{
		___ImplementationClassName_8 = value;
		Il2CppCodeGenWriteBarrier(&___ImplementationClassName_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
