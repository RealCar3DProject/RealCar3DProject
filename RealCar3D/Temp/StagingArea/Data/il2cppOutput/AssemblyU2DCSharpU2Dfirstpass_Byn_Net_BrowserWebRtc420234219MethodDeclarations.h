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

// Byn.Net.BrowserWebRtcNetwork
struct BrowserWebRtcNetwork_t420234219;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Byn_Common_Byn_Net_ConnectionId1508190499.h"
#include "Byn_Common_Byn_Net_NetworkEvent1041492056.h"

// System.Void Byn.Net.BrowserWebRtcNetwork::.ctor(System.String)
extern "C"  void BrowserWebRtcNetwork__ctor_m1314222202 (BrowserWebRtcNetwork_t420234219 * __this, String_t* ___config0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.BrowserWebRtcNetwork::.ctor()
extern "C"  void BrowserWebRtcNetwork__ctor_m134803320 (BrowserWebRtcNetwork_t420234219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.BrowserWebRtcNetwork::.cctor()
extern "C"  void BrowserWebRtcNetwork__cctor_m4074237591 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Byn.Net.BrowserWebRtcNetwork::UnityWebRtcNetworkIsAvailable()
extern "C"  bool BrowserWebRtcNetwork_UnityWebRtcNetworkIsAvailable_m1983266895 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Byn.Net.BrowserWebRtcNetwork::UnityWebRtcNetworkCreate(System.String)
extern "C"  int32_t BrowserWebRtcNetwork_UnityWebRtcNetworkCreate_m1342639764 (Il2CppObject * __this /* static, unused */, String_t* ___lConfiguration0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.BrowserWebRtcNetwork::UnityWebRtcNetworkRelease(System.Int32)
extern "C"  void BrowserWebRtcNetwork_UnityWebRtcNetworkRelease_m3726770286 (Il2CppObject * __this /* static, unused */, int32_t ___lIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Byn.Net.BrowserWebRtcNetwork::UnityWebRtcNetworkConnect(System.Int32,System.String)
extern "C"  int32_t BrowserWebRtcNetwork_UnityWebRtcNetworkConnect_m3063538871 (Il2CppObject * __this /* static, unused */, int32_t ___lIndex0, String_t* ___lRoom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.BrowserWebRtcNetwork::UnityWebRtcNetworkStartServer(System.Int32,System.String)
extern "C"  void BrowserWebRtcNetwork_UnityWebRtcNetworkStartServer_m3550834952 (Il2CppObject * __this /* static, unused */, int32_t ___lIndex0, String_t* ___lRoom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.BrowserWebRtcNetwork::UnityWebRtcNetworkStopServer(System.Int32)
extern "C"  void BrowserWebRtcNetwork_UnityWebRtcNetworkStopServer_m1407663006 (Il2CppObject * __this /* static, unused */, int32_t ___lIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.BrowserWebRtcNetwork::UnityWebRtcNetworkDisconnect(System.Int32,System.Int32)
extern "C"  void BrowserWebRtcNetwork_UnityWebRtcNetworkDisconnect_m175258610 (Il2CppObject * __this /* static, unused */, int32_t ___lIndex0, int32_t ___lConnectionId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.BrowserWebRtcNetwork::UnityWebRtcNetworkShutdown(System.Int32)
extern "C"  void BrowserWebRtcNetwork_UnityWebRtcNetworkShutdown_m1163972753 (Il2CppObject * __this /* static, unused */, int32_t ___lIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.BrowserWebRtcNetwork::UnityWebRtcNetworkUpdate(System.Int32)
extern "C"  void BrowserWebRtcNetwork_UnityWebRtcNetworkUpdate_m958096468 (Il2CppObject * __this /* static, unused */, int32_t ___lIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.BrowserWebRtcNetwork::UnityWebRtcNetworkFlush(System.Int32)
extern "C"  void BrowserWebRtcNetwork_UnityWebRtcNetworkFlush_m1422550865 (Il2CppObject * __this /* static, unused */, int32_t ___lIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.BrowserWebRtcNetwork::UnityWebRtcNetworkSendData(System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C"  void BrowserWebRtcNetwork_UnityWebRtcNetworkSendData_m4003195188 (Il2CppObject * __this /* static, unused */, int32_t ___lIndex0, int32_t ___lConnectionId1, ByteU5BU5D_t3397334013* ___lUint8ArrayDataPtr2, int32_t ___lUint8ArrayDataOffset3, int32_t ___lUint8ArrayDataLength4, bool ___lReliable5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Byn.Net.BrowserWebRtcNetwork::UnityWebRtcNetworkPeekEventDataLength(System.Int32)
extern "C"  int32_t BrowserWebRtcNetwork_UnityWebRtcNetworkPeekEventDataLength_m3086625372 (Il2CppObject * __this /* static, unused */, int32_t ___lIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Byn.Net.BrowserWebRtcNetwork::UnityWebRtcNetworkDequeue(System.Int32,System.Int32[],System.Int32[],System.Byte[],System.Int32,System.Int32,System.Int32[])
extern "C"  bool BrowserWebRtcNetwork_UnityWebRtcNetworkDequeue_m3810513857 (Il2CppObject * __this /* static, unused */, int32_t ___lIndex0, Int32U5BU5D_t3030399641* ___lTypeIntArrayPtr1, Int32U5BU5D_t3030399641* ___lConidIntArrayPtr2, ByteU5BU5D_t3397334013* ___lUint8ArrayDataPtr3, int32_t ___lUint8ArrayDataOffset4, int32_t ___lUint8ArrayDataLength5, Int32U5BU5D_t3030399641* ___lDataLenIntArray6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Byn.Net.BrowserWebRtcNetwork::UnityWebRtcNetworkPeek(System.Int32,System.Int32[],System.Int32[],System.Byte[],System.Int32,System.Int32,System.Int32[])
extern "C"  bool BrowserWebRtcNetwork_UnityWebRtcNetworkPeek_m633641660 (Il2CppObject * __this /* static, unused */, int32_t ___lIndex0, Int32U5BU5D_t3030399641* ___lTypeIntArrayPtr1, Int32U5BU5D_t3030399641* ___lConidIntArrayPtr2, ByteU5BU5D_t3397334013* ___lUint8ArrayDataPtr3, int32_t ___lUint8ArrayDataOffset4, int32_t ___lUint8ArrayDataLength5, Int32U5BU5D_t3030399641* ___lDataLenIntArray6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.BrowserWebRtcNetwork::InjectJsCode()
extern "C"  void BrowserWebRtcNetwork_InjectJsCode_m2182514695 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Byn.Net.BrowserWebRtcNetwork::IsAvailable()
extern "C"  bool BrowserWebRtcNetwork_IsAvailable_m3938536063 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Byn.Net.BrowserWebRtcNetwork::get_IsRunning()
extern "C"  bool BrowserWebRtcNetwork_get_IsRunning_m3566156030 (BrowserWebRtcNetwork_t420234219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Byn.Net.BrowserWebRtcNetwork::get_IsServer()
extern "C"  bool BrowserWebRtcNetwork_get_IsServer_m324549246 (BrowserWebRtcNetwork_t420234219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.BrowserWebRtcNetwork::Finalize()
extern "C"  void BrowserWebRtcNetwork_Finalize_m707413216 (BrowserWebRtcNetwork_t420234219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.BrowserWebRtcNetwork::Dispose()
extern "C"  void BrowserWebRtcNetwork_Dispose_m2825118927 (BrowserWebRtcNetwork_t420234219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.BrowserWebRtcNetwork::Dispose(System.Boolean)
extern "C"  void BrowserWebRtcNetwork_Dispose_m4004115116 (BrowserWebRtcNetwork_t420234219 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.BrowserWebRtcNetwork::StartServer()
extern "C"  void BrowserWebRtcNetwork_StartServer_m996121629 (BrowserWebRtcNetwork_t420234219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.BrowserWebRtcNetwork::StartServer(System.String)
extern "C"  void BrowserWebRtcNetwork_StartServer_m3034723963 (BrowserWebRtcNetwork_t420234219 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.BrowserWebRtcNetwork::StopServer()
extern "C"  void BrowserWebRtcNetwork_StopServer_m2937687809 (BrowserWebRtcNetwork_t420234219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Byn.Net.ConnectionId Byn.Net.BrowserWebRtcNetwork::Connect(System.String)
extern "C"  ConnectionId_t1508190499  BrowserWebRtcNetwork_Connect_m3826637958 (BrowserWebRtcNetwork_t420234219 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Byn.Net.BrowserWebRtcNetwork::DequeueInternal(Byn.Net.NetworkEvent&)
extern "C"  bool BrowserWebRtcNetwork_DequeueInternal_m745652305 (BrowserWebRtcNetwork_t420234219 * __this, NetworkEvent_t1041492056 * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.BrowserWebRtcNetwork::HandleEventInternally(Byn.Net.NetworkEvent&)
extern "C"  void BrowserWebRtcNetwork_HandleEventInternally_m1344454000 (BrowserWebRtcNetwork_t420234219 * __this, NetworkEvent_t1041492056 * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.BrowserWebRtcNetwork::SendData(Byn.Net.ConnectionId,System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C"  void BrowserWebRtcNetwork_SendData_m2818093041 (BrowserWebRtcNetwork_t420234219 * __this, ConnectionId_t1508190499  ___conId0, ByteU5BU5D_t3397334013* ___data1, int32_t ___offset2, int32_t ___length3, bool ___reliable4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.BrowserWebRtcNetwork::Shutdown()
extern "C"  void BrowserWebRtcNetwork_Shutdown_m1427096860 (BrowserWebRtcNetwork_t420234219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Byn.Net.BrowserWebRtcNetwork::Dequeue(Byn.Net.NetworkEvent&)
extern "C"  bool BrowserWebRtcNetwork_Dequeue_m1977126988 (BrowserWebRtcNetwork_t420234219 * __this, NetworkEvent_t1041492056 * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Byn.Net.BrowserWebRtcNetwork::Peek(Byn.Net.NetworkEvent&)
extern "C"  bool BrowserWebRtcNetwork_Peek_m824415545 (BrowserWebRtcNetwork_t420234219 * __this, NetworkEvent_t1041492056 * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.BrowserWebRtcNetwork::Update()
extern "C"  void BrowserWebRtcNetwork_Update_m1282564233 (BrowserWebRtcNetwork_t420234219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.BrowserWebRtcNetwork::Flush()
extern "C"  void BrowserWebRtcNetwork_Flush_m3436745362 (BrowserWebRtcNetwork_t420234219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.BrowserWebRtcNetwork::Disconnect(Byn.Net.ConnectionId)
extern "C"  void BrowserWebRtcNetwork_Disconnect_m3698798557 (BrowserWebRtcNetwork_t420234219 * __this, ConnectionId_t1508190499  ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
