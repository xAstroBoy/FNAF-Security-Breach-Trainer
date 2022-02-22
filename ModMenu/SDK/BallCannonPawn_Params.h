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
	 * Function BallCannonPawn.BallCannonPawn_C.UpdateBalls
	 */
	struct ABallCannonPawn_C_UpdateBalls_Params
	{
	};

	/**
	 * Function BallCannonPawn.BallCannonPawn_C.InpActEvt_PrimaryAction_K2Node_InputActionEvent_2
	 */
	struct ABallCannonPawn_C_InpActEvt_PrimaryAction_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BallCannonPawn.BallCannonPawn_C.InpActEvt_Interact_K2Node_InputActionEvent_1
	 */
	struct ABallCannonPawn_C_InpActEvt_Interact_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BallCannonPawn.BallCannonPawn_C.ReceivePossessed
	 */
	struct ABallCannonPawn_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BallCannonPawn.BallCannonPawn_C.ReceiveUnpossessed
	 */
	struct ABallCannonPawn_C_ReceiveUnpossessed_Params
	{
	public:
		class AController*                                         OldController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BallCannonPawn.BallCannonPawn_C.Leave Cannon
	 */
	struct ABallCannonPawn_C_Leave_Cannon_Params
	{
	};

	/**
	 * Function BallCannonPawn.BallCannonPawn_C.ReceiveTick
	 */
	struct ABallCannonPawn_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BallCannonPawn.BallCannonPawn_C.Fire
	 */
	struct ABallCannonPawn_C_Fire_Params
	{
	};

	/**
	 * Function BallCannonPawn.BallCannonPawn_C.ExecuteUbergraph_BallCannonPawn
	 */
	struct ABallCannonPawn_C_ExecuteUbergraph_BallCannonPawn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
