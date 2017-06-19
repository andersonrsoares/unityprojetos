#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Net_NetworkInformation_UnixNetworkIn1000704527.h"
#include "System_System_Net_NetworkInformation_NetworkInterf4226883065.h"

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.LinuxNetworkInterface
struct  LinuxNetworkInterface_t3864470295  : public UnixNetworkInterface_t1000704527
{
public:
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.LinuxNetworkInterface::type
	int32_t ___type_12;
	// System.String System.Net.NetworkInformation.LinuxNetworkInterface::iface_path
	String_t* ___iface_path_13;
	// System.String System.Net.NetworkInformation.LinuxNetworkInterface::iface_operstate_path
	String_t* ___iface_operstate_path_14;
	// System.String System.Net.NetworkInformation.LinuxNetworkInterface::iface_flags_path
	String_t* ___iface_flags_path_15;

public:
	inline static int32_t get_offset_of_type_12() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t3864470295, ___type_12)); }
	inline int32_t get_type_12() const { return ___type_12; }
	inline int32_t* get_address_of_type_12() { return &___type_12; }
	inline void set_type_12(int32_t value)
	{
		___type_12 = value;
	}

	inline static int32_t get_offset_of_iface_path_13() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t3864470295, ___iface_path_13)); }
	inline String_t* get_iface_path_13() const { return ___iface_path_13; }
	inline String_t** get_address_of_iface_path_13() { return &___iface_path_13; }
	inline void set_iface_path_13(String_t* value)
	{
		___iface_path_13 = value;
		Il2CppCodeGenWriteBarrier(&___iface_path_13, value);
	}

	inline static int32_t get_offset_of_iface_operstate_path_14() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t3864470295, ___iface_operstate_path_14)); }
	inline String_t* get_iface_operstate_path_14() const { return ___iface_operstate_path_14; }
	inline String_t** get_address_of_iface_operstate_path_14() { return &___iface_operstate_path_14; }
	inline void set_iface_operstate_path_14(String_t* value)
	{
		___iface_operstate_path_14 = value;
		Il2CppCodeGenWriteBarrier(&___iface_operstate_path_14, value);
	}

	inline static int32_t get_offset_of_iface_flags_path_15() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t3864470295, ___iface_flags_path_15)); }
	inline String_t* get_iface_flags_path_15() const { return ___iface_flags_path_15; }
	inline String_t** get_address_of_iface_flags_path_15() { return &___iface_flags_path_15; }
	inline void set_iface_flags_path_15(String_t* value)
	{
		___iface_flags_path_15 = value;
		Il2CppCodeGenWriteBarrier(&___iface_flags_path_15, value);
	}
};

struct LinuxNetworkInterface_t3864470295_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.NetworkInformation.LinuxNetworkInterface::<>f__switch$map12
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map12_16;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map12_16() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t3864470295_StaticFields, ___U3CU3Ef__switchU24map12_16)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map12_16() const { return ___U3CU3Ef__switchU24map12_16; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map12_16() { return &___U3CU3Ef__switchU24map12_16; }
	inline void set_U3CU3Ef__switchU24map12_16(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map12_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map12_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
