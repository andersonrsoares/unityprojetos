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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CodeDom.Compiler.CompilerError
struct  CompilerError_t2965933621  : public Il2CppObject
{
public:
	// System.String System.CodeDom.Compiler.CompilerError::fileName
	String_t* ___fileName_0;
	// System.Int32 System.CodeDom.Compiler.CompilerError::line
	int32_t ___line_1;
	// System.Int32 System.CodeDom.Compiler.CompilerError::column
	int32_t ___column_2;
	// System.String System.CodeDom.Compiler.CompilerError::errorNumber
	String_t* ___errorNumber_3;
	// System.String System.CodeDom.Compiler.CompilerError::errorText
	String_t* ___errorText_4;
	// System.Boolean System.CodeDom.Compiler.CompilerError::isWarning
	bool ___isWarning_5;

public:
	inline static int32_t get_offset_of_fileName_0() { return static_cast<int32_t>(offsetof(CompilerError_t2965933621, ___fileName_0)); }
	inline String_t* get_fileName_0() const { return ___fileName_0; }
	inline String_t** get_address_of_fileName_0() { return &___fileName_0; }
	inline void set_fileName_0(String_t* value)
	{
		___fileName_0 = value;
		Il2CppCodeGenWriteBarrier(&___fileName_0, value);
	}

	inline static int32_t get_offset_of_line_1() { return static_cast<int32_t>(offsetof(CompilerError_t2965933621, ___line_1)); }
	inline int32_t get_line_1() const { return ___line_1; }
	inline int32_t* get_address_of_line_1() { return &___line_1; }
	inline void set_line_1(int32_t value)
	{
		___line_1 = value;
	}

	inline static int32_t get_offset_of_column_2() { return static_cast<int32_t>(offsetof(CompilerError_t2965933621, ___column_2)); }
	inline int32_t get_column_2() const { return ___column_2; }
	inline int32_t* get_address_of_column_2() { return &___column_2; }
	inline void set_column_2(int32_t value)
	{
		___column_2 = value;
	}

	inline static int32_t get_offset_of_errorNumber_3() { return static_cast<int32_t>(offsetof(CompilerError_t2965933621, ___errorNumber_3)); }
	inline String_t* get_errorNumber_3() const { return ___errorNumber_3; }
	inline String_t** get_address_of_errorNumber_3() { return &___errorNumber_3; }
	inline void set_errorNumber_3(String_t* value)
	{
		___errorNumber_3 = value;
		Il2CppCodeGenWriteBarrier(&___errorNumber_3, value);
	}

	inline static int32_t get_offset_of_errorText_4() { return static_cast<int32_t>(offsetof(CompilerError_t2965933621, ___errorText_4)); }
	inline String_t* get_errorText_4() const { return ___errorText_4; }
	inline String_t** get_address_of_errorText_4() { return &___errorText_4; }
	inline void set_errorText_4(String_t* value)
	{
		___errorText_4 = value;
		Il2CppCodeGenWriteBarrier(&___errorText_4, value);
	}

	inline static int32_t get_offset_of_isWarning_5() { return static_cast<int32_t>(offsetof(CompilerError_t2965933621, ___isWarning_5)); }
	inline bool get_isWarning_5() const { return ___isWarning_5; }
	inline bool* get_address_of_isWarning_5() { return &___isWarning_5; }
	inline void set_isWarning_5(bool value)
	{
		___isWarning_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
