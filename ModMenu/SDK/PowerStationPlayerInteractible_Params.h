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
	 * Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.GetInteractViewLocation
	 */
	struct APowerStationPlayerInteractible_C_GetInteractViewLocation_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_COX8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.GetInteractViewAngles
	 */
	struct APowerStationPlayerInteractible_C_GetInteractViewAngles_Params
	{
	public:
		ECameraAngleFlags                                          AnglesToCheck;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.GetHUDInstruction
	 */
	struct APowerStationPlayerInteractible_C_GetHUDInstruction_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.InteractIgnoresTrace
	 */
	struct APowerStationPlayerInteractible_C_InteractIgnoresTrace_Params
	{
	public:
		bool                                                       IgnoreTrace;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.GetInstructionOverride
	 */
	struct APowerStationPlayerInteractible_C_GetInstructionOverride_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.UpdateUIOnTick
	 */
	struct APowerStationPlayerInteractible_C_UpdateUIOnTick_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.GetInteractibleType
	 */
	struct APowerStationPlayerInteractible_C_GetInteractibleType_Params
	{
	public:
		EInteractibleType                                          Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractiblePressType                                     PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.CanPlayerInteract
	 */
	struct APowerStationPlayerInteractible_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EConditionFailReason                                       CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BUCU[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.OnPlayerInteractCancel
	 */
	struct APowerStationPlayerInteractible_C_OnPlayerInteractCancel_Params
	{	};

	/**
	 * Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.OnPlayerHoverEnter
	 */
	struct APowerStationPlayerInteractible_C_OnPlayerHoverEnter_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.OnPlayerHoverExit
	 */
	struct APowerStationPlayerInteractible_C_OnPlayerHoverExit_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.OnPlayerInteract
	 */
	struct APowerStationPlayerInteractible_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.Setup From Load
	 */
	struct APowerStationPlayerInteractible_C_SetupFromLoad_Params
	{	};

	/**
	 * Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.On Power Station Event Finished
	 */
	struct APowerStationPlayerInteractible_C_OnPowerStationEventFinished_Params
	{	};

	/**
	 * Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.StartHour5VO
	 */
	struct APowerStationPlayerInteractible_C_StartHour5VO_Params
	{	};

	/**
	 * Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.StartHour6VO
	 */
	struct APowerStationPlayerInteractible_C_StartHour6VO_Params
	{	};

	/**
	 * Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.ExecuteUbergraph_PowerStationPlayerInteractible
	 */
	struct APowerStationPlayerInteractible_C_ExecuteUbergraph_PowerStationPlayerInteractible_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WTGY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
