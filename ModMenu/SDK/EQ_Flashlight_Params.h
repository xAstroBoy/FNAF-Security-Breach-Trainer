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
	 * Function EQ_Flashlight.EQ_Flashlight_C.Get Anim Item Type
	 */
	struct AEQ_Flashlight_C_GetAnimItemType_Params
	{
	public:
		EGregoryAnimItemEnum                                       AnimType;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.PutAway
	 */
	struct AEQ_Flashlight_C_PutAway_Params
	{	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.RandomFlicker01Timeline__FinishedFunc
	 */
	struct AEQ_Flashlight_C_RandomFlicker01Timeline__FinishedFunc_Params
	{	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.RandomFlicker01Timeline__UpdateFunc
	 */
	struct AEQ_Flashlight_C_RandomFlicker01Timeline__UpdateFunc_Params
	{	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.Timeline_0__FinishedFunc
	 */
	struct AEQ_Flashlight_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.Timeline_0__UpdateFunc
	 */
	struct AEQ_Flashlight_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.Timeline_1__FinishedFunc
	 */
	struct AEQ_Flashlight_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.Timeline_1__UpdateFunc
	 */
	struct AEQ_Flashlight_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.Timeline_2__FinishedFunc
	 */
	struct AEQ_Flashlight_C_Timeline_2__FinishedFunc_Params
	{	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.Timeline_2__UpdateFunc
	 */
	struct AEQ_Flashlight_C_Timeline_2__UpdateFunc_Params
	{	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.Timeline_3__FinishedFunc
	 */
	struct AEQ_Flashlight_C_Timeline_3__FinishedFunc_Params
	{	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.Timeline_3__UpdateFunc
	 */
	struct AEQ_Flashlight_C_Timeline_3__UpdateFunc_Params
	{	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.Timeline_4__FinishedFunc
	 */
	struct AEQ_Flashlight_C_Timeline_4__FinishedFunc_Params
	{	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.Timeline_4__UpdateFunc
	 */
	struct AEQ_Flashlight_C_Timeline_4__UpdateFunc_Params
	{	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.Timeline_5__FinishedFunc
	 */
	struct AEQ_Flashlight_C_Timeline_5__FinishedFunc_Params
	{	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.Timeline_5__UpdateFunc
	 */
	struct AEQ_Flashlight_C_Timeline_5__UpdateFunc_Params
	{	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.Timeline_6__FinishedFunc
	 */
	struct AEQ_Flashlight_C_Timeline_6__FinishedFunc_Params
	{	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.Timeline_6__UpdateFunc
	 */
	struct AEQ_Flashlight_C_Timeline_6__UpdateFunc_Params
	{	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.PrimaryAction
	 */
	struct AEQ_Flashlight_C_PrimaryAction_Params
	{	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.Set State
	 */
	struct AEQ_Flashlight_C_SetState_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.Toggle State
	 */
	struct AEQ_Flashlight_C_ToggleState_Params
	{	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.ReceiveBeginPlay
	 */
	struct AEQ_Flashlight_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.RandomPowerFlicker
	 */
	struct AEQ_Flashlight_C_RandomPowerFlicker_Params
	{	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.PowerDownFlicker
	 */
	struct AEQ_Flashlight_C_PowerDownFlicker_Params
	{	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.StartRandomPowerFlickerTimer
	 */
	struct AEQ_Flashlight_C_StartRandomPowerFlickerTimer_Params
	{	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.ReceiveTick
	 */
	struct AEQ_Flashlight_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.ForceOff
	 */
	struct AEQ_Flashlight_C_ForceOff_Params
	{	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.AudioFlicker
	 */
	struct AEQ_Flashlight_C_AudioFlicker_Params
	{
	public:
		float                                                      NewIntensity;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.ExecuteUbergraph_EQ_Flashlight
	 */
	struct AEQ_Flashlight_C_ExecuteUbergraph_EQ_Flashlight_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5RL0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.OnFlashlightPowerOut__DelegateSignature
	 */
	struct AEQ_Flashlight_C_OnFlashlightPowerOut__DelegateSignature_Params
	{	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.FlashlightStateChange__DelegateSignature
	 */
	struct AEQ_Flashlight_C_FlashlightStateChange__DelegateSignature_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EQ_Flashlight.EQ_Flashlight_C.AttemptActivateDeadFlashlight__DelegateSignature
	 */
	struct AEQ_Flashlight_C_AttemptActivateDeadFlashlight__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
