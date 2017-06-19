#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Xml.Serialization.Hook[]
struct HookU5BU5D_t914467364;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.SerializerInfo
struct  SerializerInfo_t3482254802  : public Il2CppObject
{
public:
	// System.String System.Xml.Serialization.SerializerInfo::ReaderClassName
	String_t* ___ReaderClassName_0;
	// System.String System.Xml.Serialization.SerializerInfo::WriterClassName
	String_t* ___WriterClassName_1;
	// System.String System.Xml.Serialization.SerializerInfo::BaseSerializerClassName
	String_t* ___BaseSerializerClassName_2;
	// System.String System.Xml.Serialization.SerializerInfo::ImplementationClassName
	String_t* ___ImplementationClassName_3;
	// System.Boolean System.Xml.Serialization.SerializerInfo::NoReader
	bool ___NoReader_4;
	// System.Boolean System.Xml.Serialization.SerializerInfo::NoWriter
	bool ___NoWriter_5;
	// System.Boolean System.Xml.Serialization.SerializerInfo::GenerateAsInternal
	bool ___GenerateAsInternal_6;
	// System.String System.Xml.Serialization.SerializerInfo::Namespace
	String_t* ___Namespace_7;
	// System.String[] System.Xml.Serialization.SerializerInfo::NamespaceImports
	StringU5BU5D_t1642385972* ___NamespaceImports_8;
	// System.Xml.Serialization.Hook[] System.Xml.Serialization.SerializerInfo::ReaderHooks
	HookU5BU5D_t914467364* ___ReaderHooks_9;
	// System.Xml.Serialization.Hook[] System.Xml.Serialization.SerializerInfo::WriterHooks
	HookU5BU5D_t914467364* ___WriterHooks_10;

public:
	inline static int32_t get_offset_of_ReaderClassName_0() { return static_cast<int32_t>(offsetof(SerializerInfo_t3482254802, ___ReaderClassName_0)); }
	inline String_t* get_ReaderClassName_0() const { return ___ReaderClassName_0; }
	inline String_t** get_address_of_ReaderClassName_0() { return &___ReaderClassName_0; }
	inline void set_ReaderClassName_0(String_t* value)
	{
		___ReaderClassName_0 = value;
		Il2CppCodeGenWriteBarrier(&___ReaderClassName_0, value);
	}

	inline static int32_t get_offset_of_WriterClassName_1() { return static_cast<int32_t>(offsetof(SerializerInfo_t3482254802, ___WriterClassName_1)); }
	inline String_t* get_WriterClassName_1() const { return ___WriterClassName_1; }
	inline String_t** get_address_of_WriterClassName_1() { return &___WriterClassName_1; }
	inline void set_WriterClassName_1(String_t* value)
	{
		___WriterClassName_1 = value;
		Il2CppCodeGenWriteBarrier(&___WriterClassName_1, value);
	}

	inline static int32_t get_offset_of_BaseSerializerClassName_2() { return static_cast<int32_t>(offsetof(SerializerInfo_t3482254802, ___BaseSerializerClassName_2)); }
	inline String_t* get_BaseSerializerClassName_2() const { return ___BaseSerializerClassName_2; }
	inline String_t** get_address_of_BaseSerializerClassName_2() { return &___BaseSerializerClassName_2; }
	inline void set_BaseSerializerClassName_2(String_t* value)
	{
		___BaseSerializerClassName_2 = value;
		Il2CppCodeGenWriteBarrier(&___BaseSerializerClassName_2, value);
	}

	inline static int32_t get_offset_of_ImplementationClassName_3() { return static_cast<int32_t>(offsetof(SerializerInfo_t3482254802, ___ImplementationClassName_3)); }
	inline String_t* get_ImplementationClassName_3() const { return ___ImplementationClassName_3; }
	inline String_t** get_address_of_ImplementationClassName_3() { return &___ImplementationClassName_3; }
	inline void set_ImplementationClassName_3(String_t* value)
	{
		___ImplementationClassName_3 = value;
		Il2CppCodeGenWriteBarrier(&___ImplementationClassName_3, value);
	}

	inline static int32_t get_offset_of_NoReader_4() { return static_cast<int32_t>(offsetof(SerializerInfo_t3482254802, ___NoReader_4)); }
	inline bool get_NoReader_4() const { return ___NoReader_4; }
	inline bool* get_address_of_NoReader_4() { return &___NoReader_4; }
	inline void set_NoReader_4(bool value)
	{
		___NoReader_4 = value;
	}

	inline static int32_t get_offset_of_NoWriter_5() { return static_cast<int32_t>(offsetof(SerializerInfo_t3482254802, ___NoWriter_5)); }
	inline bool get_NoWriter_5() const { return ___NoWriter_5; }
	inline bool* get_address_of_NoWriter_5() { return &___NoWriter_5; }
	inline void set_NoWriter_5(bool value)
	{
		___NoWriter_5 = value;
	}

	inline static int32_t get_offset_of_GenerateAsInternal_6() { return static_cast<int32_t>(offsetof(SerializerInfo_t3482254802, ___GenerateAsInternal_6)); }
	inline bool get_GenerateAsInternal_6() const { return ___GenerateAsInternal_6; }
	inline bool* get_address_of_GenerateAsInternal_6() { return &___GenerateAsInternal_6; }
	inline void set_GenerateAsInternal_6(bool value)
	{
		___GenerateAsInternal_6 = value;
	}

	inline static int32_t get_offset_of_Namespace_7() { return static_cast<int32_t>(offsetof(SerializerInfo_t3482254802, ___Namespace_7)); }
	inline String_t* get_Namespace_7() const { return ___Namespace_7; }
	inline String_t** get_address_of_Namespace_7() { return &___Namespace_7; }
	inline void set_Namespace_7(String_t* value)
	{
		___Namespace_7 = value;
		Il2CppCodeGenWriteBarrier(&___Namespace_7, value);
	}

	inline static int32_t get_offset_of_NamespaceImports_8() { return static_cast<int32_t>(offsetof(SerializerInfo_t3482254802, ___NamespaceImports_8)); }
	inline StringU5BU5D_t1642385972* get_NamespaceImports_8() const { return ___NamespaceImports_8; }
	inline StringU5BU5D_t1642385972** get_address_of_NamespaceImports_8() { return &___NamespaceImports_8; }
	inline void set_NamespaceImports_8(StringU5BU5D_t1642385972* value)
	{
		___NamespaceImports_8 = value;
		Il2CppCodeGenWriteBarrier(&___NamespaceImports_8, value);
	}

	inline static int32_t get_offset_of_ReaderHooks_9() { return static_cast<int32_t>(offsetof(SerializerInfo_t3482254802, ___ReaderHooks_9)); }
	inline HookU5BU5D_t914467364* get_ReaderHooks_9() const { return ___ReaderHooks_9; }
	inline HookU5BU5D_t914467364** get_address_of_ReaderHooks_9() { return &___ReaderHooks_9; }
	inline void set_ReaderHooks_9(HookU5BU5D_t914467364* value)
	{
		___ReaderHooks_9 = value;
		Il2CppCodeGenWriteBarrier(&___ReaderHooks_9, value);
	}

	inline static int32_t get_offset_of_WriterHooks_10() { return static_cast<int32_t>(offsetof(SerializerInfo_t3482254802, ___WriterHooks_10)); }
	inline HookU5BU5D_t914467364* get_WriterHooks_10() const { return ___WriterHooks_10; }
	inline HookU5BU5D_t914467364** get_address_of_WriterHooks_10() { return &___WriterHooks_10; }
	inline void set_WriterHooks_10(HookU5BU5D_t914467364* value)
	{
		___WriterHooks_10 = value;
		Il2CppCodeGenWriteBarrier(&___WriterHooks_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
