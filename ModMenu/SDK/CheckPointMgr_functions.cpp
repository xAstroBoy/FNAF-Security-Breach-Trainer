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
//		Name   -> Function CheckPointMgr.CheckPointMgr_C.GetCanMove
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               CanMove                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACheckPointMgr_C::GetCanMove(bool* CanMove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CheckPointMgr.CheckPointMgr_C.GetCanMove");

	ACheckPointMgr_C_GetCanMove_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanMove != nullptr)
		*CanMove = params.CanMove;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CheckPointMgr.CheckPointMgr_C.PadRaceStats
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ACheckPointMgr_C::PadRaceStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CheckPointMgr.CheckPointMgr_C.PadRaceStats");

	ACheckPointMgr_C_PadRaceStats_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CheckPointMgr.CheckPointMgr_C.AIPossessPlayer
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerController*                           PC                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACheckPointMgr_C::AIPossessPlayer(class APlayerController* PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CheckPointMgr.CheckPointMgr_C.AIPossessPlayer");

	ACheckPointMgr_C_AIPossessPlayer_Params params {};
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CheckPointMgr.CheckPointMgr_C.DoGameEnd
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ACheckPointMgr_C::DoGameEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CheckPointMgr.CheckPointMgr_C.DoGameEnd");

	ACheckPointMgr_C_DoGameEnd_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CheckPointMgr.CheckPointMgr_C.RaceTimeTick
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ACheckPointMgr_C::RaceTimeTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CheckPointMgr.CheckPointMgr_C.RaceTimeTick");

	ACheckPointMgr_C_RaceTimeTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CheckPointMgr.CheckPointMgr_C._StartRace
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ACheckPointMgr_C::_StartRace()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CheckPointMgr.CheckPointMgr_C._StartRace");

	ACheckPointMgr_C__StartRace_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CheckPointMgr.CheckPointMgr_C.SpawnAnAI
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTransform                                  Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		class UClass*                                      GoKartType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UBehaviorTree*                               BehaviorTree                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACheckPointMgr_C::SpawnAnAI(const struct FTransform& Location, class UClass* GoKartType, class UBehaviorTree* BehaviorTree)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CheckPointMgr.CheckPointMgr_C.SpawnAnAI");

	ACheckPointMgr_C_SpawnAnAI_Params params {};
	params.Location = Location;
	params.GoKartType = GoKartType;
	params.BehaviorTree = BehaviorTree;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CheckPointMgr.CheckPointMgr_C.UpdateCheckpoint
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ACheckPoint_C*                               Actor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       CrossedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACheckPointMgr_C::UpdateCheckpoint(int ID, class ACheckPoint_C* Actor, class APawn* CrossedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CheckPointMgr.CheckPointMgr_C.UpdateCheckpoint");

	ACheckPointMgr_C_UpdateCheckpoint_Params params {};
	params.ID = ID;
	params.Actor = Actor;
	params.CrossedActor = CrossedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CheckPointMgr.CheckPointMgr_C.CheckShouldStart
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ACheckPointMgr_C::CheckShouldStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CheckPointMgr.CheckPointMgr_C.CheckShouldStart");

	ACheckPointMgr_C_CheckShouldStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CheckPointMgr.CheckPointMgr_C.SortPlayerPositions
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ACheckPointMgr_C::SortPlayerPositions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CheckPointMgr.CheckPointMgr_C.SortPlayerPositions");

	ACheckPointMgr_C_SortPlayerPositions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CheckPointMgr.CheckPointMgr_C.ResetStats
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class APawn*>                               Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void ACheckPointMgr_C::ResetStats(TArray<class APawn*>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CheckPointMgr.CheckPointMgr_C.ResetStats");

	ACheckPointMgr_C_ResetStats_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CheckPointMgr.CheckPointMgr_C.SetUpPlayers
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ACheckPointMgr_C::SetUpPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CheckPointMgr.CheckPointMgr_C.SetUpPlayers");

	ACheckPointMgr_C_SetUpPlayers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CheckPointMgr.CheckPointMgr_C.UpdateCheckpoints 
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ACheckPointMgr_C::UpdateCheckpoints_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CheckPointMgr.CheckPointMgr_C.UpdateCheckpoints ");

	ACheckPointMgr_C_UpdateCheckpoints__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CheckPointMgr.CheckPointMgr_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ACheckPointMgr_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CheckPointMgr.CheckPointMgr_C.UserConstructionScript");

	ACheckPointMgr_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CheckPointMgr.CheckPointMgr_C.CanMove
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               New_Can_Move                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACheckPointMgr_C::CanMove(bool New_Can_Move)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CheckPointMgr.CheckPointMgr_C.CanMove");

	ACheckPointMgr_C_CanMove_Params params {};
	params.New_Can_Move = New_Can_Move;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CheckPointMgr.CheckPointMgr_C.StartRaceCountdown
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              TimeTillStart                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACheckPointMgr_C::StartRaceCountdown(float TimeTillStart)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CheckPointMgr.CheckPointMgr_C.StartRaceCountdown");

	ACheckPointMgr_C_StartRaceCountdown_Params params {};
	params.TimeTillStart = TimeTillStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CheckPointMgr.CheckPointMgr_C.StartRace
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ACheckPointMgr_C::StartRace()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CheckPointMgr.CheckPointMgr_C.StartRace");

	ACheckPointMgr_C_StartRace_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CheckPointMgr.CheckPointMgr_C.EndRace
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ACheckPointMgr_C::EndRace()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CheckPointMgr.CheckPointMgr_C.EndRace");

	ACheckPointMgr_C_EndRace_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CheckPointMgr.CheckPointMgr_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ACheckPointMgr_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CheckPointMgr.CheckPointMgr_C.ReceiveBeginPlay");

	ACheckPointMgr_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CheckPointMgr.CheckPointMgr_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACheckPointMgr_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CheckPointMgr.CheckPointMgr_C.ReceiveTick");

	ACheckPointMgr_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CheckPointMgr.CheckPointMgr_C.BndEvt__StartSpot_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ACheckPointMgr_C::BndEvt__StartSpot_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CheckPointMgr.CheckPointMgr_C.BndEvt__StartSpot_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ACheckPointMgr_C_BndEvt__StartSpot_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
//		Name   -> Function CheckPointMgr.CheckPointMgr_C.GameEnd
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ACheckPointMgr_C::GameEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CheckPointMgr.CheckPointMgr_C.GameEnd");

	ACheckPointMgr_C_GameEnd_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CheckPointMgr.CheckPointMgr_C.ExecuteUbergraph_CheckPointMgr
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACheckPointMgr_C::ExecuteUbergraph_CheckPointMgr(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CheckPointMgr.CheckPointMgr_C.ExecuteUbergraph_CheckPointMgr");

	ACheckPointMgr_C_ExecuteUbergraph_CheckPointMgr_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
