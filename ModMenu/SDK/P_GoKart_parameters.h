#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function P_GoKart.P_GoKart_C.GetCanMove
struct AP_GoKart_C_GetCanMove_Params
{
	bool                                               CanMove;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function P_GoKart.P_GoKart_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_2
struct AP_GoKart_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function P_GoKart.P_GoKart_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_1
struct AP_GoKart_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function P_GoKart.P_GoKart_C.InpActEvt_Interact_K2Node_InputActionEvent_1
struct AP_GoKart_C_InpActEvt_Interact_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function P_GoKart.P_GoKart_C.StartRaceCountdown
struct AP_GoKart_C_StartRaceCountdown_Params
{
	float                                              TimeTillStart;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function P_GoKart.P_GoKart_C.StartRace
struct AP_GoKart_C_StartRace_Params
{
};

// Function P_GoKart.P_GoKart_C.EndRace
struct AP_GoKart_C_EndRace_Params
{
};

// Function P_GoKart.P_GoKart_C.ReceiveBeginPlay
struct AP_GoKart_C_ReceiveBeginPlay_Params
{
};

// Function P_GoKart.P_GoKart_C.ReceiveTick
struct AP_GoKart_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function P_GoKart.P_GoKart_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
struct AP_GoKart_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function P_GoKart.P_GoKart_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2
struct AP_GoKart_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function P_GoKart.P_GoKart_C.InpAxisKeyEvt_Gamepad_RightTriggerAxis_K2Node_InputAxisKeyEvent_1
struct AP_GoKart_C_InpAxisKeyEvt_Gamepad_RightTriggerAxis_K2Node_InputAxisKeyEvent_1_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function P_GoKart.P_GoKart_C.InpAxisKeyEvt_Gamepad_LeftTriggerAxis_K2Node_InputAxisKeyEvent_2
struct AP_GoKart_C_InpAxisKeyEvt_Gamepad_LeftTriggerAxis_K2Node_InputAxisKeyEvent_2_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function P_GoKart.P_GoKart_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3
struct AP_GoKart_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function P_GoKart.P_GoKart_C.ReceivePossessed
struct AP_GoKart_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function P_GoKart.P_GoKart_C.ReceiveUnpossessed
struct AP_GoKart_C_ReceiveUnpossessed_Params
{
	class AController*                                 OldController;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function P_GoKart.P_GoKart_C.CanMove
struct AP_GoKart_C_CanMove_Params
{
	bool                                               New_Can_Move;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function P_GoKart.P_GoKart_C.AIMoveForward
struct AP_GoKart_C_AIMoveForward_Params
{
	float                                              Axis;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function P_GoKart.P_GoKart_C.AITurnRight
struct AP_GoKart_C_AITurnRight_Params
{
	float                                              Axis;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function P_GoKart.P_GoKart_C.GameEnd
struct AP_GoKart_C_GameEnd_Params
{
};

// Function P_GoKart.P_GoKart_C.ExecuteUbergraph_P_GoKart
struct AP_GoKart_C_ExecuteUbergraph_P_GoKart_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
