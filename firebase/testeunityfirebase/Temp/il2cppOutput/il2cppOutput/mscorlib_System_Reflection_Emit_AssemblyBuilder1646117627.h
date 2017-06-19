#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Reflection_Assembly4268412390.h"
#include "mscorlib_System_Reflection_Emit_PEFileKinds4139237606.h"

// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Emit.ModuleBuilder[]
struct ModuleBuilderU5BU5D_t3642333382;
// System.String
struct String_t;
// System.Reflection.Emit.MonoResource[]
struct MonoResourceU5BU5D_t3865978872;
// System.Reflection.Module[]
struct ModuleU5BU5D_t3593287923;
// System.Reflection.Emit.RefEmitPermissionSet[]
struct RefEmitPermissionSetU5BU5D_t3643576428;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Type
struct Type_t;
// Mono.Security.StrongName
struct StrongName_t117835354;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t4156028127;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.AssemblyBuilder
struct  AssemblyBuilder_t1646117627  : public Assembly_t4268412390
{
public:
	// System.Reflection.MethodInfo System.Reflection.Emit.AssemblyBuilder::entry_point
	MethodInfo_t * ___entry_point_10;
	// System.Reflection.Emit.ModuleBuilder[] System.Reflection.Emit.AssemblyBuilder::modules
	ModuleBuilderU5BU5D_t3642333382* ___modules_11;
	// System.String System.Reflection.Emit.AssemblyBuilder::name
	String_t* ___name_12;
	// System.String System.Reflection.Emit.AssemblyBuilder::dir
	String_t* ___dir_13;
	// System.Reflection.Emit.MonoResource[] System.Reflection.Emit.AssemblyBuilder::resources
	MonoResourceU5BU5D_t3865978872* ___resources_14;
	// System.String System.Reflection.Emit.AssemblyBuilder::version
	String_t* ___version_15;
	// System.String System.Reflection.Emit.AssemblyBuilder::culture
	String_t* ___culture_16;
	// System.UInt32 System.Reflection.Emit.AssemblyBuilder::flags
	uint32_t ___flags_17;
	// System.Reflection.Emit.PEFileKinds System.Reflection.Emit.AssemblyBuilder::pekind
	int32_t ___pekind_18;
	// System.UInt32 System.Reflection.Emit.AssemblyBuilder::access
	uint32_t ___access_19;
	// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::loaded_modules
	ModuleU5BU5D_t3593287923* ___loaded_modules_20;
	// System.Reflection.Emit.RefEmitPermissionSet[] System.Reflection.Emit.AssemblyBuilder::permissions_minimum
	RefEmitPermissionSetU5BU5D_t3643576428* ___permissions_minimum_21;
	// System.Reflection.Emit.RefEmitPermissionSet[] System.Reflection.Emit.AssemblyBuilder::permissions_optional
	RefEmitPermissionSetU5BU5D_t3643576428* ___permissions_optional_22;
	// System.Reflection.Emit.RefEmitPermissionSet[] System.Reflection.Emit.AssemblyBuilder::permissions_refused
	RefEmitPermissionSetU5BU5D_t3643576428* ___permissions_refused_23;
	// System.Boolean System.Reflection.Emit.AssemblyBuilder::corlib_internal
	bool ___corlib_internal_24;
	// System.Byte[] System.Reflection.Emit.AssemblyBuilder::pktoken
	ByteU5BU5D_t3397334013* ___pktoken_25;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_object_type
	Type_t * ___corlib_object_type_26;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_value_type
	Type_t * ___corlib_value_type_27;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_enum_type
	Type_t * ___corlib_enum_type_28;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_void_type
	Type_t * ___corlib_void_type_29;
	// System.Boolean System.Reflection.Emit.AssemblyBuilder::created
	bool ___created_30;
	// System.Boolean System.Reflection.Emit.AssemblyBuilder::is_module_only
	bool ___is_module_only_31;
	// Mono.Security.StrongName System.Reflection.Emit.AssemblyBuilder::sn
	StrongName_t117835354 * ___sn_32;
	// System.Boolean System.Reflection.Emit.AssemblyBuilder::is_compiler_context
	bool ___is_compiler_context_33;
	// System.String System.Reflection.Emit.AssemblyBuilder::versioninfo_culture
	String_t* ___versioninfo_culture_34;
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::manifest_module
	ModuleBuilder_t4156028127 * ___manifest_module_35;

public:
	inline static int32_t get_offset_of_entry_point_10() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___entry_point_10)); }
	inline MethodInfo_t * get_entry_point_10() const { return ___entry_point_10; }
	inline MethodInfo_t ** get_address_of_entry_point_10() { return &___entry_point_10; }
	inline void set_entry_point_10(MethodInfo_t * value)
	{
		___entry_point_10 = value;
		Il2CppCodeGenWriteBarrier(&___entry_point_10, value);
	}

	inline static int32_t get_offset_of_modules_11() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___modules_11)); }
	inline ModuleBuilderU5BU5D_t3642333382* get_modules_11() const { return ___modules_11; }
	inline ModuleBuilderU5BU5D_t3642333382** get_address_of_modules_11() { return &___modules_11; }
	inline void set_modules_11(ModuleBuilderU5BU5D_t3642333382* value)
	{
		___modules_11 = value;
		Il2CppCodeGenWriteBarrier(&___modules_11, value);
	}

	inline static int32_t get_offset_of_name_12() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___name_12)); }
	inline String_t* get_name_12() const { return ___name_12; }
	inline String_t** get_address_of_name_12() { return &___name_12; }
	inline void set_name_12(String_t* value)
	{
		___name_12 = value;
		Il2CppCodeGenWriteBarrier(&___name_12, value);
	}

	inline static int32_t get_offset_of_dir_13() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___dir_13)); }
	inline String_t* get_dir_13() const { return ___dir_13; }
	inline String_t** get_address_of_dir_13() { return &___dir_13; }
	inline void set_dir_13(String_t* value)
	{
		___dir_13 = value;
		Il2CppCodeGenWriteBarrier(&___dir_13, value);
	}

	inline static int32_t get_offset_of_resources_14() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___resources_14)); }
	inline MonoResourceU5BU5D_t3865978872* get_resources_14() const { return ___resources_14; }
	inline MonoResourceU5BU5D_t3865978872** get_address_of_resources_14() { return &___resources_14; }
	inline void set_resources_14(MonoResourceU5BU5D_t3865978872* value)
	{
		___resources_14 = value;
		Il2CppCodeGenWriteBarrier(&___resources_14, value);
	}

	inline static int32_t get_offset_of_version_15() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___version_15)); }
	inline String_t* get_version_15() const { return ___version_15; }
	inline String_t** get_address_of_version_15() { return &___version_15; }
	inline void set_version_15(String_t* value)
	{
		___version_15 = value;
		Il2CppCodeGenWriteBarrier(&___version_15, value);
	}

	inline static int32_t get_offset_of_culture_16() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___culture_16)); }
	inline String_t* get_culture_16() const { return ___culture_16; }
	inline String_t** get_address_of_culture_16() { return &___culture_16; }
	inline void set_culture_16(String_t* value)
	{
		___culture_16 = value;
		Il2CppCodeGenWriteBarrier(&___culture_16, value);
	}

	inline static int32_t get_offset_of_flags_17() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___flags_17)); }
	inline uint32_t get_flags_17() const { return ___flags_17; }
	inline uint32_t* get_address_of_flags_17() { return &___flags_17; }
	inline void set_flags_17(uint32_t value)
	{
		___flags_17 = value;
	}

	inline static int32_t get_offset_of_pekind_18() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___pekind_18)); }
	inline int32_t get_pekind_18() const { return ___pekind_18; }
	inline int32_t* get_address_of_pekind_18() { return &___pekind_18; }
	inline void set_pekind_18(int32_t value)
	{
		___pekind_18 = value;
	}

	inline static int32_t get_offset_of_access_19() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___access_19)); }
	inline uint32_t get_access_19() const { return ___access_19; }
	inline uint32_t* get_address_of_access_19() { return &___access_19; }
	inline void set_access_19(uint32_t value)
	{
		___access_19 = value;
	}

	inline static int32_t get_offset_of_loaded_modules_20() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___loaded_modules_20)); }
	inline ModuleU5BU5D_t3593287923* get_loaded_modules_20() const { return ___loaded_modules_20; }
	inline ModuleU5BU5D_t3593287923** get_address_of_loaded_modules_20() { return &___loaded_modules_20; }
	inline void set_loaded_modules_20(ModuleU5BU5D_t3593287923* value)
	{
		___loaded_modules_20 = value;
		Il2CppCodeGenWriteBarrier(&___loaded_modules_20, value);
	}

	inline static int32_t get_offset_of_permissions_minimum_21() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___permissions_minimum_21)); }
	inline RefEmitPermissionSetU5BU5D_t3643576428* get_permissions_minimum_21() const { return ___permissions_minimum_21; }
	inline RefEmitPermissionSetU5BU5D_t3643576428** get_address_of_permissions_minimum_21() { return &___permissions_minimum_21; }
	inline void set_permissions_minimum_21(RefEmitPermissionSetU5BU5D_t3643576428* value)
	{
		___permissions_minimum_21 = value;
		Il2CppCodeGenWriteBarrier(&___permissions_minimum_21, value);
	}

	inline static int32_t get_offset_of_permissions_optional_22() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___permissions_optional_22)); }
	inline RefEmitPermissionSetU5BU5D_t3643576428* get_permissions_optional_22() const { return ___permissions_optional_22; }
	inline RefEmitPermissionSetU5BU5D_t3643576428** get_address_of_permissions_optional_22() { return &___permissions_optional_22; }
	inline void set_permissions_optional_22(RefEmitPermissionSetU5BU5D_t3643576428* value)
	{
		___permissions_optional_22 = value;
		Il2CppCodeGenWriteBarrier(&___permissions_optional_22, value);
	}

	inline static int32_t get_offset_of_permissions_refused_23() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___permissions_refused_23)); }
	inline RefEmitPermissionSetU5BU5D_t3643576428* get_permissions_refused_23() const { return ___permissions_refused_23; }
	inline RefEmitPermissionSetU5BU5D_t3643576428** get_address_of_permissions_refused_23() { return &___permissions_refused_23; }
	inline void set_permissions_refused_23(RefEmitPermissionSetU5BU5D_t3643576428* value)
	{
		___permissions_refused_23 = value;
		Il2CppCodeGenWriteBarrier(&___permissions_refused_23, value);
	}

	inline static int32_t get_offset_of_corlib_internal_24() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___corlib_internal_24)); }
	inline bool get_corlib_internal_24() const { return ___corlib_internal_24; }
	inline bool* get_address_of_corlib_internal_24() { return &___corlib_internal_24; }
	inline void set_corlib_internal_24(bool value)
	{
		___corlib_internal_24 = value;
	}

	inline static int32_t get_offset_of_pktoken_25() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___pktoken_25)); }
	inline ByteU5BU5D_t3397334013* get_pktoken_25() const { return ___pktoken_25; }
	inline ByteU5BU5D_t3397334013** get_address_of_pktoken_25() { return &___pktoken_25; }
	inline void set_pktoken_25(ByteU5BU5D_t3397334013* value)
	{
		___pktoken_25 = value;
		Il2CppCodeGenWriteBarrier(&___pktoken_25, value);
	}

	inline static int32_t get_offset_of_corlib_object_type_26() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___corlib_object_type_26)); }
	inline Type_t * get_corlib_object_type_26() const { return ___corlib_object_type_26; }
	inline Type_t ** get_address_of_corlib_object_type_26() { return &___corlib_object_type_26; }
	inline void set_corlib_object_type_26(Type_t * value)
	{
		___corlib_object_type_26 = value;
		Il2CppCodeGenWriteBarrier(&___corlib_object_type_26, value);
	}

	inline static int32_t get_offset_of_corlib_value_type_27() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___corlib_value_type_27)); }
	inline Type_t * get_corlib_value_type_27() const { return ___corlib_value_type_27; }
	inline Type_t ** get_address_of_corlib_value_type_27() { return &___corlib_value_type_27; }
	inline void set_corlib_value_type_27(Type_t * value)
	{
		___corlib_value_type_27 = value;
		Il2CppCodeGenWriteBarrier(&___corlib_value_type_27, value);
	}

	inline static int32_t get_offset_of_corlib_enum_type_28() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___corlib_enum_type_28)); }
	inline Type_t * get_corlib_enum_type_28() const { return ___corlib_enum_type_28; }
	inline Type_t ** get_address_of_corlib_enum_type_28() { return &___corlib_enum_type_28; }
	inline void set_corlib_enum_type_28(Type_t * value)
	{
		___corlib_enum_type_28 = value;
		Il2CppCodeGenWriteBarrier(&___corlib_enum_type_28, value);
	}

	inline static int32_t get_offset_of_corlib_void_type_29() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___corlib_void_type_29)); }
	inline Type_t * get_corlib_void_type_29() const { return ___corlib_void_type_29; }
	inline Type_t ** get_address_of_corlib_void_type_29() { return &___corlib_void_type_29; }
	inline void set_corlib_void_type_29(Type_t * value)
	{
		___corlib_void_type_29 = value;
		Il2CppCodeGenWriteBarrier(&___corlib_void_type_29, value);
	}

	inline static int32_t get_offset_of_created_30() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___created_30)); }
	inline bool get_created_30() const { return ___created_30; }
	inline bool* get_address_of_created_30() { return &___created_30; }
	inline void set_created_30(bool value)
	{
		___created_30 = value;
	}

	inline static int32_t get_offset_of_is_module_only_31() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___is_module_only_31)); }
	inline bool get_is_module_only_31() const { return ___is_module_only_31; }
	inline bool* get_address_of_is_module_only_31() { return &___is_module_only_31; }
	inline void set_is_module_only_31(bool value)
	{
		___is_module_only_31 = value;
	}

	inline static int32_t get_offset_of_sn_32() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___sn_32)); }
	inline StrongName_t117835354 * get_sn_32() const { return ___sn_32; }
	inline StrongName_t117835354 ** get_address_of_sn_32() { return &___sn_32; }
	inline void set_sn_32(StrongName_t117835354 * value)
	{
		___sn_32 = value;
		Il2CppCodeGenWriteBarrier(&___sn_32, value);
	}

	inline static int32_t get_offset_of_is_compiler_context_33() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___is_compiler_context_33)); }
	inline bool get_is_compiler_context_33() const { return ___is_compiler_context_33; }
	inline bool* get_address_of_is_compiler_context_33() { return &___is_compiler_context_33; }
	inline void set_is_compiler_context_33(bool value)
	{
		___is_compiler_context_33 = value;
	}

	inline static int32_t get_offset_of_versioninfo_culture_34() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___versioninfo_culture_34)); }
	inline String_t* get_versioninfo_culture_34() const { return ___versioninfo_culture_34; }
	inline String_t** get_address_of_versioninfo_culture_34() { return &___versioninfo_culture_34; }
	inline void set_versioninfo_culture_34(String_t* value)
	{
		___versioninfo_culture_34 = value;
		Il2CppCodeGenWriteBarrier(&___versioninfo_culture_34, value);
	}

	inline static int32_t get_offset_of_manifest_module_35() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___manifest_module_35)); }
	inline ModuleBuilder_t4156028127 * get_manifest_module_35() const { return ___manifest_module_35; }
	inline ModuleBuilder_t4156028127 ** get_address_of_manifest_module_35() { return &___manifest_module_35; }
	inline void set_manifest_module_35(ModuleBuilder_t4156028127 * value)
	{
		___manifest_module_35 = value;
		Il2CppCodeGenWriteBarrier(&___manifest_module_35, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
