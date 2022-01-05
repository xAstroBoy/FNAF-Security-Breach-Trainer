/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "OvertimeVanessaTrigger_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OvertimeVanessaTrigger.OvertimeVanessaTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AOvertimeVanessaTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OvertimeVanessaTrigger.OvertimeVanessaTrigger_C.OnTriggered");
		
		AOvertimeVanessaTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OvertimeVanessaTrigger.OvertimeVanessaTrigger_C.ExecuteUbergraph_OvertimeVanessaTrigger
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOvertimeVanessaTrigger_C::ExecuteUbergraph_OvertimeVanessaTrigger(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OvertimeVanessaTrigger.OvertimeVanessaTrigger_C.ExecuteUbergraph_OvertimeVanessaTrigger");
		
		AOvertimeVanessaTrigger_C_ExecuteUbergraph_OvertimeVanessaTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOvertimeVanessaTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOvertimeVanessaTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OvertimeVanessaTrigger.OvertimeVanessaTrigger_C");
		return ptr;
	}

}


