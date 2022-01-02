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
//		Name   -> Function DebugUI.DebugUI_C.DebugApplyDLSSQuality
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<FNAFVisualQualityLevel_EFNAFVisualQualityLevel> Quality                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugUI_C::DebugApplyDLSSQuality(TEnumAsByte<FNAFVisualQualityLevel_EFNAFVisualQualityLevel> Quality)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.DebugApplyDLSSQuality");

	UDebugUI_C_DebugApplyDLSSQuality_Params params {};
	params.Quality = Quality;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.Get Cloaking Enabled Checked State
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		SlateCore_ECheckBoxState                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
SlateCore_ECheckBoxState UDebugUI_C::Get_Cloaking_Enabled_Checked_State()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Get Cloaking Enabled Checked State");

	UDebugUI_C_Get_Cloaking_Enabled_Checked_State_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.TimeFloatToText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UDebugUI_C::TimeFloatToText(float InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.TimeFloatToText");

	UDebugUI_C_TimeFloatToText_Params params {};
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.TimeTextToFloat
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UDebugUI_C::TimeTextToFloat(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.TimeTextToFloat");

	UDebugUI_C_TimeTextToFloat_Params params {};
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.Get_LightingScenarioDisplay_CheckedState_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		SlateCore_ECheckBoxState                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
SlateCore_ECheckBoxState UDebugUI_C::Get_LightingScenarioDisplay_CheckedState_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Get_LightingScenarioDisplay_CheckedState_1");

	UDebugUI_C_Get_LightingScenarioDisplay_CheckedState_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.Get_FrameRateDisplay_CheckedState_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		SlateCore_ECheckBoxState                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
SlateCore_ECheckBoxState UDebugUI_C::Get_FrameRateDisplay_CheckedState_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Get_FrameRateDisplay_CheckedState_1");

	UDebugUI_C_Get_FrameRateDisplay_CheckedState_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.Get_CameraFOV_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UDebugUI_C::Get_CameraFOV_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Get_CameraFOV_Text_1");

	UDebugUI_C_Get_CameraFOV_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.Get_UnlimitedStamina_CheckedState_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		SlateCore_ECheckBoxState                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
SlateCore_ECheckBoxState UDebugUI_C::Get_UnlimitedStamina_CheckedState_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Get_UnlimitedStamina_CheckedState_1");

	UDebugUI_C_Get_UnlimitedStamina_CheckedState_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UDebugUI_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.OnFocusReceived");

	UDebugUI_C_OnFocusReceived_Params params {};
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.Get_ShowLevelStreamers_CheckedState_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		SlateCore_ECheckBoxState                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
SlateCore_ECheckBoxState UDebugUI_C::Get_ShowLevelStreamers_CheckedState_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Get_ShowLevelStreamers_CheckedState_1");

	UDebugUI_C_Get_ShowLevelStreamers_CheckedState_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.Get_ShowLoadedLevels_CheckedState_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		SlateCore_ECheckBoxState                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
SlateCore_ECheckBoxState UDebugUI_C::Get_ShowLoadedLevels_CheckedState_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Get_ShowLoadedLevels_CheckedState_1");

	UDebugUI_C_Get_ShowLoadedLevels_CheckedState_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.Get_ShowCoordinates_CheckedState_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		SlateCore_ECheckBoxState                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
SlateCore_ECheckBoxState UDebugUI_C::Get_ShowCoordinates_CheckedState_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Get_ShowCoordinates_CheckedState_1");

	UDebugUI_C_Get_ShowCoordinates_CheckedState_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.Get_RoxyEyes_CheckedState_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		SlateCore_ECheckBoxState                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
SlateCore_ECheckBoxState UDebugUI_C::Get_RoxyEyes_CheckedState_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Get_RoxyEyes_CheckedState_1");

	UDebugUI_C_Get_RoxyEyes_CheckedState_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.Get_ChicaBeak_CheckedState_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		SlateCore_ECheckBoxState                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
SlateCore_ECheckBoxState UDebugUI_C::Get_ChicaBeak_CheckedState_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Get_ChicaBeak_CheckedState_1");

	UDebugUI_C_Get_ChicaBeak_CheckedState_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.Get_MontyClaws_CheckedState_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		SlateCore_ECheckBoxState                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
SlateCore_ECheckBoxState UDebugUI_C::Get_MontyClaws_CheckedState_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Get_MontyClaws_CheckedState_1");

	UDebugUI_C_Get_MontyClaws_CheckedState_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.Get_UnlimitedFazwatchPower_CheckedState_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		SlateCore_ECheckBoxState                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
SlateCore_ECheckBoxState UDebugUI_C::Get_UnlimitedFazwatchPower_CheckedState_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Get_UnlimitedFazwatchPower_CheckedState_1");

	UDebugUI_C_Get_UnlimitedFazwatchPower_CheckedState_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.Get_SetFreddyPower_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UDebugUI_C::Get_SetFreddyPower_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Get_SetFreddyPower_Text_1");

	UDebugUI_C_Get_SetFreddyPower_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.Get_FlyingSpeed_Value_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UDebugUI_C::Get_FlyingSpeed_Value_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Get_FlyingSpeed_Value_1");

	UDebugUI_C_Get_FlyingSpeed_Value_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.Get_PowerLevelInput_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UDebugUI_C::Get_PowerLevelInput_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Get_PowerLevelInput_Text_1");

	UDebugUI_C_Get_PowerLevelInput_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.Get_SecurityLevel_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UDebugUI_C::Get_SecurityLevel_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Get_SecurityLevel_Text_1");

	UDebugUI_C_Get_SecurityLevel_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.Get_AIDebugVis_CheckedState_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		SlateCore_ECheckBoxState                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
SlateCore_ECheckBoxState UDebugUI_C::Get_AIDebugVis_CheckedState_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Get_AIDebugVis_CheckedState_1");

	UDebugUI_C_Get_AIDebugVis_CheckedState_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.Get_AISpawnEnable_CheckedState_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		SlateCore_ECheckBoxState                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
SlateCore_ECheckBoxState UDebugUI_C::Get_AISpawnEnable_CheckedState_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Get_AISpawnEnable_CheckedState_1");

	UDebugUI_C_Get_AISpawnEnable_CheckedState_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.Get_MontyShattered_CheckedState_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		SlateCore_ECheckBoxState                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
SlateCore_ECheckBoxState UDebugUI_C::Get_MontyShattered_CheckedState_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Get_MontyShattered_CheckedState_1");

	UDebugUI_C_Get_MontyShattered_CheckedState_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.Get_RoxyShattered_CheckedState_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		SlateCore_ECheckBoxState                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
SlateCore_ECheckBoxState UDebugUI_C::Get_RoxyShattered_CheckedState_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Get_RoxyShattered_CheckedState_1");

	UDebugUI_C_Get_RoxyShattered_CheckedState_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.Get_ChicaShattered_CheckedState_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		SlateCore_ECheckBoxState                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
SlateCore_ECheckBoxState UDebugUI_C::Get_ChicaShattered_CheckedState_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Get_ChicaShattered_CheckedState_1");

	UDebugUI_C_Get_ChicaShattered_CheckedState_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.GetClockTime
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UDebugUI_C::GetClockTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.GetClockTime");

	UDebugUI_C_GetClockTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.Get_ClockRunning_CheckedState_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		SlateCore_ECheckBoxState                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
SlateCore_ECheckBoxState UDebugUI_C::Get_ClockRunning_CheckedState_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Get_ClockRunning_CheckedState_1");

	UDebugUI_C_Get_ClockRunning_CheckedState_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.GetCheckedState_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		SlateCore_ECheckBoxState                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
SlateCore_ECheckBoxState UDebugUI_C::GetCheckedState_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.GetCheckedState_1");

	UDebugUI_C_GetCheckedState_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.Get_FlyingCollision_CheckedState_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		SlateCore_ECheckBoxState                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
SlateCore_ECheckBoxState UDebugUI_C::Get_FlyingCollision_CheckedState_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Get_FlyingCollision_CheckedState_1");

	UDebugUI_C_Get_FlyingCollision_CheckedState_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.Get_FlyingMode_CheckedState_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		SlateCore_ECheckBoxState                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
SlateCore_ECheckBoxState UDebugUI_C::Get_FlyingMode_CheckedState_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Get_FlyingMode_CheckedState_1");

	UDebugUI_C_Get_FlyingMode_CheckedState_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.PreConstruct");

	UDebugUI_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UDebugUI_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Construct");

	UDebugUI_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__FlyingMode_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__FlyingMode_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__FlyingMode_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__FlyingMode_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__FlyingCollisionType_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FString                                     SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugUI_C::BndEvt__FlyingCollisionType_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__FlyingCollisionType_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__FlyingCollisionType_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params params {};
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__PostProcessing_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__PostProcessing_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__PostProcessing_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__PostProcessing_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__ShowCollision_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__ShowCollision_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__ShowCollision_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__ShowCollision_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__LightmapDensity_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__LightmapDensity_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__LightmapDensity_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__LightmapDensity_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__PointLights_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__PointLights_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__PointLights_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__PointLights_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__SpotLights_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__SpotLights_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__SpotLights_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__SpotLights_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__PrecomputedVisibility_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__PrecomputedVisibility_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__PrecomputedVisibility_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__PrecomputedVisibility_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__ShowTranslucency_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__ShowTranslucency_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__ShowTranslucency_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__ShowTranslucency_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__CheckBox_110_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__CheckBox_110_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__CheckBox_110_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__CheckBox_110_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__ClockTime_K2Node_ComponentBoundEvent_12_OnEditableTextBoxCommittedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugUI_C::BndEvt__ClockTime_K2Node_ComponentBoundEvent_12_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__ClockTime_K2Node_ComponentBoundEvent_12_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__ClockTime_K2Node_ComponentBoundEvent_12_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__ChicaShattered_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__ChicaShattered_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__ChicaShattered_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__ChicaShattered_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__RoxyShattered_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__RoxyShattered_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__RoxyShattered_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__RoxyShattered_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__MontyShattered_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__MontyShattered_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__MontyShattered_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__MontyShattered_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__ShowCoordinates_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__ShowCoordinates_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__ShowCoordinates_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__ShowCoordinates_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__ClearAIButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__ClearAIButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__ClearAIButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__ClearAIButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__AISpawnEnable_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__AISpawnEnable_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__AISpawnEnable_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__AISpawnEnable_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__AIDebugVis_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__AIDebugVis_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__AIDebugVis_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__AIDebugVis_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__SecurityLevel_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugUI_C::BndEvt__SecurityLevel_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__SecurityLevel_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__SecurityLevel_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__PowerLevelInput_K2Node_ComponentBoundEvent_22_OnEditableTextBoxCommittedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugUI_C::BndEvt__PowerLevelInput_K2Node_ComponentBoundEvent_22_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__PowerLevelInput_K2Node_ComponentBoundEvent_22_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__PowerLevelInput_K2Node_ComponentBoundEvent_22_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__FlyingSpeed_K2Node_ComponentBoundEvent_21_OnSpinBoxValueCommittedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugUI_C::BndEvt__FlyingSpeed_K2Node_ComponentBoundEvent_21_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__FlyingSpeed_K2Node_ComponentBoundEvent_21_OnSpinBoxValueCommittedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__FlyingSpeed_K2Node_ComponentBoundEvent_21_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__SetFreddyPower_K2Node_ComponentBoundEvent_23_OnEditableTextBoxCommittedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugUI_C::BndEvt__SetFreddyPower_K2Node_ComponentBoundEvent_23_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__SetFreddyPower_K2Node_ComponentBoundEvent_23_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__SetFreddyPower_K2Node_ComponentBoundEvent_23_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__InventoryButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__InventoryButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__InventoryButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__InventoryButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__TrailerMode_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__TrailerMode_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__TrailerMode_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__TrailerMode_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__UnlitMode_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__UnlitMode_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__UnlitMode_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__UnlitMode_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__UnlockEverythingButton_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__UnlockEverythingButton_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__UnlockEverythingButton_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__UnlockEverythingButton_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__LockEverythingButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__LockEverythingButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__LockEverythingButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__LockEverythingButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__ShowLoadedLevels_K2Node_ComponentBoundEvent_30_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__ShowLoadedLevels_K2Node_ComponentBoundEvent_30_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__ShowLoadedLevels_K2Node_ComponentBoundEvent_30_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__ShowLoadedLevels_K2Node_ComponentBoundEvent_30_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__MissionButton_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__MissionButton_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__MissionButton_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__MissionButton_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__UnlimitedFazwatchPower_K2Node_ComponentBoundEvent_32_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__UnlimitedFazwatchPower_K2Node_ComponentBoundEvent_32_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__UnlimitedFazwatchPower_K2Node_ComponentBoundEvent_32_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__UnlimitedFazwatchPower_K2Node_ComponentBoundEvent_32_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__Freddy_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__Freddy_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__Freddy_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__Freddy_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__ClockRunning_1_K2Node_ComponentBoundEvent_34_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__ClockRunning_1_K2Node_ComponentBoundEvent_34_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__ClockRunning_1_K2Node_ComponentBoundEvent_34_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__ClockRunning_1_K2Node_ComponentBoundEvent_34_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__ShowLevelStreamers_K2Node_ComponentBoundEvent_38_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__ShowLevelStreamers_K2Node_ComponentBoundEvent_38_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__ShowLevelStreamers_K2Node_ComponentBoundEvent_38_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__ShowLevelStreamers_K2Node_ComponentBoundEvent_38_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.FocusButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UDebugUI_C::FocusButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.FocusButton");

	UDebugUI_C_FocusButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__UnlimitedStamina_K2Node_ComponentBoundEvent_37_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__UnlimitedStamina_K2Node_ComponentBoundEvent_37_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__UnlimitedStamina_K2Node_ComponentBoundEvent_37_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__UnlimitedStamina_K2Node_ComponentBoundEvent_37_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__CameraFOV_K2Node_ComponentBoundEvent_39_OnEditableTextBoxChangedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UDebugUI_C::BndEvt__CameraFOV_K2Node_ComponentBoundEvent_39_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__CameraFOV_K2Node_ComponentBoundEvent_39_OnEditableTextBoxChangedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__CameraFOV_K2Node_ComponentBoundEvent_39_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__TeleportButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__TeleportButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__TeleportButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__TeleportButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__SurvivalLocations_K2Node_ComponentBoundEvent_41_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__SurvivalLocations_K2Node_ComponentBoundEvent_41_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__SurvivalLocations_K2Node_ComponentBoundEvent_41_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__SurvivalLocations_K2Node_ComponentBoundEvent_41_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__VannyMeterVis_K2Node_ComponentBoundEvent_42_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__VannyMeterVis_K2Node_ComponentBoundEvent_42_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__VannyMeterVis_K2Node_ComponentBoundEvent_42_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__VannyMeterVis_K2Node_ComponentBoundEvent_42_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__VannyDecButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__VannyDecButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__VannyDecButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__VannyDecButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__VannyIncButton_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__VannyIncButton_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__VannyIncButton_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__VannyIncButton_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__FrameRateDisplay_K2Node_ComponentBoundEvent_45_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__FrameRateDisplay_K2Node_ComponentBoundEvent_45_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__FrameRateDisplay_K2Node_ComponentBoundEvent_45_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__FrameRateDisplay_K2Node_ComponentBoundEvent_45_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__LightingScenarioDisplay_K2Node_ComponentBoundEvent_46_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__LightingScenarioDisplay_K2Node_ComponentBoundEvent_46_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__LightingScenarioDisplay_K2Node_ComponentBoundEvent_46_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__LightingScenarioDisplay_K2Node_ComponentBoundEvent_46_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__TextBox_FazerBlastTime_K2Node_ComponentBoundEvent_49_OnEditableTextBoxCommittedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugUI_C::BndEvt__TextBox_FazerBlastTime_K2Node_ComponentBoundEvent_49_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__TextBox_FazerBlastTime_K2Node_ComponentBoundEvent_49_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__TextBox_FazerBlastTime_K2Node_ComponentBoundEvent_49_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UDebugUI_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.OnInitialized");

	UDebugUI_C_OnInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__InventorySearchText_K2Node_ComponentBoundEvent_11_OnEditableTextBoxChangedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UDebugUI_C::BndEvt__InventorySearchText_K2Node_ComponentBoundEvent_11_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__InventorySearchText_K2Node_ComponentBoundEvent_11_OnEditableTextBoxChangedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__InventorySearchText_K2Node_ComponentBoundEvent_11_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__EnableAllInput_K2Node_ComponentBoundEvent_35_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__EnableAllInput_K2Node_ComponentBoundEvent_35_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__EnableAllInput_K2Node_ComponentBoundEvent_35_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__EnableAllInput_K2Node_ComponentBoundEvent_35_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__CloakingEnabled_K2Node_ComponentBoundEvent_36_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__CloakingEnabled_K2Node_ComponentBoundEvent_36_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__CloakingEnabled_K2Node_ComponentBoundEvent_36_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__CloakingEnabled_K2Node_ComponentBoundEvent_36_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__HardwareBenchmark_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__HardwareBenchmark_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__HardwareBenchmark_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__HardwareBenchmark_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__MoreDebug_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__MoreDebug_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__MoreDebug_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__MoreDebug_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__VisualQualityLowButton_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__VisualQualityLowButton_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__VisualQualityLowButton_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__VisualQualityLowButton_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__VisualQualityMediumButton_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__VisualQualityMediumButton_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__VisualQualityMediumButton_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__VisualQualityMediumButton_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__VisualQualityHighButton_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__VisualQualityHighButton_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__VisualQualityHighButton_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__VisualQualityHighButton_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__VisualQualityUltraButton_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__VisualQualityUltraButton_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__VisualQualityUltraButton_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__VisualQualityUltraButton_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__RayTraceQualityOffButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__RayTraceQualityOffButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__RayTraceQualityOffButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__RayTraceQualityOffButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__RayTraceQualityLowButton_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__RayTraceQualityLowButton_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__RayTraceQualityLowButton_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__RayTraceQualityLowButton_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__RayTraceQualityMediumButton_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__RayTraceQualityMediumButton_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__RayTraceQualityMediumButton_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__RayTraceQualityMediumButton_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__RayTraceQualityHighButton_K2Node_ComponentBoundEvent_58_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__RayTraceQualityHighButton_K2Node_ComponentBoundEvent_58_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__RayTraceQualityHighButton_K2Node_ComponentBoundEvent_58_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__RayTraceQualityHighButton_K2Node_ComponentBoundEvent_58_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__PS5Performance_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__PS5Performance_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__PS5Performance_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__PS5Performance_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__PS5VisualQualityButton_K2Node_ComponentBoundEvent_59_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__PS5VisualQualityButton_K2Node_ComponentBoundEvent_59_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__PS5VisualQualityButton_K2Node_ComponentBoundEvent_59_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__PS5VisualQualityButton_K2Node_ComponentBoundEvent_59_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__PS5Performance_1_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__PS5Performance_1_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__PS5Performance_1_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__PS5Performance_1_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.UpdateQualityLevelText
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UDebugUI_C::UpdateQualityLevelText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.UpdateQualityLevelText");

	UDebugUI_C_UpdateQualityLevelText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__VisualQualityLowButton_1_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__VisualQualityLowButton_1_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__VisualQualityLowButton_1_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__VisualQualityLowButton_1_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__InstructionCardButton_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__InstructionCardButton_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__InstructionCardButton_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__InstructionCardButton_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__CloseDebugButton_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__CloseDebugButton_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__CloseDebugButton_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__CloseDebugButton_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__ClearTapesData_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__ClearTapesData_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__ClearTapesData_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__ClearTapesData_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__DLSSQualityOffButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__DLSSQualityOffButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DLSSQualityOffButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__DLSSQualityOffButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__DLSSQualityLowButton_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__DLSSQualityLowButton_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DLSSQualityLowButton_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__DLSSQualityLowButton_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__DLSSQualityMediumButton_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__DLSSQualityMediumButton_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DLSSQualityMediumButton_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__DLSSQualityMediumButton_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__DLSSQualityHighButton_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__DLSSQualityHighButton_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DLSSQualityHighButton_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__DLSSQualityHighButton_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__DLSSQualityUltraButton_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugUI_C::BndEvt__DLSSQualityUltraButton_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DLSSQualityUltraButton_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature");

	UDebugUI_C_BndEvt__DLSSQualityUltraButton_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.BndEvt__HasUsedHidingSpot_K2Node_ComponentBoundEvent_70_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugUI_C::BndEvt__HasUsedHidingSpot_K2Node_ComponentBoundEvent_70_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__HasUsedHidingSpot_K2Node_ComponentBoundEvent_70_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugUI_C_BndEvt__HasUsedHidingSpot_K2Node_ComponentBoundEvent_70_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugUI.DebugUI_C.ExecuteUbergraph_DebugUI
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugUI_C::ExecuteUbergraph_DebugUI(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.ExecuteUbergraph_DebugUI");

	UDebugUI_C_ExecuteUbergraph_DebugUI_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
