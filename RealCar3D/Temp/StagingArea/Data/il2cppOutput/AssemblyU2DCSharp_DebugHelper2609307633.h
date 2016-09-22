#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Func`2<System.Char,System.Boolean>
struct Func_2_t1675079469;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DebugHelper
struct  DebugHelper_t2609307633  : public Il2CppObject
{
public:

public:
};

struct DebugHelper_t2609307633_StaticFields
{
public:
	// System.Boolean DebugHelper::sShowConsole
	bool ___sShowConsole_0;
	// System.Boolean DebugHelper::sConsoleAutoScroll
	bool ___sConsoleAutoScroll_1;
	// UnityEngine.Vector2 DebugHelper::mDebugConsoleScrollPos
	Vector2_t2243707579  ___mDebugConsoleScrollPos_2;
	// System.Text.StringBuilder DebugHelper::mLog
	StringBuilder_t1221177846 * ___mLog_3;
	// System.Int32 DebugHelper::mLines
	int32_t ___mLines_4;
	// System.Func`2<System.Char,System.Boolean> DebugHelper::<>f__am$cache5
	Func_2_t1675079469 * ___U3CU3Ef__amU24cache5_5;

public:
	inline static int32_t get_offset_of_sShowConsole_0() { return static_cast<int32_t>(offsetof(DebugHelper_t2609307633_StaticFields, ___sShowConsole_0)); }
	inline bool get_sShowConsole_0() const { return ___sShowConsole_0; }
	inline bool* get_address_of_sShowConsole_0() { return &___sShowConsole_0; }
	inline void set_sShowConsole_0(bool value)
	{
		___sShowConsole_0 = value;
	}

	inline static int32_t get_offset_of_sConsoleAutoScroll_1() { return static_cast<int32_t>(offsetof(DebugHelper_t2609307633_StaticFields, ___sConsoleAutoScroll_1)); }
	inline bool get_sConsoleAutoScroll_1() const { return ___sConsoleAutoScroll_1; }
	inline bool* get_address_of_sConsoleAutoScroll_1() { return &___sConsoleAutoScroll_1; }
	inline void set_sConsoleAutoScroll_1(bool value)
	{
		___sConsoleAutoScroll_1 = value;
	}

	inline static int32_t get_offset_of_mDebugConsoleScrollPos_2() { return static_cast<int32_t>(offsetof(DebugHelper_t2609307633_StaticFields, ___mDebugConsoleScrollPos_2)); }
	inline Vector2_t2243707579  get_mDebugConsoleScrollPos_2() const { return ___mDebugConsoleScrollPos_2; }
	inline Vector2_t2243707579 * get_address_of_mDebugConsoleScrollPos_2() { return &___mDebugConsoleScrollPos_2; }
	inline void set_mDebugConsoleScrollPos_2(Vector2_t2243707579  value)
	{
		___mDebugConsoleScrollPos_2 = value;
	}

	inline static int32_t get_offset_of_mLog_3() { return static_cast<int32_t>(offsetof(DebugHelper_t2609307633_StaticFields, ___mLog_3)); }
	inline StringBuilder_t1221177846 * get_mLog_3() const { return ___mLog_3; }
	inline StringBuilder_t1221177846 ** get_address_of_mLog_3() { return &___mLog_3; }
	inline void set_mLog_3(StringBuilder_t1221177846 * value)
	{
		___mLog_3 = value;
		Il2CppCodeGenWriteBarrier(&___mLog_3, value);
	}

	inline static int32_t get_offset_of_mLines_4() { return static_cast<int32_t>(offsetof(DebugHelper_t2609307633_StaticFields, ___mLines_4)); }
	inline int32_t get_mLines_4() const { return ___mLines_4; }
	inline int32_t* get_address_of_mLines_4() { return &___mLines_4; }
	inline void set_mLines_4(int32_t value)
	{
		___mLines_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_5() { return static_cast<int32_t>(offsetof(DebugHelper_t2609307633_StaticFields, ___U3CU3Ef__amU24cache5_5)); }
	inline Func_2_t1675079469 * get_U3CU3Ef__amU24cache5_5() const { return ___U3CU3Ef__amU24cache5_5; }
	inline Func_2_t1675079469 ** get_address_of_U3CU3Ef__amU24cache5_5() { return &___U3CU3Ef__amU24cache5_5; }
	inline void set_U3CU3Ef__amU24cache5_5(Func_2_t1675079469 * value)
	{
		___U3CU3Ef__amU24cache5_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
