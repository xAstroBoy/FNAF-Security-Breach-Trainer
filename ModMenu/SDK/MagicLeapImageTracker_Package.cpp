/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00A81B40
	 * 		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTexture2D*                                  ImageTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapImageTrackerComponent::SetTargetAsync(class UTexture2D* ImageTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync");
		
		UMagicLeapImageTrackerComponent_SetTargetAsync_Params params {};
		params.ImageTarget = ImageTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A81AA0
	 * 		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UMagicLeapImageTrackerComponent::RemoveTargetAsync()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync");
		
		UMagicLeapImageTrackerComponent_RemoveTargetAsync_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMagicLeapImageTrackerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapImageTrackerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapImageTracker.MagicLeapImageTrackerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A81AD0
	 * 		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            MaxSimultaneousTargets                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMagicLeapImageTrackerFunctionLibrary::STATIC_SetMaxSimultaneousTargets(int32_t MaxSimultaneousTargets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets");
		
		UMagicLeapImageTrackerFunctionLibrary_SetMaxSimultaneousTargets_Params params {};
		params.MaxSimultaneousTargets = MaxSimultaneousTargets;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A81A70
	 * 		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UMagicLeapImageTrackerFunctionLibrary::STATIC_IsImageTrackingEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled");
		
		UMagicLeapImageTrackerFunctionLibrary_IsImageTrackingEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A81A40
	 * 		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int32_t UMagicLeapImageTrackerFunctionLibrary::STATIC_GetMaxSimultaneousTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets");
		
		UMagicLeapImageTrackerFunctionLibrary_GetMaxSimultaneousTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A819C0
	 * 		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMagicLeapImageTrackerFunctionLibrary::STATIC_EnableImageTracking(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking");
		
		UMagicLeapImageTrackerFunctionLibrary_EnableImageTracking_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMagicLeapImageTrackerFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapImageTrackerFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary");
		return ptr;
	}

}


