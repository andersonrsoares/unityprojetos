﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_En471029529.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ShimEnumerator<Firebase.Database.Internal.Core.Context,System.Collections.Generic.IDictionary`2<System.String,Firebase.Database.Internal.Core.Repo>>
struct  ShimEnumerator_t3551096944  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ShimEnumerator::host_enumerator
	Enumerator_t471029529  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(ShimEnumerator_t3551096944, ___host_enumerator_0)); }
	inline Enumerator_t471029529  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t471029529 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t471029529  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif