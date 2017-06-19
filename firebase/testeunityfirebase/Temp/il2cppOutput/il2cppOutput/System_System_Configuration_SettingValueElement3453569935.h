#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Configuration_System_Configuration_Configur1776195828.h"

// System.Xml.XmlNode
struct XmlNode_t616554813;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.SettingValueElement
struct  SettingValueElement_t3453569935  : public ConfigurationElement_t1776195828
{
public:
	// System.Xml.XmlNode System.Configuration.SettingValueElement::node
	XmlNode_t616554813 * ___node_14;

public:
	inline static int32_t get_offset_of_node_14() { return static_cast<int32_t>(offsetof(SettingValueElement_t3453569935, ___node_14)); }
	inline XmlNode_t616554813 * get_node_14() const { return ___node_14; }
	inline XmlNode_t616554813 ** get_address_of_node_14() { return &___node_14; }
	inline void set_node_14(XmlNode_t616554813 * value)
	{
		___node_14 = value;
		Il2CppCodeGenWriteBarrier(&___node_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
