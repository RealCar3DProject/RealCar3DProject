#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem
struct DemoParticleSystem_t3072969947;

#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_SceneUtils_P3072969947.h"

#pragma once
// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem[]
struct DemoParticleSystemU5BU5D_t641914202  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) DemoParticleSystem_t3072969947 * m_Items[1];

public:
	inline DemoParticleSystem_t3072969947 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline DemoParticleSystem_t3072969947 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, DemoParticleSystem_t3072969947 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
