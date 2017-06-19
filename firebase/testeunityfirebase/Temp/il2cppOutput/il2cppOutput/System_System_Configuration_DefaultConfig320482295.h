#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Configuration.DefaultConfig
struct DefaultConfig_t320482295;
// System.Configuration.ConfigurationData
struct ConfigurationData_t2583411386;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.DefaultConfig
struct  DefaultConfig_t320482295  : public Il2CppObject
{
public:
	// System.Configuration.ConfigurationData System.Configuration.DefaultConfig::config
	ConfigurationData_t2583411386 * ___config_1;

public:
	inline static int32_t get_offset_of_config_1() { return static_cast<int32_t>(offsetof(DefaultConfig_t320482295, ___config_1)); }
	inline ConfigurationData_t2583411386 * get_config_1() const { return ___config_1; }
	inline ConfigurationData_t2583411386 ** get_address_of_config_1() { return &___config_1; }
	inline void set_config_1(ConfigurationData_t2583411386 * value)
	{
		___config_1 = value;
		Il2CppCodeGenWriteBarrier(&___config_1, value);
	}
};

struct DefaultConfig_t320482295_StaticFields
{
public:
	// System.Configuration.DefaultConfig System.Configuration.DefaultConfig::instance
	DefaultConfig_t320482295 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(DefaultConfig_t320482295_StaticFields, ___instance_0)); }
	inline DefaultConfig_t320482295 * get_instance_0() const { return ___instance_0; }
	inline DefaultConfig_t320482295 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(DefaultConfig_t320482295 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
