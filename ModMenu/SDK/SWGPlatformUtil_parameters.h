#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function SWGPlatformUtil.SWGPlatformUtilFunctions.SwitchOnPlatform
struct USWGPlatformUtilFunctions_SwitchOnPlatform_Params
{
	SWGPlatformUtil_ESWGPlatform                       Platform;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SWGPlatformUtil.SWGPlatformUtilFunctions.StartActivity
struct USWGPlatformUtilFunctions_StartActivity_Params
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ActivityId;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SWGPlatformUtil.SWGPlatformUtilFunctions.SetActivityAvailability
struct USWGPlatformUtilFunctions_SetActivityAvailability_Params
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ActivityId;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditorSwitch
struct USWGPlatformUtilFunctions_IsInEditorSwitch_Params
{
	SWGPlatformUtil_ESWGEditor                         Editor;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditor
struct USWGPlatformUtilFunctions_IsInEditor_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetVersionString
struct USWGPlatformUtilFunctions_GetVersionString_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetGPU
struct USWGPlatformUtilFunctions_GetGPU_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetBuildPlatform
struct USWGPlatformUtilFunctions_GetBuildPlatform_Params
{
	SWGPlatformUtil_ESWGPlatform                       ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SWGPlatformUtil.SWGPlatformUtilFunctions.EndActivity
struct USWGPlatformUtilFunctions_EndActivity_Params
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ActivityId;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SWGPlatformUtil_EGameActivityEndType               Outcome;                                                   // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
