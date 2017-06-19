#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Security_CodeAccessPermission3468021764.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationPermission
struct  ConfigurationPermission_t1611094853  : public CodeAccessPermission_t3468021764
{
public:
	// System.Boolean System.Configuration.ConfigurationPermission::unrestricted
	bool ___unrestricted_0;

public:
	inline static int32_t get_offset_of_unrestricted_0() { return static_cast<int32_t>(offsetof(ConfigurationPermission_t1611094853, ___unrestricted_0)); }
	inline bool get_unrestricted_0() const { return ___unrestricted_0; }
	inline bool* get_address_of_unrestricted_0() { return &___unrestricted_0; }
	inline void set_unrestricted_0(bool value)
	{
		___unrestricted_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
