#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_Serialization_SerializationF2842638831.h"

// System.Xml.Serialization.XmlMapping
struct XmlMapping_t1597064667;
// System.IO.TextWriter
struct TextWriter_t4027217640;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Xml.Serialization.SerializerInfo
struct SerializerInfo_t3482254802;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Xml.Serialization.GenerationResult[]
struct GenerationResultU5BU5D_t2584896472;
// System.Xml.Serialization.GenerationResult
struct GenerationResult_t2691853749;
// System.Xml.Serialization.XmlMapping[]
struct XmlMappingU5BU5D_t3375978586;
// System.Xml.Serialization.CodeIdentifiers
struct CodeIdentifiers_t812008827;
// System.Collections.Stack
struct Stack_t1043988394;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.SerializationCodeGenerator
struct  SerializationCodeGenerator_t1085602584  : public Il2CppObject
{
public:
	// System.Xml.Serialization.XmlMapping System.Xml.Serialization.SerializationCodeGenerator::_typeMap
	XmlMapping_t1597064667 * ____typeMap_0;
	// System.Xml.Serialization.SerializationFormat System.Xml.Serialization.SerializationCodeGenerator::_format
	int32_t ____format_1;
	// System.IO.TextWriter System.Xml.Serialization.SerializationCodeGenerator::_writer
	TextWriter_t4027217640 * ____writer_2;
	// System.Int32 System.Xml.Serialization.SerializationCodeGenerator::_tempVarId
	int32_t ____tempVarId_3;
	// System.Int32 System.Xml.Serialization.SerializationCodeGenerator::_indent
	int32_t ____indent_4;
	// System.Collections.Hashtable System.Xml.Serialization.SerializationCodeGenerator::_uniqueNames
	Hashtable_t909839986 * ____uniqueNames_5;
	// System.Int32 System.Xml.Serialization.SerializationCodeGenerator::_methodId
	int32_t ____methodId_6;
	// System.Xml.Serialization.SerializerInfo System.Xml.Serialization.SerializationCodeGenerator::_config
	SerializerInfo_t3482254802 * ____config_7;
	// System.Collections.ArrayList System.Xml.Serialization.SerializationCodeGenerator::_mapsToGenerate
	ArrayList_t4252133567 * ____mapsToGenerate_8;
	// System.Collections.ArrayList System.Xml.Serialization.SerializationCodeGenerator::_fixupCallbacks
	ArrayList_t4252133567 * ____fixupCallbacks_9;
	// System.Collections.ArrayList System.Xml.Serialization.SerializationCodeGenerator::_referencedTypes
	ArrayList_t4252133567 * ____referencedTypes_10;
	// System.Xml.Serialization.GenerationResult[] System.Xml.Serialization.SerializationCodeGenerator::_results
	GenerationResultU5BU5D_t2584896472* ____results_11;
	// System.Xml.Serialization.GenerationResult System.Xml.Serialization.SerializationCodeGenerator::_result
	GenerationResult_t2691853749 * ____result_12;
	// System.Xml.Serialization.XmlMapping[] System.Xml.Serialization.SerializationCodeGenerator::_xmlMaps
	XmlMappingU5BU5D_t3375978586* ____xmlMaps_13;
	// System.Xml.Serialization.CodeIdentifiers System.Xml.Serialization.SerializationCodeGenerator::classNames
	CodeIdentifiers_t812008827 * ___classNames_14;
	// System.Collections.ArrayList System.Xml.Serialization.SerializationCodeGenerator::_listsToFill
	ArrayList_t4252133567 * ____listsToFill_15;
	// System.Collections.Hashtable System.Xml.Serialization.SerializationCodeGenerator::_hookVariables
	Hashtable_t909839986 * ____hookVariables_16;
	// System.Collections.Stack System.Xml.Serialization.SerializationCodeGenerator::_hookContexts
	Stack_t1043988394 * ____hookContexts_17;
	// System.Collections.Stack System.Xml.Serialization.SerializationCodeGenerator::_hookOpenHooks
	Stack_t1043988394 * ____hookOpenHooks_18;

public:
	inline static int32_t get_offset_of__typeMap_0() { return static_cast<int32_t>(offsetof(SerializationCodeGenerator_t1085602584, ____typeMap_0)); }
	inline XmlMapping_t1597064667 * get__typeMap_0() const { return ____typeMap_0; }
	inline XmlMapping_t1597064667 ** get_address_of__typeMap_0() { return &____typeMap_0; }
	inline void set__typeMap_0(XmlMapping_t1597064667 * value)
	{
		____typeMap_0 = value;
		Il2CppCodeGenWriteBarrier(&____typeMap_0, value);
	}

	inline static int32_t get_offset_of__format_1() { return static_cast<int32_t>(offsetof(SerializationCodeGenerator_t1085602584, ____format_1)); }
	inline int32_t get__format_1() const { return ____format_1; }
	inline int32_t* get_address_of__format_1() { return &____format_1; }
	inline void set__format_1(int32_t value)
	{
		____format_1 = value;
	}

	inline static int32_t get_offset_of__writer_2() { return static_cast<int32_t>(offsetof(SerializationCodeGenerator_t1085602584, ____writer_2)); }
	inline TextWriter_t4027217640 * get__writer_2() const { return ____writer_2; }
	inline TextWriter_t4027217640 ** get_address_of__writer_2() { return &____writer_2; }
	inline void set__writer_2(TextWriter_t4027217640 * value)
	{
		____writer_2 = value;
		Il2CppCodeGenWriteBarrier(&____writer_2, value);
	}

	inline static int32_t get_offset_of__tempVarId_3() { return static_cast<int32_t>(offsetof(SerializationCodeGenerator_t1085602584, ____tempVarId_3)); }
	inline int32_t get__tempVarId_3() const { return ____tempVarId_3; }
	inline int32_t* get_address_of__tempVarId_3() { return &____tempVarId_3; }
	inline void set__tempVarId_3(int32_t value)
	{
		____tempVarId_3 = value;
	}

	inline static int32_t get_offset_of__indent_4() { return static_cast<int32_t>(offsetof(SerializationCodeGenerator_t1085602584, ____indent_4)); }
	inline int32_t get__indent_4() const { return ____indent_4; }
	inline int32_t* get_address_of__indent_4() { return &____indent_4; }
	inline void set__indent_4(int32_t value)
	{
		____indent_4 = value;
	}

	inline static int32_t get_offset_of__uniqueNames_5() { return static_cast<int32_t>(offsetof(SerializationCodeGenerator_t1085602584, ____uniqueNames_5)); }
	inline Hashtable_t909839986 * get__uniqueNames_5() const { return ____uniqueNames_5; }
	inline Hashtable_t909839986 ** get_address_of__uniqueNames_5() { return &____uniqueNames_5; }
	inline void set__uniqueNames_5(Hashtable_t909839986 * value)
	{
		____uniqueNames_5 = value;
		Il2CppCodeGenWriteBarrier(&____uniqueNames_5, value);
	}

	inline static int32_t get_offset_of__methodId_6() { return static_cast<int32_t>(offsetof(SerializationCodeGenerator_t1085602584, ____methodId_6)); }
	inline int32_t get__methodId_6() const { return ____methodId_6; }
	inline int32_t* get_address_of__methodId_6() { return &____methodId_6; }
	inline void set__methodId_6(int32_t value)
	{
		____methodId_6 = value;
	}

	inline static int32_t get_offset_of__config_7() { return static_cast<int32_t>(offsetof(SerializationCodeGenerator_t1085602584, ____config_7)); }
	inline SerializerInfo_t3482254802 * get__config_7() const { return ____config_7; }
	inline SerializerInfo_t3482254802 ** get_address_of__config_7() { return &____config_7; }
	inline void set__config_7(SerializerInfo_t3482254802 * value)
	{
		____config_7 = value;
		Il2CppCodeGenWriteBarrier(&____config_7, value);
	}

	inline static int32_t get_offset_of__mapsToGenerate_8() { return static_cast<int32_t>(offsetof(SerializationCodeGenerator_t1085602584, ____mapsToGenerate_8)); }
	inline ArrayList_t4252133567 * get__mapsToGenerate_8() const { return ____mapsToGenerate_8; }
	inline ArrayList_t4252133567 ** get_address_of__mapsToGenerate_8() { return &____mapsToGenerate_8; }
	inline void set__mapsToGenerate_8(ArrayList_t4252133567 * value)
	{
		____mapsToGenerate_8 = value;
		Il2CppCodeGenWriteBarrier(&____mapsToGenerate_8, value);
	}

	inline static int32_t get_offset_of__fixupCallbacks_9() { return static_cast<int32_t>(offsetof(SerializationCodeGenerator_t1085602584, ____fixupCallbacks_9)); }
	inline ArrayList_t4252133567 * get__fixupCallbacks_9() const { return ____fixupCallbacks_9; }
	inline ArrayList_t4252133567 ** get_address_of__fixupCallbacks_9() { return &____fixupCallbacks_9; }
	inline void set__fixupCallbacks_9(ArrayList_t4252133567 * value)
	{
		____fixupCallbacks_9 = value;
		Il2CppCodeGenWriteBarrier(&____fixupCallbacks_9, value);
	}

	inline static int32_t get_offset_of__referencedTypes_10() { return static_cast<int32_t>(offsetof(SerializationCodeGenerator_t1085602584, ____referencedTypes_10)); }
	inline ArrayList_t4252133567 * get__referencedTypes_10() const { return ____referencedTypes_10; }
	inline ArrayList_t4252133567 ** get_address_of__referencedTypes_10() { return &____referencedTypes_10; }
	inline void set__referencedTypes_10(ArrayList_t4252133567 * value)
	{
		____referencedTypes_10 = value;
		Il2CppCodeGenWriteBarrier(&____referencedTypes_10, value);
	}

	inline static int32_t get_offset_of__results_11() { return static_cast<int32_t>(offsetof(SerializationCodeGenerator_t1085602584, ____results_11)); }
	inline GenerationResultU5BU5D_t2584896472* get__results_11() const { return ____results_11; }
	inline GenerationResultU5BU5D_t2584896472** get_address_of__results_11() { return &____results_11; }
	inline void set__results_11(GenerationResultU5BU5D_t2584896472* value)
	{
		____results_11 = value;
		Il2CppCodeGenWriteBarrier(&____results_11, value);
	}

	inline static int32_t get_offset_of__result_12() { return static_cast<int32_t>(offsetof(SerializationCodeGenerator_t1085602584, ____result_12)); }
	inline GenerationResult_t2691853749 * get__result_12() const { return ____result_12; }
	inline GenerationResult_t2691853749 ** get_address_of__result_12() { return &____result_12; }
	inline void set__result_12(GenerationResult_t2691853749 * value)
	{
		____result_12 = value;
		Il2CppCodeGenWriteBarrier(&____result_12, value);
	}

	inline static int32_t get_offset_of__xmlMaps_13() { return static_cast<int32_t>(offsetof(SerializationCodeGenerator_t1085602584, ____xmlMaps_13)); }
	inline XmlMappingU5BU5D_t3375978586* get__xmlMaps_13() const { return ____xmlMaps_13; }
	inline XmlMappingU5BU5D_t3375978586** get_address_of__xmlMaps_13() { return &____xmlMaps_13; }
	inline void set__xmlMaps_13(XmlMappingU5BU5D_t3375978586* value)
	{
		____xmlMaps_13 = value;
		Il2CppCodeGenWriteBarrier(&____xmlMaps_13, value);
	}

	inline static int32_t get_offset_of_classNames_14() { return static_cast<int32_t>(offsetof(SerializationCodeGenerator_t1085602584, ___classNames_14)); }
	inline CodeIdentifiers_t812008827 * get_classNames_14() const { return ___classNames_14; }
	inline CodeIdentifiers_t812008827 ** get_address_of_classNames_14() { return &___classNames_14; }
	inline void set_classNames_14(CodeIdentifiers_t812008827 * value)
	{
		___classNames_14 = value;
		Il2CppCodeGenWriteBarrier(&___classNames_14, value);
	}

	inline static int32_t get_offset_of__listsToFill_15() { return static_cast<int32_t>(offsetof(SerializationCodeGenerator_t1085602584, ____listsToFill_15)); }
	inline ArrayList_t4252133567 * get__listsToFill_15() const { return ____listsToFill_15; }
	inline ArrayList_t4252133567 ** get_address_of__listsToFill_15() { return &____listsToFill_15; }
	inline void set__listsToFill_15(ArrayList_t4252133567 * value)
	{
		____listsToFill_15 = value;
		Il2CppCodeGenWriteBarrier(&____listsToFill_15, value);
	}

	inline static int32_t get_offset_of__hookVariables_16() { return static_cast<int32_t>(offsetof(SerializationCodeGenerator_t1085602584, ____hookVariables_16)); }
	inline Hashtable_t909839986 * get__hookVariables_16() const { return ____hookVariables_16; }
	inline Hashtable_t909839986 ** get_address_of__hookVariables_16() { return &____hookVariables_16; }
	inline void set__hookVariables_16(Hashtable_t909839986 * value)
	{
		____hookVariables_16 = value;
		Il2CppCodeGenWriteBarrier(&____hookVariables_16, value);
	}

	inline static int32_t get_offset_of__hookContexts_17() { return static_cast<int32_t>(offsetof(SerializationCodeGenerator_t1085602584, ____hookContexts_17)); }
	inline Stack_t1043988394 * get__hookContexts_17() const { return ____hookContexts_17; }
	inline Stack_t1043988394 ** get_address_of__hookContexts_17() { return &____hookContexts_17; }
	inline void set__hookContexts_17(Stack_t1043988394 * value)
	{
		____hookContexts_17 = value;
		Il2CppCodeGenWriteBarrier(&____hookContexts_17, value);
	}

	inline static int32_t get_offset_of__hookOpenHooks_18() { return static_cast<int32_t>(offsetof(SerializationCodeGenerator_t1085602584, ____hookOpenHooks_18)); }
	inline Stack_t1043988394 * get__hookOpenHooks_18() const { return ____hookOpenHooks_18; }
	inline Stack_t1043988394 ** get_address_of__hookOpenHooks_18() { return &____hookOpenHooks_18; }
	inline void set__hookOpenHooks_18(Stack_t1043988394 * value)
	{
		____hookOpenHooks_18 = value;
		Il2CppCodeGenWriteBarrier(&____hookOpenHooks_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
