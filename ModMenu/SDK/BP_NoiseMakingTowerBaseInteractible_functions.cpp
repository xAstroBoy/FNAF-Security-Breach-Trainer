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
//		Name   -> Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.GetInteractViewLocation
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     WorldLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NoiseMakingTowerBaseInteractible_C::GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.GetInteractViewLocation");

	ABP_NoiseMakingTowerBaseInteractible_C_GetInteractViewLocation_Params params {};

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
//		Name   -> Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.GetInteractViewAngles
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		fnaf9_ECameraAngleFlags                            AnglesToCheck                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NoiseMakingTowerBaseInteractible_C::GetInteractViewAngles(fnaf9_ECameraAngleFlags* AnglesToCheck)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.GetInteractViewAngles");

	ABP_NoiseMakingTowerBaseInteractible_C_GetInteractViewAngles_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnglesToCheck != nullptr)
		*AnglesToCheck = params.AnglesToCheck;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.GetHUDInstruction
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Instruction                                                (Parm, OutParm)
void ABP_NoiseMakingTowerBaseInteractible_C::GetHUDInstruction(struct FText* Instruction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.GetHUDInstruction");

	ABP_NoiseMakingTowerBaseInteractible_C_GetHUDInstruction_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Instruction != nullptr)
		*Instruction = params.Instruction;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.InteractIgnoresTrace
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IgnoreTrace                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NoiseMakingTowerBaseInteractible_C::InteractIgnoresTrace(bool* IgnoreTrace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.InteractIgnoresTrace");

	ABP_NoiseMakingTowerBaseInteractible_C_InteractIgnoresTrace_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IgnoreTrace != nullptr)
		*IgnoreTrace = params.IgnoreTrace;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.GetInteractibleType
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<InteractibleType_EInteractibleType>    Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<InteractiblePressType_EInteractiblePressType> PressType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NoiseMakingTowerBaseInteractible_C::GetInteractibleType(TEnumAsByte<InteractibleType_EInteractibleType>* Type, TEnumAsByte<InteractiblePressType_EInteractiblePressType>* PressType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.GetInteractibleType");

	ABP_NoiseMakingTowerBaseInteractible_C_GetInteractibleType_Params params {};

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
//		Name   -> Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.CanPlayerInteract
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               CanInteract                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NoiseMakingTowerBaseInteractible_C::CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.CanPlayerInteract");

	ABP_NoiseMakingTowerBaseInteractible_C_CanPlayerInteract_Params params {};

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
//		Name   -> Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.UpdateUIOnTick
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_NoiseMakingTowerBaseInteractible_C::UpdateUIOnTick(bool* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.UpdateUIOnTick");

	ABP_NoiseMakingTowerBaseInteractible_C_UpdateUIOnTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.GetInstructionOverride
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Instruction                                                (Parm, OutParm)
void ABP_NoiseMakingTowerBaseInteractible_C::GetInstructionOverride(struct FText* Instruction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.GetInstructionOverride");

	ABP_NoiseMakingTowerBaseInteractible_C_GetInstructionOverride_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Instruction != nullptr)
		*Instruction = params.Instruction;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.OnPlayerInteractCancel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_NoiseMakingTowerBaseInteractible_C::OnPlayerInteractCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.OnPlayerInteractCancel");

	ABP_NoiseMakingTowerBaseInteractible_C_OnPlayerInteractCancel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.OnPlayerHoverEnter
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NoiseMakingTowerBaseInteractible_C::OnPlayerHoverEnter(class APawn* PlayerPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.OnPlayerHoverEnter");

	ABP_NoiseMakingTowerBaseInteractible_C_OnPlayerHoverEnter_Params params {};
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.OnPlayerHoverExit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NoiseMakingTowerBaseInteractible_C::OnPlayerHoverExit(class APawn* PlayerPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.OnPlayerHoverExit");

	ABP_NoiseMakingTowerBaseInteractible_C_OnPlayerHoverExit_Params params {};
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.OnPlayerInteract
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NoiseMakingTowerBaseInteractible_C::OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.OnPlayerInteract");

	ABP_NoiseMakingTowerBaseInteractible_C_OnPlayerInteract_Params params {};
	params.PlayerPawn = PlayerPawn;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.On Triggered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Other_Actor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NoiseMakingTowerBaseInteractible_C::On_Triggered(class AActor* Other_Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.On Triggered");

	ABP_NoiseMakingTowerBaseInteractible_C_On_Triggered_Params params {};
	params.Other_Actor = Other_Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.Reset
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_NoiseMakingTowerBaseInteractible_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.Reset");

	ABP_NoiseMakingTowerBaseInteractible_C_Reset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.ExecuteUbergraph_BP_NoiseMakingTowerBaseInteractible
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NoiseMakingTowerBaseInteractible_C::ExecuteUbergraph_BP_NoiseMakingTowerBaseInteractible(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.ExecuteUbergraph_BP_NoiseMakingTowerBaseInteractible");

	ABP_NoiseMakingTowerBaseInteractible_C_ExecuteUbergraph_BP_NoiseMakingTowerBaseInteractible_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.TriggerDisbatch__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_NoiseMakingTowerBaseInteractible_C::TriggerDisbatch__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.TriggerDisbatch__DelegateSignature");

	ABP_NoiseMakingTowerBaseInteractible_C_TriggerDisbatch__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
