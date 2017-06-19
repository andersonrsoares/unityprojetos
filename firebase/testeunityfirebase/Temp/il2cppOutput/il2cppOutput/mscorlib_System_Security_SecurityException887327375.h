#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_SystemException3877406272.h"
#include "mscorlib_System_Security_Permissions_SecurityAction446643378.h"
#include "mscorlib_System_Security_SecurityZone140334334.h"

// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.Security.IPermission
struct IPermission_t182075948;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.Policy.Evidence
struct Evidence_t1407710183;
// System.Reflection.AssemblyName
struct AssemblyName_t894705941;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityException
struct  SecurityException_t887327375  : public SystemException_t3877406272
{
public:
	// System.String System.Security.SecurityException::permissionState
	String_t* ___permissionState_11;
	// System.Type System.Security.SecurityException::permissionType
	Type_t * ___permissionType_12;
	// System.String System.Security.SecurityException::_granted
	String_t* ____granted_13;
	// System.String System.Security.SecurityException::_refused
	String_t* ____refused_14;
	// System.Object System.Security.SecurityException::_demanded
	Il2CppObject * ____demanded_15;
	// System.Security.IPermission System.Security.SecurityException::_firstperm
	Il2CppObject * ____firstperm_16;
	// System.Reflection.MethodInfo System.Security.SecurityException::_method
	MethodInfo_t * ____method_17;
	// System.Security.Policy.Evidence System.Security.SecurityException::_evidence
	Evidence_t1407710183 * ____evidence_18;
	// System.Security.Permissions.SecurityAction System.Security.SecurityException::_action
	int32_t ____action_19;
	// System.Object System.Security.SecurityException::_denyset
	Il2CppObject * ____denyset_20;
	// System.Object System.Security.SecurityException::_permitset
	Il2CppObject * ____permitset_21;
	// System.Reflection.AssemblyName System.Security.SecurityException::_assembly
	AssemblyName_t894705941 * ____assembly_22;
	// System.String System.Security.SecurityException::_url
	String_t* ____url_23;
	// System.Security.SecurityZone System.Security.SecurityException::_zone
	int32_t ____zone_24;

public:
	inline static int32_t get_offset_of_permissionState_11() { return static_cast<int32_t>(offsetof(SecurityException_t887327375, ___permissionState_11)); }
	inline String_t* get_permissionState_11() const { return ___permissionState_11; }
	inline String_t** get_address_of_permissionState_11() { return &___permissionState_11; }
	inline void set_permissionState_11(String_t* value)
	{
		___permissionState_11 = value;
		Il2CppCodeGenWriteBarrier(&___permissionState_11, value);
	}

	inline static int32_t get_offset_of_permissionType_12() { return static_cast<int32_t>(offsetof(SecurityException_t887327375, ___permissionType_12)); }
	inline Type_t * get_permissionType_12() const { return ___permissionType_12; }
	inline Type_t ** get_address_of_permissionType_12() { return &___permissionType_12; }
	inline void set_permissionType_12(Type_t * value)
	{
		___permissionType_12 = value;
		Il2CppCodeGenWriteBarrier(&___permissionType_12, value);
	}

	inline static int32_t get_offset_of__granted_13() { return static_cast<int32_t>(offsetof(SecurityException_t887327375, ____granted_13)); }
	inline String_t* get__granted_13() const { return ____granted_13; }
	inline String_t** get_address_of__granted_13() { return &____granted_13; }
	inline void set__granted_13(String_t* value)
	{
		____granted_13 = value;
		Il2CppCodeGenWriteBarrier(&____granted_13, value);
	}

	inline static int32_t get_offset_of__refused_14() { return static_cast<int32_t>(offsetof(SecurityException_t887327375, ____refused_14)); }
	inline String_t* get__refused_14() const { return ____refused_14; }
	inline String_t** get_address_of__refused_14() { return &____refused_14; }
	inline void set__refused_14(String_t* value)
	{
		____refused_14 = value;
		Il2CppCodeGenWriteBarrier(&____refused_14, value);
	}

	inline static int32_t get_offset_of__demanded_15() { return static_cast<int32_t>(offsetof(SecurityException_t887327375, ____demanded_15)); }
	inline Il2CppObject * get__demanded_15() const { return ____demanded_15; }
	inline Il2CppObject ** get_address_of__demanded_15() { return &____demanded_15; }
	inline void set__demanded_15(Il2CppObject * value)
	{
		____demanded_15 = value;
		Il2CppCodeGenWriteBarrier(&____demanded_15, value);
	}

	inline static int32_t get_offset_of__firstperm_16() { return static_cast<int32_t>(offsetof(SecurityException_t887327375, ____firstperm_16)); }
	inline Il2CppObject * get__firstperm_16() const { return ____firstperm_16; }
	inline Il2CppObject ** get_address_of__firstperm_16() { return &____firstperm_16; }
	inline void set__firstperm_16(Il2CppObject * value)
	{
		____firstperm_16 = value;
		Il2CppCodeGenWriteBarrier(&____firstperm_16, value);
	}

	inline static int32_t get_offset_of__method_17() { return static_cast<int32_t>(offsetof(SecurityException_t887327375, ____method_17)); }
	inline MethodInfo_t * get__method_17() const { return ____method_17; }
	inline MethodInfo_t ** get_address_of__method_17() { return &____method_17; }
	inline void set__method_17(MethodInfo_t * value)
	{
		____method_17 = value;
		Il2CppCodeGenWriteBarrier(&____method_17, value);
	}

	inline static int32_t get_offset_of__evidence_18() { return static_cast<int32_t>(offsetof(SecurityException_t887327375, ____evidence_18)); }
	inline Evidence_t1407710183 * get__evidence_18() const { return ____evidence_18; }
	inline Evidence_t1407710183 ** get_address_of__evidence_18() { return &____evidence_18; }
	inline void set__evidence_18(Evidence_t1407710183 * value)
	{
		____evidence_18 = value;
		Il2CppCodeGenWriteBarrier(&____evidence_18, value);
	}

	inline static int32_t get_offset_of__action_19() { return static_cast<int32_t>(offsetof(SecurityException_t887327375, ____action_19)); }
	inline int32_t get__action_19() const { return ____action_19; }
	inline int32_t* get_address_of__action_19() { return &____action_19; }
	inline void set__action_19(int32_t value)
	{
		____action_19 = value;
	}

	inline static int32_t get_offset_of__denyset_20() { return static_cast<int32_t>(offsetof(SecurityException_t887327375, ____denyset_20)); }
	inline Il2CppObject * get__denyset_20() const { return ____denyset_20; }
	inline Il2CppObject ** get_address_of__denyset_20() { return &____denyset_20; }
	inline void set__denyset_20(Il2CppObject * value)
	{
		____denyset_20 = value;
		Il2CppCodeGenWriteBarrier(&____denyset_20, value);
	}

	inline static int32_t get_offset_of__permitset_21() { return static_cast<int32_t>(offsetof(SecurityException_t887327375, ____permitset_21)); }
	inline Il2CppObject * get__permitset_21() const { return ____permitset_21; }
	inline Il2CppObject ** get_address_of__permitset_21() { return &____permitset_21; }
	inline void set__permitset_21(Il2CppObject * value)
	{
		____permitset_21 = value;
		Il2CppCodeGenWriteBarrier(&____permitset_21, value);
	}

	inline static int32_t get_offset_of__assembly_22() { return static_cast<int32_t>(offsetof(SecurityException_t887327375, ____assembly_22)); }
	inline AssemblyName_t894705941 * get__assembly_22() const { return ____assembly_22; }
	inline AssemblyName_t894705941 ** get_address_of__assembly_22() { return &____assembly_22; }
	inline void set__assembly_22(AssemblyName_t894705941 * value)
	{
		____assembly_22 = value;
		Il2CppCodeGenWriteBarrier(&____assembly_22, value);
	}

	inline static int32_t get_offset_of__url_23() { return static_cast<int32_t>(offsetof(SecurityException_t887327375, ____url_23)); }
	inline String_t* get__url_23() const { return ____url_23; }
	inline String_t** get_address_of__url_23() { return &____url_23; }
	inline void set__url_23(String_t* value)
	{
		____url_23 = value;
		Il2CppCodeGenWriteBarrier(&____url_23, value);
	}

	inline static int32_t get_offset_of__zone_24() { return static_cast<int32_t>(offsetof(SecurityException_t887327375, ____zone_24)); }
	inline int32_t get__zone_24() const { return ____zone_24; }
	inline int32_t* get_address_of__zone_24() { return &____zone_24; }
	inline void set__zone_24(int32_t value)
	{
		____zone_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
