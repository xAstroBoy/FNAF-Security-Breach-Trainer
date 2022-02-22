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
	 * Function P_GoKart.P_GoKart_C.GetCanMove
	 */
	struct AP_GoKart_C_GetCanMove_Params
	{
	public:
		bool                                                       CanMove;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function P_GoKart.P_GoKart_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_2
	 */
	struct AP_GoKart_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function P_GoKart.P_GoKart_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_1
	 */
	struct AP_GoKart_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function P_GoKart.P_GoKart_C.InpActEvt_Interact_K2Node_InputActionEvent_1
	 */
	struct AP_GoKart_C_InpActEvt_Interact_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function P_GoKart.P_GoKart_C.StartRaceCountdown
	 */
	struct AP_GoKart_C_StartRaceCountdown_Params
	{
	public:
		float                                                      TimeTillStart;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function P_GoKart.P_GoKart_C.StartRace
	 */
	struct AP_GoKart_C_StartRace_Params
	{
	};

	/**
	 * Function P_GoKart.P_GoKart_C.EndRace
	 */
	struct AP_GoKart_C_EndRace_Params
	{
	};

	/**
	 * Function P_GoKart.P_GoKart_C.ReceiveBeginPlay
	 */
	struct AP_GoKart_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function P_GoKart.P_GoKart_C.ReceiveTick
	 */
	struct AP_GoKart_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function P_GoKart.P_GoKart_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
	 */
	struct AP_GoKart_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function P_GoKart.P_GoKart_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2
	 */
	struct AP_GoKart_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function P_GoKart.P_GoKart_C.InpAxisKeyEvt_Gamepad_RightTriggerAxis_K2Node_InputAxisKeyEvent_1
	 */
	struct AP_GoKart_C_InpAxisKeyEvt_Gamepad_RightTriggerAxis_K2Node_InputAxisKeyEvent_1_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function P_GoKart.P_GoKart_C.InpAxisKeyEvt_Gamepad_LeftTriggerAxis_K2Node_InputAxisKeyEvent_2
	 */
	struct AP_GoKart_C_InpAxisKeyEvt_Gamepad_LeftTriggerAxis_K2Node_InputAxisKeyEvent_2_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function P_GoKart.P_GoKart_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3
	 */
	struct AP_GoKart_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function P_GoKart.P_GoKart_C.ReceivePossessed
	 */
	struct AP_GoKart_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function P_GoKart.P_GoKart_C.ReceiveUnpossessed
	 */
	struct AP_GoKart_C_ReceiveUnpossessed_Params
	{
	public:
		class AController*                                         OldController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function P_GoKart.P_GoKart_C.CanMove
	 */
	struct AP_GoKart_C_CanMove_Params
	{
	public:
		bool                                                       New_Can_Move;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function P_GoKart.P_GoKart_C.AIMoveForward
	 */
	struct AP_GoKart_C_AIMoveForward_Params
	{
	public:
		float                                                      Axis;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function P_GoKart.P_GoKart_C.AITurnRight
	 */
	struct AP_GoKart_C_AITurnRight_Params
	{
	public:
		float                                                      Axis;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function P_GoKart.P_GoKart_C.GameEnd
	 */
	struct AP_GoKart_C_GameEnd_Params
	{
	};

	/**
	 * Function P_GoKart.P_GoKart_C.ExecuteUbergraph_P_GoKart
	 */
	struct AP_GoKart_C_ExecuteUbergraph_P_GoKart_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
