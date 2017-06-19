#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t1809345768;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Collection.ImmutableSortedSet`1/WrappedEntryIterator<System.Object>
struct  WrappedEntryIterator_t3190181025  : public Il2CppObject
{
public:
	// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<T,System.Object>> Firebase.Database.Internal.Collection.ImmutableSortedSet`1/WrappedEntryIterator::_iterator
	Il2CppObject* ____iterator_0;

public:
	inline static int32_t get_offset_of__iterator_0() { return static_cast<int32_t>(offsetof(WrappedEntryIterator_t3190181025, ____iterator_0)); }
	inline Il2CppObject* get__iterator_0() const { return ____iterator_0; }
	inline Il2CppObject** get_address_of__iterator_0() { return &____iterator_0; }
	inline void set__iterator_0(Il2CppObject* value)
	{
		____iterator_0 = value;
		Il2CppCodeGenWriteBarrier(&____iterator_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
