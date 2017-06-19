#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Net.NetworkInformation.PhysicalAddress
struct PhysicalAddress_t1613893277;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.PhysicalAddress
struct  PhysicalAddress_t1613893277  : public Il2CppObject
{
public:
	// System.Byte[] System.Net.NetworkInformation.PhysicalAddress::bytes
	ByteU5BU5D_t3397334013* ___bytes_2;

public:
	inline static int32_t get_offset_of_bytes_2() { return static_cast<int32_t>(offsetof(PhysicalAddress_t1613893277, ___bytes_2)); }
	inline ByteU5BU5D_t3397334013* get_bytes_2() const { return ___bytes_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_bytes_2() { return &___bytes_2; }
	inline void set_bytes_2(ByteU5BU5D_t3397334013* value)
	{
		___bytes_2 = value;
		Il2CppCodeGenWriteBarrier(&___bytes_2, value);
	}
};

struct PhysicalAddress_t1613893277_StaticFields
{
public:
	// System.Net.NetworkInformation.PhysicalAddress System.Net.NetworkInformation.PhysicalAddress::None
	PhysicalAddress_t1613893277 * ___None_1;

public:
	inline static int32_t get_offset_of_None_1() { return static_cast<int32_t>(offsetof(PhysicalAddress_t1613893277_StaticFields, ___None_1)); }
	inline PhysicalAddress_t1613893277 * get_None_1() const { return ___None_1; }
	inline PhysicalAddress_t1613893277 ** get_address_of_None_1() { return &___None_1; }
	inline void set_None_1(PhysicalAddress_t1613893277 * value)
	{
		___None_1 = value;
		Il2CppCodeGenWriteBarrier(&___None_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
