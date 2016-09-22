#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Byn.Net.MessageDataBuffer
struct MessageDataBuffer_t3125221543;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// Byn.Net.NetworkEvent
struct NetworkEvent_t1041492056;
struct NetworkEvent_t1041492056_marshaled_pinvoke;
struct NetworkEvent_t1041492056_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "Byn_Common_Byn_Net_NetworkEvent1041492056.h"
#include "Byn_Common_Byn_Net_NetEventType3780191931.h"
#include "Byn_Common_Byn_Net_ConnectionId1508190499.h"
#include "mscorlib_System_Object2689449295.h"

// Byn.Net.NetEventType Byn.Net.NetworkEvent::get_Type()
extern "C"  uint8_t NetworkEvent_get_Type_m625459832 (NetworkEvent_t1041492056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Byn.Net.ConnectionId Byn.Net.NetworkEvent::get_ConnectionId()
extern "C"  ConnectionId_t1508190499  NetworkEvent_get_ConnectionId_m4175898533 (NetworkEvent_t1041492056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Byn.Net.MessageDataBuffer Byn.Net.NetworkEvent::get_MessageData()
extern "C"  Il2CppObject * NetworkEvent_get_MessageData_m832385053 (NetworkEvent_t1041492056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.NetworkEvent::.ctor(Byn.Net.NetEventType,Byn.Net.ConnectionId,System.Object)
extern "C"  void NetworkEvent__ctor_m2008205795 (NetworkEvent_t1041492056 * __this, uint8_t ___t0, ConnectionId_t1508190499  ___conId1, Il2CppObject * ___dt2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Byn.Net.NetworkEvent::ToString()
extern "C"  String_t* NetworkEvent_ToString_m2566034570 (NetworkEvent_t1041492056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct NetworkEvent_t1041492056;
struct NetworkEvent_t1041492056_marshaled_pinvoke;

extern "C" void NetworkEvent_t1041492056_marshal_pinvoke(const NetworkEvent_t1041492056& unmarshaled, NetworkEvent_t1041492056_marshaled_pinvoke& marshaled);
extern "C" void NetworkEvent_t1041492056_marshal_pinvoke_back(const NetworkEvent_t1041492056_marshaled_pinvoke& marshaled, NetworkEvent_t1041492056& unmarshaled);
extern "C" void NetworkEvent_t1041492056_marshal_pinvoke_cleanup(NetworkEvent_t1041492056_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct NetworkEvent_t1041492056;
struct NetworkEvent_t1041492056_marshaled_com;

extern "C" void NetworkEvent_t1041492056_marshal_com(const NetworkEvent_t1041492056& unmarshaled, NetworkEvent_t1041492056_marshaled_com& marshaled);
extern "C" void NetworkEvent_t1041492056_marshal_com_back(const NetworkEvent_t1041492056_marshaled_com& marshaled, NetworkEvent_t1041492056& unmarshaled);
extern "C" void NetworkEvent_t1041492056_marshal_com_cleanup(NetworkEvent_t1041492056_marshaled_com& marshaled);
