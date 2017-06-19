#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_Byte3683104436.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_IN6_ADDR
struct  Win32_IN6_ADDR_t3054921274 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte[] System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_IN6_ADDR::Bytes
			ByteU5BU5D_t3397334013* ___Bytes_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			ByteU5BU5D_t3397334013* ___Bytes_0_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_Bytes_0() { return static_cast<int32_t>(offsetof(Win32_IN6_ADDR_t3054921274, ___Bytes_0)); }
	inline ByteU5BU5D_t3397334013* get_Bytes_0() const { return ___Bytes_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_Bytes_0() { return &___Bytes_0; }
	inline void set_Bytes_0(ByteU5BU5D_t3397334013* value)
	{
		___Bytes_0 = value;
		Il2CppCodeGenWriteBarrier(&___Bytes_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_IN6_ADDR
struct Win32_IN6_ADDR_t3054921274_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Bytes_0[16];
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Bytes_0_forAlignmentOnly[16];
		};
	};
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_IN6_ADDR
struct Win32_IN6_ADDR_t3054921274_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Bytes_0[16];
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Bytes_0_forAlignmentOnly[16];
		};
	};
};
