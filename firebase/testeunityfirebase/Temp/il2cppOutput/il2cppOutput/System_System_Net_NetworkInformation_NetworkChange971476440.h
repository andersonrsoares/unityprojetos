#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Net.NetworkInformation.NetworkAddressChangedEventHandler
struct NetworkAddressChangedEventHandler_t2528401652;
// System.Net.NetworkInformation.NetworkAvailabilityChangedEventHandler
struct NetworkAvailabilityChangedEventHandler_t3480120991;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkChange
struct  NetworkChange_t971476440  : public Il2CppObject
{
public:

public:
};

struct NetworkChange_t971476440_StaticFields
{
public:
	// System.Net.NetworkInformation.NetworkAddressChangedEventHandler System.Net.NetworkInformation.NetworkChange::NetworkAddressChanged
	NetworkAddressChangedEventHandler_t2528401652 * ___NetworkAddressChanged_0;
	// System.Net.NetworkInformation.NetworkAvailabilityChangedEventHandler System.Net.NetworkInformation.NetworkChange::NetworkAvailabilityChanged
	NetworkAvailabilityChangedEventHandler_t3480120991 * ___NetworkAvailabilityChanged_1;

public:
	inline static int32_t get_offset_of_NetworkAddressChanged_0() { return static_cast<int32_t>(offsetof(NetworkChange_t971476440_StaticFields, ___NetworkAddressChanged_0)); }
	inline NetworkAddressChangedEventHandler_t2528401652 * get_NetworkAddressChanged_0() const { return ___NetworkAddressChanged_0; }
	inline NetworkAddressChangedEventHandler_t2528401652 ** get_address_of_NetworkAddressChanged_0() { return &___NetworkAddressChanged_0; }
	inline void set_NetworkAddressChanged_0(NetworkAddressChangedEventHandler_t2528401652 * value)
	{
		___NetworkAddressChanged_0 = value;
		Il2CppCodeGenWriteBarrier(&___NetworkAddressChanged_0, value);
	}

	inline static int32_t get_offset_of_NetworkAvailabilityChanged_1() { return static_cast<int32_t>(offsetof(NetworkChange_t971476440_StaticFields, ___NetworkAvailabilityChanged_1)); }
	inline NetworkAvailabilityChangedEventHandler_t3480120991 * get_NetworkAvailabilityChanged_1() const { return ___NetworkAvailabilityChanged_1; }
	inline NetworkAvailabilityChangedEventHandler_t3480120991 ** get_address_of_NetworkAvailabilityChanged_1() { return &___NetworkAvailabilityChanged_1; }
	inline void set_NetworkAvailabilityChanged_1(NetworkAvailabilityChangedEventHandler_t3480120991 * value)
	{
		___NetworkAvailabilityChanged_1 = value;
		Il2CppCodeGenWriteBarrier(&___NetworkAvailabilityChanged_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
