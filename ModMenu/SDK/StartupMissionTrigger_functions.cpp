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
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.CanDeactivate
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               CanDeactivate                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AStartupMissionTrigger_C::CanDeactivate(bool* CanDeactivate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.CanDeactivate");

	AStartupMissionTrigger_C_CanDeactivate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanDeactivate != nullptr)
		*CanDeactivate = params.CanDeactivate;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.GetActivatableState
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<ActivatableState_EActivatableState>    CurrentState                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStartupMissionTrigger_C::GetActivatableState(class AActor* Activator, TEnumAsByte<ActivatableState_EActivatableState>* CurrentState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.GetActivatableState");

	AStartupMissionTrigger_C_GetActivatableState_Params params {};
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentState != nullptr)
		*CurrentState = params.CurrentState;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.CanActivate
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               CanActivate                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStartupMissionTrigger_C::CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.CanActivate");

	AStartupMissionTrigger_C_CanActivate_Params params {};
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
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.Check Destroy Intro
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Destroyed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AStartupMissionTrigger_C::Check_Destroy_Intro(bool* Destroyed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.Check Destroy Intro");

	AStartupMissionTrigger_C_Check_Destroy_Intro_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Destroyed != nullptr)
		*Destroyed = params.Destroyed;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.SetReflection
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               UseCapture                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AStartupMissionTrigger_C::SetReflection(bool UseCapture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.SetReflection");

	AStartupMissionTrigger_C_SetReflection_Params params {};
	params.UseCapture = UseCapture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.OnActivatorDone
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStartupMissionTrigger_C::OnActivatorDone(class AActor* Activator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.OnActivatorDone");

	AStartupMissionTrigger_C_OnActivatorDone_Params params {};
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.SetActivated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AStartupMissionTrigger_C::SetActivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.SetActivated");

	AStartupMissionTrigger_C_SetActivated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.DeactivateObject
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Deactivator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStartupMissionTrigger_C::DeactivateObject(class AActor* Deactivator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.DeactivateObject");

	AStartupMissionTrigger_C_DeactivateObject_Params params {};
	params.Deactivator = Deactivator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.SetDeactivated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AStartupMissionTrigger_C::SetDeactivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.SetDeactivated");

	AStartupMissionTrigger_C_SetDeactivated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.ActivateObject
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStartupMissionTrigger_C::ActivateObject(class AActor* Activator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.ActivateObject");

	AStartupMissionTrigger_C_ActivateObject_Params params {};
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.On Possess
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStartupMissionTrigger_C::On_Possess(class APawn* PossessedPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.On Possess");

	AStartupMissionTrigger_C_On_Possess_Params params {};
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.Start New Game Mission
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AStartupMissionTrigger_C::Start_New_Game_Mission()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.Start New Game Mission");

	AStartupMissionTrigger_C_Start_New_Game_Mission_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AStartupMissionTrigger_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.ReceiveBeginPlay");

	AStartupMissionTrigger_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__VanessaRemoveBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AStartupMissionTrigger_C::BndEvt__VanessaRemoveBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__VanessaRemoveBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AStartupMissionTrigger_C_BndEvt__VanessaRemoveBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__LookOutWindowTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AStartupMissionTrigger_C::BndEvt__LookOutWindowTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__LookOutWindowTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	AStartupMissionTrigger_C_BndEvt__LookOutWindowTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.On Fazwatch Collected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AStartupMissionTrigger_C::On_Fazwatch_Collected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.On Fazwatch Collected");

	AStartupMissionTrigger_C_On_Fazwatch_Collected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.Back Door Open
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AStartupMissionTrigger_C::Back_Door_Open()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.Back Door Open");

	AStartupMissionTrigger_C_Back_Door_Open_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.On Side Door Entered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UDoorComponent*                              DoorComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bPassedDoorCheck                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		fnaf9_EConditionFailReason                         FailReason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStartupMissionTrigger_C::On_Side_Door_Entered(class UDoorComponent* DoorComponent, class APawn* Pawn, bool bPassedDoorCheck, fnaf9_EConditionFailReason FailReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.On Side Door Entered");

	AStartupMissionTrigger_C_On_Side_Door_Entered_Params params {};
	params.DoorComponent = DoorComponent;
	params.Pawn = Pawn;
	params.bPassedDoorCheck = bPassedDoorCheck;
	params.FailReason = FailReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.Enable Door Trigger
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AStartupMissionTrigger_C::Enable_Door_Trigger()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.Enable Door Trigger");

	AStartupMissionTrigger_C_Enable_Door_Trigger_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.Wrong Door
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      OverlappedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStartupMissionTrigger_C::Wrong_Door(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.Wrong Door");

	AStartupMissionTrigger_C_Wrong_Door_Params params {};
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.Vanessa Spawn
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AStartupMissionTrigger_C::Vanessa_Spawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.Vanessa Spawn");

	AStartupMissionTrigger_C_Vanessa_Spawn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.On Debug Skipped
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FName>                               SkippedTasks                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void AStartupMissionTrigger_C::On_Debug_Skipped(TArray<struct FName> SkippedTasks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.On Debug Skipped");

	AStartupMissionTrigger_C_On_Debug_Skipped_Params params {};
	params.SkippedTasks = SkippedTasks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.GregoryScared
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AStartupMissionTrigger_C::GregoryScared()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.GregoryScared");

	AStartupMissionTrigger_C_GregoryScared_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.Return Rotation
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AStartupMissionTrigger_C::Return_Rotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.Return Rotation");

	AStartupMissionTrigger_C_Return_Rotation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__RotationThreshold_K2Node_ComponentBoundEvent_1_OnRotationThresholdReached__DelegateSignature
//		Flags  -> (BlueprintEvent)
void AStartupMissionTrigger_C::BndEvt__RotationThreshold_K2Node_ComponentBoundEvent_1_OnRotationThresholdReached__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__RotationThreshold_K2Node_ComponentBoundEvent_1_OnRotationThresholdReached__DelegateSignature");

	AStartupMissionTrigger_C_BndEvt__RotationThreshold_K2Node_ComponentBoundEvent_1_OnRotationThresholdReached__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__LeftRotationThreshold_K2Node_ComponentBoundEvent_3_OnThresholdReached__DelegateSignature
//		Flags  -> (BlueprintEvent)
void AStartupMissionTrigger_C::BndEvt__LeftRotationThreshold_K2Node_ComponentBoundEvent_3_OnThresholdReached__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__LeftRotationThreshold_K2Node_ComponentBoundEvent_3_OnThresholdReached__DelegateSignature");

	AStartupMissionTrigger_C_BndEvt__LeftRotationThreshold_K2Node_ComponentBoundEvent_3_OnThresholdReached__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__RightRotationThreshold_K2Node_ComponentBoundEvent_4_OnThresholdReached__DelegateSignature
//		Flags  -> (BlueprintEvent)
void AStartupMissionTrigger_C::BndEvt__RightRotationThreshold_K2Node_ComponentBoundEvent_4_OnThresholdReached__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__RightRotationThreshold_K2Node_ComponentBoundEvent_4_OnThresholdReached__DelegateSignature");

	AStartupMissionTrigger_C_BndEvt__RightRotationThreshold_K2Node_ComponentBoundEvent_4_OnThresholdReached__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__DownRotationThreshold_K2Node_ComponentBoundEvent_5_OnThresholdReached__DelegateSignature
//		Flags  -> (BlueprintEvent)
void AStartupMissionTrigger_C::BndEvt__DownRotationThreshold_K2Node_ComponentBoundEvent_5_OnThresholdReached__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__DownRotationThreshold_K2Node_ComponentBoundEvent_5_OnThresholdReached__DelegateSignature");

	AStartupMissionTrigger_C_BndEvt__DownRotationThreshold_K2Node_ComponentBoundEvent_5_OnThresholdReached__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__UpRotationThreshold_K2Node_ComponentBoundEvent_6_OnThresholdReached__DelegateSignature
//		Flags  -> (BlueprintEvent)
void AStartupMissionTrigger_C::BndEvt__UpRotationThreshold_K2Node_ComponentBoundEvent_6_OnThresholdReached__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__UpRotationThreshold_K2Node_ComponentBoundEvent_6_OnThresholdReached__DelegateSignature");

	AStartupMissionTrigger_C_BndEvt__UpRotationThreshold_K2Node_ComponentBoundEvent_6_OnThresholdReached__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.On Freddy Exited
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AStartupMissionTrigger_C::On_Freddy_Exited()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.On Freddy Exited");

	AStartupMissionTrigger_C_On_Freddy_Exited_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.On Player Possessed Gregory
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStartupMissionTrigger_C::On_Player_Possessed_Gregory(class APawn* PossessedPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.On Player Possessed Gregory");

	AStartupMissionTrigger_C_On_Player_Possessed_Gregory_Params params {};
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.Skip All
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AStartupMissionTrigger_C::Skip_All()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.Skip All");

	AStartupMissionTrigger_C_Skip_All_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.Continue from save after door
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AStartupMissionTrigger_C::Continue_from_save_after_door()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.Continue from save after door");

	AStartupMissionTrigger_C_Continue_from_save_after_door_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.Bind Posses for Finish
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AStartupMissionTrigger_C::Bind_Posses_for_Finish()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.Bind Posses for Finish");

	AStartupMissionTrigger_C_Bind_Posses_for_Finish_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.ExecuteUbergraph_StartupMissionTrigger
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStartupMissionTrigger_C::ExecuteUbergraph_StartupMissionTrigger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.ExecuteUbergraph_StartupMissionTrigger");

	AStartupMissionTrigger_C_ExecuteUbergraph_StartupMissionTrigger_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
