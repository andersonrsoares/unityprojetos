#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<Firebase.FirebaseApp,System.Security.Cryptography.X509Certificates.X509CertificateCollection>
struct Dictionary_2_t1664293826;
// Firebase.Unity.InstallRootCerts
struct InstallRootCerts_t2159695568;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Unity.InstallRootCerts
struct  InstallRootCerts_t2159695568  : public Il2CppObject
{
public:

public:
};

struct InstallRootCerts_t2159695568_StaticFields
{
public:
	// System.Object Firebase.Unity.InstallRootCerts::Sync
	Il2CppObject * ___Sync_0;
	// System.Collections.Generic.Dictionary`2<Firebase.FirebaseApp,System.Security.Cryptography.X509Certificates.X509CertificateCollection> Firebase.Unity.InstallRootCerts::_installedRoots
	Dictionary_2_t1664293826 * ____installedRoots_1;
	// System.Boolean Firebase.Unity.InstallRootCerts::_attemptedWebDownload
	bool ____attemptedWebDownload_2;
	// Firebase.Unity.InstallRootCerts Firebase.Unity.InstallRootCerts::_instance
	InstallRootCerts_t2159695568 * ____instance_3;
	// System.String Firebase.Unity.InstallRootCerts::TrustedRoot
	String_t* ___TrustedRoot_4;
	// System.String Firebase.Unity.InstallRootCerts::IntermediateCA
	String_t* ___IntermediateCA_5;

public:
	inline static int32_t get_offset_of_Sync_0() { return static_cast<int32_t>(offsetof(InstallRootCerts_t2159695568_StaticFields, ___Sync_0)); }
	inline Il2CppObject * get_Sync_0() const { return ___Sync_0; }
	inline Il2CppObject ** get_address_of_Sync_0() { return &___Sync_0; }
	inline void set_Sync_0(Il2CppObject * value)
	{
		___Sync_0 = value;
		Il2CppCodeGenWriteBarrier(&___Sync_0, value);
	}

	inline static int32_t get_offset_of__installedRoots_1() { return static_cast<int32_t>(offsetof(InstallRootCerts_t2159695568_StaticFields, ____installedRoots_1)); }
	inline Dictionary_2_t1664293826 * get__installedRoots_1() const { return ____installedRoots_1; }
	inline Dictionary_2_t1664293826 ** get_address_of__installedRoots_1() { return &____installedRoots_1; }
	inline void set__installedRoots_1(Dictionary_2_t1664293826 * value)
	{
		____installedRoots_1 = value;
		Il2CppCodeGenWriteBarrier(&____installedRoots_1, value);
	}

	inline static int32_t get_offset_of__attemptedWebDownload_2() { return static_cast<int32_t>(offsetof(InstallRootCerts_t2159695568_StaticFields, ____attemptedWebDownload_2)); }
	inline bool get__attemptedWebDownload_2() const { return ____attemptedWebDownload_2; }
	inline bool* get_address_of__attemptedWebDownload_2() { return &____attemptedWebDownload_2; }
	inline void set__attemptedWebDownload_2(bool value)
	{
		____attemptedWebDownload_2 = value;
	}

	inline static int32_t get_offset_of__instance_3() { return static_cast<int32_t>(offsetof(InstallRootCerts_t2159695568_StaticFields, ____instance_3)); }
	inline InstallRootCerts_t2159695568 * get__instance_3() const { return ____instance_3; }
	inline InstallRootCerts_t2159695568 ** get_address_of__instance_3() { return &____instance_3; }
	inline void set__instance_3(InstallRootCerts_t2159695568 * value)
	{
		____instance_3 = value;
		Il2CppCodeGenWriteBarrier(&____instance_3, value);
	}

	inline static int32_t get_offset_of_TrustedRoot_4() { return static_cast<int32_t>(offsetof(InstallRootCerts_t2159695568_StaticFields, ___TrustedRoot_4)); }
	inline String_t* get_TrustedRoot_4() const { return ___TrustedRoot_4; }
	inline String_t** get_address_of_TrustedRoot_4() { return &___TrustedRoot_4; }
	inline void set_TrustedRoot_4(String_t* value)
	{
		___TrustedRoot_4 = value;
		Il2CppCodeGenWriteBarrier(&___TrustedRoot_4, value);
	}

	inline static int32_t get_offset_of_IntermediateCA_5() { return static_cast<int32_t>(offsetof(InstallRootCerts_t2159695568_StaticFields, ___IntermediateCA_5)); }
	inline String_t* get_IntermediateCA_5() const { return ___IntermediateCA_5; }
	inline String_t** get_address_of_IntermediateCA_5() { return &___IntermediateCA_5; }
	inline void set_IntermediateCA_5(String_t* value)
	{
		___IntermediateCA_5 = value;
		Il2CppCodeGenWriteBarrier(&___IntermediateCA_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
