﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Net_NetworkInformation_GatewayIPAddre153474369.h"

// System.Net.IPAddress
struct IPAddress_t1399971723;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.GatewayIPAddressInformationImpl
struct  GatewayIPAddressInformationImpl_t565141533  : public GatewayIPAddressInformation_t153474369
{
public:
	// System.Net.IPAddress System.Net.NetworkInformation.GatewayIPAddressInformationImpl::address
	IPAddress_t1399971723 * ___address_0;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(GatewayIPAddressInformationImpl_t565141533, ___address_0)); }
	inline IPAddress_t1399971723 * get_address_0() const { return ___address_0; }
	inline IPAddress_t1399971723 ** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(IPAddress_t1399971723 * value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier(&___address_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
