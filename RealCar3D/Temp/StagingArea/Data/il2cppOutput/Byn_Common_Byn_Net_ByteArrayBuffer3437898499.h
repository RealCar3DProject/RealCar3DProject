#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Generic.List`1<Byn.Net.ByteArrayBuffer>[]
struct List_1U5BU5D_t3561948406;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Byn.Net.ByteArrayBuffer
struct  ByteArrayBuffer_t3437898499  : public Il2CppObject
{
public:
	// System.Byte[] Byn.Net.ByteArrayBuffer::array
	ByteU5BU5D_t3397334013* ___array_1;
	// System.Int32 Byn.Net.ByteArrayBuffer::positionWrite
	int32_t ___positionWrite_2;
	// System.Int32 Byn.Net.ByteArrayBuffer::positionRead
	int32_t ___positionRead_3;
	// System.Int32 Byn.Net.ByteArrayBuffer::offset
	int32_t ___offset_4;
	// System.Boolean Byn.Net.ByteArrayBuffer::mFromPool
	bool ___mFromPool_5;
	// System.Boolean Byn.Net.ByteArrayBuffer::mDisposed
	bool ___mDisposed_6;

public:
	inline static int32_t get_offset_of_array_1() { return static_cast<int32_t>(offsetof(ByteArrayBuffer_t3437898499, ___array_1)); }
	inline ByteU5BU5D_t3397334013* get_array_1() const { return ___array_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_array_1() { return &___array_1; }
	inline void set_array_1(ByteU5BU5D_t3397334013* value)
	{
		___array_1 = value;
		Il2CppCodeGenWriteBarrier(&___array_1, value);
	}

	inline static int32_t get_offset_of_positionWrite_2() { return static_cast<int32_t>(offsetof(ByteArrayBuffer_t3437898499, ___positionWrite_2)); }
	inline int32_t get_positionWrite_2() const { return ___positionWrite_2; }
	inline int32_t* get_address_of_positionWrite_2() { return &___positionWrite_2; }
	inline void set_positionWrite_2(int32_t value)
	{
		___positionWrite_2 = value;
	}

	inline static int32_t get_offset_of_positionRead_3() { return static_cast<int32_t>(offsetof(ByteArrayBuffer_t3437898499, ___positionRead_3)); }
	inline int32_t get_positionRead_3() const { return ___positionRead_3; }
	inline int32_t* get_address_of_positionRead_3() { return &___positionRead_3; }
	inline void set_positionRead_3(int32_t value)
	{
		___positionRead_3 = value;
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(ByteArrayBuffer_t3437898499, ___offset_4)); }
	inline int32_t get_offset_4() const { return ___offset_4; }
	inline int32_t* get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(int32_t value)
	{
		___offset_4 = value;
	}

	inline static int32_t get_offset_of_mFromPool_5() { return static_cast<int32_t>(offsetof(ByteArrayBuffer_t3437898499, ___mFromPool_5)); }
	inline bool get_mFromPool_5() const { return ___mFromPool_5; }
	inline bool* get_address_of_mFromPool_5() { return &___mFromPool_5; }
	inline void set_mFromPool_5(bool value)
	{
		___mFromPool_5 = value;
	}

	inline static int32_t get_offset_of_mDisposed_6() { return static_cast<int32_t>(offsetof(ByteArrayBuffer_t3437898499, ___mDisposed_6)); }
	inline bool get_mDisposed_6() const { return ___mDisposed_6; }
	inline bool* get_address_of_mDisposed_6() { return &___mDisposed_6; }
	inline void set_mDisposed_6(bool value)
	{
		___mDisposed_6 = value;
	}
};

struct ByteArrayBuffer_t3437898499_StaticFields
{
public:
	// System.Boolean Byn.Net.ByteArrayBuffer::LOG_GC_CALLS
	bool ___LOG_GC_CALLS_0;
	// System.Collections.Generic.List`1<Byn.Net.ByteArrayBuffer>[] Byn.Net.ByteArrayBuffer::sPool
	List_1U5BU5D_t3561948406* ___sPool_7;
	// System.Int32[] Byn.Net.ByteArrayBuffer::MultiplyDeBruijnBitPosition
	Int32U5BU5D_t3030399641* ___MultiplyDeBruijnBitPosition_8;

public:
	inline static int32_t get_offset_of_LOG_GC_CALLS_0() { return static_cast<int32_t>(offsetof(ByteArrayBuffer_t3437898499_StaticFields, ___LOG_GC_CALLS_0)); }
	inline bool get_LOG_GC_CALLS_0() const { return ___LOG_GC_CALLS_0; }
	inline bool* get_address_of_LOG_GC_CALLS_0() { return &___LOG_GC_CALLS_0; }
	inline void set_LOG_GC_CALLS_0(bool value)
	{
		___LOG_GC_CALLS_0 = value;
	}

	inline static int32_t get_offset_of_sPool_7() { return static_cast<int32_t>(offsetof(ByteArrayBuffer_t3437898499_StaticFields, ___sPool_7)); }
	inline List_1U5BU5D_t3561948406* get_sPool_7() const { return ___sPool_7; }
	inline List_1U5BU5D_t3561948406** get_address_of_sPool_7() { return &___sPool_7; }
	inline void set_sPool_7(List_1U5BU5D_t3561948406* value)
	{
		___sPool_7 = value;
		Il2CppCodeGenWriteBarrier(&___sPool_7, value);
	}

	inline static int32_t get_offset_of_MultiplyDeBruijnBitPosition_8() { return static_cast<int32_t>(offsetof(ByteArrayBuffer_t3437898499_StaticFields, ___MultiplyDeBruijnBitPosition_8)); }
	inline Int32U5BU5D_t3030399641* get_MultiplyDeBruijnBitPosition_8() const { return ___MultiplyDeBruijnBitPosition_8; }
	inline Int32U5BU5D_t3030399641** get_address_of_MultiplyDeBruijnBitPosition_8() { return &___MultiplyDeBruijnBitPosition_8; }
	inline void set_MultiplyDeBruijnBitPosition_8(Int32U5BU5D_t3030399641* value)
	{
		___MultiplyDeBruijnBitPosition_8 = value;
		Il2CppCodeGenWriteBarrier(&___MultiplyDeBruijnBitPosition_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
