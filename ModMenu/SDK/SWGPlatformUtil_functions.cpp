// Name: FNAF Security Breach, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00696C70
//		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.SwitchOnPlatform
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		SWGPlatformUtil_ESWGPlatform                       Platform                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USWGPlatformUtilFunctions::STATIC_SwitchOnPlatform(SWGPlatformUtil_ESWGPlatform* Platform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.SwitchOnPlatform");

	USWGPlatformUtilFunctions_SwitchOnPlatform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Platform != nullptr)
		*Platform = params.Platform;

}


// Function:
//		Offset -> 0x00696BA0
//		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.StartActivity
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ActivityId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USWGPlatformUtilFunctions::STATIC_StartActivity(class APlayerController* PlayerController, const struct FString& ActivityId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.StartActivity");

	USWGPlatformUtilFunctions_StartActivity_Params params {};
	params.PlayerController = PlayerController;
	params.ActivityId = ActivityId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00696A90
//		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.SetActivityAvailability
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ActivityId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USWGPlatformUtilFunctions::STATIC_SetActivityAvailability(class APlayerController* PlayerController, const struct FString& ActivityId, bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.SetActivityAvailability");

	USWGPlatformUtilFunctions_SetActivityAvailability_Params params {};
	params.PlayerController = PlayerController;
	params.ActivityId = ActivityId;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00696A00
//		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditorSwitch
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		SWGPlatformUtil_ESWGEditor                         Editor                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USWGPlatformUtilFunctions::STATIC_IsInEditorSwitch(SWGPlatformUtil_ESWGEditor* Editor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditorSwitch");

	USWGPlatformUtilFunctions_IsInEditorSwitch_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Editor != nullptr)
		*Editor = params.Editor;

}


// Function:
//		Offset -> 0x006968C0
//		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USWGPlatformUtilFunctions::STATIC_IsInEditor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditor");

	USWGPlatformUtilFunctions_IsInEditor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00696970
//		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetVersionString
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USWGPlatformUtilFunctions::STATIC_GetVersionString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetVersionString");

	USWGPlatformUtilFunctions_GetVersionString_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x006968F0
//		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetGPU
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USWGPlatformUtilFunctions::STATIC_GetGPU()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetGPU");

	USWGPlatformUtilFunctions_GetGPU_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x006968C0
//		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetBuildPlatform
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		SWGPlatformUtil_ESWGPlatform                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SWGPlatformUtil_ESWGPlatform USWGPlatformUtilFunctions::STATIC_GetBuildPlatform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetBuildPlatform");

	USWGPlatformUtilFunctions_GetBuildPlatform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x006967B0
//		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.EndActivity
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ActivityId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		SWGPlatformUtil_EGameActivityEndType               Outcome                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USWGPlatformUtilFunctions::STATIC_EndActivity(class APlayerController* PlayerController, const struct FString& ActivityId, SWGPlatformUtil_EGameActivityEndType Outcome)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.EndActivity");

	USWGPlatformUtilFunctions_EndActivity_Params params {};
	params.PlayerController = PlayerController;
	params.ActivityId = ActivityId;
	params.Outcome = Outcome;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
