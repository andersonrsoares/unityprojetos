#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Security_CodeAccessPermission3468021764.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.DnsPermission
struct  DnsPermission_t2027408546  : public CodeAccessPermission_t3468021764
{
public:
	// System.Boolean System.Net.DnsPermission::m_noRestriction
	bool ___m_noRestriction_1;

public:
	inline static int32_t get_offset_of_m_noRestriction_1() { return static_cast<int32_t>(offsetof(DnsPermission_t2027408546, ___m_noRestriction_1)); }
	inline bool get_m_noRestriction_1() const { return ___m_noRestriction_1; }
	inline bool* get_address_of_m_noRestriction_1() { return &___m_noRestriction_1; }
	inline void set_m_noRestriction_1(bool value)
	{
		___m_noRestriction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
