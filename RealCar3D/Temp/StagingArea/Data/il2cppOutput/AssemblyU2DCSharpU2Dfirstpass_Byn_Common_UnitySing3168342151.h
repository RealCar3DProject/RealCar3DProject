#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Byn.Common.UnitySingleton`1<System.Object>
struct  UnitySingleton_1_t3168342151  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct UnitySingleton_1_t3168342151_StaticFields
{
public:
	// T Byn.Common.UnitySingleton`1::sInstance
	Il2CppObject * ___sInstance_2;
	// System.Boolean Byn.Common.UnitySingleton`1::mIsQuitting
	bool ___mIsQuitting_3;
	// System.Object Byn.Common.UnitySingleton`1::sLock
	Il2CppObject * ___sLock_4;

public:
	inline static int32_t get_offset_of_sInstance_2() { return static_cast<int32_t>(offsetof(UnitySingleton_1_t3168342151_StaticFields, ___sInstance_2)); }
	inline Il2CppObject * get_sInstance_2() const { return ___sInstance_2; }
	inline Il2CppObject ** get_address_of_sInstance_2() { return &___sInstance_2; }
	inline void set_sInstance_2(Il2CppObject * value)
	{
		___sInstance_2 = value;
		Il2CppCodeGenWriteBarrier(&___sInstance_2, value);
	}

	inline static int32_t get_offset_of_mIsQuitting_3() { return static_cast<int32_t>(offsetof(UnitySingleton_1_t3168342151_StaticFields, ___mIsQuitting_3)); }
	inline bool get_mIsQuitting_3() const { return ___mIsQuitting_3; }
	inline bool* get_address_of_mIsQuitting_3() { return &___mIsQuitting_3; }
	inline void set_mIsQuitting_3(bool value)
	{
		___mIsQuitting_3 = value;
	}

	inline static int32_t get_offset_of_sLock_4() { return static_cast<int32_t>(offsetof(UnitySingleton_1_t3168342151_StaticFields, ___sLock_4)); }
	inline Il2CppObject * get_sLock_4() const { return ___sLock_4; }
	inline Il2CppObject ** get_address_of_sLock_4() { return &___sLock_4; }
	inline void set_sLock_4(Il2CppObject * value)
	{
		___sLock_4 = value;
		Il2CppCodeGenWriteBarrier(&___sLock_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
