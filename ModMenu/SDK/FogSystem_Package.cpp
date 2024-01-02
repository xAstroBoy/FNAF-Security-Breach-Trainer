/**
 * Name: FNAFSB
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FogSystem.FogSystem_C.Add Overlapped Volume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFogVolume_C*                                Item                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFogSystem_C::AddOverlappedVolume(class AFogVolume_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FogSystem.FogSystem_C.Add Overlapped Volume");
		
		AFogSystem_C_AddOverlappedVolume_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FogSystem.FogSystem_C.Remove Overlapped Volume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFogVolume_C*                                Item                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFogSystem_C::RemoveOverlappedVolume(class AFogVolume_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FogSystem.FogSystem_C.Remove Overlapped Volume");
		
		AFogSystem_C_RemoveOverlappedVolume_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FogSystem.FogSystem_C.InterpolateToNewSettings
	 * 		Flags  -> ()
	 */
	void AFogSystem_C::InterpolateToNewSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FogSystem.FogSystem_C.InterpolateToNewSettings");
		
		AFogSystem_C_InterpolateToNewSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FogSystem.FogSystem_C.Set Fog Scenario
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        FogScenario                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFogSystem_C::SetFogScenario(const class FName& FogScenario)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FogSystem.FogSystem_C.Set Fog Scenario");
		
		AFogSystem_C_SetFogScenario_Params params {};
		params.FogScenario = FogScenario;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FogSystem.FogSystem_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFogSystem_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FogSystem.FogSystem_C.ReceiveTick");
		
		AFogSystem_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FogSystem.FogSystem_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AFogSystem_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FogSystem.FogSystem_C.ReceiveBeginPlay");
		
		AFogSystem_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FogSystem.FogSystem_C.OnSettingsApplied
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFVisualQualityLevel                            VisualQuality                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESWGPlatform                                       Platform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESWGXboxPlatform                                   SpecificXboxPlatform                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsRayTraceEnabled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsDLSSEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsVolumetricFogEnabled                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFogSystem_C::OnSettingsApplied(EFNAFVisualQualityLevel VisualQuality, ESWGPlatform Platform, ESWGXboxPlatform SpecificXboxPlatform, bool IsRayTraceEnabled, bool IsDLSSEnabled, bool IsVolumetricFogEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FogSystem.FogSystem_C.OnSettingsApplied");
		
		AFogSystem_C_OnSettingsApplied_Params params {};
		params.VisualQuality = VisualQuality;
		params.Platform = Platform;
		params.SpecificXboxPlatform = SpecificXboxPlatform;
		params.IsRayTraceEnabled = IsRayTraceEnabled;
		params.IsDLSSEnabled = IsDLSSEnabled;
		params.IsVolumetricFogEnabled = IsVolumetricFogEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FogSystem.FogSystem_C.ExecuteUbergraph_FogSystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFogSystem_C::ExecuteUbergraph_FogSystem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FogSystem.FogSystem_C.ExecuteUbergraph_FogSystem");
		
		AFogSystem_C_ExecuteUbergraph_FogSystem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFogSystem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFogSystem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FogSystem.FogSystem_C");
		return ptr;
	}

}


