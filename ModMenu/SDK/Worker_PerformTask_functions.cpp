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
//		Name   -> Function Worker_PerformTask.Worker_PerformTask_C.ReceiveExecuteAI
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWorker_PerformTask_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Worker_PerformTask.Worker_PerformTask_C.ReceiveExecuteAI");

	UWorker_PerformTask_C_ReceiveExecuteAI_Params params {};
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Worker_PerformTask.Worker_PerformTask_C.ExecuteUbergraph_Worker_PerformTask
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWorker_PerformTask_C::ExecuteUbergraph_Worker_PerformTask(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Worker_PerformTask.Worker_PerformTask_C.ExecuteUbergraph_Worker_PerformTask");

	UWorker_PerformTask_C_ExecuteUbergraph_Worker_PerformTask_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
