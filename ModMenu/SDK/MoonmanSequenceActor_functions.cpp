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
//		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnCheckpointSave
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMoonmanSequenceActor_C::OnCheckpointSave(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnCheckpointSave");

	AMoonmanSequenceActor_C_OnCheckpointSave_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnGameDataLoaded
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMoonmanSequenceActor_C::OnGameDataLoaded(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnGameDataLoaded");

	AMoonmanSequenceActor_C_OnGameDataLoaded_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnStoreGameData
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMoonmanSequenceActor_C::OnStoreGameData(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnStoreGameData");

	AMoonmanSequenceActor_C_OnStoreGameData_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.PostSaveGame
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AMoonmanSequenceActor_C::PostSaveGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.PostSaveGame");

	AMoonmanSequenceActor_C_PostSaveGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AMoonmanSequenceActor_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.ReceiveBeginPlay");

	AMoonmanSequenceActor_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMoonmanSequenceActor_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.ReceiveTick");

	AMoonmanSequenceActor_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.EyeBlinkSetup
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AMoonmanSequenceActor_C::EyeBlinkSetup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.EyeBlinkSetup");

	AMoonmanSequenceActor_C_EyeBlinkSetup_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnDestroySelf
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AMoonmanSequenceActor_C::OnDestroySelf()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnDestroySelf");

	AMoonmanSequenceActor_C_OnDestroySelf_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnDeathSequence
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AMoonmanSequenceActor_C::OnDeathSequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnDeathSequence");

	AMoonmanSequenceActor_C_OnDeathSequence_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnDebugVis
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMoonmanSequenceActor_C::OnDebugVis(bool enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnDebugVis");

	AMoonmanSequenceActor_C_OnDebugVis_Params params {};
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.PostGameLoad
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AMoonmanSequenceActor_C::PostGameLoad()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.PostGameLoad");

	AMoonmanSequenceActor_C_PostGameLoad_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnCheckpointLoad
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMoonmanSequenceActor_C::OnCheckpointLoad(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnCheckpointLoad");

	AMoonmanSequenceActor_C_OnCheckpointLoad_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.EyesShut1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AMoonmanSequenceActor_C::EyesShut1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.EyesShut1");

	AMoonmanSequenceActor_C_EyesShut1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.ExecuteUbergraph_MoonmanSequenceActor
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMoonmanSequenceActor_C::ExecuteUbergraph_MoonmanSequenceActor(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.ExecuteUbergraph_MoonmanSequenceActor");

	AMoonmanSequenceActor_C_ExecuteUbergraph_MoonmanSequenceActor_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
