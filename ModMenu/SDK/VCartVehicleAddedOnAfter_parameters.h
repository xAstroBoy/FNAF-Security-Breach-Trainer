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

// Function VCartVehicleAddedOnAfter.VCartVehicleAddedOnAfter_C.GetCanMove
struct AVCartVehicleAddedOnAfter_C_GetCanMove_Params
{
	bool                                               CanMove;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function VCartVehicleAddedOnAfter.VCartVehicleAddedOnAfter_C.Update Physics Material
struct AVCartVehicleAddedOnAfter_C_Update_Physics_Material_Params
{
};

// Function VCartVehicleAddedOnAfter.VCartVehicleAddedOnAfter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_4
struct AVCartVehicleAddedOnAfter_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function VCartVehicleAddedOnAfter.VCartVehicleAddedOnAfter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_3
struct AVCartVehicleAddedOnAfter_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function VCartVehicleAddedOnAfter.VCartVehicleAddedOnAfter_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_2
struct AVCartVehicleAddedOnAfter_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function VCartVehicleAddedOnAfter.VCartVehicleAddedOnAfter_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_1
struct AVCartVehicleAddedOnAfter_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function VCartVehicleAddedOnAfter.VCartVehicleAddedOnAfter_C.InpActEvt_Interact_K2Node_InputActionEvent_1
struct AVCartVehicleAddedOnAfter_C_InpActEvt_Interact_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function VCartVehicleAddedOnAfter.VCartVehicleAddedOnAfter_C.GameEnd
struct AVCartVehicleAddedOnAfter_C_GameEnd_Params
{
};

// Function VCartVehicleAddedOnAfter.VCartVehicleAddedOnAfter_C.EndRace
struct AVCartVehicleAddedOnAfter_C_EndRace_Params
{
};

// Function VCartVehicleAddedOnAfter.VCartVehicleAddedOnAfter_C.StartRace
struct AVCartVehicleAddedOnAfter_C_StartRace_Params
{
};

// Function VCartVehicleAddedOnAfter.VCartVehicleAddedOnAfter_C.ReceiveBeginPlay
struct AVCartVehicleAddedOnAfter_C_ReceiveBeginPlay_Params
{
};

// Function VCartVehicleAddedOnAfter.VCartVehicleAddedOnAfter_C.StartRaceCountdown
struct AVCartVehicleAddedOnAfter_C_StartRaceCountdown_Params
{
	float                                              TimeTillStart;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VCartVehicleAddedOnAfter.VCartVehicleAddedOnAfter_C.ReceivePossessed
struct AVCartVehicleAddedOnAfter_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VCartVehicleAddedOnAfter.VCartVehicleAddedOnAfter_C.ReceiveUnpossessed
struct AVCartVehicleAddedOnAfter_C_ReceiveUnpossessed_Params
{
	class AController*                                 OldController;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VCartVehicleAddedOnAfter.VCartVehicleAddedOnAfter_C.CanMove
struct AVCartVehicleAddedOnAfter_C_CanMove_Params
{
	bool                                               New_Can_Move;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function VCartVehicleAddedOnAfter.VCartVehicleAddedOnAfter_C.AIMoveForward
struct AVCartVehicleAddedOnAfter_C_AIMoveForward_Params
{
	float                                              Axis;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VCartVehicleAddedOnAfter.VCartVehicleAddedOnAfter_C.AITurnRight
struct AVCartVehicleAddedOnAfter_C_AITurnRight_Params
{
	float                                              Axis;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VCartVehicleAddedOnAfter.VCartVehicleAddedOnAfter_C.Force Break
struct AVCartVehicleAddedOnAfter_C_Force_Break_Params
{
};

// Function VCartVehicleAddedOnAfter.VCartVehicleAddedOnAfter_C.Force Interact
struct AVCartVehicleAddedOnAfter_C_Force_Interact_Params
{
};

// Function VCartVehicleAddedOnAfter.VCartVehicleAddedOnAfter_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_33
struct AVCartVehicleAddedOnAfter_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_33_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VCartVehicleAddedOnAfter.VCartVehicleAddedOnAfter_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_44
struct AVCartVehicleAddedOnAfter_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_44_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VCartVehicleAddedOnAfter.VCartVehicleAddedOnAfter_C.ReceiveTick
struct AVCartVehicleAddedOnAfter_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VCartVehicleAddedOnAfter.VCartVehicleAddedOnAfter_C.ExecuteUbergraph_VCartVehicleAddedOnAfter
struct AVCartVehicleAddedOnAfter_C_ExecuteUbergraph_VCartVehicleAddedOnAfter_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
