#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Configuration_System_Configuration_Protecte3971982415.h"

// System.String
struct String_t;
// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t4229286967;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.RsaProtectedConfigurationProvider
struct  RsaProtectedConfigurationProvider_t2799276815  : public ProtectedConfigurationProvider_t3971982415
{
public:
	// System.String System.Configuration.RsaProtectedConfigurationProvider::cspProviderName
	String_t* ___cspProviderName_3;
	// System.String System.Configuration.RsaProtectedConfigurationProvider::keyContainerName
	String_t* ___keyContainerName_4;
	// System.Boolean System.Configuration.RsaProtectedConfigurationProvider::useMachineContainer
	bool ___useMachineContainer_5;
	// System.Boolean System.Configuration.RsaProtectedConfigurationProvider::useOAEP
	bool ___useOAEP_6;
	// System.Security.Cryptography.RSACryptoServiceProvider System.Configuration.RsaProtectedConfigurationProvider::rsa
	RSACryptoServiceProvider_t4229286967 * ___rsa_7;

public:
	inline static int32_t get_offset_of_cspProviderName_3() { return static_cast<int32_t>(offsetof(RsaProtectedConfigurationProvider_t2799276815, ___cspProviderName_3)); }
	inline String_t* get_cspProviderName_3() const { return ___cspProviderName_3; }
	inline String_t** get_address_of_cspProviderName_3() { return &___cspProviderName_3; }
	inline void set_cspProviderName_3(String_t* value)
	{
		___cspProviderName_3 = value;
		Il2CppCodeGenWriteBarrier(&___cspProviderName_3, value);
	}

	inline static int32_t get_offset_of_keyContainerName_4() { return static_cast<int32_t>(offsetof(RsaProtectedConfigurationProvider_t2799276815, ___keyContainerName_4)); }
	inline String_t* get_keyContainerName_4() const { return ___keyContainerName_4; }
	inline String_t** get_address_of_keyContainerName_4() { return &___keyContainerName_4; }
	inline void set_keyContainerName_4(String_t* value)
	{
		___keyContainerName_4 = value;
		Il2CppCodeGenWriteBarrier(&___keyContainerName_4, value);
	}

	inline static int32_t get_offset_of_useMachineContainer_5() { return static_cast<int32_t>(offsetof(RsaProtectedConfigurationProvider_t2799276815, ___useMachineContainer_5)); }
	inline bool get_useMachineContainer_5() const { return ___useMachineContainer_5; }
	inline bool* get_address_of_useMachineContainer_5() { return &___useMachineContainer_5; }
	inline void set_useMachineContainer_5(bool value)
	{
		___useMachineContainer_5 = value;
	}

	inline static int32_t get_offset_of_useOAEP_6() { return static_cast<int32_t>(offsetof(RsaProtectedConfigurationProvider_t2799276815, ___useOAEP_6)); }
	inline bool get_useOAEP_6() const { return ___useOAEP_6; }
	inline bool* get_address_of_useOAEP_6() { return &___useOAEP_6; }
	inline void set_useOAEP_6(bool value)
	{
		___useOAEP_6 = value;
	}

	inline static int32_t get_offset_of_rsa_7() { return static_cast<int32_t>(offsetof(RsaProtectedConfigurationProvider_t2799276815, ___rsa_7)); }
	inline RSACryptoServiceProvider_t4229286967 * get_rsa_7() const { return ___rsa_7; }
	inline RSACryptoServiceProvider_t4229286967 ** get_address_of_rsa_7() { return &___rsa_7; }
	inline void set_rsa_7(RSACryptoServiceProvider_t4229286967 * value)
	{
		___rsa_7 = value;
		Il2CppCodeGenWriteBarrier(&___rsa_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
