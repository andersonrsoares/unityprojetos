#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "System_System_Net_Sockets_SocketInformationOptions1711369089.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketInformation
struct  SocketInformation_t527079125 
{
public:
	// System.Net.Sockets.SocketInformationOptions System.Net.Sockets.SocketInformation::options
	int32_t ___options_0;
	// System.Byte[] System.Net.Sockets.SocketInformation::protocol_info
	ByteU5BU5D_t3397334013* ___protocol_info_1;

public:
	inline static int32_t get_offset_of_options_0() { return static_cast<int32_t>(offsetof(SocketInformation_t527079125, ___options_0)); }
	inline int32_t get_options_0() const { return ___options_0; }
	inline int32_t* get_address_of_options_0() { return &___options_0; }
	inline void set_options_0(int32_t value)
	{
		___options_0 = value;
	}

	inline static int32_t get_offset_of_protocol_info_1() { return static_cast<int32_t>(offsetof(SocketInformation_t527079125, ___protocol_info_1)); }
	inline ByteU5BU5D_t3397334013* get_protocol_info_1() const { return ___protocol_info_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_protocol_info_1() { return &___protocol_info_1; }
	inline void set_protocol_info_1(ByteU5BU5D_t3397334013* value)
	{
		___protocol_info_1 = value;
		Il2CppCodeGenWriteBarrier(&___protocol_info_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.Sockets.SocketInformation
struct SocketInformation_t527079125_marshaled_pinvoke
{
	int32_t ___options_0;
	uint8_t* ___protocol_info_1;
};
// Native definition for COM marshalling of System.Net.Sockets.SocketInformation
struct SocketInformation_t527079125_marshaled_com
{
	int32_t ___options_0;
	uint8_t* ___protocol_info_1;
};
