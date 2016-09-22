#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Action`2<System.Object,System.String[]>
struct Action_2_t1524988530;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Byn.Common.SLog
struct  SLog_t2165490241  : public Il2CppObject
{
public:

public:
};

struct SLog_t2165490241_StaticFields
{
public:
	// System.String Byn.Common.SLog::TAG_WARNING
	String_t* ___TAG_WARNING_0;
	// System.String Byn.Common.SLog::TAG_ERROR
	String_t* ___TAG_ERROR_1;
	// System.String Byn.Common.SLog::TAG_EXCEPTION
	String_t* ___TAG_EXCEPTION_2;
	// System.String Byn.Common.SLog::TAG_INFO
	String_t* ___TAG_INFO_3;
	// System.String Byn.Common.SLog::TAG_DEBUG
	String_t* ___TAG_DEBUG_4;
	// System.String Byn.Common.SLog::TAG_VERBOSE
	String_t* ___TAG_VERBOSE_5;
	// System.Action`2<System.Object,System.String[]> Byn.Common.SLog::sLogger
	Action_2_t1524988530 * ___sLogger_6;

public:
	inline static int32_t get_offset_of_TAG_WARNING_0() { return static_cast<int32_t>(offsetof(SLog_t2165490241_StaticFields, ___TAG_WARNING_0)); }
	inline String_t* get_TAG_WARNING_0() const { return ___TAG_WARNING_0; }
	inline String_t** get_address_of_TAG_WARNING_0() { return &___TAG_WARNING_0; }
	inline void set_TAG_WARNING_0(String_t* value)
	{
		___TAG_WARNING_0 = value;
		Il2CppCodeGenWriteBarrier(&___TAG_WARNING_0, value);
	}

	inline static int32_t get_offset_of_TAG_ERROR_1() { return static_cast<int32_t>(offsetof(SLog_t2165490241_StaticFields, ___TAG_ERROR_1)); }
	inline String_t* get_TAG_ERROR_1() const { return ___TAG_ERROR_1; }
	inline String_t** get_address_of_TAG_ERROR_1() { return &___TAG_ERROR_1; }
	inline void set_TAG_ERROR_1(String_t* value)
	{
		___TAG_ERROR_1 = value;
		Il2CppCodeGenWriteBarrier(&___TAG_ERROR_1, value);
	}

	inline static int32_t get_offset_of_TAG_EXCEPTION_2() { return static_cast<int32_t>(offsetof(SLog_t2165490241_StaticFields, ___TAG_EXCEPTION_2)); }
	inline String_t* get_TAG_EXCEPTION_2() const { return ___TAG_EXCEPTION_2; }
	inline String_t** get_address_of_TAG_EXCEPTION_2() { return &___TAG_EXCEPTION_2; }
	inline void set_TAG_EXCEPTION_2(String_t* value)
	{
		___TAG_EXCEPTION_2 = value;
		Il2CppCodeGenWriteBarrier(&___TAG_EXCEPTION_2, value);
	}

	inline static int32_t get_offset_of_TAG_INFO_3() { return static_cast<int32_t>(offsetof(SLog_t2165490241_StaticFields, ___TAG_INFO_3)); }
	inline String_t* get_TAG_INFO_3() const { return ___TAG_INFO_3; }
	inline String_t** get_address_of_TAG_INFO_3() { return &___TAG_INFO_3; }
	inline void set_TAG_INFO_3(String_t* value)
	{
		___TAG_INFO_3 = value;
		Il2CppCodeGenWriteBarrier(&___TAG_INFO_3, value);
	}

	inline static int32_t get_offset_of_TAG_DEBUG_4() { return static_cast<int32_t>(offsetof(SLog_t2165490241_StaticFields, ___TAG_DEBUG_4)); }
	inline String_t* get_TAG_DEBUG_4() const { return ___TAG_DEBUG_4; }
	inline String_t** get_address_of_TAG_DEBUG_4() { return &___TAG_DEBUG_4; }
	inline void set_TAG_DEBUG_4(String_t* value)
	{
		___TAG_DEBUG_4 = value;
		Il2CppCodeGenWriteBarrier(&___TAG_DEBUG_4, value);
	}

	inline static int32_t get_offset_of_TAG_VERBOSE_5() { return static_cast<int32_t>(offsetof(SLog_t2165490241_StaticFields, ___TAG_VERBOSE_5)); }
	inline String_t* get_TAG_VERBOSE_5() const { return ___TAG_VERBOSE_5; }
	inline String_t** get_address_of_TAG_VERBOSE_5() { return &___TAG_VERBOSE_5; }
	inline void set_TAG_VERBOSE_5(String_t* value)
	{
		___TAG_VERBOSE_5 = value;
		Il2CppCodeGenWriteBarrier(&___TAG_VERBOSE_5, value);
	}

	inline static int32_t get_offset_of_sLogger_6() { return static_cast<int32_t>(offsetof(SLog_t2165490241_StaticFields, ___sLogger_6)); }
	inline Action_2_t1524988530 * get_sLogger_6() const { return ___sLogger_6; }
	inline Action_2_t1524988530 ** get_address_of_sLogger_6() { return &___sLogger_6; }
	inline void set_sLogger_6(Action_2_t1524988530 * value)
	{
		___sLogger_6 = value;
		Il2CppCodeGenWriteBarrier(&___sLogger_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
