#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_EventArgs3289624707.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkAvailabilityEventArgs
struct  NetworkAvailabilityEventArgs_t182009988  : public EventArgs_t3289624707
{
public:
	// System.Boolean System.Net.NetworkInformation.NetworkAvailabilityEventArgs::available
	bool ___available_1;

public:
	inline static int32_t get_offset_of_available_1() { return static_cast<int32_t>(offsetof(NetworkAvailabilityEventArgs_t182009988, ___available_1)); }
	inline bool get_available_1() const { return ___available_1; }
	inline bool* get_address_of_available_1() { return &___available_1; }
	inline void set_available_1(bool value)
	{
		___available_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
