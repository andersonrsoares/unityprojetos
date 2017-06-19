#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Mono_CSharp_CSharpCodeGenerator1166552479.h"

// System.String
struct String_t;
// System.Threading.Mutex
struct Mutex_t297030111;
// System.Collections.Specialized.StringCollection
struct StringCollection_t352985975;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.CSharp.CSharpCodeCompiler
struct  CSharpCodeCompiler_t1800184175  : public CSharpCodeGenerator_t1166552479
{
public:
	// System.Threading.Mutex Mono.CSharp.CSharpCodeCompiler::mcsOutMutex
	Mutex_t297030111 * ___mcsOutMutex_7;
	// System.Collections.Specialized.StringCollection Mono.CSharp.CSharpCodeCompiler::mcsOutput
	StringCollection_t352985975 * ___mcsOutput_8;

public:
	inline static int32_t get_offset_of_mcsOutMutex_7() { return static_cast<int32_t>(offsetof(CSharpCodeCompiler_t1800184175, ___mcsOutMutex_7)); }
	inline Mutex_t297030111 * get_mcsOutMutex_7() const { return ___mcsOutMutex_7; }
	inline Mutex_t297030111 ** get_address_of_mcsOutMutex_7() { return &___mcsOutMutex_7; }
	inline void set_mcsOutMutex_7(Mutex_t297030111 * value)
	{
		___mcsOutMutex_7 = value;
		Il2CppCodeGenWriteBarrier(&___mcsOutMutex_7, value);
	}

	inline static int32_t get_offset_of_mcsOutput_8() { return static_cast<int32_t>(offsetof(CSharpCodeCompiler_t1800184175, ___mcsOutput_8)); }
	inline StringCollection_t352985975 * get_mcsOutput_8() const { return ___mcsOutput_8; }
	inline StringCollection_t352985975 ** get_address_of_mcsOutput_8() { return &___mcsOutput_8; }
	inline void set_mcsOutput_8(StringCollection_t352985975 * value)
	{
		___mcsOutput_8 = value;
		Il2CppCodeGenWriteBarrier(&___mcsOutput_8, value);
	}
};

struct CSharpCodeCompiler_t1800184175_StaticFields
{
public:
	// System.String Mono.CSharp.CSharpCodeCompiler::windowsMcsPath
	String_t* ___windowsMcsPath_5;
	// System.String Mono.CSharp.CSharpCodeCompiler::windowsMonoPath
	String_t* ___windowsMonoPath_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.CSharp.CSharpCodeCompiler::<>f__switch$map1
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map1_9;

public:
	inline static int32_t get_offset_of_windowsMcsPath_5() { return static_cast<int32_t>(offsetof(CSharpCodeCompiler_t1800184175_StaticFields, ___windowsMcsPath_5)); }
	inline String_t* get_windowsMcsPath_5() const { return ___windowsMcsPath_5; }
	inline String_t** get_address_of_windowsMcsPath_5() { return &___windowsMcsPath_5; }
	inline void set_windowsMcsPath_5(String_t* value)
	{
		___windowsMcsPath_5 = value;
		Il2CppCodeGenWriteBarrier(&___windowsMcsPath_5, value);
	}

	inline static int32_t get_offset_of_windowsMonoPath_6() { return static_cast<int32_t>(offsetof(CSharpCodeCompiler_t1800184175_StaticFields, ___windowsMonoPath_6)); }
	inline String_t* get_windowsMonoPath_6() const { return ___windowsMonoPath_6; }
	inline String_t** get_address_of_windowsMonoPath_6() { return &___windowsMonoPath_6; }
	inline void set_windowsMonoPath_6(String_t* value)
	{
		___windowsMonoPath_6 = value;
		Il2CppCodeGenWriteBarrier(&___windowsMonoPath_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_9() { return static_cast<int32_t>(offsetof(CSharpCodeCompiler_t1800184175_StaticFields, ___U3CU3Ef__switchU24map1_9)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map1_9() const { return ___U3CU3Ef__switchU24map1_9; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map1_9() { return &___U3CU3Ef__switchU24map1_9; }
	inline void set_U3CU3Ef__switchU24map1_9(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map1_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
