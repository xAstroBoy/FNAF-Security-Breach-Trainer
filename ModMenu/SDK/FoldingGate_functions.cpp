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
//		Name   -> Function FoldingGate.FoldingGate_C.HasDoorInitialized
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AFoldingGate_C::HasDoorInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FoldingGate.FoldingGate_C.HasDoorInitialized");

	AFoldingGate_C_HasDoorInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FoldingGate.FoldingGate_C.IsDoorLockedForAI
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AFoldingGate_C::IsDoorLockedForAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FoldingGate.FoldingGate_C.IsDoorLockedForAI");

	AFoldingGate_C_IsDoorLockedForAI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FoldingGate.FoldingGate_C.IsDoorLockedForPlayer
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AFoldingGate_C::IsDoorLockedForPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FoldingGate.FoldingGate_C.IsDoorLockedForPlayer");

	AFoldingGate_C_IsDoorLockedForPlayer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FoldingGate.FoldingGate_C.IsDoorOpen
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AFoldingGate_C::IsDoorOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FoldingGate.FoldingGate_C.IsDoorOpen");

	AFoldingGate_C_IsDoorOpen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FoldingGate.FoldingGate_C.OnStoreGameData
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFoldingGate_C::OnStoreGameData(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FoldingGate.FoldingGate_C.OnStoreGameData");

	AFoldingGate_C_OnStoreGameData_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FoldingGate.FoldingGate_C.PostSaveGame
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AFoldingGate_C::PostSaveGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FoldingGate.FoldingGate_C.PostSaveGame");

	AFoldingGate_C_PostSaveGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FoldingGate.FoldingGate_C.SetDoorLockAI
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Lock                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFoldingGate_C::SetDoorLockAI(bool Lock)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FoldingGate.FoldingGate_C.SetDoorLockAI");

	AFoldingGate_C_SetDoorLockAI_Params params {};
	params.Lock = Lock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FoldingGate.FoldingGate_C.SetDoorLockPlayer
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Lock                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFoldingGate_C::SetDoorLockPlayer(bool Lock)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FoldingGate.FoldingGate_C.SetDoorLockPlayer");

	AFoldingGate_C_SetDoorLockPlayer_Params params {};
	params.Lock = Lock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FoldingGate.FoldingGate_C.SetDoorRequiredItem
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFoldingGate_C::SetDoorRequiredItem(const struct FName& ItemName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FoldingGate.FoldingGate_C.SetDoorRequiredItem");

	AFoldingGate_C_SetDoorRequiredItem_Params params {};
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FoldingGate.FoldingGate_C.SetSecurityLevel
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewSecurityLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFoldingGate_C::SetSecurityLevel(int NewSecurityLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FoldingGate.FoldingGate_C.SetSecurityLevel");

	AFoldingGate_C_SetSecurityLevel_Params params {};
	params.NewSecurityLevel = NewSecurityLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FoldingGate.FoldingGate_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AFoldingGate_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FoldingGate.FoldingGate_C.ReceiveBeginPlay");

	AFoldingGate_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FoldingGate.FoldingGate_C.ForceDoorOpen
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AFoldingGate_C::ForceDoorOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FoldingGate.FoldingGate_C.ForceDoorOpen");

	AFoldingGate_C_ForceDoorOpen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FoldingGate.FoldingGate_C.BndEvt__AIInteraction_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AFoldingGate_C::BndEvt__AIInteraction_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FoldingGate.FoldingGate_C.BndEvt__AIInteraction_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AFoldingGate_C_BndEvt__AIInteraction_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
//		Name   -> Function FoldingGate.FoldingGate_C.BndEvt__AIInteraction_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFoldingGate_C::BndEvt__AIInteraction_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FoldingGate.FoldingGate_C.BndEvt__AIInteraction_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	AFoldingGate_C_BndEvt__AIInteraction_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
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
//		Name   -> Function FoldingGate.FoldingGate_C.ForceDoorClose
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AFoldingGate_C::ForceDoorClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FoldingGate.FoldingGate_C.ForceDoorClose");

	AFoldingGate_C_ForceDoorClose_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FoldingGate.FoldingGate_C.Open For AI
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFoldingGate_C::Open_For_AI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FoldingGate.FoldingGate_C.Open For AI");

	AFoldingGate_C_Open_For_AI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FoldingGate.FoldingGate_C.Close For AI
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFoldingGate_C::Close_For_AI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FoldingGate.FoldingGate_C.Close For AI");

	AFoldingGate_C_Close_For_AI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FoldingGate.FoldingGate_C.OnGameDataLoaded
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFoldingGate_C::OnGameDataLoaded(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FoldingGate.FoldingGate_C.OnGameDataLoaded");

	AFoldingGate_C_OnGameDataLoaded_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FoldingGate.FoldingGate_C.OnCheckpointLoad
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFoldingGate_C::OnCheckpointLoad(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FoldingGate.FoldingGate_C.OnCheckpointLoad");

	AFoldingGate_C_OnCheckpointLoad_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FoldingGate.FoldingGate_C.PostGameLoad
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AFoldingGate_C::PostGameLoad()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FoldingGate.FoldingGate_C.PostGameLoad");

	AFoldingGate_C_PostGameLoad_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FoldingGate.FoldingGate_C.OnCheckpointSave
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFoldingGate_C::OnCheckpointSave(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FoldingGate.FoldingGate_C.OnCheckpointSave");

	AFoldingGate_C_OnCheckpointSave_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FoldingGate.FoldingGate_C.ExecuteUbergraph_FoldingGate
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFoldingGate_C::ExecuteUbergraph_FoldingGate(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FoldingGate.FoldingGate_C.ExecuteUbergraph_FoldingGate");

	AFoldingGate_C_ExecuteUbergraph_FoldingGate_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
