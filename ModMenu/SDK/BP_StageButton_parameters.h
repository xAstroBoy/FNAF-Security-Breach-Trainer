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

// Function BP_StageButton.BP_StageButton_C.GetButton
struct ABP_StageButton_C_GetButton_Params
{
	class ABasicButton_C*                              AsBasic_Button;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StageButton.BP_StageButton_C.UserConstructionScript
struct ABP_StageButton_C_UserConstructionScript_Params
{
};

// Function BP_StageButton.BP_StageButton_C.Up->Down__FinishedFunc
struct ABP_StageButton_C_Up__Down__FinishedFunc_Params
{
};

// Function BP_StageButton.BP_StageButton_C.Up->Down__UpdateFunc
struct ABP_StageButton_C_Up__Down__UpdateFunc_Params
{
};

// Function BP_StageButton.BP_StageButton_C.Down->Up__FinishedFunc
struct ABP_StageButton_C_Down__Up__FinishedFunc_Params
{
};

// Function BP_StageButton.BP_StageButton_C.Down->Up__UpdateFunc
struct ABP_StageButton_C_Down__Up__UpdateFunc_Params
{
};

// Function BP_StageButton.BP_StageButton_C.PostSaveGame
struct ABP_StageButton_C_PostSaveGame_Params
{
};

// Function BP_StageButton.BP_StageButton_C.OnStoreGameData
struct ABP_StageButton_C_OnStoreGameData_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StageButton.BP_StageButton_C.OnGameDataLoaded
struct ABP_StageButton_C_OnGameDataLoaded_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StageButton.BP_StageButton_C.MoveDown
struct ABP_StageButton_C_MoveDown_Params
{
};

// Function BP_StageButton.BP_StageButton_C.MoveUp
struct ABP_StageButton_C_MoveUp_Params
{
};

// Function BP_StageButton.BP_StageButton_C.ChangeColor
struct ABP_StageButton_C_ChangeColor_Params
{
	bool                                               ChangeColor;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_StageButton.BP_StageButton_C.OnCheckpointSave
struct ABP_StageButton_C_OnCheckpointSave_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StageButton.BP_StageButton_C.BndEvt__StageShowStateHandler_K2Node_ComponentBoundEvent_0_OnObjectStateChanged__DelegateSignature
struct ABP_StageButton_C_BndEvt__StageShowStateHandler_K2Node_ComponentBoundEvent_0_OnObjectStateChanged__DelegateSignature_Params
{
	class UWorldStateHandlerComponent*                 Handler;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bState;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_StageButton.BP_StageButton_C.ReceiveBeginPlay
struct ABP_StageButton_C_ReceiveBeginPlay_Params
{
};

// Function BP_StageButton.BP_StageButton_C.ButtonPressed
struct ABP_StageButton_C_ButtonPressed_Params
{
};

// Function BP_StageButton.BP_StageButton_C.Startup
struct ABP_StageButton_C_Startup_Params
{
};

// Function BP_StageButton.BP_StageButton_C.PostGameLoad
struct ABP_StageButton_C_PostGameLoad_Params
{
};

// Function BP_StageButton.BP_StageButton_C.OnCheckpointLoad
struct ABP_StageButton_C_OnCheckpointLoad_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StageButton.BP_StageButton_C.ExecuteUbergraph_BP_StageButton
struct ABP_StageButton_C_ExecuteUbergraph_BP_StageButton_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
