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
//		Name   -> Function PlayerHUD.PlayerHUD_C.GetInteractViewLocation
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     WorldLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHUD_C::GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.GetInteractViewLocation");

	UPlayerHUD_C_GetInteractViewLocation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
	if (WorldLocation != nullptr)
		*WorldLocation = params.WorldLocation;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.GetInteractViewAngles
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		fnaf9_ECameraAngleFlags                            AnglesToCheck                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHUD_C::GetInteractViewAngles(fnaf9_ECameraAngleFlags* AnglesToCheck)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.GetInteractViewAngles");

	UPlayerHUD_C_GetInteractViewAngles_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnglesToCheck != nullptr)
		*AnglesToCheck = params.AnglesToCheck;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.GetHUDInstruction
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Instruction                                                (Parm, OutParm)
void UPlayerHUD_C::GetHUDInstruction(struct FText* Instruction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.GetHUDInstruction");

	UPlayerHUD_C_GetHUDInstruction_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Instruction != nullptr)
		*Instruction = params.Instruction;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.GetInteractibleType
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<InteractibleType_EInteractibleType>    Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<InteractiblePressType_EInteractiblePressType> PressType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHUD_C::GetInteractibleType(TEnumAsByte<InteractibleType_EInteractibleType>* Type, TEnumAsByte<InteractiblePressType_EInteractiblePressType>* PressType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.GetInteractibleType");

	UPlayerHUD_C_GetInteractibleType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
	if (PressType != nullptr)
		*PressType = params.PressType;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.CanPlayerInteract
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               CanInteract                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHUD_C::CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.CanPlayerInteract");

	UPlayerHUD_C_CanPlayerInteract_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanInteract != nullptr)
		*CanInteract = params.CanInteract;
	if (CantReason != nullptr)
		*CantReason = params.CantReason;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.UpdateUIOnTick
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerHUD_C::UpdateUIOnTick(bool* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.UpdateUIOnTick");

	UPlayerHUD_C_UpdateUIOnTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.GetInstructionOverride
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Instruction                                                (Parm, OutParm)
void UPlayerHUD_C::GetInstructionOverride(struct FText* Instruction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.GetInstructionOverride");

	UPlayerHUD_C_GetInstructionOverride_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Instruction != nullptr)
		*Instruction = params.Instruction;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.InteractIgnoresTrace
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IgnoreTrace                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerHUD_C::InteractIgnoresTrace(bool* IgnoreTrace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.InteractIgnoresTrace");

	UPlayerHUD_C_InteractIgnoresTrace_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IgnoreTrace != nullptr)
		*IgnoreTrace = params.IgnoreTrace;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.CheckPlayerPawnRestrictions
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<fnaf9_EPlayerPawnType>                      TargetArray                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		struct FText                                       Result                                                     (Parm, OutParm)
void UPlayerHUD_C::CheckPlayerPawnRestrictions(TArray<fnaf9_EPlayerPawnType> TargetArray, struct FText* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.CheckPlayerPawnRestrictions");

	UPlayerHUD_C_CheckPlayerPawnRestrictions_Params params {};
	params.TargetArray = TargetArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.ResetProgressWheel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::ResetProgressWheel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.ResetProgressWheel");

	UPlayerHUD_C_ResetProgressWheel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.Get Stamina Percent
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UPlayerHUD_C::Get_Stamina_Percent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Get Stamina Percent");

	UPlayerHUD_C_Get_Stamina_Percent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.GetItemOrMessageName
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       ItemDisplayName                                            (Parm, OutParm)
//		class UTexture2D*                                  Item_Display_Icon                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHUD_C::GetItemOrMessageName(const struct FName& InputPin, struct FText* ItemDisplayName, class UTexture2D** Item_Display_Icon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.GetItemOrMessageName");

	UPlayerHUD_C_GetItemOrMessageName_Params params {};
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemDisplayName != nullptr)
		*ItemDisplayName = params.ItemDisplayName;
	if (Item_Display_Icon != nullptr)
		*Item_Display_Icon = params.Item_Display_Icon;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.Finished_150D8164404ADE44D3D17D8F55A7B8A7
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::Finished_150D8164404ADE44D3D17D8F55A7B8A7()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Finished_150D8164404ADE44D3D17D8F55A7B8A7");

	UPlayerHUD_C_Finished_150D8164404ADE44D3D17D8F55A7B8A7_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.Finished_DB237C8C45C17E7AA2665584748A4975
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::Finished_DB237C8C45C17E7AA2665584748A4975()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Finished_DB237C8C45C17E7AA2665584748A4975");

	UPlayerHUD_C_Finished_DB237C8C45C17E7AA2665584748A4975_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.OnFailure_BF721F5A4230E920D7AB0496A5DE48C6
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::OnFailure_BF721F5A4230E920D7AB0496A5DE48C6()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnFailure_BF721F5A4230E920D7AB0496A5DE48C6");

	UPlayerHUD_C_OnFailure_BF721F5A4230E920D7AB0496A5DE48C6_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.OnSuccess_BF721F5A4230E920D7AB0496A5DE48C6
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::OnSuccess_BF721F5A4230E920D7AB0496A5DE48C6()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnSuccess_BF721F5A4230E920D7AB0496A5DE48C6");

	UPlayerHUD_C_OnSuccess_BF721F5A4230E920D7AB0496A5DE48C6_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.OnFailure_AB03661843CC503A6CB2D5BF99086A7C
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHUD_C::OnFailure_AB03661843CC503A6CB2D5BF99086A7C(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnFailure_AB03661843CC503A6CB2D5BF99086A7C");

	UPlayerHUD_C_OnFailure_AB03661843CC503A6CB2D5BF99086A7C_Params params {};
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.OnSuccess_AB03661843CC503A6CB2D5BF99086A7C
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHUD_C::OnSuccess_AB03661843CC503A6CB2D5BF99086A7C(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnSuccess_AB03661843CC503A6CB2D5BF99086A7C");

	UPlayerHUD_C_OnSuccess_AB03661843CC503A6CB2D5BF99086A7C_Params params {};
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.OnFailure_7DBB82C44AE86FE3123C8CA2C34C6B7D
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::OnFailure_7DBB82C44AE86FE3123C8CA2C34C6B7D()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnFailure_7DBB82C44AE86FE3123C8CA2C34C6B7D");

	UPlayerHUD_C_OnFailure_7DBB82C44AE86FE3123C8CA2C34C6B7D_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.OnSuccess_7DBB82C44AE86FE3123C8CA2C34C6B7D
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::OnSuccess_7DBB82C44AE86FE3123C8CA2C34C6B7D()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnSuccess_7DBB82C44AE86FE3123C8CA2C34C6B7D");

	UPlayerHUD_C_OnSuccess_7DBB82C44AE86FE3123C8CA2C34C6B7D_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.OnFailure_B754F15B4449FCC342E9AAB708667094
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHUD_C::OnFailure_B754F15B4449FCC342E9AAB708667094(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnFailure_B754F15B4449FCC342E9AAB708667094");

	UPlayerHUD_C_OnFailure_B754F15B4449FCC342E9AAB708667094_Params params {};
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.OnSuccess_B754F15B4449FCC342E9AAB708667094
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHUD_C::OnSuccess_B754F15B4449FCC342E9AAB708667094(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnSuccess_B754F15B4449FCC342E9AAB708667094");

	UPlayerHUD_C_OnSuccess_B754F15B4449FCC342E9AAB708667094_Params params {};
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.Finished_185BD7B94C5005FD6F01E39AB745E86F
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::Finished_185BD7B94C5005FD6F01E39AB745E86F()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Finished_185BD7B94C5005FD6F01E39AB745E86F");

	UPlayerHUD_C_Finished_185BD7B94C5005FD6F01E39AB745E86F_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.Finished_10D10B594F13742D8823F39890BDEC3D
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::Finished_10D10B594F13742D8823F39890BDEC3D()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Finished_10D10B594F13742D8823F39890BDEC3D");

	UPlayerHUD_C_Finished_10D10B594F13742D8823F39890BDEC3D_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.Finished_7533C45845F3B117AD0CED818D58DFA6
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::Finished_7533C45845F3B117AD0CED818D58DFA6()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Finished_7533C45845F3B117AD0CED818D58DFA6");

	UPlayerHUD_C_Finished_7533C45845F3B117AD0CED818D58DFA6_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.On Trailer Mode Changed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               TrailerEnabled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerHUD_C::On_Trailer_Mode_Changed(bool TrailerEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.On Trailer Mode Changed");

	UPlayerHUD_C_On_Trailer_Mode_Changed_Params params {};
	params.TrailerEnabled = TrailerEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.Hide Objective List
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::Hide_Objective_List()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Hide Objective List");

	UPlayerHUD_C_Hide_Objective_List_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.On Party Level Updated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHUD_C::On_Party_Level_Updated(int NewLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.On Party Level Updated");

	UPlayerHUD_C_On_Party_Level_Updated_Params params {};
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.Set Skip Info
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::Set_Skip_Info()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Set Skip Info");

	UPlayerHUD_C_Set_Skip_Info_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.SetRechargeStationText
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerHUD_C::SetRechargeStationText(bool On)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.SetRechargeStationText");

	UPlayerHUD_C_SetRechargeStationText_Params params {};
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.On Item Collected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FFNAFInventoryTableStruct                   InventoryItemInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UPlayerHUD_C::On_Item_Collected(const struct FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryItemInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.On Item Collected");

	UPlayerHUD_C_On_Item_Collected_Params params {};
	params.ItemName = ItemName;
	params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.Setup Requirement Display
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		fnaf9_EConditionFailReason                         Requirements                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     Interactable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHUD_C::Setup_Requirement_Display(fnaf9_EConditionFailReason Requirements, class UObject* Interactable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Setup Requirement Display");

	UPlayerHUD_C_Setup_Requirement_Display_Params params {};
	params.Requirements = Requirements;
	params.Interactable = Interactable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.Stop Requirement Display
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::Stop_Requirement_Display()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Stop Requirement Display");

	UPlayerHUD_C_Stop_Requirement_Display_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.Set Informational Message
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UPlayerHUD_C::Set_Informational_Message(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Set Informational Message");

	UPlayerHUD_C_Set_Informational_Message_Params params {};
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.Hide Informational Message
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::Hide_Informational_Message()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Hide Informational Message");

	UPlayerHUD_C_Hide_Informational_Message_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.On Stamina Depleted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::On_Stamina_Depleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.On Stamina Depleted");

	UPlayerHUD_C_On_Stamina_Depleted_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.On Stamina Replenished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::On_Stamina_Replenished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.On Stamina Replenished");

	UPlayerHUD_C_On_Stamina_Replenished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.On Security Level Updated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHUD_C::On_Security_Level_Updated(int NewLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.On Security Level Updated");

	UPlayerHUD_C_On_Security_Level_Updated_Params params {};
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.ShowInstructions
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<E_InstructionCard_Type_E_InstructionCard_Type> Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHUD_C::ShowInstructions(TEnumAsByte<E_InstructionCard_Type_E_InstructionCard_Type> Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.ShowInstructions");

	UPlayerHUD_C_ShowInstructions_Params params {};
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.HideInstructions
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::HideInstructions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.HideInstructions");

	UPlayerHUD_C_HideInstructions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.PlayInstructionCardAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::PlayInstructionCardAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.PlayInstructionCardAnim");

	UPlayerHUD_C_PlayInstructionCardAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.Setup Objective Display
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UPlayerHUD_C::Setup_Objective_Display(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Setup Objective Display");

	UPlayerHUD_C_Setup_Objective_Display_Params params {};
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.Stop Objective Display
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::Stop_Objective_Display()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Stop Objective Display");

	UPlayerHUD_C_Stop_Objective_Display_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.Init Hold Progress
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::Init_Hold_Progress()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Init Hold Progress");

	UPlayerHUD_C_Init_Hold_Progress_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.Complete Hold Progress
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::Complete_Hold_Progress()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Complete Hold Progress");

	UPlayerHUD_C_Complete_Hold_Progress_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.Cancel Hold Progress
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::Cancel_Hold_Progress()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Cancel Hold Progress");

	UPlayerHUD_C_Cancel_Hold_Progress_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.Update Hold Progress
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHUD_C::Update_Hold_Progress(float Percent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Update Hold Progress");

	UPlayerHUD_C_Update_Hold_Progress_Params params {};
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.ShowCollectedItemDisplay
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::ShowCollectedItemDisplay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.ShowCollectedItemDisplay");

	UPlayerHUD_C_ShowCollectedItemDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.On Information Anim Finished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::On_Information_Anim_Finished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.On Information Anim Finished");

	UPlayerHUD_C_On_Information_Anim_Finished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.DebugStopShowingItemsCollected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::DebugStopShowingItemsCollected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.DebugStopShowingItemsCollected");

	UPlayerHUD_C_DebugStopShowingItemsCollected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.Setup Collected Display
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       CollectedItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHUD_C::Setup_Collected_Display(const struct FName& CollectedItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Setup Collected Display");

	UPlayerHUD_C_Setup_Collected_Display_Params params {};
	params.CollectedItem = CollectedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.MoveMissionHUD
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::MoveMissionHUD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.MoveMissionHUD");

	UPlayerHUD_C_MoveMissionHUD_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.OnPlayerInteract
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHUD_C::OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnPlayerInteract");

	UPlayerHUD_C_OnPlayerInteract_Params params {};
	params.PlayerPawn = PlayerPawn;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.Setup Interactible Display
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Interactible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHUD_C::Setup_Interactible_Display(class UObject* Interactible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Setup Interactible Display");

	UPlayerHUD_C_Setup_Interactible_Display_Params params {};
	params.Interactible = Interactible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.On End Save
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::On_End_Save()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.On End Save");

	UPlayerHUD_C_On_End_Save_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.On Begin Save
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::On_Begin_Save()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.On Begin Save");

	UPlayerHUD_C_On_Begin_Save_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.Update
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               HasRtx                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Has2080                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerHUD_C::Update(int Level, bool HasRtx, bool Has2080)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Update");

	UPlayerHUD_C_Update_Params params {};
	params.Level = Level;
	params.HasRtx = HasRtx;
	params.Has2080 = Has2080;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.OnPlayerInteractCancel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::OnPlayerInteractCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnPlayerInteractCancel");

	UPlayerHUD_C_OnPlayerInteractCancel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.HideRequirementPanel
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPlayerHUD_C::HideRequirementPanel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.HideRequirementPanel");

	UPlayerHUD_C_HideRequirementPanel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.On Party Pass Used
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHUD_C::On_Party_Pass_Used(int NewLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.On Party Pass Used");

	UPlayerHUD_C_On_Party_Pass_Used_Params params {};
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHUD_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Tick");

	UPlayerHUD_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UPlayerHUD_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Construct");

	UPlayerHUD_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.OnPlayerHoverExit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHUD_C::OnPlayerHoverExit(class APawn* PlayerPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnPlayerHoverExit");

	UPlayerHUD_C_OnPlayerHoverExit_Params params {};
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.OnPlayerHoverEnter
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHUD_C::OnPlayerHoverEnter(class APawn* PlayerPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnPlayerHoverEnter");

	UPlayerHUD_C_OnPlayerHoverEnter_Params params {};
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerHUD.PlayerHUD_C.ExecuteUbergraph_PlayerHUD
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHUD_C::ExecuteUbergraph_PlayerHUD(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.ExecuteUbergraph_PlayerHUD");

	UPlayerHUD_C_ExecuteUbergraph_PlayerHUD_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
