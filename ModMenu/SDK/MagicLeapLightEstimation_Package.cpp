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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMagicLeapLightingTrackingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapLightingTrackingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapLightEstimation.MagicLeapLightingTrackingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A89660
	 * 		Name   -> Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.IsTrackerValid
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UMagicLeapLightEstimationFunctionLibrary::STATIC_IsTrackerValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.IsTrackerValid");
		
		UMagicLeapLightEstimationFunctionLibrary_IsTrackerValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A895D0
	 * 		Name   -> Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetColorTemperatureState
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FMagicLeapLightEstimationColorTemperatureState ColorTemperatureState                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapLightEstimationFunctionLibrary::STATIC_GetColorTemperatureState(struct FMagicLeapLightEstimationColorTemperatureState* ColorTemperatureState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetColorTemperatureState");
		
		UMagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ColorTemperatureState != nullptr)
			*ColorTemperatureState = params.ColorTemperatureState;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A89520
	 * 		Name   -> Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetAmbientGlobalState
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FMagicLeapLightEstimationAmbientGlobalState GlobalAmbientState                                         (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapLightEstimationFunctionLibrary::STATIC_GetAmbientGlobalState(struct FMagicLeapLightEstimationAmbientGlobalState* GlobalAmbientState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetAmbientGlobalState");
		
		UMagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GlobalAmbientState != nullptr)
			*GlobalAmbientState = params.GlobalAmbientState;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A89500
	 * 		Name   -> Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.DestroyTracker
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UMagicLeapLightEstimationFunctionLibrary::STATIC_DestroyTracker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.DestroyTracker");
		
		UMagicLeapLightEstimationFunctionLibrary_DestroyTracker_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A894D0
	 * 		Name   -> Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.CreateTracker
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UMagicLeapLightEstimationFunctionLibrary::STATIC_CreateTracker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.CreateTracker");
		
		UMagicLeapLightEstimationFunctionLibrary_CreateTracker_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMagicLeapLightEstimationFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapLightEstimationFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary");
		return ptr;
	}

}


