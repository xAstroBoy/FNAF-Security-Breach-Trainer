/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "JumbotronTrigger_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function JumbotronTrigger.JumbotronTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function JumbotronTrigger.JumbotronTrigger_C.VannyDisplaySeq
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AJumbotronTrigger_C::VannyDisplaySeq()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JumbotronTrigger.JumbotronTrigger_C.VannyDisplaySeq");
		
		AJumbotronTrigger_C_VannyDisplaySeq_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function JumbotronTrigger.JumbotronTrigger_C.OnDisplayStopped
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AJumbotronTrigger_C::OnDisplayStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JumbotronTrigger.JumbotronTrigger_C.OnDisplayStopped");
		
		AJumbotronTrigger_C_OnDisplayStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function JumbotronTrigger.JumbotronTrigger_C.ExecuteUbergraph_JumbotronTrigger
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AJumbotronTrigger_C::ExecuteUbergraph_JumbotronTrigger(int EntryPoint)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AJumbotronTrigger_C.StaticClass
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


