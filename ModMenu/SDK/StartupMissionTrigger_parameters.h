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

// Function StartupMissionTrigger.StartupMissionTrigger_C.CanDeactivate
struct AStartupMissionTrigger_C_CanDeactivate_Params
{
	bool                                               CanDeactivate;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.GetActivatableState
struct AStartupMissionTrigger_C_GetActivatableState_Params
{
	class AActor*                                      Activator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ActivatableState_EActivatableState>    CurrentState;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.CanActivate
struct AStartupMissionTrigger_C_CanActivate_Params
{
	class AActor*                                      Activator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanActivate;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	fnaf9_EConditionFailReason                         CantReason;                                                // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.Check Destroy Intro
struct AStartupMissionTrigger_C_Check_Destroy_Intro_Params
{
	bool                                               Destroyed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.SetReflection
struct AStartupMissionTrigger_C_SetReflection_Params
{
	bool                                               UseCapture;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.OnActivatorDone
struct AStartupMissionTrigger_C_OnActivatorDone_Params
{
	class AActor*                                      Activator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.SetActivated
struct AStartupMissionTrigger_C_SetActivated_Params
{
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.DeactivateObject
struct AStartupMissionTrigger_C_DeactivateObject_Params
{
	class AActor*                                      Deactivator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.SetDeactivated
struct AStartupMissionTrigger_C_SetDeactivated_Params
{
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.ActivateObject
struct AStartupMissionTrigger_C_ActivateObject_Params
{
	class AActor*                                      Activator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.On Possess
struct AStartupMissionTrigger_C_On_Possess_Params
{
	class APawn*                                       PossessedPawn;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.Start New Game Mission
struct AStartupMissionTrigger_C_Start_New_Game_Mission_Params
{
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.ReceiveBeginPlay
struct AStartupMissionTrigger_C_ReceiveBeginPlay_Params
{
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__VanessaRemoveBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AStartupMissionTrigger_C_BndEvt__VanessaRemoveBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__LookOutWindowTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct AStartupMissionTrigger_C_BndEvt__LookOutWindowTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.On Fazwatch Collected
struct AStartupMissionTrigger_C_On_Fazwatch_Collected_Params
{
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.Back Door Open
struct AStartupMissionTrigger_C_Back_Door_Open_Params
{
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.On Side Door Entered
struct AStartupMissionTrigger_C_On_Side_Door_Entered_Params
{
	class UDoorComponent*                              DoorComponent;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       Pawn;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bPassedDoorCheck;                                          // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	fnaf9_EConditionFailReason                         FailReason;                                                // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.Enable Door Trigger
struct AStartupMissionTrigger_C_Enable_Door_Trigger_Params
{
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.Wrong Door
struct AStartupMissionTrigger_C_Wrong_Door_Params
{
	class AActor*                                      OverlappedActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.Vanessa Spawn
struct AStartupMissionTrigger_C_Vanessa_Spawn_Params
{
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.On Debug Skipped
struct AStartupMissionTrigger_C_On_Debug_Skipped_Params
{
	TArray<struct FName>                               SkippedTasks;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.GregoryScared
struct AStartupMissionTrigger_C_GregoryScared_Params
{
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.Return Rotation
struct AStartupMissionTrigger_C_Return_Rotation_Params
{
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__RotationThreshold_K2Node_ComponentBoundEvent_1_OnRotationThresholdReached__DelegateSignature
struct AStartupMissionTrigger_C_BndEvt__RotationThreshold_K2Node_ComponentBoundEvent_1_OnRotationThresholdReached__DelegateSignature_Params
{
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__LeftRotationThreshold_K2Node_ComponentBoundEvent_3_OnThresholdReached__DelegateSignature
struct AStartupMissionTrigger_C_BndEvt__LeftRotationThreshold_K2Node_ComponentBoundEvent_3_OnThresholdReached__DelegateSignature_Params
{
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__RightRotationThreshold_K2Node_ComponentBoundEvent_4_OnThresholdReached__DelegateSignature
struct AStartupMissionTrigger_C_BndEvt__RightRotationThreshold_K2Node_ComponentBoundEvent_4_OnThresholdReached__DelegateSignature_Params
{
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__DownRotationThreshold_K2Node_ComponentBoundEvent_5_OnThresholdReached__DelegateSignature
struct AStartupMissionTrigger_C_BndEvt__DownRotationThreshold_K2Node_ComponentBoundEvent_5_OnThresholdReached__DelegateSignature_Params
{
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__UpRotationThreshold_K2Node_ComponentBoundEvent_6_OnThresholdReached__DelegateSignature
struct AStartupMissionTrigger_C_BndEvt__UpRotationThreshold_K2Node_ComponentBoundEvent_6_OnThresholdReached__DelegateSignature_Params
{
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.On Freddy Exited
struct AStartupMissionTrigger_C_On_Freddy_Exited_Params
{
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.On Player Possessed Gregory
struct AStartupMissionTrigger_C_On_Player_Possessed_Gregory_Params
{
	class APawn*                                       PossessedPawn;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.Skip All
struct AStartupMissionTrigger_C_Skip_All_Params
{
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.Continue from save after door
struct AStartupMissionTrigger_C_Continue_from_save_after_door_Params
{
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.Bind Posses for Finish
struct AStartupMissionTrigger_C_Bind_Posses_for_Finish_Params
{
};

// Function StartupMissionTrigger.StartupMissionTrigger_C.ExecuteUbergraph_StartupMissionTrigger
struct AStartupMissionTrigger_C_ExecuteUbergraph_StartupMissionTrigger_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
