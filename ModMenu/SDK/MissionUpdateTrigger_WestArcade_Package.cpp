/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "MissionUpdateTrigger_WestArcade_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MissionUpdateTrigger_WestArcade.MissionUpdateTrigger_WestArcade_C.Attempt Start Mission
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMissionUpdateTrigger_WestArcade_C::Attempt_Start_Mission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionUpdateTrigger_WestArcade.MissionUpdateTrigger_WestArcade_C.Attempt Start Mission");
		
		AMissionUpdateTrigger_WestArcade_C_Attempt_Start_Mission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MissionUpdateTrigger_WestArcade.MissionUpdateTrigger_WestArcade_C.ExecuteUbergraph_MissionUpdateTrigger_WestArcade
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMissionUpdateTrigger_WestArcade_C::ExecuteUbergraph_MissionUpdateTrigger_WestArcade(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionUpdateTrigger_WestArcade.MissionUpdateTrigger_WestArcade_C.ExecuteUbergraph_MissionUpdateTrigger_WestArcade");
		
		AMissionUpdateTrigger_WestArcade_C_ExecuteUbergraph_MissionUpdateTrigger_WestArcade_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMissionUpdateTrigger_WestArcade_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMissionUpdateTrigger_WestArcade_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MissionUpdateTrigger_WestArcade.MissionUpdateTrigger_WestArcade_C");
		return ptr;
	}

}


