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

// Function PRE_Elevator_General.PRE_Elevator_General_C.HasDoorInitialized
struct APRE_Elevator_General_C_HasDoorInitialized_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.IsDoorLockedForAI
struct APRE_Elevator_General_C_IsDoorLockedForAI_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.IsDoorLockedForPlayer
struct APRE_Elevator_General_C_IsDoorLockedForPlayer_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.IsDoorOpen
struct APRE_Elevator_General_C_IsDoorOpen_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.TeleportFreddy
struct APRE_Elevator_General_C_TeleportFreddy_Params
{
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.UpdateCanUseState
struct APRE_Elevator_General_C_UpdateCanUseState_Params
{
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.CloseOrOpenDoors
struct APRE_Elevator_General_C_CloseOrOpenDoors_Params
{
	TEnumAsByte<E_Elevator_Side_E_Elevator_Side>       Side;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Open;                                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.PrintDebugVariable
struct APRE_Elevator_General_C_PrintDebugVariable_Params
{
	struct FString                                     Description;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Variable;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<E_Elevator_Side_E_Elevator_Side>       Side;                                                      // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Remote;                                                    // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowSide;                                                  // 0x0022(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowRemote;                                                // 0x0023(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.GetTarget_StreamViewpoint
struct APRE_Elevator_General_C_GetTarget_StreamViewpoint_Params
{
	TEnumAsByte<E_Elevator_Side_E_Elevator_Side>       Side;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Remote;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AA_Elevator_StreamViewpoint_C*               StreamViewpoint;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.GetTarget_Levels
struct APRE_Elevator_General_C_GetTarget_Levels_Params
{
	TEnumAsByte<E_Elevator_Side_E_Elevator_Side>       Side;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Remote;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FS_Elevator_Levels                          Levels;                                                    // 0x0008(0x0020)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.GetTarget_ArrowIndicators
struct APRE_Elevator_General_C_GetTarget_ArrowIndicators_Params
{
	bool                                               Remote;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class ABP_ArrowIndicator_C*>                ArrowIndicators;                                           // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.GetTarget_Doors
struct APRE_Elevator_General_C_GetTarget_Doors_Params
{
	TEnumAsByte<E_Elevator_Side_E_Elevator_Side>       Side;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Remote;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class APRE_ElevatorDoor_Master_C*>          Doors;                                                     // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.GetTarget_Buttons
struct APRE_Elevator_General_C_GetTarget_Buttons_Params
{
	bool                                               Remote;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class AButtonBase_C*>                       Buttons;                                                   // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.PrintDebug
struct APRE_Elevator_General_C_PrintDebug_Params
{
	struct FString                                     inString;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<E_Elevator_Side_E_Elevator_Side>       Side;                                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowSide;                                                  // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.SetStreamViewpoint
struct APRE_Elevator_General_C_SetStreamViewpoint_Params
{
	TEnumAsByte<E_Elevator_Side_E_Elevator_Side>       Side;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Remote;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bEnable;                                                   // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.GetArrowIndicators
struct APRE_Elevator_General_C_GetArrowIndicators_Params
{
	TArray<class ABP_ArrowIndicator_C*>                Array;                                                     // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.GetDoors
struct APRE_Elevator_General_C_GetDoors_Params
{
	struct FS_Elevator_Doors                           Doors;                                                     // 0x0000(0x0020)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.GetButtons
struct APRE_Elevator_General_C_GetButtons_Params
{
	TArray<class AButtonBase_C*>                       Array;                                                     // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.SetArrowIndicators
struct APRE_Elevator_General_C_SetArrowIndicators_Params
{
	bool                                               Remote;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Elevator_ArrowIndicator_Type_E_Elevator_ArrowIndicator_Type> Type;                                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.TeleportPlayer
struct APRE_Elevator_General_C_TeleportPlayer_Params
{
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.ToggleLockButtons
struct APRE_Elevator_General_C_ToggleLockButtons_Params
{
	bool                                               Remote;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Lock;                                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.ToggleLockDoors
struct APRE_Elevator_General_C_ToggleLockDoors_Params
{
	TEnumAsByte<E_Elevator_Side_E_Elevator_Side>       Side;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Remote;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Lock;                                                      // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Force;                                                     // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.ToggleLockDoor
struct APRE_Elevator_General_C_ToggleLockDoor_Params
{
	class UObject*                                     Door;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Lock;                                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Force;                                                     // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.TickShake
struct APRE_Elevator_General_C_TickShake_Params
{
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.Setup
struct APRE_Elevator_General_C_Setup_Params
{
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.UpdateVariables
struct APRE_Elevator_General_C_UpdateVariables_Params
{
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.ReceiveBeginPlay
struct APRE_Elevator_General_C_ReceiveBeginPlay_Params
{
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.SetSecurityLevel
struct APRE_Elevator_General_C_SetSecurityLevel_Params
{
	int                                                NewSecurityLevel;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.SetDoorRequiredItem
struct APRE_Elevator_General_C_SetDoorRequiredItem_Params
{
	struct FName                                       ItemName;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.SetDoorLockAI
struct APRE_Elevator_General_C_SetDoorLockAI_Params
{
	bool                                               Lock;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.ForceDoorOpen
struct APRE_Elevator_General_C_ForceDoorOpen_Params
{
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.WakeupOverlapBegin
struct APRE_Elevator_General_C_WakeupOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.SetLocked
struct APRE_Elevator_General_C_SetLocked_Params
{
	TEnumAsByte<E_Elevator_Side_E_Elevator_Side>       Side;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Remote;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Lock;                                                      // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.SetLockedAll
struct APRE_Elevator_General_C_SetLockedAll_Params
{
	bool                                               Remote;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Lock;                                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.ForceDoorClose
struct APRE_Elevator_General_C_ForceDoorClose_Params
{
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.ToggleMovement
struct APRE_Elevator_General_C_ToggleMovement_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.WakeupOverlapEnd
struct APRE_Elevator_General_C_WakeupOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.OnPawnEntered
struct APRE_Elevator_General_C_OnPawnEntered_Params
{
	TEnumAsByte<E_Elevator_Side_E_Elevator_Side>       Side;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       Pawn;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.OnButtonInteract
struct APRE_Elevator_General_C_OnButtonInteract_Params
{
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.OnPawnExited
struct APRE_Elevator_General_C_OnPawnExited_Params
{
	TEnumAsByte<E_Elevator_Side_E_Elevator_Side>       Side;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       Pawn;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.ElevatorSequenceEnd
struct APRE_Elevator_General_C_ElevatorSequenceEnd_Params
{
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.SwapLevels
struct APRE_Elevator_General_C_SwapLevels_Params
{
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.OnMovementReachedTargetValue
struct APRE_Elevator_General_C_OnMovementReachedTargetValue_Params
{
	TEnumAsByte<E_Elevator_MovementMode_E_Elevator_MovementMode> Selection;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.OnLevelsSwapped
struct APRE_Elevator_General_C_OnLevelsSwapped_Params
{
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.OverlapWake
struct APRE_Elevator_General_C_OverlapWake_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.OverlapSleep
struct APRE_Elevator_General_C_OverlapSleep_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.ElevatorSequenceBegin
struct APRE_Elevator_General_C_ElevatorSequenceBegin_Params
{
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.ReceiveTick
struct APRE_Elevator_General_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.OnPawnEnteredDoorA
struct APRE_Elevator_General_C_OnPawnEnteredDoorA_Params
{
	class UDoorComponent*                              DoorComponent;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       Pawn;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bPassedDoorCheck;                                          // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	fnaf9_EConditionFailReason                         FailReason;                                                // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.OnPawnExitedDoorA
struct APRE_Elevator_General_C_OnPawnExitedDoorA_Params
{
	class UDoorComponent*                              DoorComponent;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       Pawn;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.BndEvt__InsideOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct APRE_Elevator_General_C_BndEvt__InsideOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.BndEvt__InsideOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct APRE_Elevator_General_C_BndEvt__InsideOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.OnPawnExitedDoorB
struct APRE_Elevator_General_C_OnPawnExitedDoorB_Params
{
	class UDoorComponent*                              DoorComponent;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       Pawn;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.OnPawnEnteredDoorB
struct APRE_Elevator_General_C_OnPawnEnteredDoorB_Params
{
	class UDoorComponent*                              DoorComponent;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       Pawn;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bPassedDoorCheck;                                          // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	fnaf9_EConditionFailReason                         FailReason;                                                // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.SetDoorLockPlayer
struct APRE_Elevator_General_C_SetDoorLockPlayer_Params
{
	bool                                               Lock;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.OnLevelsLoaded_Event_1
struct APRE_Elevator_General_C_OnLevelsLoaded_Event_1_Params
{
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.PlayMusic
struct APRE_Elevator_General_C_PlayMusic_Params
{
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.StopMusic
struct APRE_Elevator_General_C_StopMusic_Params
{
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.On Fail To Teleport Freddy
struct APRE_Elevator_General_C_On_Fail_To_Teleport_Freddy_Params
{
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.ExecuteUbergraph_PRE_Elevator_General
struct APRE_Elevator_General_C_ExecuteUbergraph_PRE_Elevator_General_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.OnButtonPressed__DelegateSignature
struct APRE_Elevator_General_C_OnButtonPressed__DelegateSignature_Params
{
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.OnWakeupOverlapEntered__DelegateSignature
struct APRE_Elevator_General_C_OnWakeupOverlapEntered__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function PRE_Elevator_General.PRE_Elevator_General_C.OnWakeupOverlapLeave__DelegateSignature
struct APRE_Elevator_General_C_OnWakeupOverlapLeave__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
