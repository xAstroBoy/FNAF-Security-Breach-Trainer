﻿// Name: FNAF Security Breach, Version: 1

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
//		Name   -> Function VentExit_Trigger.VentExit_Trigger_C.OnTriggered
//		Flags  -> (Event, Protected, BlueprintEvent)
void AVentExit_Trigger_C::OnTriggered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VentExit_Trigger.VentExit_Trigger_C.OnTriggered");

	AVentExit_Trigger_C_OnTriggered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function VentExit_Trigger.VentExit_Trigger_C.ExecuteUbergraph_VentExit_Trigger
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVentExit_Trigger_C::ExecuteUbergraph_VentExit_Trigger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VentExit_Trigger.VentExit_Trigger_C.ExecuteUbergraph_VentExit_Trigger");

	AVentExit_Trigger_C_ExecuteUbergraph_VentExit_Trigger_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
