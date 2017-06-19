#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_Serialization_HookType2601538049.h"
#include "System_Xml_System_Xml_Serialization_XmlMappingAcce3616682003.h"

// System.Type
struct Type_t;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.SerializationCodeGenerator/HookInfo
struct  HookInfo_t1256072214  : public Il2CppObject
{
public:
	// System.Xml.Serialization.HookType System.Xml.Serialization.SerializationCodeGenerator/HookInfo::HookType
	int32_t ___HookType_0;
	// System.Type System.Xml.Serialization.SerializationCodeGenerator/HookInfo::Type
	Type_t * ___Type_1;
	// System.String System.Xml.Serialization.SerializationCodeGenerator/HookInfo::Member
	String_t* ___Member_2;
	// System.Xml.Serialization.XmlMappingAccess System.Xml.Serialization.SerializationCodeGenerator/HookInfo::Direction
	int32_t ___Direction_3;

public:
	inline static int32_t get_offset_of_HookType_0() { return static_cast<int32_t>(offsetof(HookInfo_t1256072214, ___HookType_0)); }
	inline int32_t get_HookType_0() const { return ___HookType_0; }
	inline int32_t* get_address_of_HookType_0() { return &___HookType_0; }
	inline void set_HookType_0(int32_t value)
	{
		___HookType_0 = value;
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(HookInfo_t1256072214, ___Type_1)); }
	inline Type_t * get_Type_1() const { return ___Type_1; }
	inline Type_t ** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(Type_t * value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier(&___Type_1, value);
	}

	inline static int32_t get_offset_of_Member_2() { return static_cast<int32_t>(offsetof(HookInfo_t1256072214, ___Member_2)); }
	inline String_t* get_Member_2() const { return ___Member_2; }
	inline String_t** get_address_of_Member_2() { return &___Member_2; }
	inline void set_Member_2(String_t* value)
	{
		___Member_2 = value;
		Il2CppCodeGenWriteBarrier(&___Member_2, value);
	}

	inline static int32_t get_offset_of_Direction_3() { return static_cast<int32_t>(offsetof(HookInfo_t1256072214, ___Direction_3)); }
	inline int32_t get_Direction_3() const { return ___Direction_3; }
	inline int32_t* get_address_of_Direction_3() { return &___Direction_3; }
	inline void set_Direction_3(int32_t value)
	{
		___Direction_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
