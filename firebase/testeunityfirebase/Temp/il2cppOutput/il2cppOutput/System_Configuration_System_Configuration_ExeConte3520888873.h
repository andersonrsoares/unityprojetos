#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_Configuration_System_Configuration_Configur1204907851.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ExeContext
struct  ExeContext_t3520888873  : public Il2CppObject
{
public:
	// System.String System.Configuration.ExeContext::path
	String_t* ___path_0;
	// System.Configuration.ConfigurationUserLevel System.Configuration.ExeContext::level
	int32_t ___level_1;

public:
	inline static int32_t get_offset_of_path_0() { return static_cast<int32_t>(offsetof(ExeContext_t3520888873, ___path_0)); }
	inline String_t* get_path_0() const { return ___path_0; }
	inline String_t** get_address_of_path_0() { return &___path_0; }
	inline void set_path_0(String_t* value)
	{
		___path_0 = value;
		Il2CppCodeGenWriteBarrier(&___path_0, value);
	}

	inline static int32_t get_offset_of_level_1() { return static_cast<int32_t>(offsetof(ExeContext_t3520888873, ___level_1)); }
	inline int32_t get_level_1() const { return ___level_1; }
	inline int32_t* get_address_of_level_1() { return &___level_1; }
	inline void set_level_1(int32_t value)
	{
		___level_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
