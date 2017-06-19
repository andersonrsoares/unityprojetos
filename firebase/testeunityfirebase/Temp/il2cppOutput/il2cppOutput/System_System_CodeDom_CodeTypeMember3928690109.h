#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_CodeDom_CodeObject394523236.h"
#include "System_System_CodeDom_MemberAttributes1656695347.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CodeDom.CodeTypeMember
struct  CodeTypeMember_t3928690109  : public CodeObject_t394523236
{
public:
	// System.String System.CodeDom.CodeTypeMember::name
	String_t* ___name_0;
	// System.CodeDom.MemberAttributes System.CodeDom.CodeTypeMember::attributes
	int32_t ___attributes_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(CodeTypeMember_t3928690109, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_attributes_1() { return static_cast<int32_t>(offsetof(CodeTypeMember_t3928690109, ___attributes_1)); }
	inline int32_t get_attributes_1() const { return ___attributes_1; }
	inline int32_t* get_address_of_attributes_1() { return &___attributes_1; }
	inline void set_attributes_1(int32_t value)
	{
		___attributes_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
