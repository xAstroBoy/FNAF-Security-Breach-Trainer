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
	 * Function SurvivalSkipButton.SurvivalSkipButton_C.GetInteractViewLocation
	 */
	struct ASurvivalSkipButton_C_GetInteractViewLocation_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SurvivalSkipButton.SurvivalSkipButton_C.GetInteractViewAngles
	 */
	struct ASurvivalSkipButton_C_GetInteractViewAngles_Params
	{
	public:
		fnaf9_ECameraAngleFlags                                    AnglesToCheck;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SurvivalSkipButton.SurvivalSkipButton_C.GetHUDInstruction
	 */
	struct ASurvivalSkipButton_C_GetHUDInstruction_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function SurvivalSkipButton.SurvivalSkipButton_C.InteractIgnoresTrace
	 */
	struct ASurvivalSkipButton_C_InteractIgnoresTrace_Params
	{
	public:
		bool                                                       IgnoreTrace;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SurvivalSkipButton.SurvivalSkipButton_C.GetInstructionOverride
	 */
	struct ASurvivalSkipButton_C_GetInstructionOverride_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function SurvivalSkipButton.SurvivalSkipButton_C.GetInteractibleType
	 */
	struct ASurvivalSkipButton_C_GetInteractibleType_Params
	{
	public:
		TEnumAsByte<InteractibleType_EInteractibleType>            Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TEnumAsByte<InteractiblePressType_EInteractiblePressType>  PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SurvivalSkipButton.SurvivalSkipButton_C.CanPlayerInteract
	 */
	struct ASurvivalSkipButton_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		fnaf9_EConditionFailReason                                 CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SurvivalSkipButton.SurvivalSkipButton_C.UpdateUIOnTick
	 */
	struct ASurvivalSkipButton_C_UpdateUIOnTick_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SurvivalSkipButton.SurvivalSkipButton_C.UserConstructionScript
	 */
	struct ASurvivalSkipButton_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function SurvivalSkipButton.SurvivalSkipButton_C.OnPlayerInteractCancel
	 */
	struct ASurvivalSkipButton_C_OnPlayerInteractCancel_Params
	{
	};

	/**
	 * Function SurvivalSkipButton.SurvivalSkipButton_C.OnPlayerHoverEnter
	 */
	struct ASurvivalSkipButton_C_OnPlayerHoverEnter_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SurvivalSkipButton.SurvivalSkipButton_C.OnPlayerHoverExit
	 */
	struct ASurvivalSkipButton_C_OnPlayerHoverExit_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SurvivalSkipButton.SurvivalSkipButton_C.ReceiveBeginPlay
	 */
	struct ASurvivalSkipButton_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function SurvivalSkipButton.SurvivalSkipButton_C.OnPlayerInteract
	 */
	struct ASurvivalSkipButton_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SurvivalSkipButton.SurvivalSkipButton_C.ExecuteUbergraph_SurvivalSkipButton
	 */
	struct ASurvivalSkipButton_C_ExecuteUbergraph_SurvivalSkipButton_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
