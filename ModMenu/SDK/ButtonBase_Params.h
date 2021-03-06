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
	 * Function ButtonBase.ButtonBase_C.GetInteractViewLocation
	 */
	struct AButtonBase_C_GetInteractViewLocation_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ButtonBase.ButtonBase_C.GetInteractViewAngles
	 */
	struct AButtonBase_C_GetInteractViewAngles_Params
	{
	public:
		fnaf9_ECameraAngleFlags                                    AnglesToCheck;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ButtonBase.ButtonBase_C.GetHUDInstruction
	 */
	struct AButtonBase_C_GetHUDInstruction_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function ButtonBase.ButtonBase_C.InteractIgnoresTrace
	 */
	struct AButtonBase_C_InteractIgnoresTrace_Params
	{
	public:
		bool                                                       IgnoreTrace;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ButtonBase.ButtonBase_C.GetInstructionOverride
	 */
	struct AButtonBase_C_GetInstructionOverride_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function ButtonBase.ButtonBase_C.UpdateUIOnTick
	 */
	struct AButtonBase_C_UpdateUIOnTick_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ButtonBase.ButtonBase_C.CanPlayerInteract
	 */
	struct AButtonBase_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		fnaf9_EConditionFailReason                                 CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ButtonBase.ButtonBase_C.GetInteractibleType
	 */
	struct AButtonBase_C_GetInteractibleType_Params
	{
	public:
		InteractibleType_EInteractibleType                         Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		InteractiblePressType_EInteractiblePressType               PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ButtonBase.ButtonBase_C.HandleOneShotState
	 */
	struct AButtonBase_C_HandleOneShotState_Params
	{
	};

	/**
	 * Function ButtonBase.ButtonBase_C.OnPlayerInteractCancel
	 */
	struct AButtonBase_C_OnPlayerInteractCancel_Params
	{
	};

	/**
	 * Function ButtonBase.ButtonBase_C.OnPlayerHoverEnter
	 */
	struct AButtonBase_C_OnPlayerHoverEnter_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ButtonBase.ButtonBase_C.OnPlayerHoverExit
	 */
	struct AButtonBase_C_OnPlayerHoverExit_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ButtonBase.ButtonBase_C.OnPlayerInteract
	 */
	struct AButtonBase_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ButtonBase.ButtonBase_C.BndEvt__GameTypeCheck_K2Node_ComponentBoundEvent_0_OnGameTypeAllowEvent__DelegateSignature
	 */
	struct AButtonBase_C_BndEvt__GameTypeCheck_K2Node_ComponentBoundEvent_0_OnGameTypeAllowEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function ButtonBase.ButtonBase_C.SetActivated
	 */
	struct AButtonBase_C_SetActivated_Params
	{
	};

	/**
	 * Function ButtonBase.ButtonBase_C.ExecuteUbergraph_ButtonBase
	 */
	struct AButtonBase_C_ExecuteUbergraph_ButtonBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ButtonBase.ButtonBase_C.On Player Interact__DelegateSignature
	 */
	struct AButtonBase_C_On_Player_Interact__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
