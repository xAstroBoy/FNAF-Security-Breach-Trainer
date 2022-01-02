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
//		Name   -> Function SurvivalSkipButton.SurvivalSkipButton_C.GetInteractViewLocation
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     WorldLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivalSkipButton_C::GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkipButton.SurvivalSkipButton_C.GetInteractViewLocation");

	ASurvivalSkipButton_C_GetInteractViewLocation_Params params {};

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
//		Name   -> Function SurvivalSkipButton.SurvivalSkipButton_C.GetInteractViewAngles
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		fnaf9_ECameraAngleFlags                            AnglesToCheck                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivalSkipButton_C::GetInteractViewAngles(fnaf9_ECameraAngleFlags* AnglesToCheck)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkipButton.SurvivalSkipButton_C.GetInteractViewAngles");

	ASurvivalSkipButton_C_GetInteractViewAngles_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnglesToCheck != nullptr)
		*AnglesToCheck = params.AnglesToCheck;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SurvivalSkipButton.SurvivalSkipButton_C.GetHUDInstruction
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Instruction                                                (Parm, OutParm)
void ASurvivalSkipButton_C::GetHUDInstruction(struct FText* Instruction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkipButton.SurvivalSkipButton_C.GetHUDInstruction");

	ASurvivalSkipButton_C_GetHUDInstruction_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Instruction != nullptr)
		*Instruction = params.Instruction;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SurvivalSkipButton.SurvivalSkipButton_C.InteractIgnoresTrace
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IgnoreTrace                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivalSkipButton_C::InteractIgnoresTrace(bool* IgnoreTrace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkipButton.SurvivalSkipButton_C.InteractIgnoresTrace");

	ASurvivalSkipButton_C_InteractIgnoresTrace_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IgnoreTrace != nullptr)
		*IgnoreTrace = params.IgnoreTrace;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SurvivalSkipButton.SurvivalSkipButton_C.GetInstructionOverride
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Instruction                                                (Parm, OutParm)
void ASurvivalSkipButton_C::GetInstructionOverride(struct FText* Instruction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkipButton.SurvivalSkipButton_C.GetInstructionOverride");

	ASurvivalSkipButton_C_GetInstructionOverride_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Instruction != nullptr)
		*Instruction = params.Instruction;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SurvivalSkipButton.SurvivalSkipButton_C.GetInteractibleType
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<InteractibleType_EInteractibleType>    Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<InteractiblePressType_EInteractiblePressType> PressType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivalSkipButton_C::GetInteractibleType(TEnumAsByte<InteractibleType_EInteractibleType>* Type, TEnumAsByte<InteractiblePressType_EInteractiblePressType>* PressType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkipButton.SurvivalSkipButton_C.GetInteractibleType");

	ASurvivalSkipButton_C_GetInteractibleType_Params params {};

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
//		Name   -> Function SurvivalSkipButton.SurvivalSkipButton_C.CanPlayerInteract
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               CanInteract                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivalSkipButton_C::CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkipButton.SurvivalSkipButton_C.CanPlayerInteract");

	ASurvivalSkipButton_C_CanPlayerInteract_Params params {};

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
//		Name   -> Function SurvivalSkipButton.SurvivalSkipButton_C.UpdateUIOnTick
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvivalSkipButton_C::UpdateUIOnTick(bool* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkipButton.SurvivalSkipButton_C.UpdateUIOnTick");

	ASurvivalSkipButton_C_UpdateUIOnTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SurvivalSkipButton.SurvivalSkipButton_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ASurvivalSkipButton_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkipButton.SurvivalSkipButton_C.UserConstructionScript");

	ASurvivalSkipButton_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SurvivalSkipButton.SurvivalSkipButton_C.OnPlayerInteractCancel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ASurvivalSkipButton_C::OnPlayerInteractCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkipButton.SurvivalSkipButton_C.OnPlayerInteractCancel");

	ASurvivalSkipButton_C_OnPlayerInteractCancel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SurvivalSkipButton.SurvivalSkipButton_C.OnPlayerHoverEnter
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivalSkipButton_C::OnPlayerHoverEnter(class APawn* PlayerPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkipButton.SurvivalSkipButton_C.OnPlayerHoverEnter");

	ASurvivalSkipButton_C_OnPlayerHoverEnter_Params params {};
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SurvivalSkipButton.SurvivalSkipButton_C.OnPlayerHoverExit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivalSkipButton_C::OnPlayerHoverExit(class APawn* PlayerPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkipButton.SurvivalSkipButton_C.OnPlayerHoverExit");

	ASurvivalSkipButton_C_OnPlayerHoverExit_Params params {};
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SurvivalSkipButton.SurvivalSkipButton_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ASurvivalSkipButton_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkipButton.SurvivalSkipButton_C.ReceiveBeginPlay");

	ASurvivalSkipButton_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SurvivalSkipButton.SurvivalSkipButton_C.OnPlayerInteract
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivalSkipButton_C::OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkipButton.SurvivalSkipButton_C.OnPlayerInteract");

	ASurvivalSkipButton_C_OnPlayerInteract_Params params {};
	params.PlayerPawn = PlayerPawn;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SurvivalSkipButton.SurvivalSkipButton_C.ExecuteUbergraph_SurvivalSkipButton
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivalSkipButton_C::ExecuteUbergraph_SurvivalSkipButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalSkipButton.SurvivalSkipButton_C.ExecuteUbergraph_SurvivalSkipButton");

	ASurvivalSkipButton_C_ExecuteUbergraph_SurvivalSkipButton_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
