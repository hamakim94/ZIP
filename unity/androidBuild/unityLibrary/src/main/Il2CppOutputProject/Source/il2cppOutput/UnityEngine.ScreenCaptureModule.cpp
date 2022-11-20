#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE8CCFA91781BB9C429F0997CDE2C44CCD8FBF84E 
{
};
struct Il2CppArrayBounds;

// UnityEngine.ScreenCapture
struct ScreenCapture_t513DA8E74951FF61C8421D7046F6FC69A4153092  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void UnityEngine.ScreenCapture::CaptureScreenshot(System.String,System.Int32,UnityEngine.ScreenCapture/StereoScreenCaptureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenCapture_CaptureScreenshot_m35F14D593665968FE8F449104B66CE35EB22344D (String_t* ___filename0, int32_t ___superSize1, int32_t ___CaptureMode2, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.ScreenCapture::CaptureScreenshotAsTexture(System.Int32,UnityEngine.ScreenCapture/StereoScreenCaptureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ScreenCapture_CaptureScreenshotAsTexture_mFC8952EC7C888CBDB55B90213731D203527F2F1D (int32_t ___superSize0, int32_t ___stereoScreenCaptureMode1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.ScreenCapture::CaptureScreenshot(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenCapture_CaptureScreenshot_m37F1E4165A2EF8B8F30294E91DC0CCA9CE0DD18A (String_t* ___filename0, int32_t ___superSize1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___filename0;
		int32_t L_1 = ___superSize1;
		ScreenCapture_CaptureScreenshot_m35F14D593665968FE8F449104B66CE35EB22344D(L_0, L_1, 1, NULL);
		return;
	}
}
// UnityEngine.Texture2D UnityEngine.ScreenCapture::CaptureScreenshotAsTexture(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ScreenCapture_CaptureScreenshotAsTexture_mC1DA3AAAA5C492004E828D53AE9E026E40386FCE (int32_t ___superSize0, const RuntimeMethod* method) 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	{
		int32_t L_0 = ___superSize0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1;
		L_1 = ScreenCapture_CaptureScreenshotAsTexture_mFC8952EC7C888CBDB55B90213731D203527F2F1D(L_0, 1, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.ScreenCapture::CaptureScreenshot(System.String,System.Int32,UnityEngine.ScreenCapture/StereoScreenCaptureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenCapture_CaptureScreenshot_m35F14D593665968FE8F449104B66CE35EB22344D (String_t* ___filename0, int32_t ___superSize1, int32_t ___CaptureMode2, const RuntimeMethod* method) 
{
	typedef void (*ScreenCapture_CaptureScreenshot_m35F14D593665968FE8F449104B66CE35EB22344D_ftn) (String_t*, int32_t, int32_t);
	static ScreenCapture_CaptureScreenshot_m35F14D593665968FE8F449104B66CE35EB22344D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScreenCapture_CaptureScreenshot_m35F14D593665968FE8F449104B66CE35EB22344D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScreenCapture::CaptureScreenshot(System.String,System.Int32,UnityEngine.ScreenCapture/StereoScreenCaptureMode)");
	_il2cpp_icall_func(___filename0, ___superSize1, ___CaptureMode2);
}
// UnityEngine.Texture2D UnityEngine.ScreenCapture::CaptureScreenshotAsTexture(System.Int32,UnityEngine.ScreenCapture/StereoScreenCaptureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ScreenCapture_CaptureScreenshotAsTexture_mFC8952EC7C888CBDB55B90213731D203527F2F1D (int32_t ___superSize0, int32_t ___stereoScreenCaptureMode1, const RuntimeMethod* method) 
{
	typedef Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* (*ScreenCapture_CaptureScreenshotAsTexture_mFC8952EC7C888CBDB55B90213731D203527F2F1D_ftn) (int32_t, int32_t);
	static ScreenCapture_CaptureScreenshotAsTexture_mFC8952EC7C888CBDB55B90213731D203527F2F1D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScreenCapture_CaptureScreenshotAsTexture_mFC8952EC7C888CBDB55B90213731D203527F2F1D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScreenCapture::CaptureScreenshotAsTexture(System.Int32,UnityEngine.ScreenCapture/StereoScreenCaptureMode)");
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* icallRetVal = _il2cpp_icall_func(___superSize0, ___stereoScreenCaptureMode1);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
