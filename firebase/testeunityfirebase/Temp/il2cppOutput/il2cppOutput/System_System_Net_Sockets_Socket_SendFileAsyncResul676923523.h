#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.Net.Sockets.Socket/SendFileHandler
struct SendFileHandler_t2613075220;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket/SendFileAsyncResult
struct  SendFileAsyncResult_t676923523  : public Il2CppObject
{
public:
	// System.IAsyncResult System.Net.Sockets.Socket/SendFileAsyncResult::ares
	Il2CppObject * ___ares_0;
	// System.Net.Sockets.Socket/SendFileHandler System.Net.Sockets.Socket/SendFileAsyncResult::d
	SendFileHandler_t2613075220 * ___d_1;

public:
	inline static int32_t get_offset_of_ares_0() { return static_cast<int32_t>(offsetof(SendFileAsyncResult_t676923523, ___ares_0)); }
	inline Il2CppObject * get_ares_0() const { return ___ares_0; }
	inline Il2CppObject ** get_address_of_ares_0() { return &___ares_0; }
	inline void set_ares_0(Il2CppObject * value)
	{
		___ares_0 = value;
		Il2CppCodeGenWriteBarrier(&___ares_0, value);
	}

	inline static int32_t get_offset_of_d_1() { return static_cast<int32_t>(offsetof(SendFileAsyncResult_t676923523, ___d_1)); }
	inline SendFileHandler_t2613075220 * get_d_1() const { return ___d_1; }
	inline SendFileHandler_t2613075220 ** get_address_of_d_1() { return &___d_1; }
	inline void set_d_1(SendFileHandler_t2613075220 * value)
	{
		___d_1 = value;
		Il2CppCodeGenWriteBarrier(&___d_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
