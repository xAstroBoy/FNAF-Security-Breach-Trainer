﻿// Name: FNAF Security Breach, Version: 1

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
//		Name   -> Function CautionBot.CautionBot_C.DoorEntryNotAllowed
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UDoorComponent*                              DoorComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ACautionBot_C::DoorEntryNotAllowed(class UDoorComponent* DoorComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.DoorEntryNotAllowed");

	ACautionBot_C_DoorEntryNotAllowed_Params params {};
	params.DoorComponent = DoorComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBot.CautionBot_C.GetStartTurnTowardsEvent
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAkAudioEvent*                               StartTurnTowards                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACautionBot_C::GetStartTurnTowardsEvent(class UAkAudioEvent** StartTurnTowards)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.GetStartTurnTowardsEvent");

	ACautionBot_C_GetStartTurnTowardsEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StartTurnTowards != nullptr)
		*StartTurnTowards = params.StartTurnTowards;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBot.CautionBot_C.GetEndTurnTowardsEvent
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAkAudioEvent*                               EndTurnTowards                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACautionBot_C::GetEndTurnTowardsEvent(class UAkAudioEvent** EndTurnTowards)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.GetEndTurnTowardsEvent");

	ACautionBot_C_GetEndTurnTowardsEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EndTurnTowards != nullptr)
		*EndTurnTowards = params.EndTurnTowards;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBot.CautionBot_C.GetAlertInfo
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<fnaf9_EFNAFAISpawnType>                     TypesToAlert                                               (Parm, OutParm, HasGetValueTypeHash)
//		int                                                NumberOfAlerts                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACautionBot_C::GetAlertInfo(TArray<fnaf9_EFNAFAISpawnType>* TypesToAlert, int* NumberOfAlerts)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.GetAlertInfo");

	ACautionBot_C_GetAlertInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TypesToAlert != nullptr)
		*TypesToAlert = params.TypesToAlert;
	if (NumberOfAlerts != nullptr)
		*NumberOfAlerts = params.NumberOfAlerts;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBot.CautionBot_C.IsWarningFinished
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Finished                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACautionBot_C::IsWarningFinished(bool* Finished)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.IsWarningFinished");

	ACautionBot_C_IsWarningFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Finished != nullptr)
		*Finished = params.Finished;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBot.CautionBot_C.SetAlertInfo
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<fnaf9_EFNAFAISpawnType>                     TypesToAlert                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		int                                                NumberOfAlerts                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACautionBot_C::SetAlertInfo(TArray<fnaf9_EFNAFAISpawnType> TypesToAlert, int NumberOfAlerts)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.SetAlertInfo");

	ACautionBot_C_SetAlertInfo_Params params {};
	params.TypesToAlert = TypesToAlert;
	params.NumberOfAlerts = NumberOfAlerts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBot.CautionBot_C.ForceKill
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Animate_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACautionBot_C::ForceKill(bool Animate_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.ForceKill");

	ACautionBot_C_ForceKill_Params params {};
	params.Animate_ = Animate_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBot.CautionBot_C.GameStart
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ACautionBot_C::GameStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.GameStart");

	ACautionBot_C_GameStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBot.CautionBot_C.GameEnd
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ACautionBot_C::GameEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.GameEnd");

	ACautionBot_C_GameEnd_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBot.CautionBot_C.GameExit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ACautionBot_C::GameExit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.GameExit");

	ACautionBot_C_GameExit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBot.CautionBot_C.PlayerHit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ACautionBot_C::PlayerHit(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.PlayerHit");

	ACautionBot_C_PlayerHit_Params params {};
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBot.CautionBot_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ACautionBot_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.ReceiveBeginPlay");

	ACautionBot_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBot.CautionBot_C.ReceiveEndPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACautionBot_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.ReceiveEndPlay");

	ACautionBot_C_ReceiveEndPlay_Params params {};
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBot.CautionBot_C.LaserHit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AEQ_LaserGun_C*                              Gun                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ACautionBot_C::LaserHit(class AEQ_LaserGun_C* Gun, const struct FHitResult& HitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.LaserHit");

	ACautionBot_C_LaserHit_Params params {};
	params.Gun = Gun;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBot.CautionBot_C.Start Alert
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       Alert                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACautionBot_C::Start_Alert(const struct FName& Alert)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.Start Alert");

	ACautionBot_C_Start_Alert_Params params {};
	params.Alert = Alert;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBot.CautionBot_C.Start Movement
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ACautionBot_C::Start_Movement()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.Start Movement");

	ACautionBot_C_Start_Movement_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBot.CautionBot_C.Stop Warning
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ACautionBot_C::Stop_Warning()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.Stop Warning");

	ACautionBot_C_Stop_Warning_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBot.CautionBot_C.End Movement
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ACautionBot_C::End_Movement()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.End Movement");

	ACautionBot_C_End_Movement_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBot.CautionBot_C.Start Head Movement
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ACautionBot_C::Start_Head_Movement()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.Start Head Movement");

	ACautionBot_C_Start_Head_Movement_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBot.CautionBot_C.Start Warning
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                WarningCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACautionBot_C::Start_Warning(int WarningCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.Start Warning");

	ACautionBot_C_Start_Warning_Params params {};
	params.WarningCount = WarningCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBot.CautionBot_C.End Head Movement
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ACautionBot_C::End_Head_Movement()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.End Head Movement");

	ACautionBot_C_End_Head_Movement_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBot.CautionBot_C.Stop Alert
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       Alert                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACautionBot_C::Stop_Alert(const struct FName& Alert)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.Stop Alert");

	ACautionBot_C_Stop_Alert_Params params {};
	params.Alert = Alert;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBot.CautionBot_C.Start Arm Movement
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ACautionBot_C::Start_Arm_Movement()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.Start Arm Movement");

	ACautionBot_C_Start_Arm_Movement_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBot.CautionBot_C.End Arm Movement
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ACautionBot_C::End_Arm_Movement()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.End Arm Movement");

	ACautionBot_C_End_Arm_Movement_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBot.CautionBot_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACautionBot_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.ReceiveTick");

	ACautionBot_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBot.CautionBot_C.OnOverlappedDoor
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bCanEnterDoor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		fnaf9_EConditionFailReason                         CantEnterReason                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UDoorComponent*                              DoorComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACautionBot_C::OnOverlappedDoor(bool bCanEnterDoor, fnaf9_EConditionFailReason CantEnterReason, class UDoorComponent* DoorComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.OnOverlappedDoor");

	ACautionBot_C_OnOverlappedDoor_Params params {};
	params.bCanEnterDoor = bCanEnterDoor;
	params.CantEnterReason = CantEnterReason;
	params.DoorComponent = DoorComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBot.CautionBot_C.OnEndOverlapDoor
//		Flags  -> (Event, Public, BlueprintEvent)
void ACautionBot_C::OnEndOverlapDoor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.OnEndOverlapDoor");

	ACautionBot_C_OnEndOverlapDoor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBot.CautionBot_C.ExecuteUbergraph_CautionBot
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACautionBot_C::ExecuteUbergraph_CautionBot(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBot.CautionBot_C.ExecuteUbergraph_CautionBot");

	ACautionBot_C_ExecuteUbergraph_CautionBot_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
