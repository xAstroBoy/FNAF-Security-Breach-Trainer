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
	 * 		Name   -> Function RoxyGreenroomTrigger.RoxyGreenroomTrigger_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void ARoxyGreenroomTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoxyGreenroomTrigger.RoxyGreenroomTrigger_C.OnTriggered");
		
		ARoxyGreenroomTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoxyGreenroomTrigger.RoxyGreenroomTrigger_C.ExecuteUbergraph_RoxyGreenroomTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARoxyGreenroomTrigger_C::ExecuteUbergraph_RoxyGreenroomTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoxyGreenroomTrigger.RoxyGreenroomTrigger_C.ExecuteUbergraph_RoxyGreenroomTrigger");
		
		ARoxyGreenroomTrigger_C_ExecuteUbergraph_RoxyGreenroomTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARoxyGreenroomTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARoxyGreenroomTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RoxyGreenroomTrigger.RoxyGreenroomTrigger_C");
		return ptr;
	}

}


