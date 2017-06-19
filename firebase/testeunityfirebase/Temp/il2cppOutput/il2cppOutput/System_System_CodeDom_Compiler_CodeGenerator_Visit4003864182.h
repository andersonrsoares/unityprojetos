#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.CodeDom.Compiler.CodeGenerator
struct CodeGenerator_t1245030040;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CodeDom.Compiler.CodeGenerator/Visitor
struct  Visitor_t4003864182  : public Il2CppObject
{
public:
	// System.CodeDom.Compiler.CodeGenerator System.CodeDom.Compiler.CodeGenerator/Visitor::g
	CodeGenerator_t1245030040 * ___g_0;

public:
	inline static int32_t get_offset_of_g_0() { return static_cast<int32_t>(offsetof(Visitor_t4003864182, ___g_0)); }
	inline CodeGenerator_t1245030040 * get_g_0() const { return ___g_0; }
	inline CodeGenerator_t1245030040 ** get_address_of_g_0() { return &___g_0; }
	inline void set_g_0(CodeGenerator_t1245030040 * value)
	{
		___g_0 = value;
		Il2CppCodeGenWriteBarrier(&___g_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
