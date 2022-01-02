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
//		Name   -> Function VannyController.VannyController_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AVannyController_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VannyController.VannyController_C.ReceiveBeginPlay");

	AVannyController_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function VannyController.VannyController_C.OnRoomChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ARoomAreaBase*                               Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVannyController_C::OnRoomChanged(class ARoomAreaBase* Room)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VannyController.VannyController_C.OnRoomChanged");

	AVannyController_C_OnRoomChanged_Params params {};
	params.Room = Room;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function VannyController.VannyController_C.UpdateRoomSetup
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AVannyController_C::UpdateRoomSetup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VannyController.VannyController_C.UpdateRoomSetup");

	AVannyController_C_UpdateRoomSetup_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function VannyController.VannyController_C.OnPlayerEnteredRoom
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ARoomAreaBase*                               Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVannyController_C::OnPlayerEnteredRoom(class ARoomAreaBase* Room)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VannyController.VannyController_C.OnPlayerEnteredRoom");

	AVannyController_C_OnPlayerEnteredRoom_Params params {};
	params.Room = Room;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function VannyController.VannyController_C.ExecuteUbergraph_VannyController
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVannyController_C::ExecuteUbergraph_VannyController(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VannyController.VannyController_C.ExecuteUbergraph_VannyController");

	AVannyController_C_ExecuteUbergraph_VannyController_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
