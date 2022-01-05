﻿/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "Worker_ReverseDirection_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Worker_ReverseDirection.Worker_ReverseDirection_C.ReceiveExecuteAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWorker_ReverseDirection_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Worker_ReverseDirection.Worker_ReverseDirection_C.ReceiveExecuteAI");
		
		UWorker_ReverseDirection_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Worker_ReverseDirection.Worker_ReverseDirection_C.ExecuteUbergraph_Worker_ReverseDirection
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWorker_ReverseDirection_C::ExecuteUbergraph_Worker_ReverseDirection(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Worker_ReverseDirection.Worker_ReverseDirection_C.ExecuteUbergraph_Worker_ReverseDirection");
		
		UWorker_ReverseDirection_C_ExecuteUbergraph_Worker_ReverseDirection_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWorker_ReverseDirection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorker_ReverseDirection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Worker_ReverseDirection.Worker_ReverseDirection_C");
		return ptr;
	}

}


