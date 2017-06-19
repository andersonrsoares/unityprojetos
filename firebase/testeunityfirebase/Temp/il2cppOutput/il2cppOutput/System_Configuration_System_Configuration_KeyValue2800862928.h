#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Configuration_System_Configuration_Configur1911180302.h"

// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3473514151;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.KeyValueConfigurationCollection
struct  KeyValueConfigurationCollection_t2800862928  : public ConfigurationElementCollection_t1911180302
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.KeyValueConfigurationCollection::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_24;

public:
	inline static int32_t get_offset_of_properties_24() { return static_cast<int32_t>(offsetof(KeyValueConfigurationCollection_t2800862928, ___properties_24)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_properties_24() const { return ___properties_24; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_properties_24() { return &___properties_24; }
	inline void set_properties_24(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___properties_24 = value;
		Il2CppCodeGenWriteBarrier(&___properties_24, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
