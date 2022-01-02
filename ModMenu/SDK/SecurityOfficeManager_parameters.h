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

// Function SecurityOfficeManager.SecurityOfficeManager_C.GetInteractViewLocation
struct ASecurityOfficeManager_C_GetInteractViewLocation_Params
{
	bool                                               Valid;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     WorldLocation;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.GetInteractViewAngles
struct ASecurityOfficeManager_C_GetInteractViewAngles_Params
{
	fnaf9_ECameraAngleFlags                            AnglesToCheck;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.GetHUDInstruction
struct ASecurityOfficeManager_C_GetHUDInstruction_Params
{
	struct FText                                       Instruction;                                               // 0x0000(0x0018)  (Parm, OutParm)
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.InteractIgnoresTrace
struct ASecurityOfficeManager_C_InteractIgnoresTrace_Params
{
	bool                                               IgnoreTrace;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.GetInstructionOverride
struct ASecurityOfficeManager_C_GetInstructionOverride_Params
{
	struct FText                                       Instruction;                                               // 0x0000(0x0018)  (Parm, OutParm)
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.UpdateUIOnTick
struct ASecurityOfficeManager_C_UpdateUIOnTick_Params
{
	bool                                               Output;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.GetInteractibleType
struct ASecurityOfficeManager_C_GetInteractibleType_Params
{
	TEnumAsByte<InteractibleType_EInteractibleType>    Type;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<InteractiblePressType_EInteractiblePressType> PressType;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.CanPlayerInteract
struct ASecurityOfficeManager_C_CanPlayerInteract_Params
{
	bool                                               CanInteract;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	fnaf9_EConditionFailReason                         CantReason;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.TickCameras
struct ASecurityOfficeManager_C_TickCameras_Params
{
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.CheckAllCamerasReady
struct ASecurityOfficeManager_C_CheckAllCamerasReady_Params
{
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.GetCurrentPowerDrain
struct ASecurityOfficeManager_C_GetCurrentPowerDrain_Params
{
	float                                              PowerDrain;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.OnCheckpointSave
struct ASecurityOfficeManager_C_OnCheckpointSave_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.OnGameDataLoaded
struct ASecurityOfficeManager_C_OnGameDataLoaded_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.OnStoreGameData
struct ASecurityOfficeManager_C_OnStoreGameData_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.PostGameLoad
struct ASecurityOfficeManager_C_PostGameLoad_Params
{
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.PostSaveGame
struct ASecurityOfficeManager_C_PostSaveGame_Params
{
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.OnPlayerInteractCancel
struct ASecurityOfficeManager_C_OnPlayerInteractCancel_Params
{
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.OnPlayerHoverEnter
struct ASecurityOfficeManager_C_OnPlayerHoverEnter_Params
{
	class APawn*                                       PlayerPawn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.OnPlayerHoverExit
struct ASecurityOfficeManager_C_OnPlayerHoverExit_Params
{
	class APawn*                                       PlayerPawn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.ReceiveTick
struct ASecurityOfficeManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.OnPlayerInteract
struct ASecurityOfficeManager_C_OnPlayerInteract_Params
{
	class APawn*                                       PlayerPawn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           PlayerController;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.ReceiveBeginPlay
struct ASecurityOfficeManager_C_ReceiveBeginPlay_Params
{
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.BndEvt__EscapeBounds_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ASecurityOfficeManager_C_BndEvt__EscapeBounds_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.On Victory
struct ASecurityOfficeManager_C_On_Victory_Params
{
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.End Office Game
struct ASecurityOfficeManager_C_End_Office_Game_Params
{
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.On Office Game Activated
struct ASecurityOfficeManager_C_On_Office_Game_Activated_Params
{
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.Already Awarded
struct ASecurityOfficeManager_C_Already_Awarded_Params
{
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.BndEvt__EscapeBounds_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ASecurityOfficeManager_C_BndEvt__EscapeBounds_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.Exit Office Pawn Mode
struct ASecurityOfficeManager_C_Exit_Office_Pawn_Mode_Params
{
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.Enter Office Pawn Mode
struct ASecurityOfficeManager_C_Enter_Office_Pawn_Mode_Params
{
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.Add Power Drain
struct ASecurityOfficeManager_C_Add_Power_Drain_Params
{
	class AActor*                                      PowerDrainer;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.Remove Power Drain
struct ASecurityOfficeManager_C_Remove_Power_Drain_Params
{
	class AActor*                                      PowerDrainer;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.Process Power Drain
struct ASecurityOfficeManager_C_Process_Power_Drain_Params
{
	float                                              DrainMultiplier;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.Drain Power
struct ASecurityOfficeManager_C_Drain_Power_Params
{
	float                                              AmountToDrain;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.Bind Activatable to Screen
struct ASecurityOfficeManager_C_Bind_Activatable_to_Screen_Params
{
	int                                                PanelIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Activatable;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PowerDrain;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.On Camera Levels Loaded
struct ASecurityOfficeManager_C_On_Camera_Levels_Loaded_Params
{
	class ACamera_C*                                   Camera;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.On All Cameras Ready
struct ASecurityOfficeManager_C_On_All_Cameras_Ready_Params
{
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.OnCheckpointLoad
struct ASecurityOfficeManager_C_OnCheckpointLoad_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.ExecuteUbergraph_SecurityOfficeManager
struct ASecurityOfficeManager_C_ExecuteUbergraph_SecurityOfficeManager_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.OnOfficeGameEnded__DelegateSignature
struct ASecurityOfficeManager_C_OnOfficeGameEnded__DelegateSignature_Params
{
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.OnOfficeGameStarted__DelegateSignature
struct ASecurityOfficeManager_C_OnOfficeGameStarted__DelegateSignature_Params
{
};

// Function SecurityOfficeManager.SecurityOfficeManager_C.OnPowerDrained__DelegateSignature
struct ASecurityOfficeManager_C_OnPowerDrained__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
