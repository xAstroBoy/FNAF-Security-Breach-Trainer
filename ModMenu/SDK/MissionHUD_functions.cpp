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
//		Name   -> Function MissionHUD.MissionHUD_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UMissionHUD_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MissionHUD.MissionHUD_C.Construct");

	UMissionHUD_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MissionHUD.MissionHUD_C.On New Mission
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       MissionName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FFNAFMissionState                           MissionState                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FFNAFMissionInfo                            MissionInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UMissionHUD_C::On_New_Mission(const struct FName& MissionName, const struct FFNAFMissionState& MissionState, const struct FFNAFMissionInfo& MissionInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MissionHUD.MissionHUD_C.On New Mission");

	UMissionHUD_C_On_New_Mission_Params params {};
	params.MissionName = MissionName;
	params.MissionState = MissionState;
	params.MissionInfo = MissionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MissionHUD.MissionHUD_C.On Active Mission Updated
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       MissionName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FFNAFMissionState                           MissionState                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FFNAFMissionInfo                            MissionInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UMissionHUD_C::On_Active_Mission_Updated(const struct FName& MissionName, const struct FFNAFMissionState& MissionState, const struct FFNAFMissionInfo& MissionInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MissionHUD.MissionHUD_C.On Active Mission Updated");

	UMissionHUD_C_On_Active_Mission_Updated_Params params {};
	params.MissionName = MissionName;
	params.MissionState = MissionState;
	params.MissionInfo = MissionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MissionHUD.MissionHUD_C.Start Display
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UMissionHUD_C::Start_Display()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MissionHUD.MissionHUD_C.Start Display");

	UMissionHUD_C_Start_Display_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MissionHUD.MissionHUD_C.On Fadeout Finished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UMissionHUD_C::On_Fadeout_Finished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MissionHUD.MissionHUD_C.On Fadeout Finished");

	UMissionHUD_C_On_Fadeout_Finished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MissionHUD.MissionHUD_C.On Mission Completed
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       MissionName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FFNAFMissionState                           MissionState                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FFNAFMissionInfo                            MissionInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UMissionHUD_C::On_Mission_Completed(const struct FName& MissionName, const struct FFNAFMissionState& MissionState, const struct FFNAFMissionInfo& MissionInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MissionHUD.MissionHUD_C.On Mission Completed");

	UMissionHUD_C_On_Mission_Completed_Params params {};
	params.MissionName = MissionName;
	params.MissionState = MissionState;
	params.MissionInfo = MissionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MissionHUD.MissionHUD_C.ShortTermMissionDisplay
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       MissionName                                                (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       MissionDescription                                         (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               UseVariablesBelow                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FText                                       LeftText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FName                                       KeyName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       RightText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UMissionHUD_C::ShortTermMissionDisplay(const struct FText& MissionName, const struct FText& MissionDescription, bool UseVariablesBelow, const struct FText& LeftText, const struct FName& KeyName, const struct FText& RightText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MissionHUD.MissionHUD_C.ShortTermMissionDisplay");

	UMissionHUD_C_ShortTermMissionDisplay_Params params {};
	params.MissionName = MissionName;
	params.MissionDescription = MissionDescription;
	params.UseVariablesBelow = UseVariablesBelow;
	params.LeftText = LeftText;
	params.KeyName = KeyName;
	params.RightText = RightText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MissionHUD.MissionHUD_C.FadeOutMissionPrompt
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UMissionHUD_C::FadeOutMissionPrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MissionHUD.MissionHUD_C.FadeOutMissionPrompt");

	UMissionHUD_C_FadeOutMissionPrompt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MissionHUD.MissionHUD_C.ExecuteUbergraph_MissionHUD
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMissionHUD_C::ExecuteUbergraph_MissionHUD(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MissionHUD.MissionHUD_C.ExecuteUbergraph_MissionHUD");

	UMissionHUD_C_ExecuteUbergraph_MissionHUD_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MissionHUD.MissionHUD_C.MoveFromCenterToTopLeft__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UMissionHUD_C::MoveFromCenterToTopLeft__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MissionHUD.MissionHUD_C.MoveFromCenterToTopLeft__DelegateSignature");

	UMissionHUD_C_MoveFromCenterToTopLeft__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
