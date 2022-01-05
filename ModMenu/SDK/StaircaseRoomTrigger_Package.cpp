/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "StaircaseRoomTrigger_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaircaseRoomTrigger.StaircaseRoomTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaircaseRoomTrigger.StaircaseRoomTrigger_C.ExecuteUbergraph_StaircaseRoomTrigger
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaircaseRoomTrigger_C::ExecuteUbergraph_StaircaseRoomTrigger(int EntryPoint)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AStaircaseRoomTrigger_C.StaticClass
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


