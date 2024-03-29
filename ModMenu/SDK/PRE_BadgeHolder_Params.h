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
	 * Function PRE_BadgeHolder.PRE_BadgeHolder_C.GetInteractViewLocation
	 */
	struct APRE_BadgeHolder_C_GetInteractViewLocation_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2L0A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_BadgeHolder.PRE_BadgeHolder_C.GetInteractViewAngles
	 */
	struct APRE_BadgeHolder_C_GetInteractViewAngles_Params
	{
	public:
		ECameraAngleFlags                                          AnglesToCheck;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_BadgeHolder.PRE_BadgeHolder_C.GetHUDInstruction
	 */
	struct APRE_BadgeHolder_C_GetHUDInstruction_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function PRE_BadgeHolder.PRE_BadgeHolder_C.InteractIgnoresTrace
	 */
	struct APRE_BadgeHolder_C_InteractIgnoresTrace_Params
	{
	public:
		bool                                                       IgnoreTrace;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PRE_BadgeHolder.PRE_BadgeHolder_C.GetInteractibleType
	 */
	struct APRE_BadgeHolder_C_GetInteractibleType_Params
	{
	public:
		EInteractibleType                                          Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractiblePressType                                     PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_BadgeHolder.PRE_BadgeHolder_C.CanPlayerInteract
	 */
	struct APRE_BadgeHolder_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EConditionFailReason                                       CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z0J6[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PRE_BadgeHolder.PRE_BadgeHolder_C.UpdateUIOnTick
	 */
	struct APRE_BadgeHolder_C_UpdateUIOnTick_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PRE_BadgeHolder.PRE_BadgeHolder_C.GetInstructionOverride
	 */
	struct APRE_BadgeHolder_C_GetInstructionOverride_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function PRE_BadgeHolder.PRE_BadgeHolder_C.Open__FinishedFunc
	 */
	struct APRE_BadgeHolder_C_Open__FinishedFunc_Params
	{	};

	/**
	 * Function PRE_BadgeHolder.PRE_BadgeHolder_C.Open__UpdateFunc
	 */
	struct APRE_BadgeHolder_C_Open__UpdateFunc_Params
	{	};

	/**
	 * Function PRE_BadgeHolder.PRE_BadgeHolder_C.Close__FinishedFunc
	 */
	struct APRE_BadgeHolder_C_Close__FinishedFunc_Params
	{	};

	/**
	 * Function PRE_BadgeHolder.PRE_BadgeHolder_C.Close__UpdateFunc
	 */
	struct APRE_BadgeHolder_C_Close__UpdateFunc_Params
	{	};

	/**
	 * Function PRE_BadgeHolder.PRE_BadgeHolder_C.Press_Nose_Button__FinishedFunc
	 */
	struct APRE_BadgeHolder_C_Press_Nose_Button__FinishedFunc_Params
	{	};

	/**
	 * Function PRE_BadgeHolder.PRE_BadgeHolder_C.Press_Nose_Button__UpdateFunc
	 */
	struct APRE_BadgeHolder_C_Press_Nose_Button__UpdateFunc_Params
	{	};

	/**
	 * Function PRE_BadgeHolder.PRE_BadgeHolder_C.OnPlayerInteractCancel
	 */
	struct APRE_BadgeHolder_C_OnPlayerInteractCancel_Params
	{	};

	/**
	 * Function PRE_BadgeHolder.PRE_BadgeHolder_C.OnPlayerHoverEnter
	 */
	struct APRE_BadgeHolder_C_OnPlayerHoverEnter_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_BadgeHolder.PRE_BadgeHolder_C.OnPlayerHoverExit
	 */
	struct APRE_BadgeHolder_C_OnPlayerHoverExit_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_BadgeHolder.PRE_BadgeHolder_C.Collect_SecurityBadge
	 */
	struct APRE_BadgeHolder_C_Collect_SecurityBadge_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_BadgeHolder.PRE_BadgeHolder_C.OnPlayerInteract
	 */
	struct APRE_BadgeHolder_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_BadgeHolder.PRE_BadgeHolder_C.Anim Sequence Finished
	 */
	struct APRE_BadgeHolder_C_AnimSequenceFinished_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_BadgeHolder.PRE_BadgeHolder_C.ExecuteUbergraph_PRE_BadgeHolder
	 */
	struct APRE_BadgeHolder_C_ExecuteUbergraph_PRE_BadgeHolder_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GP0O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PRE_BadgeHolder.PRE_BadgeHolder_C.OnAnimSequenceFinished__DelegateSignature
	 */
	struct APRE_BadgeHolder_C_OnAnimSequenceFinished__DelegateSignature_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_BadgeHolder.PRE_BadgeHolder_C.OnInteract__DelegateSignature
	 */
	struct APRE_BadgeHolder_C_OnInteract__DelegateSignature_Params
	{	};

	/**
	 * Function PRE_BadgeHolder.PRE_BadgeHolder_C.OnCollectSecurityBadge__DelegateSignature
	 */
	struct APRE_BadgeHolder_C_OnCollectSecurityBadge__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
