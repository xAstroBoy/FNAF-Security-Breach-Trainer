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
//		Name   -> Function PlayerControlledStaffBot.PlayerControlledStaffBot_C.InpActEvt_Interact_K2Node_InputActionEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APlayerControlledStaffBot_C::InpActEvt_Interact_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerControlledStaffBot.PlayerControlledStaffBot_C.InpActEvt_Interact_K2Node_InputActionEvent_2");

	APlayerControlledStaffBot_C_InpActEvt_Interact_K2Node_InputActionEvent_2_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerControlledStaffBot.PlayerControlledStaffBot_C.InpActEvt_Interact_K2Node_InputActionEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APlayerControlledStaffBot_C::InpActEvt_Interact_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerControlledStaffBot.PlayerControlledStaffBot_C.InpActEvt_Interact_K2Node_InputActionEvent_1");

	APlayerControlledStaffBot_C_InpActEvt_Interact_K2Node_InputActionEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerControlledStaffBot.PlayerControlledStaffBot_C.ReceivePossessed
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APlayerControlledStaffBot_C::ReceivePossessed(class AController* NewController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerControlledStaffBot.PlayerControlledStaffBot_C.ReceivePossessed");

	APlayerControlledStaffBot_C_ReceivePossessed_Params params {};
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerControlledStaffBot.PlayerControlledStaffBot_C.Release Player Control
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APlayerControlledStaffBot_C::Release_Player_Control()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerControlledStaffBot.PlayerControlledStaffBot_C.Release Player Control");

	APlayerControlledStaffBot_C_Release_Player_Control_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerControlledStaffBot.PlayerControlledStaffBot_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void APlayerControlledStaffBot_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerControlledStaffBot.PlayerControlledStaffBot_C.ReceiveBeginPlay");

	APlayerControlledStaffBot_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerControlledStaffBot.PlayerControlledStaffBot_C.ExecuteUbergraph_PlayerControlledStaffBot
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APlayerControlledStaffBot_C::ExecuteUbergraph_PlayerControlledStaffBot(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerControlledStaffBot.PlayerControlledStaffBot_C.ExecuteUbergraph_PlayerControlledStaffBot");

	APlayerControlledStaffBot_C_ExecuteUbergraph_PlayerControlledStaffBot_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
