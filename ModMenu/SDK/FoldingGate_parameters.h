#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function FoldingGate.FoldingGate_C.HasDoorInitialized
struct AFoldingGate_C_HasDoorInitialized_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function FoldingGate.FoldingGate_C.IsDoorLockedForAI
struct AFoldingGate_C_IsDoorLockedForAI_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function FoldingGate.FoldingGate_C.IsDoorLockedForPlayer
struct AFoldingGate_C_IsDoorLockedForPlayer_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function FoldingGate.FoldingGate_C.IsDoorOpen
struct AFoldingGate_C_IsDoorOpen_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function FoldingGate.FoldingGate_C.OnStoreGameData
struct AFoldingGate_C_OnStoreGameData_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FoldingGate.FoldingGate_C.PostSaveGame
struct AFoldingGate_C_PostSaveGame_Params
{
};

// Function FoldingGate.FoldingGate_C.SetDoorLockAI
struct AFoldingGate_C_SetDoorLockAI_Params
{
	bool                                               Lock;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FoldingGate.FoldingGate_C.SetDoorLockPlayer
struct AFoldingGate_C_SetDoorLockPlayer_Params
{
	bool                                               Lock;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FoldingGate.FoldingGate_C.SetDoorRequiredItem
struct AFoldingGate_C_SetDoorRequiredItem_Params
{
	struct FName                                       ItemName;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FoldingGate.FoldingGate_C.SetSecurityLevel
struct AFoldingGate_C_SetSecurityLevel_Params
{
	int                                                NewSecurityLevel;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FoldingGate.FoldingGate_C.ReceiveBeginPlay
struct AFoldingGate_C_ReceiveBeginPlay_Params
{
};

// Function FoldingGate.FoldingGate_C.ForceDoorOpen
struct AFoldingGate_C_ForceDoorOpen_Params
{
};

// Function FoldingGate.FoldingGate_C.BndEvt__AIInteraction_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AFoldingGate_C_BndEvt__AIInteraction_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function FoldingGate.FoldingGate_C.BndEvt__AIInteraction_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct AFoldingGate_C_BndEvt__AIInteraction_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FoldingGate.FoldingGate_C.ForceDoorClose
struct AFoldingGate_C_ForceDoorClose_Params
{
};

// Function FoldingGate.FoldingGate_C.Open For AI
struct AFoldingGate_C_Open_For_AI_Params
{
};

// Function FoldingGate.FoldingGate_C.Close For AI
struct AFoldingGate_C_Close_For_AI_Params
{
};

// Function FoldingGate.FoldingGate_C.OnGameDataLoaded
struct AFoldingGate_C_OnGameDataLoaded_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FoldingGate.FoldingGate_C.OnCheckpointLoad
struct AFoldingGate_C_OnCheckpointLoad_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FoldingGate.FoldingGate_C.PostGameLoad
struct AFoldingGate_C_PostGameLoad_Params
{
};

// Function FoldingGate.FoldingGate_C.OnCheckpointSave
struct AFoldingGate_C_OnCheckpointSave_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FoldingGate.FoldingGate_C.ExecuteUbergraph_FoldingGate
struct AFoldingGate_C_ExecuteUbergraph_FoldingGate_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
