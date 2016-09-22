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

// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t2300653926;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void SWIGStringDelegate__ctor_m3079302195 (SWIGStringDelegate_t2300653926 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper/SWIGStringDelegate::Invoke(System.String)
extern "C"  String_t* SWIGStringDelegate_Invoke_m413141996 (SWIGStringDelegate_t2300653926 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper/SWIGStringDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SWIGStringDelegate_BeginInvoke_m191454042 (SWIGStringDelegate_t2300653926 * __this, String_t* ___message0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebRtcCSharp.WebRtcSwigPINVOKE/SWIGStringHelper/SWIGStringDelegate::EndInvoke(System.IAsyncResult)
extern "C"  String_t* SWIGStringDelegate_EndInvoke_m2898943442 (SWIGStringDelegate_t2300653926 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
