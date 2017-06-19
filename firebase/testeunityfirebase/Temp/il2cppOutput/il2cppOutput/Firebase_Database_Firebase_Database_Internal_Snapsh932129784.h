#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node>>
struct IEnumerator_1_t2932105947;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Snapshot.ChildrenNode/NamedNodeIterator
struct  NamedNodeIterator_t932129784  : public Il2CppObject
{
public:
	// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node>> Firebase.Database.Internal.Snapshot.ChildrenNode/NamedNodeIterator::_iterator
	Il2CppObject* ____iterator_0;

public:
	inline static int32_t get_offset_of__iterator_0() { return static_cast<int32_t>(offsetof(NamedNodeIterator_t932129784, ____iterator_0)); }
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
