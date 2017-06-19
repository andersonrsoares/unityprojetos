#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Security.Principal.WindowsIdentity
struct WindowsIdentity_t373339331;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsPrincipal
struct  WindowsPrincipal_t1402612279  : public Il2CppObject
{
public:
	// System.Security.Principal.WindowsIdentity System.Security.Principal.WindowsPrincipal::_identity
	WindowsIdentity_t373339331 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(WindowsPrincipal_t1402612279, ____identity_0)); }
	inline WindowsIdentity_t373339331 * get__identity_0() const { return ____identity_0; }
	inline WindowsIdentity_t373339331 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(WindowsIdentity_t373339331 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier(&____identity_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
