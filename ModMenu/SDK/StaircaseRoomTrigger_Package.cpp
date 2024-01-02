/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaircaseRoomTrigger.StaircaseRoomTrigger_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void AStaircaseRoomTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaircaseRoomTrigger.StaircaseRoomTrigger_C.OnTriggered");
		
		AStaircaseRoomTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaircaseRoomTrigger.StaircaseRoomTrigger_C.ExecuteUbergraph_StaircaseRoomTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaircaseRoomTrigger_C::ExecuteUbergraph_StaircaseRoomTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaircaseRoomTrigger.StaircaseRoomTrigger_C.ExecuteUbergraph_StaircaseRoomTrigger");
		
		AStaircaseRoomTrigger_C_ExecuteUbergraph_StaircaseRoomTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStaircaseRoomTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStaircaseRoomTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StaircaseRoomTrigger.StaircaseRoomTrigger_C");
		return ptr;
	}

}


