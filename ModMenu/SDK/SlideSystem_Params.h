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
	 * Function SlideSystem.SlideSystem_C.GetInteractViewLocation
	 */
	struct ASlideSystem_C_GetInteractViewLocation_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SlideSystem.SlideSystem_C.GetInteractViewAngles
	 */
	struct ASlideSystem_C_GetInteractViewAngles_Params
	{
	public:
		fnaf9_ECameraAngleFlags                                    AnglesToCheck;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SlideSystem.SlideSystem_C.GetHUDInstruction
	 */
	struct ASlideSystem_C_GetHUDInstruction_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function SlideSystem.SlideSystem_C.InteractIgnoresTrace
	 */
	struct ASlideSystem_C_InteractIgnoresTrace_Params
	{
	public:
		bool                                                       IgnoreTrace;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SlideSystem.SlideSystem_C.GetInstructionOverride
	 */
	struct ASlideSystem_C_GetInstructionOverride_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function SlideSystem.SlideSystem_C.UpdateUIOnTick
	 */
	struct ASlideSystem_C_UpdateUIOnTick_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SlideSystem.SlideSystem_C.GetInteractibleType
	 */
	struct ASlideSystem_C_GetInteractibleType_Params
	{
	public:
		TEnumAsByte<InteractibleType_EInteractibleType>            Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TEnumAsByte<InteractiblePressType_EInteractiblePressType>  PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SlideSystem.SlideSystem_C.CanPlayerInteract
	 */
	struct ASlideSystem_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		fnaf9_EConditionFailReason                                 CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SlideSystem.SlideSystem_C.OnPlayerInteractCancel
	 */
	struct ASlideSystem_C_OnPlayerInteractCancel_Params
	{
	};

	/**
	 * Function SlideSystem.SlideSystem_C.OnPlayerHoverEnter
	 */
	struct ASlideSystem_C_OnPlayerHoverEnter_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SlideSystem.SlideSystem_C.OnPlayerHoverExit
	 */
	struct ASlideSystem_C_OnPlayerHoverExit_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SlideSystem.SlideSystem_C.OnPlayerInteract
	 */
	struct ASlideSystem_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SlideSystem.SlideSystem_C.On Slide Entered
	 */
	struct ASlideSystem_C_On_Slide_Entered_Params
	{
	};

	/**
	 * Function SlideSystem.SlideSystem_C.ReturnControl
	 */
	struct ASlideSystem_C_ReturnControl_Params
	{
	};

	/**
	 * Function SlideSystem.SlideSystem_C.FinishedSliding
	 */
	struct ASlideSystem_C_FinishedSliding_Params
	{
	};

	/**
	 * Function SlideSystem.SlideSystem_C.ExecuteUbergraph_SlideSystem
	 */
	struct ASlideSystem_C_ExecuteUbergraph_SlideSystem_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
