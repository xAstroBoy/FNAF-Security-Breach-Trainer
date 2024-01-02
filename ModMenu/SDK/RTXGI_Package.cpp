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
	 * 		Name   -> PredefinedFunction ADDGIVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADDGIVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RTXGI.DDGIVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RTXGI.DDGIVolumeComponent.ToggleVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVolumeEnabled                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDDGIVolumeComponent::ToggleVolume(bool IsVolumeEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTXGI.DDGIVolumeComponent.ToggleVolume");
		
		UDDGIVolumeComponent_ToggleVolume_Params params {};
		params.IsVolumeEnabled = IsVolumeEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RTXGI.DDGIVolumeComponent.SetProbesVisualization
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsProbesVisualized                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDDGIVolumeComponent::SetProbesVisualization(bool IsProbesVisualized)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTXGI.DDGIVolumeComponent.SetProbesVisualization");
		
		UDDGIVolumeComponent_SetProbesVisualization_Params params {};
		params.IsProbesVisualized = IsProbesVisualized;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RTXGI.DDGIVolumeComponent.SetLightMultiplier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewLightMultiplier                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDDGIVolumeComponent::SetLightMultiplier(float NewLightMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTXGI.DDGIVolumeComponent.SetLightMultiplier");
		
		UDDGIVolumeComponent_SetLightMultiplier_Params params {};
		params.NewLightMultiplier = NewLightMultiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RTXGI.DDGIVolumeComponent.SetIrradianceScalar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewIrradianceScalar                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDDGIVolumeComponent::SetIrradianceScalar(float NewIrradianceScalar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTXGI.DDGIVolumeComponent.SetIrradianceScalar");
		
		UDDGIVolumeComponent_SetIrradianceScalar_Params params {};
		params.NewIrradianceScalar = NewIrradianceScalar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RTXGI.DDGIVolumeComponent.SetEmissiveMultiplier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewEmissiveMultiplier                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDDGIVolumeComponent::SetEmissiveMultiplier(float NewEmissiveMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTXGI.DDGIVolumeComponent.SetEmissiveMultiplier");
		
		UDDGIVolumeComponent_SetEmissiveMultiplier_Params params {};
		params.NewEmissiveMultiplier = NewEmissiveMultiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RTXGI.DDGIVolumeComponent.GetLightMultiplier
	 * 		Flags  -> ()
	 */
	float UDDGIVolumeComponent::GetLightMultiplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTXGI.DDGIVolumeComponent.GetLightMultiplier");
		
		UDDGIVolumeComponent_GetLightMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RTXGI.DDGIVolumeComponent.GetIrradianceScalar
	 * 		Flags  -> ()
	 */
	float UDDGIVolumeComponent::GetIrradianceScalar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTXGI.DDGIVolumeComponent.GetIrradianceScalar");
		
		UDDGIVolumeComponent_GetIrradianceScalar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RTXGI.DDGIVolumeComponent.GetEmissiveMultiplier
	 * 		Flags  -> ()
	 */
	float UDDGIVolumeComponent::GetEmissiveMultiplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTXGI.DDGIVolumeComponent.GetEmissiveMultiplier");
		
		UDDGIVolumeComponent_GetEmissiveMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RTXGI.DDGIVolumeComponent.DDGIClearVolumes
	 * 		Flags  -> ()
	 */
	void UDDGIVolumeComponent::DDGIClearVolumes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTXGI.DDGIVolumeComponent.DDGIClearVolumes");
		
		UDDGIVolumeComponent_DDGIClearVolumes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RTXGI.DDGIVolumeComponent.ClearProbeData
	 * 		Flags  -> ()
	 */
	void UDDGIVolumeComponent::ClearProbeData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTXGI.DDGIVolumeComponent.ClearProbeData");
		
		UDDGIVolumeComponent_ClearProbeData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDDGIVolumeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDDGIVolumeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RTXGI.DDGIVolumeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URTXGIPluginSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URTXGIPluginSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RTXGI.RTXGIPluginSettings");
		return ptr;
	}

}


