/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "VentExitTrigger_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function VentExitTrigger.VentExitTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AVentExitTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VentExitTrigger.VentExitTrigger_C.OnTriggered");
		
		AVentExitTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function VentExitTrigger.VentExitTrigger_C.ExecuteUbergraph_VentExitTrigger
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVentExitTrigger_C::ExecuteUbergraph_VentExitTrigger(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VentExitTrigger.VentExitTrigger_C.ExecuteUbergraph_VentExitTrigger");
		
		AVentExitTrigger_C_ExecuteUbergraph_VentExitTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AVentExitTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVentExitTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VentExitTrigger.VentExitTrigger_C");
		return ptr;
	}

}


