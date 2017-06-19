#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.VariantVariantMap
struct VariantVariantMap_t4097173110;
// System.Collections.Generic.IList`1<Firebase.Variant>
struct IList_1_t521761384;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.VariantVariantMap/VariantVariantMapEnumerator
struct  VariantVariantMapEnumerator_t647394310  : public Il2CppObject
{
public:
	// Firebase.VariantVariantMap Firebase.VariantVariantMap/VariantVariantMapEnumerator::collectionRef
	VariantVariantMap_t4097173110 * ___collectionRef_0;
	// System.Collections.Generic.IList`1<Firebase.Variant> Firebase.VariantVariantMap/VariantVariantMapEnumerator::keyCollection
	Il2CppObject* ___keyCollection_1;
	// System.Int32 Firebase.VariantVariantMap/VariantVariantMapEnumerator::currentIndex
	int32_t ___currentIndex_2;
	// System.Object Firebase.VariantVariantMap/VariantVariantMapEnumerator::currentObject
	Il2CppObject * ___currentObject_3;
	// System.Int32 Firebase.VariantVariantMap/VariantVariantMapEnumerator::currentSize
	int32_t ___currentSize_4;

public:
	inline static int32_t get_offset_of_collectionRef_0() { return static_cast<int32_t>(offsetof(VariantVariantMapEnumerator_t647394310, ___collectionRef_0)); }
	inline VariantVariantMap_t4097173110 * get_collectionRef_0() const { return ___collectionRef_0; }
	inline VariantVariantMap_t4097173110 ** get_address_of_collectionRef_0() { return &___collectionRef_0; }
	inline void set_collectionRef_0(VariantVariantMap_t4097173110 * value)
	{
		___collectionRef_0 = value;
		Il2CppCodeGenWriteBarrier(&___collectionRef_0, value);
	}

	inline static int32_t get_offset_of_keyCollection_1() { return static_cast<int32_t>(offsetof(VariantVariantMapEnumerator_t647394310, ___keyCollection_1)); }
	inline Il2CppObject* get_keyCollection_1() const { return ___keyCollection_1; }
	inline Il2CppObject** get_address_of_keyCollection_1() { return &___keyCollection_1; }
	inline void set_keyCollection_1(Il2CppObject* value)
	{
		___keyCollection_1 = value;
		Il2CppCodeGenWriteBarrier(&___keyCollection_1, value);
	}

	inline static int32_t get_offset_of_currentIndex_2() { return static_cast<int32_t>(offsetof(VariantVariantMapEnumerator_t647394310, ___currentIndex_2)); }
	inline int32_t get_currentIndex_2() const { return ___currentIndex_2; }
	inline int32_t* get_address_of_currentIndex_2() { return &___currentIndex_2; }
	inline void set_currentIndex_2(int32_t value)
	{
		___currentIndex_2 = value;
	}

	inline static int32_t get_offset_of_currentObject_3() { return static_cast<int32_t>(offsetof(VariantVariantMapEnumerator_t647394310, ___currentObject_3)); }
	inline Il2CppObject * get_currentObject_3() const { return ___currentObject_3; }
	inline Il2CppObject ** get_address_of_currentObject_3() { return &___currentObject_3; }
	inline void set_currentObject_3(Il2CppObject * value)
	{
		___currentObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___currentObject_3, value);
	}

	inline static int32_t get_offset_of_currentSize_4() { return static_cast<int32_t>(offsetof(VariantVariantMapEnumerator_t647394310, ___currentSize_4)); }
	inline int32_t get_currentSize_4() const { return ___currentSize_4; }
	inline int32_t* get_address_of_currentSize_4() { return &___currentSize_4; }
	inline void set_currentSize_4(int32_t value)
	{
		___currentSize_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
