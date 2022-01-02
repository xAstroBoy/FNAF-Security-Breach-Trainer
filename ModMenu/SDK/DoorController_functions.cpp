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
//		Name   -> Function DoorController.DoorController_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ADoorController_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoorController.DoorController_C.ReceiveBeginPlay");

	ADoorController_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DoorController.DoorController_C.SetActivated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ADoorController_C::SetActivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoorController.DoorController_C.SetActivated");

	ADoorController_C_SetActivated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DoorController.DoorController_C.On Activate
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ADoorController_C::On_Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoorController.DoorController_C.On Activate");

	ADoorController_C_On_Activate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DoorController.DoorController_C.OnGameStart
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ADoorController_C::OnGameStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoorController.DoorController_C.OnGameStart");

	ADoorController_C_OnGameStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DoorController.DoorController_C.OnGameEnd
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ADoorController_C::OnGameEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoorController.DoorController_C.OnGameEnd");

	ADoorController_C_OnGameEnd_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DoorController.DoorController_C.ExecuteUbergraph_DoorController
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADoorController_C::ExecuteUbergraph_DoorController(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoorController.DoorController_C.ExecuteUbergraph_DoorController");

	ADoorController_C_ExecuteUbergraph_DoorController_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
