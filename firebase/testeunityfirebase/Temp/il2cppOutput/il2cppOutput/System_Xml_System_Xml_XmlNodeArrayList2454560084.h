#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_System_Xml_XmlNodeList497326455.h"

// System.Collections.ArrayList
struct ArrayList_t4252133567;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeArrayList
struct  XmlNodeArrayList_t2454560084  : public XmlNodeList_t497326455
{
public:
	// System.Collections.ArrayList System.Xml.XmlNodeArrayList::_rgNodes
	ArrayList_t4252133567 * ____rgNodes_0;

public:
	inline static int32_t get_offset_of__rgNodes_0() { return static_cast<int32_t>(offsetof(XmlNodeArrayList_t2454560084, ____rgNodes_0)); }
	inline ArrayList_t4252133567 * get__rgNodes_0() const { return ____rgNodes_0; }
	inline ArrayList_t4252133567 ** get_address_of__rgNodes_0() { return &____rgNodes_0; }
	inline void set__rgNodes_0(ArrayList_t4252133567 * value)
	{
		____rgNodes_0 = value;
		Il2CppCodeGenWriteBarrier(&____rgNodes_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
