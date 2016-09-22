#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Byn.Net.ByteArrayBuffer
struct ByteArrayBuffer_t3437898499;
// Byn.Net.IBasicNetwork
struct IBasicNetwork_t3367305221;

#include "mscorlib_System_Array3829468939.h"
#include "Byn_Common_Byn_Net_ByteArrayBuffer3437898499.h"
#include "Byn_Common_Byn_Net_ConnectionId1508190499.h"
#include "Byn_Common_Byn_Net_NetworkEvent1041492056.h"

#pragma once
// Byn.Net.ByteArrayBuffer[]
struct ByteArrayBufferU5BU5D_t3497570706  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) ByteArrayBuffer_t3437898499 * m_Items[1];

public:
	inline ByteArrayBuffer_t3437898499 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ByteArrayBuffer_t3437898499 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ByteArrayBuffer_t3437898499 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Byn.Net.ConnectionId[]
struct ConnectionIdU5BU5D_t3946862322  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) ConnectionId_t1508190499  m_Items[1];

public:
	inline ConnectionId_t1508190499  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ConnectionId_t1508190499 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ConnectionId_t1508190499  value)
	{
		m_Items[index] = value;
	}
};
// Byn.Net.NetworkEvent[]
struct NetworkEventU5BU5D_t973042505  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) NetworkEvent_t1041492056  m_Items[1];

public:
	inline NetworkEvent_t1041492056  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline NetworkEvent_t1041492056 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, NetworkEvent_t1041492056  value)
	{
		m_Items[index] = value;
	}
};
// Byn.Net.IBasicNetwork[]
struct IBasicNetworkU5BU5D_t3451661896  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
