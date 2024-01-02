#pragma once

/**
 * Name: FNAFSB
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function SWGPlatformUtil.SWGPlatformUtilFunctions.SwitchOnPlatform
	 */
	struct USWGPlatformUtilFunctions_SwitchOnPlatform_Params
	{
	public:
		ESWGPlatform                                               Platform;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGPlatformUtil.SWGPlatformUtilFunctions.StartActivity
	 */
	struct USWGPlatformUtilFunctions_StartActivity_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ActivityId;                                              // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGPlatformUtil.SWGPlatformUtilFunctions.SetActivityAvailability
	 */
	struct USWGPlatformUtilFunctions_SetActivityAvailability_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ActivityId;                                              // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnabled;                                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditorSwitch
	 */
	struct USWGPlatformUtilFunctions_IsInEditorSwitch_Params
	{
	public:
		ESWGEditor                                                 Editor;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditor
	 */
	struct USWGPlatformUtilFunctions_IsInEditor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGPlatformUtil.SWGPlatformUtilFunctions.GPUSupportsRayTracing
	 */
	struct USWGPlatformUtilFunctions_GPUSupportsRayTracing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetXboxSpecificPlatform
	 */
	struct USWGPlatformUtilFunctions_GetXboxSpecificPlatform_Params
	{
	public:
		ESWGXboxPlatform                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetVersionString
	 */
	struct USWGPlatformUtilFunctions_GetVersionString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetGPU
	 */
	struct USWGPlatformUtilFunctions_GetGPU_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetGamepadBackKey
	 */
	struct USWGPlatformUtilFunctions_GetGamepadBackKey_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetGamepadAcceptKey
	 */
	struct USWGPlatformUtilFunctions_GetGamepadAcceptKey_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetBuildPlatform
	 */
	struct USWGPlatformUtilFunctions_GetBuildPlatform_Params
	{
	public:
		ESWGPlatform                                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGPlatformUtil.SWGPlatformUtilFunctions.EndActivity
	 */
	struct USWGPlatformUtilFunctions_EndActivity_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ActivityId;                                              // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameActivityEndType                                       Outcome;                                                 // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
