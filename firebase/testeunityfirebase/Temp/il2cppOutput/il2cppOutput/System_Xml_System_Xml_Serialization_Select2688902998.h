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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.Select
struct  Select_t2688902998  : public Il2CppObject
{
public:
	// System.String System.Xml.Serialization.Select::TypeName
	String_t* ___TypeName_0;
	// System.String[] System.Xml.Serialization.Select::TypeAttributes
	StringU5BU5D_t1642385972* ___TypeAttributes_1;
	// System.String System.Xml.Serialization.Select::TypeMember
	String_t* ___TypeMember_2;

public:
	inline static int32_t get_offset_of_TypeName_0() { return static_cast<int32_t>(offsetof(Select_t2688902998, ___TypeName_0)); }
	inline String_t* get_TypeName_0() const { return ___TypeName_0; }
	inline String_t** get_address_of_TypeName_0() { return &___TypeName_0; }
	inline void set_TypeName_0(String_t* value)
	{
		___TypeName_0 = value;
		Il2CppCodeGenWriteBarrier(&___TypeName_0, value);
	}

	inline static int32_t get_offset_of_TypeAttributes_1() { return static_cast<int32_t>(offsetof(Select_t2688902998, ___TypeAttributes_1)); }
	inline StringU5BU5D_t1642385972* get_TypeAttributes_1() const { return ___TypeAttributes_1; }
	inline StringU5BU5D_t1642385972** get_address_of_TypeAttributes_1() { return &___TypeAttributes_1; }
	inline void set_TypeAttributes_1(StringU5BU5D_t1642385972* value)
	{
		___TypeAttributes_1 = value;
		Il2CppCodeGenWriteBarrier(&___TypeAttributes_1, value);
	}

	inline static int32_t get_offset_of_TypeMember_2() { return static_cast<int32_t>(offsetof(Select_t2688902998, ___TypeMember_2)); }
	inline String_t* get_TypeMember_2() const { return ___TypeMember_2; }
	inline String_t** get_address_of_TypeMember_2() { return &___TypeMember_2; }
	inline void set_TypeMember_2(String_t* value)
	{
		___TypeMember_2 = value;
		Il2CppCodeGenWriteBarrier(&___TypeMember_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
