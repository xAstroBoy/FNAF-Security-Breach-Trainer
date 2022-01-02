// Name: FNAF Security Breach, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function P_GoKart.P_GoKart_C.GetCanMove
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               CanMove                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AP_GoKart_C::GetCanMove(bool* CanMove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function P_GoKart.P_GoKart_C.GetCanMove");

	AP_GoKart_C_GetCanMove_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanMove != nullptr)
		*CanMove = params.CanMove;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function P_GoKart.P_GoKart_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AP_GoKart_C::InpActEvt_SpaceBar_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function P_GoKart.P_GoKart_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_2");

	AP_GoKart_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_2_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function P_GoKart.P_GoKart_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AP_GoKart_C::InpActEvt_SpaceBar_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function P_GoKart.P_GoKart_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_1");

	AP_GoKart_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function P_GoKart.P_GoKart_C.InpActEvt_Interact_K2Node_InputActionEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AP_GoKart_C::InpActEvt_Interact_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function P_GoKart.P_GoKart_C.InpActEvt_Interact_K2Node_InputActionEvent_1");

	AP_GoKart_C_InpActEvt_Interact_K2Node_InputActionEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function P_GoKart.P_GoKart_C.StartRaceCountdown
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              TimeTillStart                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AP_GoKart_C::StartRaceCountdown(float TimeTillStart)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function P_GoKart.P_GoKart_C.StartRaceCountdown");

	AP_GoKart_C_StartRaceCountdown_Params params {};
	params.TimeTillStart = TimeTillStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function P_GoKart.P_GoKart_C.StartRace
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AP_GoKart_C::StartRace()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function P_GoKart.P_GoKart_C.StartRace");

	AP_GoKart_C_StartRace_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function P_GoKart.P_GoKart_C.EndRace
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AP_GoKart_C::EndRace()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function P_GoKart.P_GoKart_C.EndRace");

	AP_GoKart_C_EndRace_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function P_GoKart.P_GoKart_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AP_GoKart_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function P_GoKart.P_GoKart_C.ReceiveBeginPlay");

	AP_GoKart_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function P_GoKart.P_GoKart_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AP_GoKart_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function P_GoKart.P_GoKart_C.ReceiveTick");

	AP_GoKart_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function P_GoKart.P_GoKart_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AP_GoKart_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function P_GoKart.P_GoKart_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1");

	AP_GoKart_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function P_GoKart.P_GoKart_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AP_GoKart_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function P_GoKart.P_GoKart_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2");

	AP_GoKart_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function P_GoKart.P_GoKart_C.InpAxisKeyEvt_Gamepad_RightTriggerAxis_K2Node_InputAxisKeyEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AP_GoKart_C::InpAxisKeyEvt_Gamepad_RightTriggerAxis_K2Node_InputAxisKeyEvent_1(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function P_GoKart.P_GoKart_C.InpAxisKeyEvt_Gamepad_RightTriggerAxis_K2Node_InputAxisKeyEvent_1");

	AP_GoKart_C_InpAxisKeyEvt_Gamepad_RightTriggerAxis_K2Node_InputAxisKeyEvent_1_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function P_GoKart.P_GoKart_C.InpAxisKeyEvt_Gamepad_LeftTriggerAxis_K2Node_InputAxisKeyEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AP_GoKart_C::InpAxisKeyEvt_Gamepad_LeftTriggerAxis_K2Node_InputAxisKeyEvent_2(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function P_GoKart.P_GoKart_C.InpAxisKeyEvt_Gamepad_LeftTriggerAxis_K2Node_InputAxisKeyEvent_2");

	AP_GoKart_C_InpAxisKeyEvt_Gamepad_LeftTriggerAxis_K2Node_InputAxisKeyEvent_2_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function P_GoKart.P_GoKart_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AP_GoKart_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function P_GoKart.P_GoKart_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3");

	AP_GoKart_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function P_GoKart.P_GoKart_C.ReceivePossessed
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AP_GoKart_C::ReceivePossessed(class AController* NewController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function P_GoKart.P_GoKart_C.ReceivePossessed");

	AP_GoKart_C_ReceivePossessed_Params params {};
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function P_GoKart.P_GoKart_C.ReceiveUnpossessed
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AController*                                 OldController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AP_GoKart_C::ReceiveUnpossessed(class AController* OldController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function P_GoKart.P_GoKart_C.ReceiveUnpossessed");

	AP_GoKart_C_ReceiveUnpossessed_Params params {};
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function P_GoKart.P_GoKart_C.CanMove
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               New_Can_Move                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AP_GoKart_C::CanMove(bool New_Can_Move)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function P_GoKart.P_GoKart_C.CanMove");

	AP_GoKart_C_CanMove_Params params {};
	params.New_Can_Move = New_Can_Move;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function P_GoKart.P_GoKart_C.AIMoveForward
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AP_GoKart_C::AIMoveForward(float Axis)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function P_GoKart.P_GoKart_C.AIMoveForward");

	AP_GoKart_C_AIMoveForward_Params params {};
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function P_GoKart.P_GoKart_C.AITurnRight
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AP_GoKart_C::AITurnRight(float Axis)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function P_GoKart.P_GoKart_C.AITurnRight");

	AP_GoKart_C_AITurnRight_Params params {};
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function P_GoKart.P_GoKart_C.GameEnd
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AP_GoKart_C::GameEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function P_GoKart.P_GoKart_C.GameEnd");

	AP_GoKart_C_GameEnd_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function P_GoKart.P_GoKart_C.ExecuteUbergraph_P_GoKart
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AP_GoKart_C::ExecuteUbergraph_P_GoKart(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function P_GoKart.P_GoKart_C.ExecuteUbergraph_P_GoKart");

	AP_GoKart_C_ExecuteUbergraph_P_GoKart_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
