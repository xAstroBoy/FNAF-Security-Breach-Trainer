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
	 * 		Name   -> Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.Construct
	 * 		Flags  -> ()
	 */
	void UWI_Gregory_Flashlight_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.Construct");
		
		UWI_Gregory_Flashlight_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.ShowPowerLevel
	 * 		Flags  -> ()
	 */
	void UWI_Gregory_Flashlight_C::ShowPowerLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.ShowPowerLevel");
		
		UWI_Gregory_Flashlight_C_ShowPowerLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.FadeOutBatteryImage
	 * 		Flags  -> ()
	 */
	void UWI_Gregory_Flashlight_C::FadeOutBatteryImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.FadeOutBatteryImage");
		
		UWI_Gregory_Flashlight_C_FadeOutBatteryImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.ExecuteUbergraph_WI_Gregory_Flashlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Gregory_Flashlight_C::ExecuteUbergraph_WI_Gregory_Flashlight(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.ExecuteUbergraph_WI_Gregory_Flashlight");
		
		UWI_Gregory_Flashlight_C_ExecuteUbergraph_WI_Gregory_Flashlight_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.PowerLevelDispatch__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PowerLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Gregory_Flashlight_C::PowerLevelDispatch__DelegateSignature(int32_t PowerLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.PowerLevelDispatch__DelegateSignature");
		
		UWI_Gregory_Flashlight_C_PowerLevelDispatch__DelegateSignature_Params params {};
		params.PowerLevel = PowerLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWI_Gregory_Flashlight_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWI_Gregory_Flashlight_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_Gregory_Flashlight.WI_Gregory_Flashlight_C");
		return ptr;
	}

}


