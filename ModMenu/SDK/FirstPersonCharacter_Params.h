﻿#pragma once

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
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.GetWalkingFOV
	 */
	struct AFirstPersonCharacter_C_GetWalkingFOV_Params
	{
	public:
		float                                                      FOV;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.GetCamera
	 */
	struct AFirstPersonCharacter_C_GetCamera_Params
	{
	public:
		class UCameraComponent*                                    Camera;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.DoorEntryNotAllowed
	 */
	struct AFirstPersonCharacter_C_DoorEntryNotAllowed_Params
	{
	public:
		class UDoorComponent*                                      DoorComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.GetFlashlightLocationAndDirection
	 */
	struct AFirstPersonCharacter_C_GetFlashlightLocationAndDirection_Params
	{
	public:
		bool                                                       HasFlashlight;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QXTG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             FlashlightLocation;                                      // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             FlashlightDirection;                                     // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.Is Chowda Mode
	 */
	struct AFirstPersonCharacter_C_IsChowdaMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WOUB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.FootstepCheckHit
	 */
	struct AFirstPersonCharacter_C_FootstepCheckHit_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.ChooseBallFX
	 */
	struct AFirstPersonCharacter_C_ChooseBallFX_Params
	{
	public:
		class UNiagaraSystem*                                      NewParam;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.SetGravityEnable
	 */
	struct AFirstPersonCharacter_C_SetGravityEnable_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.UpdateSettings
	 */
	struct AFirstPersonCharacter_C_UpdateSettings_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.Handle Jump Audio
	 */
	struct AFirstPersonCharacter_C_HandleJumpAudio_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.Handle Land Audio
	 */
	struct AFirstPersonCharacter_C_HandleLandAudio_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.GetPlayerHUD
	 */
	struct AFirstPersonCharacter_C_GetPlayerHUD_Params
	{
	public:
		class UPlayerHUD_C*                                        PlayerHUD;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.SetupSpringArm
	 */
	struct AFirstPersonCharacter_C_SetupSpringArm_Params
	{
	public:
		bool                                                       bUsingGamepad;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QX52[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.footstep
	 */
	struct AFirstPersonCharacter_C_footstep_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.Arm Roll__FinishedFunc
	 */
	struct AFirstPersonCharacter_C_ArmRoll__FinishedFunc_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.Arm Roll__UpdateFunc
	 */
	struct AFirstPersonCharacter_C_ArmRoll__UpdateFunc_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.Timeline_0__FinishedFunc
	 */
	struct AFirstPersonCharacter_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.Timeline_0__UpdateFunc
	 */
	struct AFirstPersonCharacter_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.Timeline_0__CamShakeTrigger__EventFunc
	 */
	struct AFirstPersonCharacter_C_Timeline_0__CamShakeTrigger__EventFunc_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_TMPZOOM_K2Node_InputActionEvent_3
	 */
	struct AFirstPersonCharacter_C_InpActEvt_TMPZOOM_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_Interact_K2Node_InputActionEvent_2
	 */
	struct AFirstPersonCharacter_C_InpActEvt_Interact_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_Interact_K2Node_InputActionEvent_1
	 */
	struct AFirstPersonCharacter_C_InpActEvt_Interact_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.TriggerJump
	 */
	struct AFirstPersonCharacter_C_TriggerJump_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.ReceiveTick
	 */
	struct AFirstPersonCharacter_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.SetFOV
	 */
	struct AFirstPersonCharacter_C_SetFOV_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.Attempt Interact
	 */
	struct AFirstPersonCharacter_C_AttemptInteract_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.AttemptPrimaryAction
	 */
	struct AFirstPersonCharacter_C_AttemptPrimaryAction_Params
	{
	public:
		class FName                                                ItemToUse;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.AttemptSecondaryAction
	 */
	struct AFirstPersonCharacter_C_AttemptSecondaryAction_Params
	{
	public:
		class FName                                                ItemToUse;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.AttemptSwitch:Item1
	 */
	struct AFirstPersonCharacter_C_AttemptSwitchItem1_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.AttemptSwitch:Item2
	 */
	struct AFirstPersonCharacter_C_AttemptSwitchItem2_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.AttemptSwitch:Item3
	 */
	struct AFirstPersonCharacter_C_AttemptSwitchItem3_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.AttemptThrow
	 */
	struct AFirstPersonCharacter_C_AttemptThrow_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.ReceiveBeginPlay
	 */
	struct AFirstPersonCharacter_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.ReceivePossessed
	 */
	struct AFirstPersonCharacter_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.ReceiveUnpossessed
	 */
	struct AFirstPersonCharacter_C_ReceiveUnpossessed_Params
	{
	public:
		class AController*                                         OldController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.RollForRaise
	 */
	struct AFirstPersonCharacter_C_RollForRaise_Params
	{
	public:
		bool                                                       WatchUp;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.RollForLower
	 */
	struct AFirstPersonCharacter_C_RollForLower_Params
	{
	public:
		bool                                                       WatchUp;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.PressAndReleaseMouse
	 */
	struct AFirstPersonCharacter_C_PressAndReleaseMouse_Params
	{
	public:
		bool                                                       Pressed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.Teleport Player With Offset
	 */
	struct AFirstPersonCharacter_C_TeleportPlayerWithOffset_Params
	{
	public:
		struct FVector                                             DeltaLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaYaw;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.Teleport Player With Delta Yaw
	 */
	struct AFirstPersonCharacter_C_TeleportPlayerWithDeltaYaw_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaYaw;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.OnControllerType Changed
	 */
	struct AFirstPersonCharacter_C_OnControllerTypeChanged_Params
	{
	public:
		bool                                                       bIsUsingGamepad;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.On Interact Release
	 */
	struct AFirstPersonCharacter_C_OnInteractRelease_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.Attempt Freddy Call
	 */
	struct AFirstPersonCharacter_C_AttemptFreddyCall_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.CamShakeEvent_DJMM
	 */
	struct AFirstPersonCharacter_C_CamShakeEvent_DJMM_Params
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.CameraShakeEvent_Animatronics
	 */
	struct AFirstPersonCharacter_C_CameraShakeEvent_Animatronics_Params
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.CamShakeEvent_Landing
	 */
	struct AFirstPersonCharacter_C_CamShakeEvent_Landing_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.CamShakeEvent_Jumping
	 */
	struct AFirstPersonCharacter_C_CamShakeEvent_Jumping_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.CameraShakeEvent_MontyLand
	 */
	struct AFirstPersonCharacter_C_CameraShakeEvent_MontyLand_Params
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.OnOverlappedDoor
	 */
	struct AFirstPersonCharacter_C_OnOverlappedDoor_Params
	{
	public:
		bool                                                       bCanEnterDoor;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EConditionFailReason                                       CantEnterReason;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EERB[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDoorComponent*                                      DoorComponent;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.OnEndOverlapDoor
	 */
	struct AFirstPersonCharacter_C_OnEndOverlapDoor_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.SwitchGIVolume
	 */
	struct AFirstPersonCharacter_C_SwitchGIVolume_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.SwitchColorForScenario
	 */
	struct AFirstPersonCharacter_C_SwitchColorForScenario_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.Pause
	 */
	struct AFirstPersonCharacter_C_Pause_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.Set Interact Enable
	 */
	struct AFirstPersonCharacter_C_SetInteractEnable_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.Use Chica Beak
	 */
	struct AFirstPersonCharacter_C_UseChicaBeak_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.Use Monty Claws
	 */
	struct AFirstPersonCharacter_C_UseMontyClaws_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.Use Roxy Eyes
	 */
	struct AFirstPersonCharacter_C_UseRoxyEyes_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_0_OnHoldCompleted__DelegateSignature
	 */
	struct AFirstPersonCharacter_C_BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_0_OnHoldCompleted__DelegateSignature_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.PauseHaptics
	 */
	struct AFirstPersonCharacter_C_PauseHaptics_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.StartHaptics
	 */
	struct AFirstPersonCharacter_C_StartHaptics_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.InteractableHaptics
	 */
	struct AFirstPersonCharacter_C_InteractableHaptics_Params
	{
	public:
		float                                                      Percentage;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.ForceStopCameraShake
	 */
	struct AFirstPersonCharacter_C_ForceStopCameraShake_Params
	{	};

	/**
	 * Function FirstPersonCharacter.FirstPersonCharacter_C.ExecuteUbergraph_FirstPersonCharacter
	 */
	struct AFirstPersonCharacter_C_ExecuteUbergraph_FirstPersonCharacter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
