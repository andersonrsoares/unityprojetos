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

// System.Xml.Serialization.Select
struct Select_t2688902998;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.Hook
struct  Hook_t3980190809  : public Il2CppObject
{
public:
	// System.Xml.Serialization.HookType System.Xml.Serialization.Hook::HookType
	int32_t ___HookType_0;
	// System.Xml.Serialization.Select System.Xml.Serialization.Hook::Select
	Select_t2688902998 * ___Select_1;
	// System.String System.Xml.Serialization.Hook::InsertBefore
	String_t* ___InsertBefore_2;
	// System.String System.Xml.Serialization.Hook::InsertAfter
	String_t* ___InsertAfter_3;
	// System.String System.Xml.Serialization.Hook::Replace
	String_t* ___Replace_4;

public:
	inline static int32_t get_offset_of_HookType_0() { return static_cast<int32_t>(offsetof(Hook_t3980190809, ___HookType_0)); }
	inline int32_t get_HookType_0() const { return ___HookType_0; }
	inline int32_t* get_address_of_HookType_0() { return &___HookType_0; }
	inline void set_HookType_0(int32_t value)
	{
		___HookType_0 = value;
	}

	inline static int32_t get_offset_of_Select_1() { return static_cast<int32_t>(offsetof(Hook_t3980190809, ___Select_1)); }
	inline Select_t2688902998 * get_Select_1() const { return ___Select_1; }
	inline Select_t2688902998 ** get_address_of_Select_1() { return &___Select_1; }
	inline void set_Select_1(Select_t2688902998 * value)
	{
		___Select_1 = value;
		Il2CppCodeGenWriteBarrier(&___Select_1, value);
	}

	inline static int32_t get_offset_of_InsertBefore_2() { return static_cast<int32_t>(offsetof(Hook_t3980190809, ___InsertBefore_2)); }
	inline String_t* get_InsertBefore_2() const { return ___InsertBefore_2; }
	inline String_t** get_address_of_InsertBefore_2() { return &___InsertBefore_2; }
	inline void set_InsertBefore_2(String_t* value)
	{
		___InsertBefore_2 = value;
		Il2CppCodeGenWriteBarrier(&___InsertBefore_2, value);
	}

	inline static int32_t get_offset_of_InsertAfter_3() { return static_cast<int32_t>(offsetof(Hook_t3980190809, ___InsertAfter_3)); }
	inline String_t* get_InsertAfter_3() const { return ___InsertAfter_3; }
	inline String_t** get_address_of_InsertAfter_3() { return &___InsertAfter_3; }
	inline void set_InsertAfter_3(String_t* value)
	{
		___InsertAfter_3 = value;
		Il2CppCodeGenWriteBarrier(&___InsertAfter_3, value);
	}

	inline static int32_t get_offset_of_Replace_4() { return static_cast<int32_t>(offsetof(Hook_t3980190809, ___Replace_4)); }
	inline String_t* get_Replace_4() const { return ___Replace_4; }
	inline String_t** get_address_of_Replace_4() { return &___Replace_4; }
	inline void set_Replace_4(String_t* value)
	{
		___Replace_4 = value;
		Il2CppCodeGenWriteBarrier(&___Replace_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
