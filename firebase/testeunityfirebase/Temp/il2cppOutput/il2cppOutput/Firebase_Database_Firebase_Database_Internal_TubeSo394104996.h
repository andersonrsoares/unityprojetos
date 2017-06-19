#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.IList`1<System.Byte[]>
struct IList_1_t3938274614;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.TubeSock.MessageBuilderFactory/BinaryBuilder
struct  BinaryBuilder_t394104996  : public Il2CppObject
{
public:
	// System.Collections.Generic.IList`1<System.Byte[]> Firebase.Database.Internal.TubeSock.MessageBuilderFactory/BinaryBuilder::_pendingBytes
	Il2CppObject* ____pendingBytes_0;
	// System.Int32 Firebase.Database.Internal.TubeSock.MessageBuilderFactory/BinaryBuilder::_pendingByteCount
	int32_t ____pendingByteCount_1;

public:
	inline static int32_t get_offset_of__pendingBytes_0() { return static_cast<int32_t>(offsetof(BinaryBuilder_t394104996, ____pendingBytes_0)); }
	inline Il2CppObject* get__pendingBytes_0() const { return ____pendingBytes_0; }
	inline Il2CppObject** get_address_of__pendingBytes_0() { return &____pendingBytes_0; }
	inline void set__pendingBytes_0(Il2CppObject* value)
	{
		____pendingBytes_0 = value;
		Il2CppCodeGenWriteBarrier(&____pendingBytes_0, value);
	}

	inline static int32_t get_offset_of__pendingByteCount_1() { return static_cast<int32_t>(offsetof(BinaryBuilder_t394104996, ____pendingByteCount_1)); }
	inline int32_t get__pendingByteCount_1() const { return ____pendingByteCount_1; }
	inline int32_t* get_address_of__pendingByteCount_1() { return &____pendingByteCount_1; }
	inline void set__pendingByteCount_1(int32_t value)
	{
		____pendingByteCount_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
