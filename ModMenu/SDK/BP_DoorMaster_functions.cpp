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
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.GetInteractViewLocation
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     WorldLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DoorMaster_C::GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.GetInteractViewLocation");

	ABP_DoorMaster_C_GetInteractViewLocation_Params params {};

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
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.GetInteractViewAngles
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		fnaf9_ECameraAngleFlags                            AnglesToCheck                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DoorMaster_C::GetInteractViewAngles(fnaf9_ECameraAngleFlags* AnglesToCheck)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.GetInteractViewAngles");

	ABP_DoorMaster_C_GetInteractViewAngles_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnglesToCheck != nullptr)
		*AnglesToCheck = params.AnglesToCheck;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.GetHUDInstruction
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Instruction                                                (Parm, OutParm)
void ABP_DoorMaster_C::GetHUDInstruction(struct FText* Instruction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.GetHUDInstruction");

	ABP_DoorMaster_C_GetHUDInstruction_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Instruction != nullptr)
		*Instruction = params.Instruction;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.InteractIgnoresTrace
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IgnoreTrace                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DoorMaster_C::InteractIgnoresTrace(bool* IgnoreTrace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.InteractIgnoresTrace");

	ABP_DoorMaster_C_InteractIgnoresTrace_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IgnoreTrace != nullptr)
		*IgnoreTrace = params.IgnoreTrace;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.GetInstructionOverride
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Instruction                                                (Parm, OutParm)
void ABP_DoorMaster_C::GetInstructionOverride(struct FText* Instruction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.GetInstructionOverride");

	ABP_DoorMaster_C_GetInstructionOverride_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Instruction != nullptr)
		*Instruction = params.Instruction;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.UpdateUIOnTick
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DoorMaster_C::UpdateUIOnTick(bool* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.UpdateUIOnTick");

	ABP_DoorMaster_C_UpdateUIOnTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.GetInteractibleType
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<InteractibleType_EInteractibleType>    Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<InteractiblePressType_EInteractiblePressType> PressType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DoorMaster_C::GetInteractibleType(TEnumAsByte<InteractibleType_EInteractibleType>* Type, TEnumAsByte<InteractiblePressType_EInteractiblePressType>* PressType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.GetInteractibleType");

	ABP_DoorMaster_C_GetInteractibleType_Params params {};

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
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.CanPlayerInteract
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               CanInteract                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DoorMaster_C::CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.CanPlayerInteract");

	ABP_DoorMaster_C_CanPlayerInteract_Params params {};

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
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.HasDoorInitialized
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_DoorMaster_C::HasDoorInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.HasDoorInitialized");

	ABP_DoorMaster_C_HasDoorInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.IsDoorLockedForPlayer
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_DoorMaster_C::IsDoorLockedForPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.IsDoorLockedForPlayer");

	ABP_DoorMaster_C_IsDoorLockedForPlayer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.IsDoorOpen
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_DoorMaster_C::IsDoorOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.IsDoorOpen");

	ABP_DoorMaster_C_IsDoorOpen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.IsDoorLockedForAI
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_DoorMaster_C::IsDoorLockedForAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.IsDoorLockedForAI");

	ABP_DoorMaster_C_IsDoorLockedForAI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.SetPawnDetectEnable
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DoorMaster_C::SetPawnDetectEnable(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.SetPawnDetectEnable");

	ABP_DoorMaster_C_SetPawnDetectEnable_Params params {};
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.SetupMaterial
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UMaterialInterface*                          DefaultMaterial                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DoorMaster_C::SetupMaterial(class UMaterialInterface* DefaultMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.SetupMaterial");

	ABP_DoorMaster_C_SetupMaterial_Params params {};
	params.DefaultMaterial = DefaultMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.LogCharactersInDoor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Prefix                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_DoorMaster_C::LogCharactersInDoor(const struct FString& Prefix)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.LogCharactersInDoor");

	ABP_DoorMaster_C_LogCharactersInDoor_Params params {};
	params.Prefix = Prefix;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.ClearPlayerBlocker
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_DoorMaster_C::ClearPlayerBlocker()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.ClearPlayerBlocker");

	ABP_DoorMaster_C_ClearPlayerBlocker_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.SetupPlayerBlocker
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_DoorMaster_C::SetupPlayerBlocker()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.SetupPlayerBlocker");

	ABP_DoorMaster_C_SetupPlayerBlocker_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.SetupDoor
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_DoorMaster_C::SetupDoor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.SetupDoor");

	ABP_DoorMaster_C_SetupDoor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.CanActivate
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               CanActivate                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DoorMaster_C::CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.CanActivate");

	ABP_DoorMaster_C_CanActivate_Params params {};
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanActivate != nullptr)
		*CanActivate = params.CanActivate;
	if (CantReason != nullptr)
		*CantReason = params.CantReason;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_DoorMaster_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.UserConstructionScript");

	ABP_DoorMaster_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C. Close Door__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ABP_DoorMaster_C::_Close_Door__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C. Close Door__FinishedFunc");

	ABP_DoorMaster_C__Close_Door__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C. Close Door__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ABP_DoorMaster_C::_Close_Door__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C. Close Door__UpdateFunc");

	ABP_DoorMaster_C__Close_Door__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_DoorMaster_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.ReceiveBeginPlay");

	ABP_DoorMaster_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.On Deactivate
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_DoorMaster_C::On_Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.On Deactivate");

	ABP_DoorMaster_C_On_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.Set State
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ActivatableState_EActivatableState>    NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DoorMaster_C::Set_State(TEnumAsByte<ActivatableState_EActivatableState> NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.Set State");

	ABP_DoorMaster_C_Set_State_Params params {};
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.Set Door Timeline Time
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              NewTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DoorMaster_C::Set_Door_Timeline_Time(float NewTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.Set Door Timeline Time");

	ABP_DoorMaster_C_Set_Door_Timeline_Time_Params params {};
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.Close
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               close                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DoorMaster_C::Close(bool close)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.Close");

	ABP_DoorMaster_C_Close_Params params {};
	params.close = close;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.ForceDoorOpen
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_DoorMaster_C::ForceDoorOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.ForceDoorOpen");

	ABP_DoorMaster_C_ForceDoorOpen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.ForceDoorClose
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_DoorMaster_C::ForceDoorClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.ForceDoorClose");

	ABP_DoorMaster_C_ForceDoorClose_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.OnActivatorDone
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DoorMaster_C::OnActivatorDone(class AActor* Activator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.OnActivatorDone");

	ABP_DoorMaster_C_OnActivatorDone_Params params {};
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.OnPlayerInteract
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DoorMaster_C::OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.OnPlayerInteract");

	ABP_DoorMaster_C_OnPlayerInteract_Params params {};
	params.PlayerPawn = PlayerPawn;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.UpdateSecurityDisplay
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_DoorMaster_C::UpdateSecurityDisplay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.UpdateSecurityDisplay");

	ABP_DoorMaster_C_UpdateSecurityDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.SetDoorLockPlayer
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Lock                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DoorMaster_C::SetDoorLockPlayer(bool Lock)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.SetDoorLockPlayer");

	ABP_DoorMaster_C_SetDoorLockPlayer_Params params {};
	params.Lock = Lock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.SetDoorLockAI
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Lock                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DoorMaster_C::SetDoorLockAI(bool Lock)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.SetDoorLockAI");

	ABP_DoorMaster_C_SetDoorLockAI_Params params {};
	params.Lock = Lock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.BndEvt__Door_Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DoorMaster_C::BndEvt__Door_Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.BndEvt__Door_Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_DoorMaster_C_BndEvt__Door_Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.BndEvt__Door_K2Node_ComponentBoundEvent_2_OnOpenCloseDoor__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DoorMaster_C::BndEvt__Door_K2Node_ComponentBoundEvent_2_OnOpenCloseDoor__DelegateSignature(bool bIsPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.BndEvt__Door_K2Node_ComponentBoundEvent_2_OnOpenCloseDoor__DelegateSignature");

	ABP_DoorMaster_C_BndEvt__Door_K2Node_ComponentBoundEvent_2_OnOpenCloseDoor__DelegateSignature_Params params {};
	params.bIsPlayer = bIsPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.BndEvt__Door_K2Node_ComponentBoundEvent_3_OnOpenCloseDoor__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DoorMaster_C::BndEvt__Door_K2Node_ComponentBoundEvent_3_OnOpenCloseDoor__DelegateSignature(bool bIsPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.BndEvt__Door_K2Node_ComponentBoundEvent_3_OnOpenCloseDoor__DelegateSignature");

	ABP_DoorMaster_C_BndEvt__Door_K2Node_ComponentBoundEvent_3_OnOpenCloseDoor__DelegateSignature_Params params {};
	params.bIsPlayer = bIsPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.BndEvt__Door_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_DoorMaster_C::BndEvt__Door_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.BndEvt__Door_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_DoorMaster_C_BndEvt__Door_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.SetDoorRequiredItem
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DoorMaster_C::SetDoorRequiredItem(const struct FName& ItemName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.SetDoorRequiredItem");

	ABP_DoorMaster_C_SetDoorRequiredItem_Params params {};
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.Setup Survival Door
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_DoorMaster_C::Setup_Survival_Door()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.Setup Survival Door");

	ABP_DoorMaster_C_Setup_Survival_Door_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.BndEvt__Door_K2Node_ComponentBoundEvent_4_OnInitialOpen__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ABP_DoorMaster_C::BndEvt__Door_K2Node_ComponentBoundEvent_4_OnInitialOpen__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.BndEvt__Door_K2Node_ComponentBoundEvent_4_OnInitialOpen__DelegateSignature");

	ABP_DoorMaster_C_BndEvt__Door_K2Node_ComponentBoundEvent_4_OnInitialOpen__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.SwitchColorForScenario
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_DoorMaster_C::SwitchColorForScenario()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.SwitchColorForScenario");

	ABP_DoorMaster_C_SwitchColorForScenario_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.OnPlayerHoverExit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DoorMaster_C::OnPlayerHoverExit(class APawn* PlayerPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.OnPlayerHoverExit");

	ABP_DoorMaster_C_OnPlayerHoverExit_Params params {};
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.SetActivated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_DoorMaster_C::SetActivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.SetActivated");

	ABP_DoorMaster_C_SetActivated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.On Activate
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_DoorMaster_C::On_Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.On Activate");

	ABP_DoorMaster_C_On_Activate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.OnPlayerHoverEnter
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DoorMaster_C::OnPlayerHoverEnter(class APawn* PlayerPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.OnPlayerHoverEnter");

	ABP_DoorMaster_C_OnPlayerHoverEnter_Params params {};
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.SetSecurityLevel
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewSecurityLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DoorMaster_C::SetSecurityLevel(int NewSecurityLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.SetSecurityLevel");

	ABP_DoorMaster_C_SetSecurityLevel_Params params {};
	params.NewSecurityLevel = NewSecurityLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.OnPlayerInteractCancel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_DoorMaster_C::OnPlayerInteractCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.OnPlayerInteractCancel");

	ABP_DoorMaster_C_OnPlayerInteractCancel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.ExecuteUbergraph_BP_DoorMaster
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DoorMaster_C::ExecuteUbergraph_BP_DoorMaster(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.ExecuteUbergraph_BP_DoorMaster");

	ABP_DoorMaster_C_ExecuteUbergraph_BP_DoorMaster_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.OnDoorLockStateChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABP_DoorMaster_C*                            Door                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Locked                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DoorMaster_C::OnDoorLockStateChanged__DelegateSignature(class ABP_DoorMaster_C* Door, bool Locked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.OnDoorLockStateChanged__DelegateSignature");

	ABP_DoorMaster_C_OnDoorLockStateChanged__DelegateSignature_Params params {};
	params.Door = Door;
	params.Locked = Locked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_DoorMaster.BP_DoorMaster_C.OnFailedSecurityCheck__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABP_DoorMaster_C*                            Door                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DoorMaster_C::OnFailedSecurityCheck__DelegateSignature(class ABP_DoorMaster_C* Door)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DoorMaster.BP_DoorMaster_C.OnFailedSecurityCheck__DelegateSignature");

	ABP_DoorMaster_C_OnFailedSecurityCheck__DelegateSignature_Params params {};
	params.Door = Door;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
