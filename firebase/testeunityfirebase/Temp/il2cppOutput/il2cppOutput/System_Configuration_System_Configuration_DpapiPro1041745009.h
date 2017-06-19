#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Configuration_System_Configuration_Protecte3971982415.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.DpapiProtectedConfigurationProvider
struct  DpapiProtectedConfigurationProvider_t1041745009  : public ProtectedConfigurationProvider_t3971982415
{
public:
	// System.Boolean System.Configuration.DpapiProtectedConfigurationProvider::useMachineProtection
	bool ___useMachineProtection_4;

public:
	inline static int32_t get_offset_of_useMachineProtection_4() { return static_cast<int32_t>(offsetof(DpapiProtectedConfigurationProvider_t1041745009, ___useMachineProtection_4)); }
	inline bool get_useMachineProtection_4() const { return ___useMachineProtection_4; }
	inline bool* get_address_of_useMachineProtection_4() { return &___useMachineProtection_4; }
	inline void set_useMachineProtection_4(bool value)
	{
		___useMachineProtection_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
