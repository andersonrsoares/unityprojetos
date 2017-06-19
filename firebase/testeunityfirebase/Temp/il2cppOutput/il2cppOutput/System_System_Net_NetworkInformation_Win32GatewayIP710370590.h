#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Net_NetworkInformation_GatewayIPAddr3537717171.h"

// System.Net.NetworkInformation.Win32GatewayIPAddressInformationCollection
struct Win32GatewayIPAddressInformationCollection_t710370590;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32GatewayIPAddressInformationCollection
struct  Win32GatewayIPAddressInformationCollection_t710370590  : public GatewayIPAddressInformationCollection_t3537717171
{
public:
	// System.Boolean System.Net.NetworkInformation.Win32GatewayIPAddressInformationCollection::is_readonly
	bool ___is_readonly_2;

public:
	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Win32GatewayIPAddressInformationCollection_t710370590, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}
};

struct Win32GatewayIPAddressInformationCollection_t710370590_StaticFields
{
public:
	// System.Net.NetworkInformation.Win32GatewayIPAddressInformationCollection System.Net.NetworkInformation.Win32GatewayIPAddressInformationCollection::Empty
	Win32GatewayIPAddressInformationCollection_t710370590 * ___Empty_1;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(Win32GatewayIPAddressInformationCollection_t710370590_StaticFields, ___Empty_1)); }
	inline Win32GatewayIPAddressInformationCollection_t710370590 * get_Empty_1() const { return ___Empty_1; }
	inline Win32GatewayIPAddressInformationCollection_t710370590 ** get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(Win32GatewayIPAddressInformationCollection_t710370590 * value)
	{
		___Empty_1 = value;
		Il2CppCodeGenWriteBarrier(&___Empty_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
