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
	 * 		Name   -> Function DebugOverlay.DebugOverlay_C.GetFrameRateVisible
	 * 		Flags  -> ()
	 */
	bool UDebugOverlay_C::GetFrameRateVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.GetFrameRateVisible");
		
		UDebugOverlay_C_GetFrameRateVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugOverlay.DebugOverlay_C.GetLightScenarioVisible
	 * 		Flags  -> ()
	 */
	bool UDebugOverlay_C::GetLightScenarioVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.GetLightScenarioVisible");
		
		UDebugOverlay_C_GetLightScenarioVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugOverlay.DebugOverlay_C.Get_LightScenario_Text_1
	 * 		Flags  -> ()
	 */
	class FText UDebugOverlay_C::Get_LightScenario_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.Get_LightScenario_Text_1");
		
		UDebugOverlay_C_Get_LightScenario_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugOverlay.DebugOverlay_C.Get_VannyMeter_Percent_1
	 * 		Flags  -> ()
	 */
	float UDebugOverlay_C::Get_VannyMeter_Percent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.Get_VannyMeter_Percent_1");
		
		UDebugOverlay_C_Get_VannyMeter_Percent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugOverlay.DebugOverlay_C.Get_RoomName_Text_1
	 * 		Flags  -> ()
	 */
	class FText UDebugOverlay_C::Get_RoomName_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.Get_RoomName_Text_1");
		
		UDebugOverlay_C_Get_RoomName_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugOverlay.DebugOverlay_C.IsShowingWorldCoords
	 * 		Flags  -> ()
	 */
	bool UDebugOverlay_C::IsShowingWorldCoords()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.IsShowingWorldCoords");
		
		UDebugOverlay_C_IsShowingWorldCoords_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugOverlay.DebugOverlay_C.IsShowingLevelStreamers
	 * 		Flags  -> ()
	 */
	bool UDebugOverlay_C::IsShowingLevelStreamers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.IsShowingLevelStreamers");
		
		UDebugOverlay_C_IsShowingLevelStreamers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugOverlay.DebugOverlay_C.IsShowingLevelLoading
	 * 		Flags  -> ()
	 */
	bool UDebugOverlay_C::IsShowingLevelLoading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.IsShowingLevelLoading");
		
		UDebugOverlay_C_IsShowingLevelLoading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugOverlay.DebugOverlay_C.SetupStreamers
	 * 		Flags  -> ()
	 */
	void UDebugOverlay_C::SetupStreamers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.SetupStreamers");
		
		UDebugOverlay_C_SetupStreamers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugOverlay.DebugOverlay_C.Get_LoadedLevelsText_Text_1
	 * 		Flags  -> ()
	 */
	class FText UDebugOverlay_C::Get_LoadedLevelsText_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.Get_LoadedLevelsText_Text_1");
		
		UDebugOverlay_C_Get_LoadedLevelsText_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugOverlay.DebugOverlay_C.GetWorldCoordinateText
	 * 		Flags  -> ()
	 */
	class FText UDebugOverlay_C::GetWorldCoordinateText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.GetWorldCoordinateText");
		
		UDebugOverlay_C_GetWorldCoordinateText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugOverlay.DebugOverlay_C.Construct
	 * 		Flags  -> ()
	 */
	void UDebugOverlay_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.Construct");
		
		UDebugOverlay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugOverlay.DebugOverlay_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugOverlay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.Tick");
		
		UDebugOverlay_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugOverlay.DebugOverlay_C.SetWorldCoordDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugOverlay_C::SetWorldCoordDisplay(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.SetWorldCoordDisplay");
		
		UDebugOverlay_C_SetWorldCoordDisplay_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugOverlay.DebugOverlay_C.SetLevelLoadedDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugOverlay_C::SetLevelLoadedDisplay(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.SetLevelLoadedDisplay");
		
		UDebugOverlay_C_SetLevelLoadedDisplay_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugOverlay.DebugOverlay_C.SetLevelStreamersDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugOverlay_C::SetLevelStreamersDisplay(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.SetLevelStreamersDisplay");
		
		UDebugOverlay_C_SetLevelStreamersDisplay_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugOverlay.DebugOverlay_C.SetVannyMeterDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugOverlay_C::SetVannyMeterDisplay(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.SetVannyMeterDisplay");
		
		UDebugOverlay_C_SetVannyMeterDisplay_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugOverlay.DebugOverlay_C.Set Frame Rate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FPS                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugOverlay_C::SetFrameRate(int32_t FPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.Set Frame Rate");
		
		UDebugOverlay_C_SetFrameRate_Params params {};
		params.FPS = FPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugOverlay.DebugOverlay_C.Set Frame Rate Display
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugOverlay_C::SetFrameRateDisplay(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.Set Frame Rate Display");
		
		UDebugOverlay_C_SetFrameRateDisplay_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugOverlay.DebugOverlay_C.Set Lighting Scenario Display
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugOverlay_C::SetLightingScenarioDisplay(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.Set Lighting Scenario Display");
		
		UDebugOverlay_C_SetLightingScenarioDisplay_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugOverlay.DebugOverlay_C.ExecuteUbergraph_DebugOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugOverlay_C::ExecuteUbergraph_DebugOverlay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.ExecuteUbergraph_DebugOverlay");
		
		UDebugOverlay_C_ExecuteUbergraph_DebugOverlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugOverlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DebugOverlay.DebugOverlay_C");
		return ptr;
	}

}


