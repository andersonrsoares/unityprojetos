#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.CodeDom.Compiler.CodeGenerator/Visitor
struct Visitor_t4003864182;
// System.Type[]
struct TypeU5BU5D_t1664964607;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CodeDom.Compiler.CodeGenerator
struct  CodeGenerator_t1245030040  : public Il2CppObject
{
public:
	// System.CodeDom.Compiler.CodeGenerator/Visitor System.CodeDom.Compiler.CodeGenerator::visitor
	Visitor_t4003864182 * ___visitor_0;

public:
	inline static int32_t get_offset_of_visitor_0() { return static_cast<int32_t>(offsetof(CodeGenerator_t1245030040, ___visitor_0)); }
	inline Visitor_t4003864182 * get_visitor_0() const { return ___visitor_0; }
	inline Visitor_t4003864182 ** get_address_of_visitor_0() { return &___visitor_0; }
	inline void set_visitor_0(Visitor_t4003864182 * value)
	{
		___visitor_0 = value;
		Il2CppCodeGenWriteBarrier(&___visitor_0, value);
	}
};

struct CodeGenerator_t1245030040_StaticFields
{
public:
	// System.Type[] System.CodeDom.Compiler.CodeGenerator::memberTypes
	TypeU5BU5D_t1664964607* ___memberTypes_1;

public:
	inline static int32_t get_offset_of_memberTypes_1() { return static_cast<int32_t>(offsetof(CodeGenerator_t1245030040_StaticFields, ___memberTypes_1)); }
	inline TypeU5BU5D_t1664964607* get_memberTypes_1() const { return ___memberTypes_1; }
	inline TypeU5BU5D_t1664964607** get_address_of_memberTypes_1() { return &___memberTypes_1; }
	inline void set_memberTypes_1(TypeU5BU5D_t1664964607* value)
	{
		___memberTypes_1 = value;
		Il2CppCodeGenWriteBarrier(&___memberTypes_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
