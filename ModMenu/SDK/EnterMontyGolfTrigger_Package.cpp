/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "EnterMontyGolfTrigger_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EnterMontyGolfTrigger.EnterMontyGolfTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEnterMontyGolfTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnterMontyGolfTrigger.EnterMontyGolfTrigger_C.OnTriggered");
		
		AEnterMontyGolfTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EnterMontyGolfTrigger.EnterMontyGolfTrigger_C.ExecuteUbergraph_EnterMontyGolfTrigger
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEnterMontyGolfTrigger_C::ExecuteUbergraph_EnterMontyGolfTrigger(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnterMontyGolfTrigger.EnterMontyGolfTrigger_C.ExecuteUbergraph_EnterMontyGolfTrigger");
		
		AEnterMontyGolfTrigger_C_ExecuteUbergraph_EnterMontyGolfTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AEnterMontyGolfTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEnterMontyGolfTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EnterMontyGolfTrigger.EnterMontyGolfTrigger_C");
		return ptr;
	}

}


