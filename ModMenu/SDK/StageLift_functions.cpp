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
//		Name   -> Function StageLift.StageLift_C.UpdateActorPosition
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ACharacter*                                  Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStageLift_C::UpdateActorPosition(class ACharacter* Character, const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StageLift.StageLift_C.UpdateActorPosition");

	AStageLift_C_UpdateActorPosition_Params params {};
	params.Character = Character;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StageLift.StageLift_C.UserConstructionScript
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void AStageLift_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StageLift.StageLift_C.UserConstructionScript");

	AStageLift_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StageLift.StageLift_C.MoveTimeline__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AStageLift_C::MoveTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StageLift.StageLift_C.MoveTimeline__FinishedFunc");

	AStageLift_C_MoveTimeline__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StageLift.StageLift_C.MoveTimeline__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AStageLift_C::MoveTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StageLift.StageLift_C.MoveTimeline__UpdateFunc");

	AStageLift_C_MoveTimeline__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StageLift.StageLift_C.RailingTimeline__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AStageLift_C::RailingTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StageLift.StageLift_C.RailingTimeline__FinishedFunc");

	AStageLift_C_RailingTimeline__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StageLift.StageLift_C.RailingTimeline__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AStageLift_C::RailingTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StageLift.StageLift_C.RailingTimeline__UpdateFunc");

	AStageLift_C_RailingTimeline__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StageLift.StageLift_C.OnCheckpointSave
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStageLift_C::OnCheckpointSave(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StageLift.StageLift_C.OnCheckpointSave");

	AStageLift_C_OnCheckpointSave_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StageLift.StageLift_C.OnGameDataLoaded
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStageLift_C::OnGameDataLoaded(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StageLift.StageLift_C.OnGameDataLoaded");

	AStageLift_C_OnGameDataLoaded_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StageLift.StageLift_C.OnStoreGameData
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStageLift_C::OnStoreGameData(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StageLift.StageLift_C.OnStoreGameData");

	AStageLift_C_OnStoreGameData_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StageLift.StageLift_C.PostGameLoad
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AStageLift_C::PostGameLoad()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StageLift.StageLift_C.PostGameLoad");

	AStageLift_C_PostGameLoad_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StageLift.StageLift_C.PostSaveGame
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AStageLift_C::PostSaveGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StageLift.StageLift_C.PostSaveGame");

	AStageLift_C_PostSaveGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StageLift.StageLift_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AStageLift_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StageLift.StageLift_C.ReceiveBeginPlay");

	AStageLift_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StageLift.StageLift_C.Move
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AStageLift_C::Move()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StageLift.StageLift_C.Move");

	AStageLift_C_Move_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StageLift.StageLift_C.Set Movement Time
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              NewTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStageLift_C::Set_Movement_Time(float NewTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StageLift.StageLift_C.Set Movement Time");

	AStageLift_C_Set_Movement_Time_Params params {};
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StageLift.StageLift_C.Set To Top
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AStageLift_C::Set_To_Top()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StageLift.StageLift_C.Set To Top");

	AStageLift_C_Set_To_Top_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StageLift.StageLift_C.Set To Bottom
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AStageLift_C::Set_To_Bottom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StageLift.StageLift_C.Set To Bottom");

	AStageLift_C_Set_To_Bottom_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StageLift.StageLift_C.OnStageLiftTimerRunsOut
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AStageLift_C::OnStageLiftTimerRunsOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StageLift.StageLift_C.OnStageLiftTimerRunsOut");

	AStageLift_C_OnStageLiftTimerRunsOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StageLift.StageLift_C.On Debug Skip
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FName>                               SkippedTasks                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void AStageLift_C::On_Debug_Skip(TArray<struct FName>* SkippedTasks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StageLift.StageLift_C.On Debug Skip");

	AStageLift_C_On_Debug_Skip_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SkippedTasks != nullptr)
		*SkippedTasks = params.SkippedTasks;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StageLift.StageLift_C.OnCheckpointLoad
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStageLift_C::OnCheckpointLoad(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StageLift.StageLift_C.OnCheckpointLoad");

	AStageLift_C_OnCheckpointLoad_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StageLift.StageLift_C.Update State
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AStageLift_C::Update_State()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StageLift.StageLift_C.Update State");

	AStageLift_C_Update_State_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StageLift.StageLift_C.ExecuteUbergraph_StageLift
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStageLift_C::ExecuteUbergraph_StageLift(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StageLift.StageLift_C.ExecuteUbergraph_StageLift");

	AStageLift_C_ExecuteUbergraph_StageLift_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
