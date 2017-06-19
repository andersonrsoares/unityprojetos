#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Net_NetworkInformation_TcpConnection3392050187.h"
#include "System_System_Net_NetworkInformation_TcpState3539676666.h"

// System.Net.IPEndPoint
struct IPEndPoint_t2615413766;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.TcpConnectionInformationImpl
struct  TcpConnectionInformationImpl_t1274605263  : public TcpConnectionInformation_t3392050187
{
public:
	// System.Net.IPEndPoint System.Net.NetworkInformation.TcpConnectionInformationImpl::local
	IPEndPoint_t2615413766 * ___local_0;
	// System.Net.IPEndPoint System.Net.NetworkInformation.TcpConnectionInformationImpl::remote
	IPEndPoint_t2615413766 * ___remote_1;
	// System.Net.NetworkInformation.TcpState System.Net.NetworkInformation.TcpConnectionInformationImpl::state
	int32_t ___state_2;

public:
	inline static int32_t get_offset_of_local_0() { return static_cast<int32_t>(offsetof(TcpConnectionInformationImpl_t1274605263, ___local_0)); }
	inline IPEndPoint_t2615413766 * get_local_0() const { return ___local_0; }
	inline IPEndPoint_t2615413766 ** get_address_of_local_0() { return &___local_0; }
	inline void set_local_0(IPEndPoint_t2615413766 * value)
	{
		___local_0 = value;
		Il2CppCodeGenWriteBarrier(&___local_0, value);
	}

	inline static int32_t get_offset_of_remote_1() { return static_cast<int32_t>(offsetof(TcpConnectionInformationImpl_t1274605263, ___remote_1)); }
	inline IPEndPoint_t2615413766 * get_remote_1() const { return ___remote_1; }
	inline IPEndPoint_t2615413766 ** get_address_of_remote_1() { return &___remote_1; }
	inline void set_remote_1(IPEndPoint_t2615413766 * value)
	{
		___remote_1 = value;
		Il2CppCodeGenWriteBarrier(&___remote_1, value);
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(TcpConnectionInformationImpl_t1274605263, ___state_2)); }
	inline int32_t get_state_2() const { return ___state_2; }
	inline int32_t* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(int32_t value)
	{
		___state_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
