/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USWGPlatformSettings.StaticClass
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.SwitchOnPlatform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGPlatform                                       Platform                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USWGPlatformUtilFunctions::SwitchOnPlatform(ESWGPlatform* Platform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.SwitchOnPlatform");
		
		USWGPlatformUtilFunctions_SwitchOnPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Platform != nullptr)
			*Platform = params.Platform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.StartActivity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ActivityId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USWGPlatformUtilFunctions::StartActivity(class APlayerController* PlayerController, const class FString& ActivityId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.StartActivity");
		
		USWGPlatformUtilFunctions_StartActivity_Params params {};
		params.PlayerController = PlayerController;
		params.ActivityId = ActivityId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.SetActivityAvailability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ActivityId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USWGPlatformUtilFunctions::SetActivityAvailability(class APlayerController* PlayerController, const class FString& ActivityId, bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.SetActivityAvailability");
		
		USWGPlatformUtilFunctions_SetActivityAvailability_Params params {};
		params.PlayerController = PlayerController;
		params.ActivityId = ActivityId;
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditorSwitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGEditor                                         Editor                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USWGPlatformUtilFunctions::IsInEditorSwitch(ESWGEditor* Editor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditorSwitch");
		
		USWGPlatformUtilFunctions_IsInEditorSwitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Editor != nullptr)
			*Editor = params.Editor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditor
	 * 		Flags  -> ()
	 */
	bool USWGPlatformUtilFunctions::IsInEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditor");
		
		USWGPlatformUtilFunctions_IsInEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.GPUSupportsRayTracing
	 * 		Flags  -> ()
	 */
	bool USWGPlatformUtilFunctions::GPUSupportsRayTracing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.GPUSupportsRayTracing");
		
		USWGPlatformUtilFunctions_GPUSupportsRayTracing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetXboxSpecificPlatform
	 * 		Flags  -> ()
	 */
	ESWGXboxPlatform USWGPlatformUtilFunctions::GetXboxSpecificPlatform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetXboxSpecificPlatform");
		
		USWGPlatformUtilFunctions_GetXboxSpecificPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetVersionString
	 * 		Flags  -> ()
	 */
	class FString USWGPlatformUtilFunctions::GetVersionString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetVersionString");
		
		USWGPlatformUtilFunctions_GetVersionString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetGPU
	 * 		Flags  -> ()
	 */
	class FString USWGPlatformUtilFunctions::GetGPU()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetGPU");
		
		USWGPlatformUtilFunctions_GetGPU_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetGamepadBackKey
	 * 		Flags  -> ()
	 */
	struct FKey USWGPlatformUtilFunctions::GetGamepadBackKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetGamepadBackKey");
		
		USWGPlatformUtilFunctions_GetGamepadBackKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetGamepadAcceptKey
	 * 		Flags  -> ()
	 */
	struct FKey USWGPlatformUtilFunctions::GetGamepadAcceptKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetGamepadAcceptKey");
		
		USWGPlatformUtilFunctions_GetGamepadAcceptKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetBuildPlatform
	 * 		Flags  -> ()
	 */
	ESWGPlatform USWGPlatformUtilFunctions::GetBuildPlatform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetBuildPlatform");
		
		USWGPlatformUtilFunctions_GetBuildPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGPlatformUtil.SWGPlatformUtilFunctions.EndActivity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ActivityId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameActivityEndType                               Outcome                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USWGPlatformUtilFunctions::EndActivity(class APlayerController* PlayerController, const class FString& ActivityId, EGameActivityEndType Outcome)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGPlatformUtil.SWGPlatformUtilFunctions.EndActivity");
		
		USWGPlatformUtilFunctions_EndActivity_Params params {};
		params.PlayerController = PlayerController;
		params.ActivityId = ActivityId;
		params.Outcome = Outcome;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USWGPlatformUtilFunctions.StaticClass
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


