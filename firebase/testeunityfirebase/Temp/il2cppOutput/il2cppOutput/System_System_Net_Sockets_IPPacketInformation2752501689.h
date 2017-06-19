#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.Net.IPAddress
struct IPAddress_t1399971723;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.IPPacketInformation
struct  IPPacketInformation_t2752501689 
{
public:
	// System.Net.IPAddress System.Net.Sockets.IPPacketInformation::address
	IPAddress_t1399971723 * ___address_0;
	// System.Int32 System.Net.Sockets.IPPacketInformation::iface
	int32_t ___iface_1;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(IPPacketInformation_t2752501689, ___address_0)); }
	inline IPAddress_t1399971723 * get_address_0() const { return ___address_0; }
	inline IPAddress_t1399971723 ** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(IPAddress_t1399971723 * value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier(&___address_0, value);
	}

	inline static int32_t get_offset_of_iface_1() { return static_cast<int32_t>(offsetof(IPPacketInformation_t2752501689, ___iface_1)); }
	inline int32_t get_iface_1() const { return ___iface_1; }
	inline int32_t* get_address_of_iface_1() { return &___iface_1; }
	inline void set_iface_1(int32_t value)
	{
		___iface_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.Sockets.IPPacketInformation
struct IPPacketInformation_t2752501689_marshaled_pinvoke
{
	IPAddress_t1399971723 * ___address_0;
	int32_t ___iface_1;
};
// Native definition for COM marshalling of System.Net.Sockets.IPPacketInformation
struct IPPacketInformation_t2752501689_marshaled_com
{
	IPAddress_t1399971723 * ___address_0;
	int32_t ___iface_1;
};
