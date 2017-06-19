#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t3230389896;
// Firebase.Database.Internal.Collection.ImmutableSortedMap`2/Builder/IKeyTranslator<System.Object,System.Object>
struct IKeyTranslator_t1428849306;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t280592844;
// Firebase.Database.Internal.Collection.LlrbValueNode`2<System.Object,System.Object>
struct LlrbValueNode_2_t1296857666;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Collection.RbTreeSortedMap`2/BuilderAbc`3<System.Object,System.Object,System.Object,System.Object,System.Object>
struct  BuilderAbc_3_t1611920761  : public Il2CppObject
{
public:
	// System.Collections.Generic.IList`1<TA> Firebase.Database.Internal.Collection.RbTreeSortedMap`2/BuilderAbc`3::_keys
	Il2CppObject* ____keys_0;
	// Firebase.Database.Internal.Collection.ImmutableSortedMap`2/Builder/IKeyTranslator<TB,TC> Firebase.Database.Internal.Collection.RbTreeSortedMap`2/BuilderAbc`3::_keyTranslator
	Il2CppObject* ____keyTranslator_1;
	// System.Collections.Generic.IDictionary`2<TB,TC> Firebase.Database.Internal.Collection.RbTreeSortedMap`2/BuilderAbc`3::_values
	Il2CppObject* ____values_2;
	// Firebase.Database.Internal.Collection.LlrbValueNode`2<TA,TC> Firebase.Database.Internal.Collection.RbTreeSortedMap`2/BuilderAbc`3::_leaf
	LlrbValueNode_2_t1296857666 * ____leaf_3;
	// Firebase.Database.Internal.Collection.LlrbValueNode`2<TA,TC> Firebase.Database.Internal.Collection.RbTreeSortedMap`2/BuilderAbc`3::_root
	LlrbValueNode_2_t1296857666 * ____root_4;

public:
	inline static int32_t get_offset_of__keys_0() { return static_cast<int32_t>(offsetof(BuilderAbc_3_t1611920761, ____keys_0)); }
	inline Il2CppObject* get__keys_0() const { return ____keys_0; }
	inline Il2CppObject** get_address_of__keys_0() { return &____keys_0; }
	inline void set__keys_0(Il2CppObject* value)
	{
		____keys_0 = value;
		Il2CppCodeGenWriteBarrier(&____keys_0, value);
	}

	inline static int32_t get_offset_of__keyTranslator_1() { return static_cast<int32_t>(offsetof(BuilderAbc_3_t1611920761, ____keyTranslator_1)); }
	inline Il2CppObject* get__keyTranslator_1() const { return ____keyTranslator_1; }
	inline Il2CppObject** get_address_of__keyTranslator_1() { return &____keyTranslator_1; }
	inline void set__keyTranslator_1(Il2CppObject* value)
	{
		____keyTranslator_1 = value;
		Il2CppCodeGenWriteBarrier(&____keyTranslator_1, value);
	}

	inline static int32_t get_offset_of__values_2() { return static_cast<int32_t>(offsetof(BuilderAbc_3_t1611920761, ____values_2)); }
	inline Il2CppObject* get__values_2() const { return ____values_2; }
	inline Il2CppObject** get_address_of__values_2() { return &____values_2; }
	inline void set__values_2(Il2CppObject* value)
	{
		____values_2 = value;
		Il2CppCodeGenWriteBarrier(&____values_2, value);
	}

	inline static int32_t get_offset_of__leaf_3() { return static_cast<int32_t>(offsetof(BuilderAbc_3_t1611920761, ____leaf_3)); }
	inline LlrbValueNode_2_t1296857666 * get__leaf_3() const { return ____leaf_3; }
	inline LlrbValueNode_2_t1296857666 ** get_address_of__leaf_3() { return &____leaf_3; }
	inline void set__leaf_3(LlrbValueNode_2_t1296857666 * value)
	{
		____leaf_3 = value;
		Il2CppCodeGenWriteBarrier(&____leaf_3, value);
	}

	inline static int32_t get_offset_of__root_4() { return static_cast<int32_t>(offsetof(BuilderAbc_3_t1611920761, ____root_4)); }
	inline LlrbValueNode_2_t1296857666 * get__root_4() const { return ____root_4; }
	inline LlrbValueNode_2_t1296857666 ** get_address_of__root_4() { return &____root_4; }
	inline void set__root_4(LlrbValueNode_2_t1296857666 * value)
	{
		____root_4 = value;
		Il2CppCodeGenWriteBarrier(&____root_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
