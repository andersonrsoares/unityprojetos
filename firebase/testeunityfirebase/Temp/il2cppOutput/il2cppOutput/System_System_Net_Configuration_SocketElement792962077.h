#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Configuration_System_Configuration_Configur1776195828.h"

// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3473514151;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t2048066811;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.SocketElement
struct  SocketElement_t792962077  : public ConfigurationElement_t1776195828
{
public:

public:
};

struct SocketElement_t792962077_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SocketElement::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_14;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SocketElement::alwaysUseCompletionPortsForAcceptProp
	ConfigurationProperty_t2048066811 * ___alwaysUseCompletionPortsForAcceptProp_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SocketElement::alwaysUseCompletionPortsForConnectProp
	ConfigurationProperty_t2048066811 * ___alwaysUseCompletionPortsForConnectProp_16;

public:
	inline static int32_t get_offset_of_properties_14() { return static_cast<int32_t>(offsetof(SocketElement_t792962077_StaticFields, ___properties_14)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_properties_14() const { return ___properties_14; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_properties_14() { return &___properties_14; }
	inline void set_properties_14(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___properties_14 = value;
		Il2CppCodeGenWriteBarrier(&___properties_14, value);
	}

	inline static int32_t get_offset_of_alwaysUseCompletionPortsForAcceptProp_15() { return static_cast<int32_t>(offsetof(SocketElement_t792962077_StaticFields, ___alwaysUseCompletionPortsForAcceptProp_15)); }
	inline ConfigurationProperty_t2048066811 * get_alwaysUseCompletionPortsForAcceptProp_15() const { return ___alwaysUseCompletionPortsForAcceptProp_15; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_alwaysUseCompletionPortsForAcceptProp_15() { return &___alwaysUseCompletionPortsForAcceptProp_15; }
	inline void set_alwaysUseCompletionPortsForAcceptProp_15(ConfigurationProperty_t2048066811 * value)
	{
		___alwaysUseCompletionPortsForAcceptProp_15 = value;
		Il2CppCodeGenWriteBarrier(&___alwaysUseCompletionPortsForAcceptProp_15, value);
	}

	inline static int32_t get_offset_of_alwaysUseCompletionPortsForConnectProp_16() { return static_cast<int32_t>(offsetof(SocketElement_t792962077_StaticFields, ___alwaysUseCompletionPortsForConnectProp_16)); }
	inline ConfigurationProperty_t2048066811 * get_alwaysUseCompletionPortsForConnectProp_16() const { return ___alwaysUseCompletionPortsForConnectProp_16; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_alwaysUseCompletionPortsForConnectProp_16() { return &___alwaysUseCompletionPortsForConnectProp_16; }
	inline void set_alwaysUseCompletionPortsForConnectProp_16(ConfigurationProperty_t2048066811 * value)
	{
		___alwaysUseCompletionPortsForConnectProp_16 = value;
		Il2CppCodeGenWriteBarrier(&___alwaysUseCompletionPortsForConnectProp_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
