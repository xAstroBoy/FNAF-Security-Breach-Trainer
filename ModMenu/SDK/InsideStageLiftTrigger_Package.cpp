/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "InsideStageLiftTrigger_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function InsideStageLiftTrigger.InsideStageLiftTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AInsideStageLiftTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InsideStageLiftTrigger.InsideStageLiftTrigger_C.OnTriggered");
		
		AInsideStageLiftTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function InsideStageLiftTrigger.InsideStageLiftTrigger_C.ExecuteUbergraph_InsideStageLiftTrigger
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AInsideStageLiftTrigger_C::ExecuteUbergraph_InsideStageLiftTrigger(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InsideStageLiftTrigger.InsideStageLiftTrigger_C.ExecuteUbergraph_InsideStageLiftTrigger");
		
		AInsideStageLiftTrigger_C_ExecuteUbergraph_InsideStageLiftTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AInsideStageLiftTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AInsideStageLiftTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass InsideStageLiftTrigger.InsideStageLiftTrigger_C");
		return ptr;
	}

}


