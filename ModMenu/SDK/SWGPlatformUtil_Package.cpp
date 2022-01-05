/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "SWGPlatformUtil_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USWGPlatformSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USWGPlatformSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGPlatformUtil.SWGPlatformSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00696C70
	 * 		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.SwitchOnPlatform
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		SWGPlatformUtil_ESWGPlatform                       Platform                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USWGPlatformUtilFunctions::STATIC_SwitchOnPlatform(SWGPlatformUtil_ESWGPlatform* Platform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.SwitchOnPlatform");
		
		USWGPlatformUtilFunctions_SwitchOnPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Platform != nullptr)
			*Platform = params.Platform;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00696BA0
	 * 		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.StartActivity
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ActivityId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USWGPlatformUtilFunctions::STATIC_StartActivity(class APlayerController* PlayerController, const class FString& ActivityId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.StartActivity");
		
		USWGPlatformUtilFunctions_StartActivity_Params params {};
		params.PlayerController = PlayerController;
		params.ActivityId = ActivityId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00696A90
	 * 		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.SetActivityAvailability
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ActivityId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USWGPlatformUtilFunctions::STATIC_SetActivityAvailability(class APlayerController* PlayerController, const class FString& ActivityId, bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.SetActivityAvailability");
		
		USWGPlatformUtilFunctions_SetActivityAvailability_Params params {};
		params.PlayerController = PlayerController;
		params.ActivityId = ActivityId;
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00696A00
	 * 		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditorSwitch
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		SWGPlatformUtil_ESWGEditor                         Editor                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USWGPlatformUtilFunctions::STATIC_IsInEditorSwitch(SWGPlatformUtil_ESWGEditor* Editor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditorSwitch");
		
		USWGPlatformUtilFunctions_IsInEditorSwitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Editor != nullptr)
			*Editor = params.Editor;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006968C0
	 * 		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool USWGPlatformUtilFunctions::STATIC_IsInEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditor");
		
		USWGPlatformUtilFunctions_IsInEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00696970
	 * 		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetVersionString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString USWGPlatformUtilFunctions::STATIC_GetVersionString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetVersionString");
		
		USWGPlatformUtilFunctions_GetVersionString_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006968F0
	 * 		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetGPU
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString USWGPlatformUtilFunctions::STATIC_GetGPU()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetGPU");
		
		USWGPlatformUtilFunctions_GetGPU_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006968C0
	 * 		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetBuildPlatform
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	SWGPlatformUtil_ESWGPlatform USWGPlatformUtilFunctions::STATIC_GetBuildPlatform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetBuildPlatform");
		
		USWGPlatformUtilFunctions_GetBuildPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006967B0
	 * 		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.EndActivity
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ActivityId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		SWGPlatformUtil_EGameActivityEndType               Outcome                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USWGPlatformUtilFunctions::STATIC_EndActivity(class APlayerController* PlayerController, const class FString& ActivityId, SWGPlatformUtil_EGameActivityEndType Outcome)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.EndActivity");
		
		USWGPlatformUtilFunctions_EndActivity_Params params {};
		params.PlayerController = PlayerController;
		params.ActivityId = ActivityId;
		params.Outcome = Outcome;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USWGPlatformUtilFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USWGPlatformUtilFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGPlatformUtil.SWGPlatformUtilFunctions");
		return ptr;
	}

}


