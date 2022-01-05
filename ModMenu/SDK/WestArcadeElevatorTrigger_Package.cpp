/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "WestArcadeElevatorTrigger_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WestArcadeElevatorTrigger.WestArcadeElevatorTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AWestArcadeElevatorTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WestArcadeElevatorTrigger.WestArcadeElevatorTrigger_C.OnTriggered");
		
		AWestArcadeElevatorTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WestArcadeElevatorTrigger.WestArcadeElevatorTrigger_C.ExecuteUbergraph_WestArcadeElevatorTrigger
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWestArcadeElevatorTrigger_C::ExecuteUbergraph_WestArcadeElevatorTrigger(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WestArcadeElevatorTrigger.WestArcadeElevatorTrigger_C.ExecuteUbergraph_WestArcadeElevatorTrigger");
		
		AWestArcadeElevatorTrigger_C_ExecuteUbergraph_WestArcadeElevatorTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AWestArcadeElevatorTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWestArcadeElevatorTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WestArcadeElevatorTrigger.WestArcadeElevatorTrigger_C");
		return ptr;
	}

}


