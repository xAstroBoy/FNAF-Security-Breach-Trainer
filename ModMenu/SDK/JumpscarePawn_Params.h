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
	 * Function JumpscarePawn.JumpscarePawn_C.Timeline_0__FinishedFunc
	 */
	struct AJumpscarePawn_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function JumpscarePawn.JumpscarePawn_C.Timeline_0__UpdateFunc
	 */
	struct AJumpscarePawn_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function JumpscarePawn.JumpscarePawn_C.Timeline_1__FinishedFunc
	 */
	struct AJumpscarePawn_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function JumpscarePawn.JumpscarePawn_C.Timeline_1__UpdateFunc
	 */
	struct AJumpscarePawn_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function JumpscarePawn.JumpscarePawn_C.Timeline_1__NewTrack_2__EventFunc
	 */
	struct AJumpscarePawn_C_Timeline_1__NewTrack_2__EventFunc_Params
	{	};

	/**
	 * Function JumpscarePawn.JumpscarePawn_C.InpActEvt_PrimaryAction_K2Node_InputActionEvent_1
	 */
	struct AJumpscarePawn_C_InpActEvt_PrimaryAction_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function JumpscarePawn.JumpscarePawn_C.On Jumpscare Kill Timer Up
	 */
	struct AJumpscarePawn_C_OnJumpscareKillTimerUp_Params
	{	};

	/**
	 * Function JumpscarePawn.JumpscarePawn_C.ReceivePossessed
	 */
	struct AJumpscarePawn_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function JumpscarePawn.JumpscarePawn_C.Stop
	 */
	struct AJumpscarePawn_C_Stop_Params
	{	};

	/**
	 * Function JumpscarePawn.JumpscarePawn_C.Possess Gregory
	 */
	struct AJumpscarePawn_C_PossessGregory_Params
	{	};

	/**
	 * Function JumpscarePawn.JumpscarePawn_C.ReceiveTick
	 */
	struct AJumpscarePawn_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function JumpscarePawn.JumpscarePawn_C.ExecuteUbergraph_JumpscarePawn
	 */
	struct AJumpscarePawn_C_ExecuteUbergraph_JumpscarePawn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5XN1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
