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
//		Name   -> Function LoadingDock_Escalator_MissionTrigger.LoadingDock_Escalator_MissionTrigger_C.OnTriggered
//		Flags  -> (Event, Protected, BlueprintEvent)
void ALoadingDock_Escalator_MissionTrigger_C::OnTriggered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoadingDock_Escalator_MissionTrigger.LoadingDock_Escalator_MissionTrigger_C.OnTriggered");

	ALoadingDock_Escalator_MissionTrigger_C_OnTriggered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LoadingDock_Escalator_MissionTrigger.LoadingDock_Escalator_MissionTrigger_C.ExecuteUbergraph_LoadingDock_Escalator_MissionTrigger
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALoadingDock_Escalator_MissionTrigger_C::ExecuteUbergraph_LoadingDock_Escalator_MissionTrigger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoadingDock_Escalator_MissionTrigger.LoadingDock_Escalator_MissionTrigger_C.ExecuteUbergraph_LoadingDock_Escalator_MissionTrigger");

	ALoadingDock_Escalator_MissionTrigger_C_ExecuteUbergraph_LoadingDock_Escalator_MissionTrigger_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif