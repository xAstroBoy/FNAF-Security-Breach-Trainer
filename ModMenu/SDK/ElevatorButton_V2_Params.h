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
	 * Function ElevatorButton_V2.ElevatorButton_V2_C.CanPlayerInteract
	 */
	struct AElevatorButton_V2_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EConditionFailReason                                       CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElevatorButton_V2.ElevatorButton_V2_C.UserConstructionScript
	 */
	struct AElevatorButton_V2_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ElevatorButton_V2.ElevatorButton_V2_C.ReceiveBeginPlay
	 */
	struct AElevatorButton_V2_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ElevatorButton_V2.ElevatorButton_V2_C.ChangeColor
	 */
	struct AElevatorButton_V2_C_ChangeColor_Params
	{
	public:
		int32_t                                                    ChangeColor;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElevatorButton_V2.ElevatorButton_V2_C.OnPlayerInteract
	 */
	struct AElevatorButton_V2_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ElevatorButton_V2.ElevatorButton_V2_C.Set Can Use
	 */
	struct AElevatorButton_V2_C_SetCanUse_Params
	{
	public:
		bool                                                       CanUse;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ElevatorButton_V2.ElevatorButton_V2_C.ExecuteUbergraph_ElevatorButton_V2
	 */
	struct AElevatorButton_V2_C_ExecuteUbergraph_ElevatorButton_V2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
