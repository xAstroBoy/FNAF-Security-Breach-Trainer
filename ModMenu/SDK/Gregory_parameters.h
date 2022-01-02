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

// Function Gregory.Gregory_C.PlayerEnteringExitingFreddy
struct AGregory_C_PlayerEnteringExitingFreddy_Params
{
	bool                                               Value;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Gregory.Gregory_C.GetSightComponent
struct AGregory_C_GetSightComponent_Params
{
	class USightComponent*                             Sight;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.ForceWatchLower
struct AGregory_C_ForceWatchLower_Params
{
};

// Function Gregory.Gregory_C.GetLevelStreamViewpoint
struct AGregory_C_GetLevelStreamViewpoint_Params
{
	class ULevelStreamViewpoint*                       LevelStreamViewpoint;                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.ToggleRedReticle
struct AGregory_C_ToggleRedReticle_Params
{
};

// Function Gregory.Gregory_C.UpdateVisualSource
struct AGregory_C_UpdateVisualSource_Params
{
};

// Function Gregory.Gregory_C.GetHideSearchLocation
struct AGregory_C_GetHideSearchLocation_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Gregory.Gregory_C.Setup Movement Speed
struct AGregory_C_Setup_Movement_Speed_Params
{
};

// Function Gregory.Gregory_C.SetupWalkSpeed
struct AGregory_C_SetupWalkSpeed_Params
{
};

// Function Gregory.Gregory_C.SetupRunSpeed
struct AGregory_C_SetupRunSpeed_Params
{
};

// Function Gregory.Gregory_C.ShowInstructions
struct AGregory_C_ShowInstructions_Params
{
	TEnumAsByte<E_InstructionCard_Type_E_InstructionCard_Type> Type;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.IsFazWatchUp
struct AGregory_C_IsFazWatchUp_Params
{
	bool                                               IsFazWatchUp;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Gregory.Gregory_C.LethalJumpscare
struct AGregory_C_LethalJumpscare_Params
{
	class USceneComponent*                             AttachComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               JumpscareAudio;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanEscape;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CamShakeScale;                                             // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      ActorPerformingScare;                                      // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.Non Lethal Jumpscare
struct AGregory_C_Non_Lethal_Jumpscare_Params
{
	class USceneComponent*                             AttachmentComponent;                                       // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CamShakeScale;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      ActorPerformingScare;                                      // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.On Item Removed
struct AGregory_C_On_Item_Removed_Params
{
	struct FName                                       ItemName;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFNAFInventoryTableStruct                   InventoryItemInfo;                                         // 0x0008(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Gregory.Gregory_C.GetRunSpeed
struct AGregory_C_GetRunSpeed_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.On Item Collected
struct AGregory_C_On_Item_Collected_Params
{
	struct FName                                       ItemName;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFNAFInventoryTableStruct                   InventoryItemInfo;                                         // 0x0008(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Gregory.Gregory_C.AttemptSwitch:Item3
struct AGregory_C_AttemptSwitch_Item3_Params
{
};

// Function Gregory.Gregory_C.SwitchItem
struct AGregory_C_SwitchItem_Params
{
	class AEquippable_C*                               NewItem;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.AttemptSwitch:Item2
struct AGregory_C_AttemptSwitch_Item2_Params
{
};

// Function Gregory.Gregory_C.AttemptSwitch:Item1
struct AGregory_C_AttemptSwitch_Item1_Params
{
};

// Function Gregory.Gregory_C.SetInUse
struct AGregory_C_SetInUse_Params
{
	bool                                               InUse;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Gregory.Gregory_C.EndLazerTag
struct AGregory_C_EndLazerTag_Params
{
};

// Function Gregory.Gregory_C.StartLazerTag
struct AGregory_C_StartLazerTag_Params
{
};

// Function Gregory.Gregory_C.ShouldDoLazerTag
struct AGregory_C_ShouldDoLazerTag_Params
{
	bool                                               LazerTag;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Gregory.Gregory_C.IsFlashlightActive
struct AGregory_C_IsFlashlightActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Gregory.Gregory_C.StunInRange
struct AGregory_C_StunInRange_Params
{
};

// Function Gregory.Gregory_C.GetFlashlightLocationAndDirection
struct AGregory_C_GetFlashlightLocationAndDirection_Params
{
	bool                                               HasFlashlight;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     FlashlightLocation;                                        // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     FlashlightDirection;                                       // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.ToggleFlashlight
struct AGregory_C_ToggleFlashlight_Params
{
};

// Function Gregory.Gregory_C.InpActEvt_Run_K2Node_InputActionEvent_3
struct AGregory_C_InpActEvt_Run_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.InpActEvt_Run_K2Node_InputActionEvent_2
struct AGregory_C_InpActEvt_Run_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.InpActEvt_CallFreddy_K2Node_InputActionEvent_1
struct AGregory_C_InpActEvt_CallFreddy_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.OnFailure_7DE12DBC48FB7B17F57E7D93C24D4EB7
struct AGregory_C_OnFailure_7DE12DBC48FB7B17F57E7D93C24D4EB7_Params
{
};

// Function Gregory.Gregory_C.OnSuccess_7DE12DBC48FB7B17F57E7D93C24D4EB7
struct AGregory_C_OnSuccess_7DE12DBC48FB7B17F57E7D93C24D4EB7_Params
{
};

// Function Gregory.Gregory_C.OnFailure_D277383849041D09D51CF2BB341D6125
struct AGregory_C_OnFailure_D277383849041D09D51CF2BB341D6125_Params
{
	struct FName                                       WrittenAchievementName;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.OnSuccess_D277383849041D09D51CF2BB341D6125
struct AGregory_C_OnSuccess_D277383849041D09D51CF2BB341D6125_Params
{
	struct FName                                       WrittenAchievementName;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.OnFailure_7326E6ED4D8708615D3D6F94085DAB1A
struct AGregory_C_OnFailure_7326E6ED4D8708615D3D6F94085DAB1A_Params
{
};

// Function Gregory.Gregory_C.OnSuccess_7326E6ED4D8708615D3D6F94085DAB1A
struct AGregory_C_OnSuccess_7326E6ED4D8708615D3D6F94085DAB1A_Params
{
};

// Function Gregory.Gregory_C.OnFailure_DCAEB8064AAF100FF80986844E21FAAA
struct AGregory_C_OnFailure_DCAEB8064AAF100FF80986844E21FAAA_Params
{
	struct FName                                       WrittenAchievementName;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.OnSuccess_DCAEB8064AAF100FF80986844E21FAAA
struct AGregory_C_OnSuccess_DCAEB8064AAF100FF80986844E21FAAA_Params
{
	struct FName                                       WrittenAchievementName;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.OnCheckpointSave
struct AGregory_C_OnCheckpointSave_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.OnGameDataLoaded
struct AGregory_C_OnGameDataLoaded_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.OnStoreGameData
struct AGregory_C_OnStoreGameData_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.PostGameLoad
struct AGregory_C_PostGameLoad_Params
{
};

// Function Gregory.Gregory_C.PostSaveGame
struct AGregory_C_PostSaveGame_Params
{
};

// Function Gregory.Gregory_C.ReceiveActorBeginOverlap
struct AGregory_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.ReceiveTick
struct AGregory_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.Attempt Hide
struct AGregory_C_Attempt_Hide_Params
{
	class AActor*                                      HideActor;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HideLocation;                                              // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsLow;                                                     // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Gregory.Gregory_C.ReceiveActorEndOverlap
struct AGregory_C_ReceiveActorEndOverlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.Attempt Interact
struct AGregory_C_Attempt_Interact_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.Kill
struct AGregory_C_Kill_Params
{
};

// Function Gregory.Gregory_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2
struct AGregory_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.AttemptPrimaryAction
struct AGregory_C_AttemptPrimaryAction_Params
{
	struct FName                                       ItemToUse;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.AttemptSecondaryAction
struct AGregory_C_AttemptSecondaryAction_Params
{
	struct FName                                       ItemToUse;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.AttemptThrow
struct AGregory_C_AttemptThrow_Params
{
};

// Function Gregory.Gregory_C.ReceiveBeginPlay
struct AGregory_C_ReceiveBeginPlay_Params
{
};

// Function Gregory.Gregory_C.Peek
struct AGregory_C_Peek_Params
{
	struct FTransform                                  PeekPoint;                                                 // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FTransform                                  HideLocation;                                              // 0x0030(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              Axis_Value;                                                // 0x0060(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.LeaveHidingSpace
struct AGregory_C_LeaveHidingSpace_Params
{
};

// Function Gregory.Gregory_C.Force Flashlight State
struct AGregory_C_Force_Flashlight_State_Params
{
	bool                                               On;                                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AllowPlayerToggle;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Gregory.Gregory_C.On Interact Release
struct AGregory_C_On_Interact_Release_Params
{
};

// Function Gregory.Gregory_C.ReceivePossessed
struct AGregory_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.Attempt Freddy Call
struct AGregory_C_Attempt_Freddy_Call_Params
{
};

// Function Gregory.Gregory_C.GregoryHeadBob
struct AGregory_C_GregoryHeadBob_Params
{
};

// Function Gregory.Gregory_C.GregoryCrouch
struct AGregory_C_GregoryCrouch_Params
{
};

// Function Gregory.Gregory_C.GregoryUnCrouch
struct AGregory_C_GregoryUnCrouch_Params
{
};

// Function Gregory.Gregory_C.ForceCrouchMode
struct AGregory_C_ForceCrouchMode_Params
{
	bool                                               Crouch;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AllowCrouchToggle;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Gregory.Gregory_C.StopSprinting
struct AGregory_C_StopSprinting_Params
{
};

// Function Gregory.Gregory_C.EjectSequence
struct AGregory_C_EjectSequence_Params
{
};

// Function Gregory.Gregory_C.K2_OnStartCrouch
struct AGregory_C_K2_OnStartCrouch_Params
{
	float                                              HalfHeightAdjust;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScaledHalfHeightAdjust;                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.K2_OnEndCrouch
struct AGregory_C_K2_OnEndCrouch_Params
{
	float                                              HalfHeightAdjust;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScaledHalfHeightAdjust;                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.BndEvt__SprintStamina_K2Node_ComponentBoundEvent_0_OnStaminaDepleted__DelegateSignature
struct AGregory_C_BndEvt__SprintStamina_K2Node_ComponentBoundEvent_0_OnStaminaDepleted__DelegateSignature_Params
{
};

// Function Gregory.Gregory_C.BndEvt__SprintStamina_K2Node_ComponentBoundEvent_1_OnStaminaReplenished__DelegateSignature
struct AGregory_C_BndEvt__SprintStamina_K2Node_ComponentBoundEvent_1_OnStaminaReplenished__DelegateSignature_Params
{
};

// Function Gregory.Gregory_C.ReceiveUnpossessed
struct AGregory_C_ReceiveUnpossessed_Params
{
	class AController*                                 OldController;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.HideHUD
struct AGregory_C_HideHUD_Params
{
};

// Function Gregory.Gregory_C.ShowHUD
struct AGregory_C_ShowHUD_Params
{
};

// Function Gregory.Gregory_C.CallFreddy
struct AGregory_C_CallFreddy_Params
{
};

// Function Gregory.Gregory_C.OnJumped
struct AGregory_C_OnJumped_Params
{
};

// Function Gregory.Gregory_C.OnLanded
struct AGregory_C_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                       // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Gregory.Gregory_C.ItemCollected
struct AGregory_C_ItemCollected_Params
{
	struct FName                                       ItemName;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFNAFInventoryTableStruct                   InventoryItemInfo;                                         // 0x0008(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Gregory.Gregory_C.Held Item Instructions
struct AGregory_C_Held_Item_Instructions_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.Event Call Freddy Instructions
struct AGregory_C_Event_Call_Freddy_Instructions_Params
{
};

// Function Gregory.Gregory_C.Return To Gregory
struct AGregory_C_Return_To_Gregory_Params
{
};

// Function Gregory.Gregory_C.TriggerSurpriseAchievement
struct AGregory_C_TriggerSurpriseAchievement_Params
{
};

// Function Gregory.Gregory_C.Arm Roll__FinishedFunc
struct AGregory_C_Arm_Roll__FinishedFunc_Params
{
};

// Function Gregory.Gregory_C.RollForLower
struct AGregory_C_RollForLower_Params
{
	bool                                               Watch_Up;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Gregory.Gregory_C.RollForRaise
struct AGregory_C_RollForRaise_Params
{
	bool                                               WatchUp;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Gregory.Gregory_C.SwitchItemWithAnim
struct AGregory_C_SwitchItemWithAnim_Params
{
	class AEquippable_C*                               NewItem;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.OnCheckpointLoad
struct AGregory_C_OnCheckpointLoad_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.AwardSayCheese
struct AGregory_C_AwardSayCheese_Params
{
};

// Function Gregory.Gregory_C.ExecuteUbergraph_Gregory
struct AGregory_C_ExecuteUbergraph_Gregory_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Gregory.Gregory_C.PickedUpFlashlight__DelegateSignature
struct AGregory_C_PickedUpFlashlight__DelegateSignature_Params
{
};

// Function Gregory.Gregory_C.OnLethalJumpScare__DelegateSignature
struct AGregory_C_OnLethalJumpScare__DelegateSignature_Params
{
};

// Function Gregory.Gregory_C.OnKill__DelegateSignature
struct AGregory_C_OnKill__DelegateSignature_Params
{
};

// Function Gregory.Gregory_C.OnNonLethalScareComplete__DelegateSignature
struct AGregory_C_OnNonLethalScareComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
