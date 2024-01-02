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
	 * Function Freddy.Freddy_C.CanBeStunned
	 */
	struct AFreddy_C_CanBeStunned_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Freddy.Freddy_C.IsStunned
	 */
	struct AFreddy_C_IsStunned_Params
	{
	public:
		bool                                                       IsStunned;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Freddy.Freddy_C.IsPlayerCurrentlyMoving
	 */
	struct AFreddy_C_IsPlayerCurrentlyMoving_Params
	{
	public:
		bool                                                       IsPlayerMoving;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Freddy.Freddy_C.GetFlashlightActor
	 */
	struct AFreddy_C_GetFlashlightActor_Params
	{
	public:
		class AActor*                                              FlashlightActor;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.IsPlayerUsingFazwatch
	 */
	struct AFreddy_C_IsPlayerUsingFazwatch_Params
	{
	public:
		bool                                                       IsUsingFazwatch;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Freddy.Freddy_C.LastItemCollected
	 */
	struct AFreddy_C_LastItemCollected_Params
	{
	public:
		struct FFNAFInventoryTableStruct                           ItemInfo;                                                // 0x0000(0x0058)  (Parm, OutParm)
	};

	/**
	 * Function Freddy.Freddy_C.IsPlayerFlashlightActive
	 */
	struct AFreddy_C_IsPlayerFlashlightActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Freddy.Freddy_C.IsSwitchingItems
	 */
	struct AFreddy_C_IsSwitchingItems_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Freddy.Freddy_C.IsInAir
	 */
	struct AFreddy_C_IsInAir_Params
	{
	public:
		bool                                                       InAir;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Freddy.Freddy_C.PlayerEnteringExitingFreddy
	 */
	struct AFreddy_C_PlayerEnteringExitingFreddy_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Freddy.Freddy_C.GetInteractViewLocation
	 */
	struct AFreddy_C_GetInteractViewLocation_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RE09[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.GetInteractViewAngles
	 */
	struct AFreddy_C_GetInteractViewAngles_Params
	{
	public:
		ECameraAngleFlags                                          AnglesToCheck;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.GetHUDInstruction
	 */
	struct AFreddy_C_GetHUDInstruction_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Freddy.Freddy_C.InteractIgnoresTrace
	 */
	struct AFreddy_C_InteractIgnoresTrace_Params
	{
	public:
		bool                                                       IgnoreTrace;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Freddy.Freddy_C.GetInstructionOverride
	 */
	struct AFreddy_C_GetInstructionOverride_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Freddy.Freddy_C.UpdateUIOnTick
	 */
	struct AFreddy_C_UpdateUIOnTick_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Freddy.Freddy_C.CanPlayerInteract
	 */
	struct AFreddy_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EConditionFailReason                                       CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_62RV[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Freddy.Freddy_C.GetInteractibleType
	 */
	struct AFreddy_C_GetInteractibleType_Params
	{
	public:
		EInteractibleType                                          Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractiblePressType                                     PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.GetLevelStreamViewpoint
	 */
	struct AFreddy_C_GetLevelStreamViewpoint_Params
	{
	public:
		class ULevelStreamViewpoint*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.Enable Switch Item
	 */
	struct AFreddy_C_EnableSwitchItem_Params
	{
	public:
		class AMainGamePC_C*                                       Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       enable;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Freddy.Freddy_C.CheckForBlockingVolumes
	 */
	struct AFreddy_C_CheckForBlockingVolumes_Params
	{
	public:
		class AActor*                                              PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsBlocked;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N6Z3[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Freddy.Freddy_C.CloseFreddyFazwatch
	 */
	struct AFreddy_C_CloseFreddyFazwatch_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.Set Freddy Light Enable
	 */
	struct AFreddy_C_SetFreddyLightEnable_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Freddy.Freddy_C.SetForceChestOpen
	 */
	struct AFreddy_C_SetForceChestOpen_Params
	{
	public:
		bool                                                       ForceOpen;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9B7V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Freddy.Freddy_C.SetAnimationSettings
	 */
	struct AFreddy_C_SetAnimationSettings_Params
	{
	public:
		bool                                                       bOrientRotationToMovement;                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BLSR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      MaxWalkSpeed;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            RotationRateMax;                                         // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            RotationRateMin;                                         // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Freddy.Freddy_C.Push Freddy Away from Gregory
	 */
	struct AFreddy_C_PushFreddyAwayfromGregory_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.LookAtGregory
	 */
	struct AFreddy_C_LookAtGregory_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.CanJumpInternal
	 */
	struct AFreddy_C_CanJumpInternal_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Freddy.Freddy_C.Timeline_0_0__FinishedFunc
	 */
	struct AFreddy_C_Timeline_0_0__FinishedFunc_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.Timeline_0_0__UpdateFunc
	 */
	struct AFreddy_C_Timeline_0_0__UpdateFunc_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.Timeline_0_0__FootstepTrigger__EventFunc
	 */
	struct AFreddy_C_Timeline_0_0__FootstepTrigger__EventFunc_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.OnNotifyEnd_6D69D7084A234DF6107D8FB1519D5613
	 */
	struct AFreddy_C_OnNotifyEnd_6D69D7084A234DF6107D8FB1519D5613_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.OnNotifyBegin_6D69D7084A234DF6107D8FB1519D5613
	 */
	struct AFreddy_C_OnNotifyBegin_6D69D7084A234DF6107D8FB1519D5613_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.OnInterrupted_6D69D7084A234DF6107D8FB1519D5613
	 */
	struct AFreddy_C_OnInterrupted_6D69D7084A234DF6107D8FB1519D5613_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.OnBlendOut_6D69D7084A234DF6107D8FB1519D5613
	 */
	struct AFreddy_C_OnBlendOut_6D69D7084A234DF6107D8FB1519D5613_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.OnCompleted_6D69D7084A234DF6107D8FB1519D5613
	 */
	struct AFreddy_C_OnCompleted_6D69D7084A234DF6107D8FB1519D5613_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.OnNotifyEnd_61E4237F499C97F015561A8B21782BE8
	 */
	struct AFreddy_C_OnNotifyEnd_61E4237F499C97F015561A8B21782BE8_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.OnNotifyBegin_61E4237F499C97F015561A8B21782BE8
	 */
	struct AFreddy_C_OnNotifyBegin_61E4237F499C97F015561A8B21782BE8_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.OnInterrupted_61E4237F499C97F015561A8B21782BE8
	 */
	struct AFreddy_C_OnInterrupted_61E4237F499C97F015561A8B21782BE8_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.OnBlendOut_61E4237F499C97F015561A8B21782BE8
	 */
	struct AFreddy_C_OnBlendOut_61E4237F499C97F015561A8B21782BE8_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.OnCompleted_61E4237F499C97F015561A8B21782BE8
	 */
	struct AFreddy_C_OnCompleted_61E4237F499C97F015561A8B21782BE8_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.UpdateCustomProgressMeter
	 */
	struct AFreddy_C_UpdateCustomProgressMeter_Params
	{
	public:
		class FText                                                TextOnLeft;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                TextOnRight;                                             // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Freddy.Freddy_C.ClearHoldMeter
	 */
	struct AFreddy_C_ClearHoldMeter_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.BeginCinimaticSkipFade
	 */
	struct AFreddy_C_BeginCinimaticSkipFade_Params
	{
	public:
		float                                                      DelayDuration;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.ShowCinimaticSkip
	 */
	struct AFreddy_C_ShowCinimaticSkip_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.ForceKill
	 */
	struct AFreddy_C_ForceKill_Params
	{
	public:
		bool                                                       Animate;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Freddy.Freddy_C.GameStart
	 */
	struct AFreddy_C_GameStart_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.GameEnd
	 */
	struct AFreddy_C_GameEnd_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.GameExit
	 */
	struct AFreddy_C_GameExit_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.PlayerHit
	 */
	struct AFreddy_C_PlayerHit_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Freddy.Freddy_C.Unstun
	 */
	struct AFreddy_C_Unstun_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.VisualChangeItem
	 */
	struct AFreddy_C_VisualChangeItem_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.Disable Jump Land Audio
	 */
	struct AFreddy_C_DisableJumpLandAudio_Params
	{
	public:
		bool                                                       Disable;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Freddy.Freddy_C.LowerArms
	 */
	struct AFreddy_C_LowerArms_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.RaiseArms
	 */
	struct AFreddy_C_RaiseArms_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.ForceFlashlightState
	 */
	struct AFreddy_C_ForceFlashlightState_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AllowPlayerToggle;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Freddy.Freddy_C.ForcePlayerCrouch
	 */
	struct AFreddy_C_ForcePlayerCrouch_Params
	{
	public:
		bool                                                       Crouch;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AllowCrouchToggle;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Freddy.Freddy_C.NonLethalJumpscareBPI
	 */
	struct AFreddy_C_NonLethalJumpscareBPI_Params
	{
	public:
		float                                                      CamShakeScale;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5AUG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     AttachmentComponent;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ActorPerformingScare;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.LethalJumpscareBPI
	 */
	struct AFreddy_C_LethalJumpscareBPI_Params
	{
	public:
		class USceneComponent*                                     AttachmentComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAkAudioEvent*                                       JumpscareAudio;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanEscape;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RY59[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CamShakeScale;                                           // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ActorPerfomingScare;                                     // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.DLCRabbitDisplayAlertText
	 */
	struct AFreddy_C_DLCRabbitDisplayAlertText_Params
	{
	public:
		bool                                                       Display;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Freddy.Freddy_C.OnPlayerInteractCancel
	 */
	struct AFreddy_C_OnPlayerInteractCancel_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.OnPlayerHoverEnter
	 */
	struct AFreddy_C_OnPlayerHoverEnter_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.OnPlayerHoverExit
	 */
	struct AFreddy_C_OnPlayerHoverExit_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.ReceiveBeginPlay
	 */
	struct AFreddy_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.ReceiveTick
	 */
	struct AFreddy_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.OnPlayerInteract
	 */
	struct AFreddy_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.ReceivePossessed
	 */
	struct AFreddy_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.ReceiveUnpossessed
	 */
	struct AFreddy_C_ReceiveUnpossessed_Params
	{
	public:
		class AController*                                         OldController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.Attempt Interact
	 */
	struct AFreddy_C_AttemptInteract_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.On Interact Release
	 */
	struct AFreddy_C_OnInteractRelease_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.Eject Gregory
	 */
	struct AFreddy_C_EjectGregory_Params
	{
	public:
		bool                                                       BypassAnim;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Freddy.Freddy_C.PlayFootstepSound
	 */
	struct AFreddy_C_PlayFootstepSound_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.OnDebugVis
	 */
	struct AFreddy_C_OnDebugVis_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Freddy.Freddy_C.Hide Gregory
	 */
	struct AFreddy_C_HideGregory_Params
	{
	public:
		class AGregory_C*                                          Gregory;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UseAnim;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       PlaySound;                                               // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Freddy.Freddy_C.Handle No Interactable
	 */
	struct AFreddy_C_HandleNoInteractable_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.FreddyBroken
	 */
	struct AFreddy_C_FreddyBroken_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.CloseFazwatch_Esc
	 */
	struct AFreddy_C_CloseFazwatch_Esc_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.SmashAnim
	 */
	struct AFreddy_C_SmashAnim_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.EQS Finished
	 */
	struct AFreddy_C_EQSFinished_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   QueryInstance;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEnvQueryStatus                                            QueryStatus;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.Stop Freddy Exit Rotation
	 */
	struct AFreddy_C_StopFreddyExitRotation_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.Use Chica Beak
	 */
	struct AFreddy_C_UseChicaBeak_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.ResetChicaBeakTimer
	 */
	struct AFreddy_C_ResetChicaBeakTimer_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.Jumpscare
	 */
	struct AFreddy_C_Jumpscare_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.Stun
	 */
	struct AFreddy_C_Stun_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.LaserHit
	 */
	struct AFreddy_C_LaserHit_Params
	{
	public:
		class AEQ_LaserGun_C*                                      Gun;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Freddy.Freddy_C.HideHUD
	 */
	struct AFreddy_C_HideHUD_Params
	{
	public:
		bool                                                       bHideProgressWheel;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Freddy.Freddy_C.ShowHUD
	 */
	struct AFreddy_C_ShowHUD_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.BeginInteractHold
	 */
	struct AFreddy_C_BeginInteractHold_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.CancelInteractHold
	 */
	struct AFreddy_C_CancelInteractHold_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.SetInteractHoldProgress
	 */
	struct AFreddy_C_SetInteractHoldProgress_Params
	{
	public:
		float                                                      Percentage;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Freddy.Freddy_C.CompleteInteractHold
	 */
	struct AFreddy_C_CompleteInteractHold_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.UpdateIcons
	 */
	struct AFreddy_C_UpdateIcons_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.On Med Scan Finished
	 */
	struct AFreddy_C_OnMedScanFinished_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.ExecuteUbergraph_Freddy
	 */
	struct AFreddy_C_ExecuteUbergraph_Freddy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GN69[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Freddy.Freddy_C.EnteredSuit__DelegateSignature
	 */
	struct AFreddy_C_EnteredSuit__DelegateSignature_Params
	{	};

	/**
	 * Function Freddy.Freddy_C.ExitedSuit__DelegateSignature
	 */
	struct AFreddy_C_ExitedSuit__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
