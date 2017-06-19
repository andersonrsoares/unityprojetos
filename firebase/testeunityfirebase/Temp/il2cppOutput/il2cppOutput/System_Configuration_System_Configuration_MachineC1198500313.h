#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Configuration_System_Configuration_InternalC547577555.h"

// System.Configuration.ConfigurationFileMap
struct ConfigurationFileMap_t2625210096;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.MachineConfigurationHost
struct  MachineConfigurationHost_t1198500313  : public InternalConfigurationHost_t547577555
{
public:
	// System.Configuration.ConfigurationFileMap System.Configuration.MachineConfigurationHost::map
	ConfigurationFileMap_t2625210096 * ___map_0;

public:
	inline static int32_t get_offset_of_map_0() { return static_cast<int32_t>(offsetof(MachineConfigurationHost_t1198500313, ___map_0)); }
	inline ConfigurationFileMap_t2625210096 * get_map_0() const { return ___map_0; }
	inline ConfigurationFileMap_t2625210096 ** get_address_of_map_0() { return &___map_0; }
	inline void set_map_0(ConfigurationFileMap_t2625210096 * value)
	{
		___map_0 = value;
		Il2CppCodeGenWriteBarrier(&___map_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
