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

// UnityEngine.WheelCollider
struct WheelCollider_t785806275;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_WheelHit2037539404.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// System.Single UnityEngine.WheelCollider::get_radius()
extern "C"  float WheelCollider_get_radius_m3269083531 (WheelCollider_t785806275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WheelCollider::set_motorTorque(System.Single)
extern "C"  void WheelCollider_set_motorTorque_m78629303 (WheelCollider_t785806275 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WheelCollider::set_brakeTorque(System.Single)
extern "C"  void WheelCollider_set_brakeTorque_m4163172735 (WheelCollider_t785806275 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WheelCollider::set_steerAngle(System.Single)
extern "C"  void WheelCollider_set_steerAngle_m3435340016 (WheelCollider_t785806275 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WheelCollider::GetGroundHit(UnityEngine.WheelHit&)
extern "C"  bool WheelCollider_GetGroundHit_m3220996913 (WheelCollider_t785806275 * __this, WheelHit_t2037539404 * ___hit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WheelCollider::GetWorldPose(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void WheelCollider_GetWorldPose_m49370491 (WheelCollider_t785806275 * __this, Vector3_t2243707580 * ___pos0, Quaternion_t4030073918 * ___quat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
