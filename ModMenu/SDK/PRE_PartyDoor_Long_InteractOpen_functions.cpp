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
//		Name   -> Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.GetInteractViewLocation
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     WorldLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APRE_PartyDoor_Long_InteractOpen_C::GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.GetInteractViewLocation");

	APRE_PartyDoor_Long_InteractOpen_C_GetInteractViewLocation_Params params {};

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
//		Name   -> Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.GetInteractViewAngles
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		fnaf9_ECameraAngleFlags                            AnglesToCheck                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APRE_PartyDoor_Long_InteractOpen_C::GetInteractViewAngles(fnaf9_ECameraAngleFlags* AnglesToCheck)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.GetInteractViewAngles");

	APRE_PartyDoor_Long_InteractOpen_C_GetInteractViewAngles_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnglesToCheck != nullptr)
		*AnglesToCheck = params.AnglesToCheck;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.GetHUDInstruction
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Instruction                                                (Parm, OutParm)
void APRE_PartyDoor_Long_InteractOpen_C::GetHUDInstruction(struct FText* Instruction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.GetHUDInstruction");

	APRE_PartyDoor_Long_InteractOpen_C_GetHUDInstruction_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Instruction != nullptr)
		*Instruction = params.Instruction;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.InteractIgnoresTrace
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IgnoreTrace                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APRE_PartyDoor_Long_InteractOpen_C::InteractIgnoresTrace(bool* IgnoreTrace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.InteractIgnoresTrace");

	APRE_PartyDoor_Long_InteractOpen_C_InteractIgnoresTrace_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IgnoreTrace != nullptr)
		*IgnoreTrace = params.IgnoreTrace;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.GetInteractibleType
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<InteractibleType_EInteractibleType>    Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<InteractiblePressType_EInteractiblePressType> PressType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APRE_PartyDoor_Long_InteractOpen_C::GetInteractibleType(TEnumAsByte<InteractibleType_EInteractibleType>* Type, TEnumAsByte<InteractiblePressType_EInteractiblePressType>* PressType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.GetInteractibleType");

	APRE_PartyDoor_Long_InteractOpen_C_GetInteractibleType_Params params {};

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
//		Name   -> Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.CanPlayerInteract
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               CanInteract                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APRE_PartyDoor_Long_InteractOpen_C::CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.CanPlayerInteract");

	APRE_PartyDoor_Long_InteractOpen_C_CanPlayerInteract_Params params {};

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
//		Name   -> Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.UpdateUIOnTick
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APRE_PartyDoor_Long_InteractOpen_C::UpdateUIOnTick(bool* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.UpdateUIOnTick");

	APRE_PartyDoor_Long_InteractOpen_C_UpdateUIOnTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.GetInstructionOverride
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Instruction                                                (Parm, OutParm)
void APRE_PartyDoor_Long_InteractOpen_C::GetInstructionOverride(struct FText* Instruction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.GetInstructionOverride");

	APRE_PartyDoor_Long_InteractOpen_C_GetInstructionOverride_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Instruction != nullptr)
		*Instruction = params.Instruction;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.OnPlayerInteractCancel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void APRE_PartyDoor_Long_InteractOpen_C::OnPlayerInteractCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.OnPlayerInteractCancel");

	APRE_PartyDoor_Long_InteractOpen_C_OnPlayerInteractCancel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.OnPlayerHoverEnter
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APRE_PartyDoor_Long_InteractOpen_C::OnPlayerHoverEnter(class APawn* PlayerPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.OnPlayerHoverEnter");

	APRE_PartyDoor_Long_InteractOpen_C_OnPlayerHoverEnter_Params params {};
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.OnPlayerHoverExit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APRE_PartyDoor_Long_InteractOpen_C::OnPlayerHoverExit(class APawn* PlayerPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.OnPlayerHoverExit");

	APRE_PartyDoor_Long_InteractOpen_C_OnPlayerHoverExit_Params params {};
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void APRE_PartyDoor_Long_InteractOpen_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.ReceiveBeginPlay");

	APRE_PartyDoor_Long_InteractOpen_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.OnPlayerInteract
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APRE_PartyDoor_Long_InteractOpen_C::OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.OnPlayerInteract");

	APRE_PartyDoor_Long_InteractOpen_C_OnPlayerInteract_Params params {};
	params.PlayerPawn = PlayerPawn;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.ExecuteUbergraph_PRE_PartyDoor_Long_InteractOpen
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APRE_PartyDoor_Long_InteractOpen_C::ExecuteUbergraph_PRE_PartyDoor_Long_InteractOpen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.ExecuteUbergraph_PRE_PartyDoor_Long_InteractOpen");

	APRE_PartyDoor_Long_InteractOpen_C_ExecuteUbergraph_PRE_PartyDoor_Long_InteractOpen_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
