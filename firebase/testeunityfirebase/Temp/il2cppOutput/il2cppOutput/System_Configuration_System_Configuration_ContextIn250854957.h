#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Object
struct Il2CppObject;
// System.Configuration.Configuration
struct Configuration_t3335372970;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ContextInformation
struct  ContextInformation_t250854957  : public Il2CppObject
{
public:
	// System.Object System.Configuration.ContextInformation::ctx
	Il2CppObject * ___ctx_0;
	// System.Configuration.Configuration System.Configuration.ContextInformation::config
	Configuration_t3335372970 * ___config_1;

public:
	inline static int32_t get_offset_of_ctx_0() { return static_cast<int32_t>(offsetof(ContextInformation_t250854957, ___ctx_0)); }
	inline Il2CppObject * get_ctx_0() const { return ___ctx_0; }
	inline Il2CppObject ** get_address_of_ctx_0() { return &___ctx_0; }
	inline void set_ctx_0(Il2CppObject * value)
	{
		___ctx_0 = value;
		Il2CppCodeGenWriteBarrier(&___ctx_0, value);
	}

	inline static int32_t get_offset_of_config_1() { return static_cast<int32_t>(offsetof(ContextInformation_t250854957, ___config_1)); }
	inline Configuration_t3335372970 * get_config_1() const { return ___config_1; }
	inline Configuration_t3335372970 ** get_address_of_config_1() { return &___config_1; }
	inline void set_config_1(Configuration_t3335372970 * value)
	{
		___config_1 = value;
		Il2CppCodeGenWriteBarrier(&___config_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
