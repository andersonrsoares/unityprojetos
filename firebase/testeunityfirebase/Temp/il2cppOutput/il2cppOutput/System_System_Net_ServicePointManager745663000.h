#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_System_Net_SecurityProtocolType3099771628.h"

// System.String
struct String_t;
// System.Collections.Specialized.HybridDictionary
struct HybridDictionary_t290043810;
// System.Net.ICertificatePolicy
struct ICertificatePolicy_t1916536542;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2756269959;
// System.Net.Configuration.ConnectionManagementData
struct ConnectionManagementData_t2657447783;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.ServicePointManager
struct  ServicePointManager_t745663000  : public Il2CppObject
{
public:

public:
};

struct ServicePointManager_t745663000_StaticFields
{
public:
	// System.Collections.Specialized.HybridDictionary System.Net.ServicePointManager::servicePoints
	HybridDictionary_t290043810 * ___servicePoints_3;
	// System.Net.ICertificatePolicy System.Net.ServicePointManager::policy
	Il2CppObject * ___policy_4;
	// System.Int32 System.Net.ServicePointManager::defaultConnectionLimit
	int32_t ___defaultConnectionLimit_5;
	// System.Int32 System.Net.ServicePointManager::maxServicePointIdleTime
	int32_t ___maxServicePointIdleTime_6;
	// System.Int32 System.Net.ServicePointManager::maxServicePoints
	int32_t ___maxServicePoints_7;
	// System.Boolean System.Net.ServicePointManager::_checkCRL
	bool ____checkCRL_8;
	// System.Net.SecurityProtocolType System.Net.ServicePointManager::_securityProtocol
	int32_t ____securityProtocol_9;
	// System.Boolean System.Net.ServicePointManager::expectContinue
	bool ___expectContinue_10;
	// System.Boolean System.Net.ServicePointManager::useNagle
	bool ___useNagle_11;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.ServicePointManager::server_cert_cb
	RemoteCertificateValidationCallback_t2756269959 * ___server_cert_cb_12;
	// System.Net.Configuration.ConnectionManagementData System.Net.ServicePointManager::manager
	ConnectionManagementData_t2657447783 * ___manager_13;

public:
	inline static int32_t get_offset_of_servicePoints_3() { return static_cast<int32_t>(offsetof(ServicePointManager_t745663000_StaticFields, ___servicePoints_3)); }
	inline HybridDictionary_t290043810 * get_servicePoints_3() const { return ___servicePoints_3; }
	inline HybridDictionary_t290043810 ** get_address_of_servicePoints_3() { return &___servicePoints_3; }
	inline void set_servicePoints_3(HybridDictionary_t290043810 * value)
	{
		___servicePoints_3 = value;
		Il2CppCodeGenWriteBarrier(&___servicePoints_3, value);
	}

	inline static int32_t get_offset_of_policy_4() { return static_cast<int32_t>(offsetof(ServicePointManager_t745663000_StaticFields, ___policy_4)); }
	inline Il2CppObject * get_policy_4() const { return ___policy_4; }
	inline Il2CppObject ** get_address_of_policy_4() { return &___policy_4; }
	inline void set_policy_4(Il2CppObject * value)
	{
		___policy_4 = value;
		Il2CppCodeGenWriteBarrier(&___policy_4, value);
	}

	inline static int32_t get_offset_of_defaultConnectionLimit_5() { return static_cast<int32_t>(offsetof(ServicePointManager_t745663000_StaticFields, ___defaultConnectionLimit_5)); }
	inline int32_t get_defaultConnectionLimit_5() const { return ___defaultConnectionLimit_5; }
	inline int32_t* get_address_of_defaultConnectionLimit_5() { return &___defaultConnectionLimit_5; }
	inline void set_defaultConnectionLimit_5(int32_t value)
	{
		___defaultConnectionLimit_5 = value;
	}

	inline static int32_t get_offset_of_maxServicePointIdleTime_6() { return static_cast<int32_t>(offsetof(ServicePointManager_t745663000_StaticFields, ___maxServicePointIdleTime_6)); }
	inline int32_t get_maxServicePointIdleTime_6() const { return ___maxServicePointIdleTime_6; }
	inline int32_t* get_address_of_maxServicePointIdleTime_6() { return &___maxServicePointIdleTime_6; }
	inline void set_maxServicePointIdleTime_6(int32_t value)
	{
		___maxServicePointIdleTime_6 = value;
	}

	inline static int32_t get_offset_of_maxServicePoints_7() { return static_cast<int32_t>(offsetof(ServicePointManager_t745663000_StaticFields, ___maxServicePoints_7)); }
	inline int32_t get_maxServicePoints_7() const { return ___maxServicePoints_7; }
	inline int32_t* get_address_of_maxServicePoints_7() { return &___maxServicePoints_7; }
	inline void set_maxServicePoints_7(int32_t value)
	{
		___maxServicePoints_7 = value;
	}

	inline static int32_t get_offset_of__checkCRL_8() { return static_cast<int32_t>(offsetof(ServicePointManager_t745663000_StaticFields, ____checkCRL_8)); }
	inline bool get__checkCRL_8() const { return ____checkCRL_8; }
	inline bool* get_address_of__checkCRL_8() { return &____checkCRL_8; }
	inline void set__checkCRL_8(bool value)
	{
		____checkCRL_8 = value;
	}

	inline static int32_t get_offset_of__securityProtocol_9() { return static_cast<int32_t>(offsetof(ServicePointManager_t745663000_StaticFields, ____securityProtocol_9)); }
	inline int32_t get__securityProtocol_9() const { return ____securityProtocol_9; }
	inline int32_t* get_address_of__securityProtocol_9() { return &____securityProtocol_9; }
	inline void set__securityProtocol_9(int32_t value)
	{
		____securityProtocol_9 = value;
	}

	inline static int32_t get_offset_of_expectContinue_10() { return static_cast<int32_t>(offsetof(ServicePointManager_t745663000_StaticFields, ___expectContinue_10)); }
	inline bool get_expectContinue_10() const { return ___expectContinue_10; }
	inline bool* get_address_of_expectContinue_10() { return &___expectContinue_10; }
	inline void set_expectContinue_10(bool value)
	{
		___expectContinue_10 = value;
	}

	inline static int32_t get_offset_of_useNagle_11() { return static_cast<int32_t>(offsetof(ServicePointManager_t745663000_StaticFields, ___useNagle_11)); }
	inline bool get_useNagle_11() const { return ___useNagle_11; }
	inline bool* get_address_of_useNagle_11() { return &___useNagle_11; }
	inline void set_useNagle_11(bool value)
	{
		___useNagle_11 = value;
	}

	inline static int32_t get_offset_of_server_cert_cb_12() { return static_cast<int32_t>(offsetof(ServicePointManager_t745663000_StaticFields, ___server_cert_cb_12)); }
	inline RemoteCertificateValidationCallback_t2756269959 * get_server_cert_cb_12() const { return ___server_cert_cb_12; }
	inline RemoteCertificateValidationCallback_t2756269959 ** get_address_of_server_cert_cb_12() { return &___server_cert_cb_12; }
	inline void set_server_cert_cb_12(RemoteCertificateValidationCallback_t2756269959 * value)
	{
		___server_cert_cb_12 = value;
		Il2CppCodeGenWriteBarrier(&___server_cert_cb_12, value);
	}

	inline static int32_t get_offset_of_manager_13() { return static_cast<int32_t>(offsetof(ServicePointManager_t745663000_StaticFields, ___manager_13)); }
	inline ConnectionManagementData_t2657447783 * get_manager_13() const { return ___manager_13; }
	inline ConnectionManagementData_t2657447783 ** get_address_of_manager_13() { return &___manager_13; }
	inline void set_manager_13(ConnectionManagementData_t2657447783 * value)
	{
		___manager_13 = value;
		Il2CppCodeGenWriteBarrier(&___manager_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
