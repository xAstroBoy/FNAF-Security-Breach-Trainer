/**
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
	 * 		Name   -> Function ReherasalTrigger.ReherasalTrigger_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void AReherasalTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReherasalTrigger.ReherasalTrigger_C.OnTriggered");
		
		AReherasalTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReherasalTrigger.ReherasalTrigger_C.ExecuteUbergraph_ReherasalTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AReherasalTrigger_C::ExecuteUbergraph_ReherasalTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReherasalTrigger.ReherasalTrigger_C.ExecuteUbergraph_ReherasalTrigger");
		
		AReherasalTrigger_C_ExecuteUbergraph_ReherasalTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AReherasalTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AReherasalTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ReherasalTrigger.ReherasalTrigger_C");
		return ptr;
	}

}


