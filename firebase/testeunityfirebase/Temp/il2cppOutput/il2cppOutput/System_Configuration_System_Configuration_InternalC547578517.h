#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Configuration.Internal.IInternalConfigHost
struct IInternalConfigHost_t3115158152;
// System.Configuration.Internal.InternalConfigEventHandler
struct InternalConfigEventHandler_t2492130711;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.InternalConfigurationRoot
struct  InternalConfigurationRoot_t547578517  : public Il2CppObject
{
public:
	// System.Configuration.Internal.IInternalConfigHost System.Configuration.InternalConfigurationRoot::host
	Il2CppObject * ___host_0;
	// System.Boolean System.Configuration.InternalConfigurationRoot::isDesignTime
	bool ___isDesignTime_1;
	// System.Configuration.Internal.InternalConfigEventHandler System.Configuration.InternalConfigurationRoot::ConfigChanged
	InternalConfigEventHandler_t2492130711 * ___ConfigChanged_2;
	// System.Configuration.Internal.InternalConfigEventHandler System.Configuration.InternalConfigurationRoot::ConfigRemoved
	InternalConfigEventHandler_t2492130711 * ___ConfigRemoved_3;

public:
	inline static int32_t get_offset_of_host_0() { return static_cast<int32_t>(offsetof(InternalConfigurationRoot_t547578517, ___host_0)); }
	inline Il2CppObject * get_host_0() const { return ___host_0; }
	inline Il2CppObject ** get_address_of_host_0() { return &___host_0; }
	inline void set_host_0(Il2CppObject * value)
	{
		___host_0 = value;
		Il2CppCodeGenWriteBarrier(&___host_0, value);
	}

	inline static int32_t get_offset_of_isDesignTime_1() { return static_cast<int32_t>(offsetof(InternalConfigurationRoot_t547578517, ___isDesignTime_1)); }
	inline bool get_isDesignTime_1() const { return ___isDesignTime_1; }
	inline bool* get_address_of_isDesignTime_1() { return &___isDesignTime_1; }
	inline void set_isDesignTime_1(bool value)
	{
		___isDesignTime_1 = value;
	}

	inline static int32_t get_offset_of_ConfigChanged_2() { return static_cast<int32_t>(offsetof(InternalConfigurationRoot_t547578517, ___ConfigChanged_2)); }
	inline InternalConfigEventHandler_t2492130711 * get_ConfigChanged_2() const { return ___ConfigChanged_2; }
	inline InternalConfigEventHandler_t2492130711 ** get_address_of_ConfigChanged_2() { return &___ConfigChanged_2; }
	inline void set_ConfigChanged_2(InternalConfigEventHandler_t2492130711 * value)
	{
		___ConfigChanged_2 = value;
		Il2CppCodeGenWriteBarrier(&___ConfigChanged_2, value);
	}

	inline static int32_t get_offset_of_ConfigRemoved_3() { return static_cast<int32_t>(offsetof(InternalConfigurationRoot_t547578517, ___ConfigRemoved_3)); }
	inline InternalConfigEventHandler_t2492130711 * get_ConfigRemoved_3() const { return ___ConfigRemoved_3; }
	inline InternalConfigEventHandler_t2492130711 ** get_address_of_ConfigRemoved_3() { return &___ConfigRemoved_3; }
	inline void set_ConfigRemoved_3(InternalConfigEventHandler_t2492130711 * value)
	{
		___ConfigRemoved_3 = value;
		Il2CppCodeGenWriteBarrier(&___ConfigRemoved_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
