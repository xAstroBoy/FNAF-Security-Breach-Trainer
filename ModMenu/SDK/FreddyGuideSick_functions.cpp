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
//		Name   -> Function FreddyGuideSick.FreddyGuideSick_C.GetCurrentPatrolPointIndex
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int AFreddyGuideSick_C::GetCurrentPatrolPointIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FreddyGuideSick.FreddyGuideSick_C.GetCurrentPatrolPointIndex");

	AFreddyGuideSick_C_GetCurrentPatrolPointIndex_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FreddyGuideSick.FreddyGuideSick_C.GetPatrolPath
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
void AFreddyGuideSick_C::GetPatrolPath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FreddyGuideSick.FreddyGuideSick_C.GetPatrolPath");

	AFreddyGuideSick_C_GetPatrolPath_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FreddyGuideSick.FreddyGuideSick_C.OnCheckpointLoad
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFreddyGuideSick_C::OnCheckpointLoad(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FreddyGuideSick.FreddyGuideSick_C.OnCheckpointLoad");

	AFreddyGuideSick_C_OnCheckpointLoad_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FreddyGuideSick.FreddyGuideSick_C.OnCheckpointSave
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFreddyGuideSick_C::OnCheckpointSave(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FreddyGuideSick.FreddyGuideSick_C.OnCheckpointSave");

	AFreddyGuideSick_C_OnCheckpointSave_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FreddyGuideSick.FreddyGuideSick_C.OnGameDataLoaded
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFreddyGuideSick_C::OnGameDataLoaded(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FreddyGuideSick.FreddyGuideSick_C.OnGameDataLoaded");

	AFreddyGuideSick_C_OnGameDataLoaded_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FreddyGuideSick.FreddyGuideSick_C.PostGameLoad
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AFreddyGuideSick_C::PostGameLoad()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FreddyGuideSick.FreddyGuideSick_C.PostGameLoad");

	AFreddyGuideSick_C_PostGameLoad_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FreddyGuideSick.FreddyGuideSick_C.PostSaveGame
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AFreddyGuideSick_C::PostSaveGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FreddyGuideSick.FreddyGuideSick_C.PostSaveGame");

	AFreddyGuideSick_C_PostSaveGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FreddyGuideSick.FreddyGuideSick_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AFreddyGuideSick_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FreddyGuideSick.FreddyGuideSick_C.ReceiveBeginPlay");

	AFreddyGuideSick_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FreddyGuideSick.FreddyGuideSick_C.Try Entering
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFreddyGuideSick_C::Try_Entering()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FreddyGuideSick.FreddyGuideSick_C.Try Entering");

	AFreddyGuideSick_C_Try_Entering_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FreddyGuideSick.FreddyGuideSick_C.SetPatrolPath
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
void AFreddyGuideSick_C::SetPatrolPath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FreddyGuideSick.FreddyGuideSick_C.SetPatrolPath");

	AFreddyGuideSick_C_SetPatrolPath_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FreddyGuideSick.FreddyGuideSick_C.SetCurrentPatrolPointIndex
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PatrolPointIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFreddyGuideSick_C::SetCurrentPatrolPointIndex(int PatrolPointIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FreddyGuideSick.FreddyGuideSick_C.SetCurrentPatrolPointIndex");

	AFreddyGuideSick_C_SetCurrentPatrolPointIndex_Params params {};
	params.PatrolPointIndex = PatrolPointIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FreddyGuideSick.FreddyGuideSick_C.OnStoreGameData
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFreddyGuideSick_C::OnStoreGameData(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FreddyGuideSick.FreddyGuideSick_C.OnStoreGameData");

	AFreddyGuideSick_C_OnStoreGameData_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FreddyGuideSick.FreddyGuideSick_C.ExecuteUbergraph_FreddyGuideSick
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFreddyGuideSick_C::ExecuteUbergraph_FreddyGuideSick(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FreddyGuideSick.FreddyGuideSick_C.ExecuteUbergraph_FreddyGuideSick");

	AFreddyGuideSick_C_ExecuteUbergraph_FreddyGuideSick_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
