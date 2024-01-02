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
	 * 		Name   -> Function CameraSettingsComponent.CameraSettingsComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UCameraSettingsComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraSettingsComponent.CameraSettingsComponent_C.ReceiveBeginPlay");
		
		UCameraSettingsComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraSettingsComponent.CameraSettingsComponent_C.OnSaveGameSettingsSaved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USaveGameSettings_C*                         Settings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCameraSettingsComponent_C::OnSaveGameSettingsSaved(class USaveGameSettings_C* Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraSettingsComponent.CameraSettingsComponent_C.OnSaveGameSettingsSaved");
		
		UCameraSettingsComponent_C_OnSaveGameSettingsSaved_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraSettingsComponent.CameraSettingsComponent_C.ExecuteUbergraph_CameraSettingsComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCameraSettingsComponent_C::ExecuteUbergraph_CameraSettingsComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraSettingsComponent.CameraSettingsComponent_C.ExecuteUbergraph_CameraSettingsComponent");
		
		UCameraSettingsComponent_C_ExecuteUbergraph_CameraSettingsComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraSettingsComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraSettingsComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CameraSettingsComponent.CameraSettingsComponent_C");
		return ptr;
	}

}


