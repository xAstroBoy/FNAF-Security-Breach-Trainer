#pragma once

/**
 * Name: FNAFSB
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Gregory.Gregory_C.IsPlayerCurrentlyMoving
	 */
	struct AGregory_C_IsPlayerCurrentlyMoving_Params
	{
	public:
		bool                                                       IsPlayerMoving;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory.Gregory_C.GetFlashlightActor
	 */
	struct AGregory_C_GetFlashlightActor_Params
	{
	public:
		class AActor*                                              FlashlightActor;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.IsPlayerUsingFazwatch
	 */
	struct AGregory_C_IsPlayerUsingFazwatch_Params
	{
	public:
		bool                                                       IsUsingFazwatch;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory.Gregory_C.LastItemCollected
	 */
	struct AGregory_C_LastItemCollected_Params
	{
	public:
		struct FFNAFInventoryTableStruct                           ItemInfo;                                                // 0x0000(0x0058)  (Parm, OutParm)
	};

	/**
	 * Function Gregory.Gregory_C.IsPlayerFlashlightActive
	 */
	struct AGregory_C_IsPlayerFlashlightActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory.Gregory_C.IsSwitchingItems
	 */
	struct AGregory_C_IsSwitchingItems_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory.Gregory_C.IsInAir
	 */
	struct AGregory_C_IsInAir_Params
	{
	public:
		bool                                                       InAir;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory.Gregory_C.PlayerEnteringExitingFreddy
	 */
	struct AGregory_C_PlayerEnteringExitingFreddy_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NWN7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Gregory.Gregory_C.GetSightComponent
	 */
	struct AGregory_C_GetSightComponent_Params
	{
	public:
		class USightComponent*                                     Sight;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.SpawnJumpscarePawn
	 */
	struct AGregory_C_SpawnJumpscarePawn_Params
	{
	public:
		struct FTransform                                          SpawnTransform;                                          // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		bool                                                       CanEscape;                                               // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsLethal;                                                // 0x0031(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SW1O[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CamShakeScale;                                           // 0x0034(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ActorPerformingScare;                                    // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AJumpscarePawn_C*                                    JumpscarePawnOut;                                        // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.GetLevelStreamViewpoint
	 */
	struct AGregory_C_GetLevelStreamViewpoint_Params
	{
	public:
		class ULevelStreamViewpoint*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.ForceHideBatteryLevelWidget
	 */
	struct AGregory_C_ForceHideBatteryLevelWidget_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.GetCurrentInteract
	 */
	struct AGregory_C_GetCurrentInteract_Params
	{
	public:
		class UWI_Gregory_Interact_C*                              WI_Gregory_Interact;                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.On Flashlight Power Out
	 */
	struct AGregory_C_OnFlashlightPowerOut_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.IsChowdaMode_1
	 */
	struct AGregory_C_IsChowdaMode_1_Params
	{
	public:
		bool                                                       ChowdaMode;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PAG5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Gregory.Gregory_C.ToggleRunIcon
	 */
	struct AGregory_C_ToggleRunIcon_Params
	{
	public:
		bool                                                       Running;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory.Gregory_C.CanJumpInternal
	 */
	struct AGregory_C_CanJumpInternal_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory.Gregory_C.ForceWatchLower
	 */
	struct AGregory_C_ForceWatchLower_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.ToggleRedReticle
	 */
	struct AGregory_C_ToggleRedReticle_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.UpdateVisualSource
	 */
	struct AGregory_C_UpdateVisualSource_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.GetHideSearchLocation
	 */
	struct AGregory_C_GetHideSearchLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WZ20[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Gregory.Gregory_C.Setup Movement Speed
	 */
	struct AGregory_C_SetupMovementSpeed_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.SetupWalkSpeed
	 */
	struct AGregory_C_SetupWalkSpeed_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.SetupRunSpeed
	 */
	struct AGregory_C_SetupRunSpeed_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.ShowInstructions
	 */
	struct AGregory_C_ShowInstructions_Params
	{
	public:
		E_InstructionCard_Type                                     Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IYF0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Gregory.Gregory_C.IsFazWatchUp
	 */
	struct AGregory_C_IsFazWatchUp_Params
	{
	public:
		bool                                                       IsFazWatchUp;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QV0H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Gregory.Gregory_C.LethalJumpscare
	 */
	struct AGregory_C_LethalJumpscare_Params
	{
	public:
		class USceneComponent*                                     AttachComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAkAudioEvent*                                       JumpscareAudio;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanEscape;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I8ZH[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CamShakeScale;                                           // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ActorPerformingScare;                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.Non Lethal Jumpscare
	 */
	struct AGregory_C_NonLethalJumpscare_Params
	{
	public:
		class USceneComponent*                                     AttachmentComponent;                                     // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CamShakeScale;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_81KW[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ActorPerformingScare;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.On Item Removed
	 */
	struct AGregory_C_OnItemRemoved_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FFNAFInventoryTableStruct                           InventoryItemInfo;                                       // 0x0008(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Gregory.Gregory_C.GetRunSpeed
	 */
	struct AGregory_C_GetRunSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.On Item Collected
	 */
	struct AGregory_C_OnItemCollected_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FFNAFInventoryTableStruct                           InventoryItemInfo;                                       // 0x0008(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Gregory.Gregory_C.AttemptSwitch:Item3
	 */
	struct AGregory_C_AttemptSwitchItem3_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.SwitchItem
	 */
	struct AGregory_C_SwitchItem_Params
	{
	public:
		class AEquippable_C*                                       NewItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.AttemptSwitch:Item2
	 */
	struct AGregory_C_AttemptSwitchItem2_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.AttemptSwitch:Item1
	 */
	struct AGregory_C_AttemptSwitchItem1_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.SetInUse
	 */
	struct AGregory_C_SetInUse_Params
	{
	public:
		bool                                                       InUse;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory.Gregory_C.EndLazerTag
	 */
	struct AGregory_C_EndLazerTag_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.StartLazerTag
	 */
	struct AGregory_C_StartLazerTag_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.ShouldDoLazerTag
	 */
	struct AGregory_C_ShouldDoLazerTag_Params
	{
	public:
		bool                                                       LazerTag;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2HT0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Gregory.Gregory_C.IsFlashlightActive
	 */
	struct AGregory_C_IsFlashlightActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BN31[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Gregory.Gregory_C.Stun in Range
	 */
	struct AGregory_C_StuninRange_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.GetFlashlightLocationAndDirection
	 */
	struct AGregory_C_GetFlashlightLocationAndDirection_Params
	{
	public:
		bool                                                       HasFlashlight;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3OCN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             FlashlightLocation;                                      // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             FlashlightDirection;                                     // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.ToggleFlashlight
	 */
	struct AGregory_C_ToggleFlashlight_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.InpActEvt_Run_K2Node_InputActionEvent_2
	 */
	struct AGregory_C_InpActEvt_Run_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.InpActEvt_Run_K2Node_InputActionEvent_1
	 */
	struct AGregory_C_InpActEvt_Run_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.OnFailure_7DE12DBC48FB7B17F57E7D93C24D4EB7
	 */
	struct AGregory_C_OnFailure_7DE12DBC48FB7B17F57E7D93C24D4EB7_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.OnSuccess_7DE12DBC48FB7B17F57E7D93C24D4EB7
	 */
	struct AGregory_C_OnSuccess_7DE12DBC48FB7B17F57E7D93C24D4EB7_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.OnFailure_D277383849041D09D51CF2BB341D6125
	 */
	struct AGregory_C_OnFailure_D277383849041D09D51CF2BB341D6125_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.OnSuccess_D277383849041D09D51CF2BB341D6125
	 */
	struct AGregory_C_OnSuccess_D277383849041D09D51CF2BB341D6125_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.OnFailure_7326E6ED4D8708615D3D6F94085DAB1A
	 */
	struct AGregory_C_OnFailure_7326E6ED4D8708615D3D6F94085DAB1A_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.OnSuccess_7326E6ED4D8708615D3D6F94085DAB1A
	 */
	struct AGregory_C_OnSuccess_7326E6ED4D8708615D3D6F94085DAB1A_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.OnFailure_DCAEB8064AAF100FF80986844E21FAAA
	 */
	struct AGregory_C_OnFailure_DCAEB8064AAF100FF80986844E21FAAA_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.OnSuccess_DCAEB8064AAF100FF80986844E21FAAA
	 */
	struct AGregory_C_OnSuccess_DCAEB8064AAF100FF80986844E21FAAA_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.UpdateCustomProgressMeter
	 */
	struct AGregory_C_UpdateCustomProgressMeter_Params
	{
	public:
		class FText                                                TextOnLeft;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                TextOnRight;                                             // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Gregory.Gregory_C.ClearHoldMeter
	 */
	struct AGregory_C_ClearHoldMeter_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.BeginCinimaticSkipFade
	 */
	struct AGregory_C_BeginCinimaticSkipFade_Params
	{
	public:
		float                                                      DelayDuration;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.ShowCinimaticSkip
	 */
	struct AGregory_C_ShowCinimaticSkip_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.Disable Jump Land Audio
	 */
	struct AGregory_C_DisableJumpLandAudio_Params
	{
	public:
		bool                                                       Disable;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory.Gregory_C.LowerArms
	 */
	struct AGregory_C_LowerArms_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.RaiseArms
	 */
	struct AGregory_C_RaiseArms_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.OnCheckpointSave
	 */
	struct AGregory_C_OnCheckpointSave_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.OnGameDataLoaded
	 */
	struct AGregory_C_OnGameDataLoaded_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.OnStoreGameData
	 */
	struct AGregory_C_OnStoreGameData_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.PostGameLoad
	 */
	struct AGregory_C_PostGameLoad_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.PostSaveGame
	 */
	struct AGregory_C_PostSaveGame_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.ReceiveActorBeginOverlap
	 */
	struct AGregory_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.ReceiveTick
	 */
	struct AGregory_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.Attempt Hide
	 */
	struct AGregory_C_AttemptHide_Params
	{
	public:
		class AActor*                                              HideActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HideLocation;                                            // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsLow;                                                   // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory.Gregory_C.ReceiveActorEndOverlap
	 */
	struct AGregory_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.Attempt Interact
	 */
	struct AGregory_C_AttemptInteract_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.Kill
	 */
	struct AGregory_C_Kill_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.AttemptPrimaryAction
	 */
	struct AGregory_C_AttemptPrimaryAction_Params
	{
	public:
		class FName                                                ItemToUse;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.AttemptSecondaryAction
	 */
	struct AGregory_C_AttemptSecondaryAction_Params
	{
	public:
		class FName                                                ItemToUse;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.AttemptThrow
	 */
	struct AGregory_C_AttemptThrow_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.ReceiveBeginPlay
	 */
	struct AGregory_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.LeaveHidingSpace
	 */
	struct AGregory_C_LeaveHidingSpace_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.Force Flashlight State
	 */
	struct AGregory_C_ForceFlashlightState_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AllowPlayerToggle;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory.Gregory_C.On Interact Release
	 */
	struct AGregory_C_OnInteractRelease_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.ReceivePossessed
	 */
	struct AGregory_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.Attempt Freddy Call
	 */
	struct AGregory_C_AttemptFreddyCall_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.GregoryHeadBob
	 */
	struct AGregory_C_GregoryHeadBob_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.GregoryCrouch
	 */
	struct AGregory_C_GregoryCrouch_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.GregoryUnCrouch
	 */
	struct AGregory_C_GregoryUnCrouch_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.ForceCrouchMode
	 */
	struct AGregory_C_ForceCrouchMode_Params
	{
	public:
		bool                                                       Crouch;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AllowCrouchToggle;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory.Gregory_C.StopSprinting
	 */
	struct AGregory_C_StopSprinting_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.EjectSequence
	 */
	struct AGregory_C_EjectSequence_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.K2_OnStartCrouch
	 */
	struct AGregory_C_K2_OnStartCrouch_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.K2_OnEndCrouch
	 */
	struct AGregory_C_K2_OnEndCrouch_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.BndEvt__SprintStamina_K2Node_ComponentBoundEvent_0_OnStaminaDepleted__DelegateSignature
	 */
	struct AGregory_C_BndEvt__SprintStamina_K2Node_ComponentBoundEvent_0_OnStaminaDepleted__DelegateSignature_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.BndEvt__SprintStamina_K2Node_ComponentBoundEvent_1_OnStaminaReplenished__DelegateSignature
	 */
	struct AGregory_C_BndEvt__SprintStamina_K2Node_ComponentBoundEvent_1_OnStaminaReplenished__DelegateSignature_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.ReceiveUnpossessed
	 */
	struct AGregory_C_ReceiveUnpossessed_Params
	{
	public:
		class AController*                                         OldController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.CallFreddy
	 */
	struct AGregory_C_CallFreddy_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.OnJumped
	 */
	struct AGregory_C_OnJumped_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.OnLanded
	 */
	struct AGregory_C_OnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Gregory.Gregory_C.ItemCollected
	 */
	struct AGregory_C_ItemCollected_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FFNAFInventoryTableStruct                           InventoryItemInfo;                                       // 0x0008(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Gregory.Gregory_C.Held Item Instructions
	 */
	struct AGregory_C_HeldItemInstructions_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.Event Call Freddy Instructions
	 */
	struct AGregory_C_EventCallFreddyInstructions_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.Return To Gregory
	 */
	struct AGregory_C_ReturnToGregory_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.TriggerSurpriseAchievement
	 */
	struct AGregory_C_TriggerSurpriseAchievement_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.Arm Roll__FinishedFunc
	 */
	struct AGregory_C_ArmRoll__FinishedFunc_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.RollForLower
	 */
	struct AGregory_C_RollForLower_Params
	{
	public:
		bool                                                       WatchUp;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory.Gregory_C.RollForRaise
	 */
	struct AGregory_C_RollForRaise_Params
	{
	public:
		bool                                                       WatchUp;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory.Gregory_C.SwitchItemWithAnim
	 */
	struct AGregory_C_SwitchItemWithAnim_Params
	{
	public:
		class AEquippable_C*                                       NewItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.OnCheckpointLoad
	 */
	struct AGregory_C_OnCheckpointLoad_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.AwardSayCheese
	 */
	struct AGregory_C_AwardSayCheese_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.VisualChangeItem
	 */
	struct AGregory_C_VisualChangeItem_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.ShowHUD
	 */
	struct AGregory_C_ShowHUD_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.HideHUD
	 */
	struct AGregory_C_HideHUD_Params
	{
	public:
		bool                                                       bHideProgressWheel;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory.Gregory_C.BeginInteractHold
	 */
	struct AGregory_C_BeginInteractHold_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.CancelInteractHold
	 */
	struct AGregory_C_CancelInteractHold_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.SetInteractHoldProgress
	 */
	struct AGregory_C_SetInteractHoldProgress_Params
	{
	public:
		float                                                      Percentage;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.ForceFlashlightState
	 */
	struct AGregory_C_ForceFlashlightState_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AllowPlayerToggle;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory.Gregory_C.CompleteInteractHold
	 */
	struct AGregory_C_CompleteInteractHold_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.TriggerJump
	 */
	struct AGregory_C_TriggerJump_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.NonLethalJumpscareBPI
	 */
	struct AGregory_C_NonLethalJumpscareBPI_Params
	{
	public:
		float                                                      CamShakeScale;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q67H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     AttachmentComponent;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ActorPerformingScare;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.LethalJumpscareBPI
	 */
	struct AGregory_C_LethalJumpscareBPI_Params
	{
	public:
		class USceneComponent*                                     AttachmentComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAkAudioEvent*                                       JumpscareAudio;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanEscape;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2S33[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CamShakeScale;                                           // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ActorPerfomingScare;                                     // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.ForcePlayerCrouch
	 */
	struct AGregory_C_ForcePlayerCrouch_Params
	{
	public:
		bool                                                       Crouch;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AllowCrouchToggle;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory.Gregory_C.UpdateIcons
	 */
	struct AGregory_C_UpdateIcons_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.ExecuteUbergraph_Gregory
	 */
	struct AGregory_C_ExecuteUbergraph_Gregory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory.Gregory_C.PickedUpFlashlight__DelegateSignature
	 */
	struct AGregory_C_PickedUpFlashlight__DelegateSignature_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.OnLethalJumpScare__DelegateSignature
	 */
	struct AGregory_C_OnLethalJumpScare__DelegateSignature_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.OnKill__DelegateSignature
	 */
	struct AGregory_C_OnKill__DelegateSignature_Params
	{	};

	/**
	 * Function Gregory.Gregory_C.OnNonLethalScareComplete__DelegateSignature
	 */
	struct AGregory_C_OnNonLethalScareComplete__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
