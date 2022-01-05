/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "BonnieBowlTrigger_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BonnieBowlTrigger.BonnieBowlTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABonnieBowlTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BonnieBowlTrigger.BonnieBowlTrigger_C.OnTriggered");
		
		ABonnieBowlTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BonnieBowlTrigger.BonnieBowlTrigger_C.ExecuteUbergraph_BonnieBowlTrigger
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABonnieBowlTrigger_C::ExecuteUbergraph_BonnieBowlTrigger(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BonnieBowlTrigger.BonnieBowlTrigger_C.ExecuteUbergraph_BonnieBowlTrigger");
		
		ABonnieBowlTrigger_C_ExecuteUbergraph_BonnieBowlTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABonnieBowlTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABonnieBowlTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BonnieBowlTrigger.BonnieBowlTrigger_C");
		return ptr;
	}

}


