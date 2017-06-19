#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Core.View.ViewCache
struct ViewCache_t983378685;
// Firebase.Database.Internal.Core.WriteTreeRef
struct WriteTreeRef_t351426802;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.View.ViewProcessor/WriteTreeCompleteChildSource
struct  WriteTreeCompleteChildSource_t4238726192  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.View.ViewProcessor/WriteTreeCompleteChildSource::_optCompleteServerCache
	Node_t2640059010 * ____optCompleteServerCache_0;
	// Firebase.Database.Internal.Core.View.ViewCache Firebase.Database.Internal.Core.View.ViewProcessor/WriteTreeCompleteChildSource::_viewCache
	ViewCache_t983378685 * ____viewCache_1;
	// Firebase.Database.Internal.Core.WriteTreeRef Firebase.Database.Internal.Core.View.ViewProcessor/WriteTreeCompleteChildSource::_writes
	WriteTreeRef_t351426802 * ____writes_2;

public:
	inline static int32_t get_offset_of__optCompleteServerCache_0() { return static_cast<int32_t>(offsetof(WriteTreeCompleteChildSource_t4238726192, ____optCompleteServerCache_0)); }
	inline Node_t2640059010 * get__optCompleteServerCache_0() const { return ____optCompleteServerCache_0; }
	inline Node_t2640059010 ** get_address_of__optCompleteServerCache_0() { return &____optCompleteServerCache_0; }
	inline void set__optCompleteServerCache_0(Node_t2640059010 * value)
	{
		____optCompleteServerCache_0 = value;
		Il2CppCodeGenWriteBarrier(&____optCompleteServerCache_0, value);
	}

	inline static int32_t get_offset_of__viewCache_1() { return static_cast<int32_t>(offsetof(WriteTreeCompleteChildSource_t4238726192, ____viewCache_1)); }
	inline ViewCache_t983378685 * get__viewCache_1() const { return ____viewCache_1; }
	inline ViewCache_t983378685 ** get_address_of__viewCache_1() { return &____viewCache_1; }
	inline void set__viewCache_1(ViewCache_t983378685 * value)
	{
		____viewCache_1 = value;
		Il2CppCodeGenWriteBarrier(&____viewCache_1, value);
	}

	inline static int32_t get_offset_of__writes_2() { return static_cast<int32_t>(offsetof(WriteTreeCompleteChildSource_t4238726192, ____writes_2)); }
	inline WriteTreeRef_t351426802 * get__writes_2() const { return ____writes_2; }
	inline WriteTreeRef_t351426802 ** get_address_of__writes_2() { return &____writes_2; }
	inline void set__writes_2(WriteTreeRef_t351426802 * value)
	{
		____writes_2 = value;
		Il2CppCodeGenWriteBarrier(&____writes_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
