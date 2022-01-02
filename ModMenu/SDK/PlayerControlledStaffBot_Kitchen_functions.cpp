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
//		Name   -> Function PlayerControlledStaffBot_Kitchen.PlayerControlledStaffBot_Kitchen_C.ReturnToStart
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APlayerControlledStaffBot_Kitchen_C::ReturnToStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerControlledStaffBot_Kitchen.PlayerControlledStaffBot_Kitchen_C.ReturnToStart");

	APlayerControlledStaffBot_Kitchen_C_ReturnToStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerControlledStaffBot_Kitchen.PlayerControlledStaffBot_Kitchen_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void APlayerControlledStaffBot_Kitchen_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerControlledStaffBot_Kitchen.PlayerControlledStaffBot_Kitchen_C.ReceiveBeginPlay");

	APlayerControlledStaffBot_Kitchen_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerControlledStaffBot_Kitchen.PlayerControlledStaffBot_Kitchen_C.OnJumped
//		Flags  -> (Event, Public, BlueprintEvent)
void APlayerControlledStaffBot_Kitchen_C::OnJumped()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerControlledStaffBot_Kitchen.PlayerControlledStaffBot_Kitchen_C.OnJumped");

	APlayerControlledStaffBot_Kitchen_C_OnJumped_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerControlledStaffBot_Kitchen.PlayerControlledStaffBot_Kitchen_C.ChangeLightState
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APlayerControlledStaffBot_Kitchen_C::ChangeLightState(bool On)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerControlledStaffBot_Kitchen.PlayerControlledStaffBot_Kitchen_C.ChangeLightState");

	APlayerControlledStaffBot_Kitchen_C_ChangeLightState_Params params {};
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerControlledStaffBot_Kitchen.PlayerControlledStaffBot_Kitchen_C.Setup
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AOGM_Kitchen_C*                              I_OGM_Kitchen                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APlayerControlledStaffBot_Kitchen_C::Setup(class AOGM_Kitchen_C* I_OGM_Kitchen)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerControlledStaffBot_Kitchen.PlayerControlledStaffBot_Kitchen_C.Setup");

	APlayerControlledStaffBot_Kitchen_C_Setup_Params params {};
	params.I_OGM_Kitchen = I_OGM_Kitchen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerControlledStaffBot_Kitchen.PlayerControlledStaffBot_Kitchen_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APlayerControlledStaffBot_Kitchen_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerControlledStaffBot_Kitchen.PlayerControlledStaffBot_Kitchen_C.ReceiveTick");

	APlayerControlledStaffBot_Kitchen_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerControlledStaffBot_Kitchen.PlayerControlledStaffBot_Kitchen_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APlayerControlledStaffBot_Kitchen_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_1(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerControlledStaffBot_Kitchen.PlayerControlledStaffBot_Kitchen_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_1");

	APlayerControlledStaffBot_Kitchen_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_1_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerControlledStaffBot_Kitchen.PlayerControlledStaffBot_Kitchen_C.ExecuteUbergraph_PlayerControlledStaffBot_Kitchen
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APlayerControlledStaffBot_Kitchen_C::ExecuteUbergraph_PlayerControlledStaffBot_Kitchen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerControlledStaffBot_Kitchen.PlayerControlledStaffBot_Kitchen_C.ExecuteUbergraph_PlayerControlledStaffBot_Kitchen");

	APlayerControlledStaffBot_Kitchen_C_ExecuteUbergraph_PlayerControlledStaffBot_Kitchen_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
