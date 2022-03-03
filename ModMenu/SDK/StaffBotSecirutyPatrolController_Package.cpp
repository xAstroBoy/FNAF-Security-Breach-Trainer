﻿/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function StaffBotSecirutyPatrolController.StaffBotSecirutyPatrolController_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AStaffBotSecirutyPatrolController_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotSecirutyPatrolController.StaffBotSecirutyPatrolController_C.ReceiveBeginPlay");
		
		AStaffBotSecirutyPatrolController_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function StaffBotSecirutyPatrolController.StaffBotSecirutyPatrolController_C.ExecuteUbergraph_StaffBotSecirutyPatrolController
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffBotSecirutyPatrolController_C::ExecuteUbergraph_StaffBotSecirutyPatrolController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotSecirutyPatrolController.StaffBotSecirutyPatrolController_C.ExecuteUbergraph_StaffBotSecirutyPatrolController");
		
		AStaffBotSecirutyPatrolController_C_ExecuteUbergraph_StaffBotSecirutyPatrolController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AStaffBotSecirutyPatrolController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStaffBotSecirutyPatrolController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StaffBotSecirutyPatrolController.StaffBotSecirutyPatrolController_C");
		return ptr;
	}

}


