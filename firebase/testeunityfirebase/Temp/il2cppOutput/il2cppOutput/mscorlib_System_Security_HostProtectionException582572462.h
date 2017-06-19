#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_SystemException3877406272.h"
#include "mscorlib_System_Security_Permissions_HostProtectio3100089779.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.HostProtectionException
struct  HostProtectionException_t582572462  : public SystemException_t3877406272
{
public:
	// System.Security.Permissions.HostProtectionResource System.Security.HostProtectionException::_protected
	int32_t ____protected_11;
	// System.Security.Permissions.HostProtectionResource System.Security.HostProtectionException::_demanded
	int32_t ____demanded_12;

public:
	inline static int32_t get_offset_of__protected_11() { return static_cast<int32_t>(offsetof(HostProtectionException_t582572462, ____protected_11)); }
	inline int32_t get__protected_11() const { return ____protected_11; }
	inline int32_t* get_address_of__protected_11() { return &____protected_11; }
	inline void set__protected_11(int32_t value)
	{
		____protected_11 = value;
	}

	inline static int32_t get_offset_of__demanded_12() { return static_cast<int32_t>(offsetof(HostProtectionException_t582572462, ____demanded_12)); }
	inline int32_t get__demanded_12() const { return ____demanded_12; }
	inline int32_t* get_address_of__demanded_12() { return &____demanded_12; }
	inline void set__demanded_12(int32_t value)
	{
		____demanded_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
