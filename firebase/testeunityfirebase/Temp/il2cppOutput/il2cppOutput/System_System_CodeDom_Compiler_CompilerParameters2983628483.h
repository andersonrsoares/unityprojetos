#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.String
struct String_t;
// System.Security.Policy.Evidence
struct Evidence_t1407710183;
// System.Collections.Specialized.StringCollection
struct StringCollection_t352985975;
// System.CodeDom.Compiler.TempFileCollection
struct TempFileCollection_t3377240462;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CodeDom.Compiler.CompilerParameters
struct  CompilerParameters_t2983628483  : public Il2CppObject
{
public:
	// System.String System.CodeDom.Compiler.CompilerParameters::compilerOptions
	String_t* ___compilerOptions_0;
	// System.Security.Policy.Evidence System.CodeDom.Compiler.CompilerParameters::evidence
	Evidence_t1407710183 * ___evidence_1;
	// System.Boolean System.CodeDom.Compiler.CompilerParameters::generateExecutable
	bool ___generateExecutable_2;
	// System.Boolean System.CodeDom.Compiler.CompilerParameters::generateInMemory
	bool ___generateInMemory_3;
	// System.Boolean System.CodeDom.Compiler.CompilerParameters::includeDebugInformation
	bool ___includeDebugInformation_4;
	// System.String System.CodeDom.Compiler.CompilerParameters::outputAssembly
	String_t* ___outputAssembly_5;
	// System.Collections.Specialized.StringCollection System.CodeDom.Compiler.CompilerParameters::referencedAssemblies
	StringCollection_t352985975 * ___referencedAssemblies_6;
	// System.CodeDom.Compiler.TempFileCollection System.CodeDom.Compiler.CompilerParameters::tempFiles
	TempFileCollection_t3377240462 * ___tempFiles_7;
	// System.Boolean System.CodeDom.Compiler.CompilerParameters::treatWarningsAsErrors
	bool ___treatWarningsAsErrors_8;
	// System.IntPtr System.CodeDom.Compiler.CompilerParameters::userToken
	IntPtr_t ___userToken_9;
	// System.Int32 System.CodeDom.Compiler.CompilerParameters::warningLevel
	int32_t ___warningLevel_10;
	// System.String System.CodeDom.Compiler.CompilerParameters::win32Resource
	String_t* ___win32Resource_11;
	// System.Collections.Specialized.StringCollection System.CodeDom.Compiler.CompilerParameters::embedded_resources
	StringCollection_t352985975 * ___embedded_resources_12;
	// System.Collections.Specialized.StringCollection System.CodeDom.Compiler.CompilerParameters::linked_resources
	StringCollection_t352985975 * ___linked_resources_13;

public:
	inline static int32_t get_offset_of_compilerOptions_0() { return static_cast<int32_t>(offsetof(CompilerParameters_t2983628483, ___compilerOptions_0)); }
	inline String_t* get_compilerOptions_0() const { return ___compilerOptions_0; }
	inline String_t** get_address_of_compilerOptions_0() { return &___compilerOptions_0; }
	inline void set_compilerOptions_0(String_t* value)
	{
		___compilerOptions_0 = value;
		Il2CppCodeGenWriteBarrier(&___compilerOptions_0, value);
	}

	inline static int32_t get_offset_of_evidence_1() { return static_cast<int32_t>(offsetof(CompilerParameters_t2983628483, ___evidence_1)); }
	inline Evidence_t1407710183 * get_evidence_1() const { return ___evidence_1; }
	inline Evidence_t1407710183 ** get_address_of_evidence_1() { return &___evidence_1; }
	inline void set_evidence_1(Evidence_t1407710183 * value)
	{
		___evidence_1 = value;
		Il2CppCodeGenWriteBarrier(&___evidence_1, value);
	}

	inline static int32_t get_offset_of_generateExecutable_2() { return static_cast<int32_t>(offsetof(CompilerParameters_t2983628483, ___generateExecutable_2)); }
	inline bool get_generateExecutable_2() const { return ___generateExecutable_2; }
	inline bool* get_address_of_generateExecutable_2() { return &___generateExecutable_2; }
	inline void set_generateExecutable_2(bool value)
	{
		___generateExecutable_2 = value;
	}

	inline static int32_t get_offset_of_generateInMemory_3() { return static_cast<int32_t>(offsetof(CompilerParameters_t2983628483, ___generateInMemory_3)); }
	inline bool get_generateInMemory_3() const { return ___generateInMemory_3; }
	inline bool* get_address_of_generateInMemory_3() { return &___generateInMemory_3; }
	inline void set_generateInMemory_3(bool value)
	{
		___generateInMemory_3 = value;
	}

	inline static int32_t get_offset_of_includeDebugInformation_4() { return static_cast<int32_t>(offsetof(CompilerParameters_t2983628483, ___includeDebugInformation_4)); }
	inline bool get_includeDebugInformation_4() const { return ___includeDebugInformation_4; }
	inline bool* get_address_of_includeDebugInformation_4() { return &___includeDebugInformation_4; }
	inline void set_includeDebugInformation_4(bool value)
	{
		___includeDebugInformation_4 = value;
	}

	inline static int32_t get_offset_of_outputAssembly_5() { return static_cast<int32_t>(offsetof(CompilerParameters_t2983628483, ___outputAssembly_5)); }
	inline String_t* get_outputAssembly_5() const { return ___outputAssembly_5; }
	inline String_t** get_address_of_outputAssembly_5() { return &___outputAssembly_5; }
	inline void set_outputAssembly_5(String_t* value)
	{
		___outputAssembly_5 = value;
		Il2CppCodeGenWriteBarrier(&___outputAssembly_5, value);
	}

	inline static int32_t get_offset_of_referencedAssemblies_6() { return static_cast<int32_t>(offsetof(CompilerParameters_t2983628483, ___referencedAssemblies_6)); }
	inline StringCollection_t352985975 * get_referencedAssemblies_6() const { return ___referencedAssemblies_6; }
	inline StringCollection_t352985975 ** get_address_of_referencedAssemblies_6() { return &___referencedAssemblies_6; }
	inline void set_referencedAssemblies_6(StringCollection_t352985975 * value)
	{
		___referencedAssemblies_6 = value;
		Il2CppCodeGenWriteBarrier(&___referencedAssemblies_6, value);
	}

	inline static int32_t get_offset_of_tempFiles_7() { return static_cast<int32_t>(offsetof(CompilerParameters_t2983628483, ___tempFiles_7)); }
	inline TempFileCollection_t3377240462 * get_tempFiles_7() const { return ___tempFiles_7; }
	inline TempFileCollection_t3377240462 ** get_address_of_tempFiles_7() { return &___tempFiles_7; }
	inline void set_tempFiles_7(TempFileCollection_t3377240462 * value)
	{
		___tempFiles_7 = value;
		Il2CppCodeGenWriteBarrier(&___tempFiles_7, value);
	}

	inline static int32_t get_offset_of_treatWarningsAsErrors_8() { return static_cast<int32_t>(offsetof(CompilerParameters_t2983628483, ___treatWarningsAsErrors_8)); }
	inline bool get_treatWarningsAsErrors_8() const { return ___treatWarningsAsErrors_8; }
	inline bool* get_address_of_treatWarningsAsErrors_8() { return &___treatWarningsAsErrors_8; }
	inline void set_treatWarningsAsErrors_8(bool value)
	{
		___treatWarningsAsErrors_8 = value;
	}

	inline static int32_t get_offset_of_userToken_9() { return static_cast<int32_t>(offsetof(CompilerParameters_t2983628483, ___userToken_9)); }
	inline IntPtr_t get_userToken_9() const { return ___userToken_9; }
	inline IntPtr_t* get_address_of_userToken_9() { return &___userToken_9; }
	inline void set_userToken_9(IntPtr_t value)
	{
		___userToken_9 = value;
	}

	inline static int32_t get_offset_of_warningLevel_10() { return static_cast<int32_t>(offsetof(CompilerParameters_t2983628483, ___warningLevel_10)); }
	inline int32_t get_warningLevel_10() const { return ___warningLevel_10; }
	inline int32_t* get_address_of_warningLevel_10() { return &___warningLevel_10; }
	inline void set_warningLevel_10(int32_t value)
	{
		___warningLevel_10 = value;
	}

	inline static int32_t get_offset_of_win32Resource_11() { return static_cast<int32_t>(offsetof(CompilerParameters_t2983628483, ___win32Resource_11)); }
	inline String_t* get_win32Resource_11() const { return ___win32Resource_11; }
	inline String_t** get_address_of_win32Resource_11() { return &___win32Resource_11; }
	inline void set_win32Resource_11(String_t* value)
	{
		___win32Resource_11 = value;
		Il2CppCodeGenWriteBarrier(&___win32Resource_11, value);
	}

	inline static int32_t get_offset_of_embedded_resources_12() { return static_cast<int32_t>(offsetof(CompilerParameters_t2983628483, ___embedded_resources_12)); }
	inline StringCollection_t352985975 * get_embedded_resources_12() const { return ___embedded_resources_12; }
	inline StringCollection_t352985975 ** get_address_of_embedded_resources_12() { return &___embedded_resources_12; }
	inline void set_embedded_resources_12(StringCollection_t352985975 * value)
	{
		___embedded_resources_12 = value;
		Il2CppCodeGenWriteBarrier(&___embedded_resources_12, value);
	}

	inline static int32_t get_offset_of_linked_resources_13() { return static_cast<int32_t>(offsetof(CompilerParameters_t2983628483, ___linked_resources_13)); }
	inline StringCollection_t352985975 * get_linked_resources_13() const { return ___linked_resources_13; }
	inline StringCollection_t352985975 ** get_address_of_linked_resources_13() { return &___linked_resources_13; }
	inline void set_linked_resources_13(StringCollection_t352985975 * value)
	{
		___linked_resources_13 = value;
		Il2CppCodeGenWriteBarrier(&___linked_resources_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
