/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function RockstarRowFreddyPositioner.RockstarRowFreddyPositioner_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ARockstarRowFreddyPositioner_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockstarRowFreddyPositioner.RockstarRowFreddyPositioner_C.OnTriggered");
		
		ARockstarRowFreddyPositioner_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function RockstarRowFreddyPositioner.RockstarRowFreddyPositioner_C.ExecuteUbergraph_RockstarRowFreddyPositioner
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARockstarRowFreddyPositioner_C::ExecuteUbergraph_RockstarRowFreddyPositioner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockstarRowFreddyPositioner.RockstarRowFreddyPositioner_C.ExecuteUbergraph_RockstarRowFreddyPositioner");
		
		ARockstarRowFreddyPositioner_C_ExecuteUbergraph_RockstarRowFreddyPositioner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ARockstarRowFreddyPositioner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARockstarRowFreddyPositioner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RockstarRowFreddyPositioner.RockstarRowFreddyPositioner_C");
		return ptr;
	}

}


