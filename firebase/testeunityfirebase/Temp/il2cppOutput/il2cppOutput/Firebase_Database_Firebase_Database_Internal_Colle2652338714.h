#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Collection.ImmutableSortedMap`2/Builder/IKeyTranslator<Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node>
struct IKeyTranslator_t2551609485;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Collection.ImmutableSortedMap`2/Builder<Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node>
struct  Builder_t2652338714  : public Il2CppObject
{
public:

public:
};

struct Builder_t2652338714_StaticFields
{
public:
	// Firebase.Database.Internal.Collection.ImmutableSortedMap`2/Builder/IKeyTranslator<TK,TV> Firebase.Database.Internal.Collection.ImmutableSortedMap`2/Builder::IdentityTranslatorImpl
	Il2CppObject* ___IdentityTranslatorImpl_0;

public:
	inline static int32_t get_offset_of_IdentityTranslatorImpl_0() { return static_cast<int32_t>(offsetof(Builder_t2652338714_StaticFields, ___IdentityTranslatorImpl_0)); }
	inline Il2CppObject* get_IdentityTranslatorImpl_0() const { return ___IdentityTranslatorImpl_0; }
	inline Il2CppObject** get_address_of_IdentityTranslatorImpl_0() { return &___IdentityTranslatorImpl_0; }
	inline void set_IdentityTranslatorImpl_0(Il2CppObject* value)
	{
		___IdentityTranslatorImpl_0 = value;
		Il2CppCodeGenWriteBarrier(&___IdentityTranslatorImpl_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
