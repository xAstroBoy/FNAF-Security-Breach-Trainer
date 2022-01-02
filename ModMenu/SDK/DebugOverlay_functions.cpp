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
//		Offset -> 0x00EE6700
//		Name   -> Function DebugOverlay.DebugOverlay_C.GetFrameRateVisible
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UDebugOverlay_C::GetFrameRateVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.GetFrameRateVisible");

	UDebugOverlay_C_GetFrameRateVisible_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugOverlay.DebugOverlay_C.GetLightScenarioVisible
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UDebugOverlay_C::GetLightScenarioVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.GetLightScenarioVisible");

	UDebugOverlay_C_GetLightScenarioVisible_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugOverlay.DebugOverlay_C.Get_LightScenario_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UDebugOverlay_C::Get_LightScenario_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.Get_LightScenario_Text_1");

	UDebugOverlay_C_Get_LightScenario_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugOverlay.DebugOverlay_C.Get_VannyMeter_Percent_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UDebugOverlay_C::Get_VannyMeter_Percent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.Get_VannyMeter_Percent_1");

	UDebugOverlay_C_Get_VannyMeter_Percent_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugOverlay.DebugOverlay_C.Get_RoomName_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UDebugOverlay_C::Get_RoomName_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.Get_RoomName_Text_1");

	UDebugOverlay_C_Get_RoomName_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugOverlay.DebugOverlay_C.IsShowingWorldCoords
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UDebugOverlay_C::IsShowingWorldCoords()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.IsShowingWorldCoords");

	UDebugOverlay_C_IsShowingWorldCoords_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugOverlay.DebugOverlay_C.IsShowingLevelStreamers
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UDebugOverlay_C::IsShowingLevelStreamers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.IsShowingLevelStreamers");

	UDebugOverlay_C_IsShowingLevelStreamers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugOverlay.DebugOverlay_C.IsShowingLevelLoading
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UDebugOverlay_C::IsShowingLevelLoading()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.IsShowingLevelLoading");

	UDebugOverlay_C_IsShowingLevelLoading_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugOverlay.DebugOverlay_C.SetupStreamers
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UDebugOverlay_C::SetupStreamers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.SetupStreamers");

	UDebugOverlay_C_SetupStreamers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugOverlay.DebugOverlay_C.Get_LoadedLevelsText_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UDebugOverlay_C::Get_LoadedLevelsText_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.Get_LoadedLevelsText_Text_1");

	UDebugOverlay_C_Get_LoadedLevelsText_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugOverlay.DebugOverlay_C.GetWorldCoordinateText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UDebugOverlay_C::GetWorldCoordinateText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.GetWorldCoordinateText");

	UDebugOverlay_C_GetWorldCoordinateText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugOverlay.DebugOverlay_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UDebugOverlay_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.Construct");

	UDebugOverlay_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugOverlay.DebugOverlay_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugOverlay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.Tick");

	UDebugOverlay_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugOverlay.DebugOverlay_C.SetWorldCoordDisplay
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugOverlay_C::SetWorldCoordDisplay(bool On)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.SetWorldCoordDisplay");

	UDebugOverlay_C_SetWorldCoordDisplay_Params params {};
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugOverlay.DebugOverlay_C.SetLevelLoadedDisplay
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugOverlay_C::SetLevelLoadedDisplay(bool On)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.SetLevelLoadedDisplay");

	UDebugOverlay_C_SetLevelLoadedDisplay_Params params {};
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugOverlay.DebugOverlay_C.SetLevelStreamersDisplay
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugOverlay_C::SetLevelStreamersDisplay(bool On)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.SetLevelStreamersDisplay");

	UDebugOverlay_C_SetLevelStreamersDisplay_Params params {};
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugOverlay.DebugOverlay_C.SetVannyMeterDisplay
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugOverlay_C::SetVannyMeterDisplay(bool On)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.SetVannyMeterDisplay");

	UDebugOverlay_C_SetVannyMeterDisplay_Params params {};
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugOverlay.DebugOverlay_C.Set Frame Rate
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                FPS                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugOverlay_C::Set_Frame_Rate(int FPS)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.Set Frame Rate");

	UDebugOverlay_C_Set_Frame_Rate_Params params {};
	params.FPS = FPS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugOverlay.DebugOverlay_C.Set Frame Rate Display
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugOverlay_C::Set_Frame_Rate_Display(bool On)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.Set Frame Rate Display");

	UDebugOverlay_C_Set_Frame_Rate_Display_Params params {};
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugOverlay.DebugOverlay_C.Set Lighting Scenario Display
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugOverlay_C::Set_Lighting_Scenario_Display(bool On)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.Set Lighting Scenario Display");

	UDebugOverlay_C_Set_Lighting_Scenario_Display_Params params {};
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugOverlay.DebugOverlay_C.ExecuteUbergraph_DebugOverlay
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugOverlay_C::ExecuteUbergraph_DebugOverlay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugOverlay.DebugOverlay_C.ExecuteUbergraph_DebugOverlay");

	UDebugOverlay_C_ExecuteUbergraph_DebugOverlay_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
