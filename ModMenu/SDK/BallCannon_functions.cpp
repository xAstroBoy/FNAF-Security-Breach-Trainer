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
//		Name   -> Function BallCannon.BallCannon_C.GetInteractViewLocation
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     WorldLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallCannon_C::GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannon.BallCannon_C.GetInteractViewLocation");

	ABallCannon_C_GetInteractViewLocation_Params params {};

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
//		Name   -> Function BallCannon.BallCannon_C.GetInteractViewAngles
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		fnaf9_ECameraAngleFlags                            AnglesToCheck                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallCannon_C::GetInteractViewAngles(fnaf9_ECameraAngleFlags* AnglesToCheck)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannon.BallCannon_C.GetInteractViewAngles");

	ABallCannon_C_GetInteractViewAngles_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnglesToCheck != nullptr)
		*AnglesToCheck = params.AnglesToCheck;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannon.BallCannon_C.GetHUDInstruction
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Instruction                                                (Parm, OutParm)
void ABallCannon_C::GetHUDInstruction(struct FText* Instruction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannon.BallCannon_C.GetHUDInstruction");

	ABallCannon_C_GetHUDInstruction_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Instruction != nullptr)
		*Instruction = params.Instruction;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannon.BallCannon_C.InteractIgnoresTrace
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IgnoreTrace                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABallCannon_C::InteractIgnoresTrace(bool* IgnoreTrace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannon.BallCannon_C.InteractIgnoresTrace");

	ABallCannon_C_InteractIgnoresTrace_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IgnoreTrace != nullptr)
		*IgnoreTrace = params.IgnoreTrace;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannon.BallCannon_C.GetInstructionOverride
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Instruction                                                (Parm, OutParm)
void ABallCannon_C::GetInstructionOverride(struct FText* Instruction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannon.BallCannon_C.GetInstructionOverride");

	ABallCannon_C_GetInstructionOverride_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Instruction != nullptr)
		*Instruction = params.Instruction;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannon.BallCannon_C.UpdateUIOnTick
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABallCannon_C::UpdateUIOnTick(bool* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannon.BallCannon_C.UpdateUIOnTick");

	ABallCannon_C_UpdateUIOnTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannon.BallCannon_C.GetInteractibleType
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<InteractibleType_EInteractibleType>    Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<InteractiblePressType_EInteractiblePressType> PressType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallCannon_C::GetInteractibleType(TEnumAsByte<InteractibleType_EInteractibleType>* Type, TEnumAsByte<InteractiblePressType_EInteractiblePressType>* PressType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannon.BallCannon_C.GetInteractibleType");

	ABallCannon_C_GetInteractibleType_Params params {};

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
//		Name   -> Function BallCannon.BallCannon_C.CanPlayerInteract
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               CanInteract                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallCannon_C::CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannon.BallCannon_C.CanPlayerInteract");

	ABallCannon_C_CanPlayerInteract_Params params {};

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
//		Name   -> Function BallCannon.BallCannon_C.CanFire
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               CanFire                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABallCannon_C::CanFire(bool* CanFire)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannon.BallCannon_C.CanFire");

	ABallCannon_C_CanFire_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanFire != nullptr)
		*CanFire = params.CanFire;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannon.BallCannon_C.InpActEvt_PrimaryAction_K2Node_InputActionEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABallCannon_C::InpActEvt_PrimaryAction_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannon.BallCannon_C.InpActEvt_PrimaryAction_K2Node_InputActionEvent_1");

	ABallCannon_C_InpActEvt_PrimaryAction_K2Node_InputActionEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannon.BallCannon_C.OnPlayerInteractCancel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABallCannon_C::OnPlayerInteractCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannon.BallCannon_C.OnPlayerInteractCancel");

	ABallCannon_C_OnPlayerInteractCancel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannon.BallCannon_C.OnPlayerHoverEnter
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallCannon_C::OnPlayerHoverEnter(class APawn* PlayerPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannon.BallCannon_C.OnPlayerHoverEnter");

	ABallCannon_C_OnPlayerHoverEnter_Params params {};
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannon.BallCannon_C.OnPlayerHoverExit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallCannon_C::OnPlayerHoverExit(class APawn* PlayerPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannon.BallCannon_C.OnPlayerHoverExit");

	ABallCannon_C_OnPlayerHoverExit_Params params {};
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannon.BallCannon_C.OnPlayerInteract
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallCannon_C::OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannon.BallCannon_C.OnPlayerInteract");

	ABallCannon_C_OnPlayerInteract_Params params {};
	params.PlayerPawn = PlayerPawn;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannon.BallCannon_C.Fire
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Perform_Cant_Fire_Logic                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABallCannon_C::Fire(bool Perform_Cant_Fire_Logic)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannon.BallCannon_C.Fire");

	ABallCannon_C_Fire_Params params {};
	params.Perform_Cant_Fire_Logic = Perform_Cant_Fire_Logic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannon.BallCannon_C.Take Control
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABallCannonPawn_C*                           ControllingPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallCannon_C::Take_Control(class ABallCannonPawn_C* ControllingPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannon.BallCannon_C.Take Control");

	ABallCannon_C_Take_Control_Params params {};
	params.ControllingPawn = ControllingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannon.BallCannon_C.Shot Fired
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABallCannon_C::Shot_Fired()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannon.BallCannon_C.Shot Fired");

	ABallCannon_C_Shot_Fired_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannon.BallCannon_C.Shot Failed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABallCannon_C::Shot_Failed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannon.BallCannon_C.Shot Failed");

	ABallCannon_C_Shot_Failed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannon.BallCannon_C.ReceivePossessed
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallCannon_C::ReceivePossessed(class AController* NewController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannon.BallCannon_C.ReceivePossessed");

	ABallCannon_C_ReceivePossessed_Params params {};
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannon.BallCannon_C.ReceiveUnpossessed
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AController*                                 OldController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallCannon_C::ReceiveUnpossessed(class AController* OldController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannon.BallCannon_C.ReceiveUnpossessed");

	ABallCannon_C_ReceiveUnpossessed_Params params {};
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannon.BallCannon_C.OnExit
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABallCannon_C::OnExit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannon.BallCannon_C.OnExit");

	ABallCannon_C_OnExit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannon.BallCannon_C.On Target Hit
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABallCannon_C::On_Target_Hit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannon.BallCannon_C.On Target Hit");

	ABallCannon_C_On_Target_Hit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannon.BallCannon_C.ExecuteUbergraph_BallCannon
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallCannon_C::ExecuteUbergraph_BallCannon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannon.BallCannon_C.ExecuteUbergraph_BallCannon");

	ABallCannon_C_ExecuteUbergraph_BallCannon_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannon.BallCannon_C.OnShotFired__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABallCannon_C*                               BallCannon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallCannon_C::OnShotFired__DelegateSignature(class ABallCannon_C* BallCannon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannon.BallCannon_C.OnShotFired__DelegateSignature");

	ABallCannon_C_OnShotFired__DelegateSignature_Params params {};
	params.BallCannon = BallCannon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
