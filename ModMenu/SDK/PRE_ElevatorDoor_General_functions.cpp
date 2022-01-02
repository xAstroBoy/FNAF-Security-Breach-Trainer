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
//		Name   -> Function PRE_ElevatorDoor_General.PRE_ElevatorDoor_General_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void APRE_ElevatorDoor_General_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_ElevatorDoor_General.PRE_ElevatorDoor_General_C.ReceiveBeginPlay");

	APRE_ElevatorDoor_General_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_ElevatorDoor_General.PRE_ElevatorDoor_General_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APRE_ElevatorDoor_General_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_ElevatorDoor_General.PRE_ElevatorDoor_General_C.ReceiveTick");

	APRE_ElevatorDoor_General_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_ElevatorDoor_General.PRE_ElevatorDoor_General_C.ForceDoorClose
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void APRE_ElevatorDoor_General_C::ForceDoorClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_ElevatorDoor_General.PRE_ElevatorDoor_General_C.ForceDoorClose");

	APRE_ElevatorDoor_General_C_ForceDoorClose_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_ElevatorDoor_General.PRE_ElevatorDoor_General_C.ForceDoorOpen
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void APRE_ElevatorDoor_General_C::ForceDoorOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_ElevatorDoor_General.PRE_ElevatorDoor_General_C.ForceDoorOpen");

	APRE_ElevatorDoor_General_C_ForceDoorOpen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_ElevatorDoor_General.PRE_ElevatorDoor_General_C.ExecuteUbergraph_PRE_ElevatorDoor_General
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APRE_ElevatorDoor_General_C::ExecuteUbergraph_PRE_ElevatorDoor_General(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_ElevatorDoor_General.PRE_ElevatorDoor_General_C.ExecuteUbergraph_PRE_ElevatorDoor_General");

	APRE_ElevatorDoor_General_C_ExecuteUbergraph_PRE_ElevatorDoor_General_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
