#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Net_NetworkInformation_IPAddressInfor732454853.h"

// System.Net.IPAddress
struct IPAddress_t1399971723;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.IPAddressInformationImpl
struct  IPAddressInformationImpl_t1429877825  : public IPAddressInformation_t732454853
{
public:
	// System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformationImpl::address
	IPAddress_t1399971723 * ___address_0;
	// System.Boolean System.Net.NetworkInformation.IPAddressInformationImpl::is_dns_eligible
	bool ___is_dns_eligible_1;
	// System.Boolean System.Net.NetworkInformation.IPAddressInformationImpl::is_transient
	bool ___is_transient_2;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(IPAddressInformationImpl_t1429877825, ___address_0)); }
	inline IPAddress_t1399971723 * get_address_0() const { return ___address_0; }
	inline IPAddress_t1399971723 ** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(IPAddress_t1399971723 * value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier(&___address_0, value);
	}

	inline static int32_t get_offset_of_is_dns_eligible_1() { return static_cast<int32_t>(offsetof(IPAddressInformationImpl_t1429877825, ___is_dns_eligible_1)); }
	inline bool get_is_dns_eligible_1() const { return ___is_dns_eligible_1; }
	inline bool* get_address_of_is_dns_eligible_1() { return &___is_dns_eligible_1; }
	inline void set_is_dns_eligible_1(bool value)
	{
		___is_dns_eligible_1 = value;
	}

	inline static int32_t get_offset_of_is_transient_2() { return static_cast<int32_t>(offsetof(IPAddressInformationImpl_t1429877825, ___is_transient_2)); }
	inline bool get_is_transient_2() const { return ___is_transient_2; }
	inline bool* get_address_of_is_transient_2() { return &___is_transient_2; }
	inline void set_is_transient_2(bool value)
	{
		___is_transient_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
