﻿/**
 * Name: FNAFSB
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StageLightFlasher_Steady.StageLightFlasher_Steady_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AStageLightFlasher_Steady_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StageLightFlasher_Steady.StageLightFlasher_Steady_C.Timeline_0__FinishedFunc");
		
		AStageLightFlasher_Steady_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StageLightFlasher_Steady.StageLightFlasher_Steady_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AStageLightFlasher_Steady_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StageLightFlasher_Steady.StageLightFlasher_Steady_C.Timeline_0__UpdateFunc");
		
		AStageLightFlasher_Steady_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StageLightFlasher_Steady.StageLightFlasher_Steady_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AStageLightFlasher_Steady_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StageLightFlasher_Steady.StageLightFlasher_Steady_C.ReceiveBeginPlay");
		
		AStageLightFlasher_Steady_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StageLightFlasher_Steady.StageLightFlasher_Steady_C.ExecuteUbergraph_StageLightFlasher_Steady
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStageLightFlasher_Steady_C::ExecuteUbergraph_StageLightFlasher_Steady(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StageLightFlasher_Steady.StageLightFlasher_Steady_C.ExecuteUbergraph_StageLightFlasher_Steady");
		
		AStageLightFlasher_Steady_C_ExecuteUbergraph_StageLightFlasher_Steady_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStageLightFlasher_Steady_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStageLightFlasher_Steady_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StageLightFlasher_Steady.StageLightFlasher_Steady_C");
		return ptr;
	}

}


