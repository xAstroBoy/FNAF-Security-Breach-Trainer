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
	 * 		Name   -> Function JumbotronTrigger.JumbotronTrigger_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void AJumbotronTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JumbotronTrigger.JumbotronTrigger_C.OnTriggered");
		
		AJumbotronTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumbotronTrigger.JumbotronTrigger_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AJumbotronTrigger_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JumbotronTrigger.JumbotronTrigger_C.ReceiveBeginPlay");
		
		AJumbotronTrigger_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumbotronTrigger.JumbotronTrigger_C.ExecuteUbergraph_JumbotronTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AJumbotronTrigger_C::ExecuteUbergraph_JumbotronTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JumbotronTrigger.JumbotronTrigger_C.ExecuteUbergraph_JumbotronTrigger");
		
		AJumbotronTrigger_C_ExecuteUbergraph_JumbotronTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AJumbotronTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AJumbotronTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass JumbotronTrigger.JumbotronTrigger_C");
		return ptr;
	}

}


