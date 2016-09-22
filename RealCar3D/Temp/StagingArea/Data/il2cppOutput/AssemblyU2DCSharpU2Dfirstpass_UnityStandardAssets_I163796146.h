﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Shader
struct Shader_t2430389951;

#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2152133263.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ContrastEnhance
struct  ContrastEnhance_t163796146  : public PostEffectsBase_t2152133263
{
public:
	// System.Single UnityStandardAssets.ImageEffects.ContrastEnhance::intensity
	float ___intensity_5;
	// System.Single UnityStandardAssets.ImageEffects.ContrastEnhance::threshold
	float ___threshold_6;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastEnhance::separableBlurMaterial
	Material_t193706927 * ___separableBlurMaterial_7;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastEnhance::contrastCompositeMaterial
	Material_t193706927 * ___contrastCompositeMaterial_8;
	// System.Single UnityStandardAssets.ImageEffects.ContrastEnhance::blurSpread
	float ___blurSpread_9;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastEnhance::separableBlurShader
	Shader_t2430389951 * ___separableBlurShader_10;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastEnhance::contrastCompositeShader
	Shader_t2430389951 * ___contrastCompositeShader_11;

public:
	inline static int32_t get_offset_of_intensity_5() { return static_cast<int32_t>(offsetof(ContrastEnhance_t163796146, ___intensity_5)); }
	inline float get_intensity_5() const { return ___intensity_5; }
	inline float* get_address_of_intensity_5() { return &___intensity_5; }
	inline void set_intensity_5(float value)
	{
		___intensity_5 = value;
	}

	inline static int32_t get_offset_of_threshold_6() { return static_cast<int32_t>(offsetof(ContrastEnhance_t163796146, ___threshold_6)); }
	inline float get_threshold_6() const { return ___threshold_6; }
	inline float* get_address_of_threshold_6() { return &___threshold_6; }
	inline void set_threshold_6(float value)
	{
		___threshold_6 = value;
	}

	inline static int32_t get_offset_of_separableBlurMaterial_7() { return static_cast<int32_t>(offsetof(ContrastEnhance_t163796146, ___separableBlurMaterial_7)); }
	inline Material_t193706927 * get_separableBlurMaterial_7() const { return ___separableBlurMaterial_7; }
	inline Material_t193706927 ** get_address_of_separableBlurMaterial_7() { return &___separableBlurMaterial_7; }
	inline void set_separableBlurMaterial_7(Material_t193706927 * value)
	{
		___separableBlurMaterial_7 = value;
		Il2CppCodeGenWriteBarrier(&___separableBlurMaterial_7, value);
	}

	inline static int32_t get_offset_of_contrastCompositeMaterial_8() { return static_cast<int32_t>(offsetof(ContrastEnhance_t163796146, ___contrastCompositeMaterial_8)); }
	inline Material_t193706927 * get_contrastCompositeMaterial_8() const { return ___contrastCompositeMaterial_8; }
	inline Material_t193706927 ** get_address_of_contrastCompositeMaterial_8() { return &___contrastCompositeMaterial_8; }
	inline void set_contrastCompositeMaterial_8(Material_t193706927 * value)
	{
		___contrastCompositeMaterial_8 = value;
		Il2CppCodeGenWriteBarrier(&___contrastCompositeMaterial_8, value);
	}

	inline static int32_t get_offset_of_blurSpread_9() { return static_cast<int32_t>(offsetof(ContrastEnhance_t163796146, ___blurSpread_9)); }
	inline float get_blurSpread_9() const { return ___blurSpread_9; }
	inline float* get_address_of_blurSpread_9() { return &___blurSpread_9; }
	inline void set_blurSpread_9(float value)
	{
		___blurSpread_9 = value;
	}

	inline static int32_t get_offset_of_separableBlurShader_10() { return static_cast<int32_t>(offsetof(ContrastEnhance_t163796146, ___separableBlurShader_10)); }
	inline Shader_t2430389951 * get_separableBlurShader_10() const { return ___separableBlurShader_10; }
	inline Shader_t2430389951 ** get_address_of_separableBlurShader_10() { return &___separableBlurShader_10; }
	inline void set_separableBlurShader_10(Shader_t2430389951 * value)
	{
		___separableBlurShader_10 = value;
		Il2CppCodeGenWriteBarrier(&___separableBlurShader_10, value);
	}

	inline static int32_t get_offset_of_contrastCompositeShader_11() { return static_cast<int32_t>(offsetof(ContrastEnhance_t163796146, ___contrastCompositeShader_11)); }
	inline Shader_t2430389951 * get_contrastCompositeShader_11() const { return ___contrastCompositeShader_11; }
	inline Shader_t2430389951 ** get_address_of_contrastCompositeShader_11() { return &___contrastCompositeShader_11; }
	inline void set_contrastCompositeShader_11(Shader_t2430389951 * value)
	{
		___contrastCompositeShader_11 = value;
		Il2CppCodeGenWriteBarrier(&___contrastCompositeShader_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
