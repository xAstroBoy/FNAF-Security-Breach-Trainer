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
//		Name   -> Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.GetInteractViewLocation
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     WorldLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ReturnFazerBlaster_C::GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.GetInteractViewLocation");

	ABP_ReturnFazerBlaster_C_GetInteractViewLocation_Params params {};

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
//		Name   -> Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.GetInteractViewAngles
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		fnaf9_ECameraAngleFlags                            AnglesToCheck                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ReturnFazerBlaster_C::GetInteractViewAngles(fnaf9_ECameraAngleFlags* AnglesToCheck)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.GetInteractViewAngles");

	ABP_ReturnFazerBlaster_C_GetInteractViewAngles_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnglesToCheck != nullptr)
		*AnglesToCheck = params.AnglesToCheck;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.GetInteractibleType
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<InteractibleType_EInteractibleType>    Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<InteractiblePressType_EInteractiblePressType> PressType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ReturnFazerBlaster_C::GetInteractibleType(TEnumAsByte<InteractibleType_EInteractibleType>* Type, TEnumAsByte<InteractiblePressType_EInteractiblePressType>* PressType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.GetInteractibleType");

	ABP_ReturnFazerBlaster_C_GetInteractibleType_Params params {};

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
//		Name   -> Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.CanPlayerInteract
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               CanInteract                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ReturnFazerBlaster_C::CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.CanPlayerInteract");

	ABP_ReturnFazerBlaster_C_CanPlayerInteract_Params params {};

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
//		Name   -> Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.UpdateUIOnTick
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ReturnFazerBlaster_C::UpdateUIOnTick(bool* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.UpdateUIOnTick");

	ABP_ReturnFazerBlaster_C_UpdateUIOnTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.GetInstructionOverride
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Instruction                                                (Parm, OutParm)
void ABP_ReturnFazerBlaster_C::GetInstructionOverride(struct FText* Instruction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.GetInstructionOverride");

	ABP_ReturnFazerBlaster_C_GetInstructionOverride_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Instruction != nullptr)
		*Instruction = params.Instruction;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.InteractIgnoresTrace
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IgnoreTrace                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ReturnFazerBlaster_C::InteractIgnoresTrace(bool* IgnoreTrace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.InteractIgnoresTrace");

	ABP_ReturnFazerBlaster_C_InteractIgnoresTrace_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IgnoreTrace != nullptr)
		*IgnoreTrace = params.IgnoreTrace;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.GetHUDInstruction
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Instruction                                                (Parm, OutParm)
void ABP_ReturnFazerBlaster_C::GetHUDInstruction(struct FText* Instruction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.GetHUDInstruction");

	ABP_ReturnFazerBlaster_C_GetHUDInstruction_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Instruction != nullptr)
		*Instruction = params.Instruction;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.GetActivatableState
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<ActivatableState_EActivatableState>    CurrentState                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ReturnFazerBlaster_C::GetActivatableState(class AActor* Activator, TEnumAsByte<ActivatableState_EActivatableState>* CurrentState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.GetActivatableState");

	ABP_ReturnFazerBlaster_C_GetActivatableState_Params params {};
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentState != nullptr)
		*CurrentState = params.CurrentState;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.OnPlayerInteractCancel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_ReturnFazerBlaster_C::OnPlayerInteractCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.OnPlayerInteractCancel");

	ABP_ReturnFazerBlaster_C_OnPlayerInteractCancel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.OnPlayerHoverEnter
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ReturnFazerBlaster_C::OnPlayerHoverEnter(class APawn* PlayerPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.OnPlayerHoverEnter");

	ABP_ReturnFazerBlaster_C_OnPlayerHoverEnter_Params params {};
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.OnPlayerHoverExit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ReturnFazerBlaster_C::OnPlayerHoverExit(class APawn* PlayerPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.OnPlayerHoverExit");

	ABP_ReturnFazerBlaster_C_OnPlayerHoverExit_Params params {};
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.OnPlayerInteract
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ReturnFazerBlaster_C::OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.OnPlayerInteract");

	ABP_ReturnFazerBlaster_C_OnPlayerInteract_Params params {};
	params.PlayerPawn = PlayerPawn;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.ActivateObject
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ReturnFazerBlaster_C::ActivateObject(class AActor* Activator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.ActivateObject");

	ABP_ReturnFazerBlaster_C_ActivateObject_Params params {};
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.SetActivated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_ReturnFazerBlaster_C::SetActivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.SetActivated");

	ABP_ReturnFazerBlaster_C_SetActivated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.DeactivateObject
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Deactivator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ReturnFazerBlaster_C::DeactivateObject(class AActor* Deactivator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.DeactivateObject");

	ABP_ReturnFazerBlaster_C_DeactivateObject_Params params {};
	params.Deactivator = Deactivator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.SetDeactivated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_ReturnFazerBlaster_C::SetDeactivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.SetDeactivated");

	ABP_ReturnFazerBlaster_C_SetDeactivated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.ExecuteUbergraph_BP_ReturnFazerBlaster
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ReturnFazerBlaster_C::ExecuteUbergraph_BP_ReturnFazerBlaster(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.ExecuteUbergraph_BP_ReturnFazerBlaster");

	ABP_ReturnFazerBlaster_C_ExecuteUbergraph_BP_ReturnFazerBlaster_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
