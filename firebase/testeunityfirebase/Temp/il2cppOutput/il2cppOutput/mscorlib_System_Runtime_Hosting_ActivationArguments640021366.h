#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.ActivationContext
struct ActivationContext_t1572332809;
// System.ApplicationIdentity
struct ApplicationIdentity_t3292367950;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Hosting.ActivationArguments
struct  ActivationArguments_t640021366  : public Il2CppObject
{
public:
	// System.ActivationContext System.Runtime.Hosting.ActivationArguments::_context
	ActivationContext_t1572332809 * ____context_0;
	// System.ApplicationIdentity System.Runtime.Hosting.ActivationArguments::_identity
	ApplicationIdentity_t3292367950 * ____identity_1;

public:
	inline static int32_t get_offset_of__context_0() { return static_cast<int32_t>(offsetof(ActivationArguments_t640021366, ____context_0)); }
	inline ActivationContext_t1572332809 * get__context_0() const { return ____context_0; }
	inline ActivationContext_t1572332809 ** get_address_of__context_0() { return &____context_0; }
	inline void set__context_0(ActivationContext_t1572332809 * value)
	{
		____context_0 = value;
		Il2CppCodeGenWriteBarrier(&____context_0, value);
	}

	inline static int32_t get_offset_of__identity_1() { return static_cast<int32_t>(offsetof(ActivationArguments_t640021366, ____identity_1)); }
	inline ApplicationIdentity_t3292367950 * get__identity_1() const { return ____identity_1; }
	inline ApplicationIdentity_t3292367950 ** get_address_of__identity_1() { return &____identity_1; }
	inline void set__identity_1(ApplicationIdentity_t3292367950 * value)
	{
		____identity_1 = value;
		Il2CppCodeGenWriteBarrier(&____identity_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
