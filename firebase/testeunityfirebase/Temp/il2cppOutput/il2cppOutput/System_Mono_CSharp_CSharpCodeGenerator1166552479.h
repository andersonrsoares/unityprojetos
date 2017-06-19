#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_CodeDom_Compiler_CodeGenerator1245030040.h"

// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t1943082916;
// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.CSharp.CSharpCodeGenerator
struct  CSharpCodeGenerator_t1166552479  : public CodeGenerator_t1245030040
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Mono.CSharp.CSharpCodeGenerator::providerOptions
	Il2CppObject* ___providerOptions_2;
	// System.Boolean Mono.CSharp.CSharpCodeGenerator::dont_write_semicolon
	bool ___dont_write_semicolon_3;

public:
	inline static int32_t get_offset_of_providerOptions_2() { return static_cast<int32_t>(offsetof(CSharpCodeGenerator_t1166552479, ___providerOptions_2)); }
	inline Il2CppObject* get_providerOptions_2() const { return ___providerOptions_2; }
	inline Il2CppObject** get_address_of_providerOptions_2() { return &___providerOptions_2; }
	inline void set_providerOptions_2(Il2CppObject* value)
	{
		___providerOptions_2 = value;
		Il2CppCodeGenWriteBarrier(&___providerOptions_2, value);
	}

	inline static int32_t get_offset_of_dont_write_semicolon_3() { return static_cast<int32_t>(offsetof(CSharpCodeGenerator_t1166552479, ___dont_write_semicolon_3)); }
	inline bool get_dont_write_semicolon_3() const { return ___dont_write_semicolon_3; }
	inline bool* get_address_of_dont_write_semicolon_3() { return &___dont_write_semicolon_3; }
	inline void set_dont_write_semicolon_3(bool value)
	{
		___dont_write_semicolon_3 = value;
	}
};

struct CSharpCodeGenerator_t1166552479_StaticFields
{
public:
	// System.String[] Mono.CSharp.CSharpCodeGenerator::keywords
	StringU5BU5D_t1642385972* ___keywords_4;

public:
	inline static int32_t get_offset_of_keywords_4() { return static_cast<int32_t>(offsetof(CSharpCodeGenerator_t1166552479_StaticFields, ___keywords_4)); }
	inline StringU5BU5D_t1642385972* get_keywords_4() const { return ___keywords_4; }
	inline StringU5BU5D_t1642385972** get_address_of_keywords_4() { return &___keywords_4; }
	inline void set_keywords_4(StringU5BU5D_t1642385972* value)
	{
		___keywords_4 = value;
		Il2CppCodeGenWriteBarrier(&___keywords_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
