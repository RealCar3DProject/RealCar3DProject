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

// UnityEngine.WheelHit
struct WheelHit_t2037539404;
struct WheelHit_t2037539404_marshaled_pinvoke;
struct WheelHit_t2037539404_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_WheelHit2037539404.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Vector3 UnityEngine.WheelHit::get_normal()
extern "C"  Vector3_t2243707580  WheelHit_get_normal_m197231215 (WheelHit_t2037539404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.WheelHit::get_forwardSlip()
extern "C"  float WheelHit_get_forwardSlip_m238012157 (WheelHit_t2037539404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.WheelHit::get_sidewaysSlip()
extern "C"  float WheelHit_get_sidewaysSlip_m2439534601 (WheelHit_t2037539404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct WheelHit_t2037539404;
struct WheelHit_t2037539404_marshaled_pinvoke;

extern "C" void WheelHit_t2037539404_marshal_pinvoke(const WheelHit_t2037539404& unmarshaled, WheelHit_t2037539404_marshaled_pinvoke& marshaled);
extern "C" void WheelHit_t2037539404_marshal_pinvoke_back(const WheelHit_t2037539404_marshaled_pinvoke& marshaled, WheelHit_t2037539404& unmarshaled);
extern "C" void WheelHit_t2037539404_marshal_pinvoke_cleanup(WheelHit_t2037539404_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct WheelHit_t2037539404;
struct WheelHit_t2037539404_marshaled_com;

extern "C" void WheelHit_t2037539404_marshal_com(const WheelHit_t2037539404& unmarshaled, WheelHit_t2037539404_marshaled_com& marshaled);
extern "C" void WheelHit_t2037539404_marshal_com_back(const WheelHit_t2037539404_marshaled_com& marshaled, WheelHit_t2037539404& unmarshaled);
extern "C" void WheelHit_t2037539404_marshal_com_cleanup(WheelHit_t2037539404_marshaled_com& marshaled);
