#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Hashtable
struct Hashtable_t909839986;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.CodeIdentifiers
struct  CodeIdentifiers_t812008827  : public Il2CppObject
{
public:
	// System.Collections.Hashtable System.Xml.Serialization.CodeIdentifiers::table
	Hashtable_t909839986 * ___table_0;
	// System.Collections.Hashtable System.Xml.Serialization.CodeIdentifiers::reserved
	Hashtable_t909839986 * ___reserved_1;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(CodeIdentifiers_t812008827, ___table_0)); }
	inline Hashtable_t909839986 * get_table_0() const { return ___table_0; }
	inline Hashtable_t909839986 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Hashtable_t909839986 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier(&___table_0, value);
	}

	inline static int32_t get_offset_of_reserved_1() { return static_cast<int32_t>(offsetof(CodeIdentifiers_t812008827, ___reserved_1)); }
	inline Hashtable_t909839986 * get_reserved_1() const { return ___reserved_1; }
	inline Hashtable_t909839986 ** get_address_of_reserved_1() { return &___reserved_1; }
	inline void set_reserved_1(Hashtable_t909839986 * value)
	{
		___reserved_1 = value;
		Il2CppCodeGenWriteBarrier(&___reserved_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
