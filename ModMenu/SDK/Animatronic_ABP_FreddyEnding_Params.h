#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
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
	 * Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.TurnFunciton
	 */
	struct UAnimatronic_ABP_FreddyEnding_C_TurnFunciton_Params
	{
	};

	/**
	 * Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.footstep
	 */
	struct UAnimatronic_ABP_FreddyEnding_C_footstep_Params
	{
	};

	/**
	 * Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.BlueprintUpdateAnimation
	 */
	struct UAnimatronic_ABP_FreddyEnding_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.BlueprintBeginPlay
	 */
	struct UAnimatronic_ABP_FreddyEnding_C_BlueprintBeginPlay_Params
	{
	};

	/**
	 * Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.OnAnimInstanceSwap
	 */
	struct UAnimatronic_ABP_FreddyEnding_C_OnAnimInstanceSwap_Params
	{
	};

	/**
	 * Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.SetHeadAimTarget
	 */
	struct UAnimatronic_ABP_FreddyEnding_C_SetHeadAimTarget_Params
	{
	public:
		struct FVector                                             AimLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.HeadAimEvent
	 */
	struct UAnimatronic_ABP_FreddyEnding_C_HeadAimEvent_Params
	{
	public:
		bool                                                       OnOff;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.AnimNotify_R_Foot_Down
	 */
	struct UAnimatronic_ABP_FreddyEnding_C_AnimNotify_R_Foot_Down_Params
	{
	};

	/**
	 * Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.AnimNotify_L_Foot_Down
	 */
	struct UAnimatronic_ABP_FreddyEnding_C_AnimNotify_L_Foot_Down_Params
	{
	};

	/**
	 * Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.Open Chest
	 */
	struct UAnimatronic_ABP_FreddyEnding_C_Open_Chest_Params
	{
	};

	/**
	 * Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.Close Chest
	 */
	struct UAnimatronic_ABP_FreddyEnding_C_Close_Chest_Params
	{
	};

	/**
	 * Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.Force Open
	 */
	struct UAnimatronic_ABP_FreddyEnding_C_Force_Open_Params
	{
	};

	/**
	 * Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.Force Close
	 */
	struct UAnimatronic_ABP_FreddyEnding_C_Force_Close_Params
	{
	};

	/**
	 * Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.CanJumpscareEvent
	 */
	struct UAnimatronic_ABP_FreddyEnding_C_CanJumpscareEvent_Params
	{
	};

	/**
	 * Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.AnimNotify_chest_open
	 */
	struct UAnimatronic_ABP_FreddyEnding_C_AnimNotify_chest_open_Params
	{
	};

	/**
	 * Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.AnimNotify_chest_close
	 */
	struct UAnimatronic_ABP_FreddyEnding_C_AnimNotify_chest_close_Params
	{
	};

	/**
	 * Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.AnimNotify_chestexit
	 */
	struct UAnimatronic_ABP_FreddyEnding_C_AnimNotify_chestexit_Params
	{
	};

	/**
	 * Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.VoAnimEvent
	 */
	struct UAnimatronic_ABP_FreddyEnding_C_VoAnimEvent_Params
	{
	public:
		class UAkAudioEvent*                                       AK_Event;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C.ExecuteUbergraph_Animatronic_ABP_FreddyEnding
	 */
	struct UAnimatronic_ABP_FreddyEnding_C_ExecuteUbergraph_Animatronic_ABP_FreddyEnding_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
