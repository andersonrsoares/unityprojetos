#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Ping/IcmpMessage
struct  IcmpMessage_t482998463  : public Il2CppObject
{
public:
	// System.Byte[] System.Net.NetworkInformation.Ping/IcmpMessage::bytes
	ByteU5BU5D_t3397334013* ___bytes_0;

public:
	inline static int32_t get_offset_of_bytes_0() { return static_cast<int32_t>(offsetof(IcmpMessage_t482998463, ___bytes_0)); }
	inline ByteU5BU5D_t3397334013* get_bytes_0() const { return ___bytes_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_bytes_0() { return &___bytes_0; }
	inline void set_bytes_0(ByteU5BU5D_t3397334013* value)
	{
		___bytes_0 = value;
		Il2CppCodeGenWriteBarrier(&___bytes_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
