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
	 * 		Name   -> Function LeaveHidingLocation.LeaveHidingLocation_C.ReceiveExecuteAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULeaveHidingLocation_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeaveHidingLocation.LeaveHidingLocation_C.ReceiveExecuteAI");
		
		ULeaveHidingLocation_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function LeaveHidingLocation.LeaveHidingLocation_C.ExecuteUbergraph_LeaveHidingLocation
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULeaveHidingLocation_C::ExecuteUbergraph_LeaveHidingLocation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeaveHidingLocation.LeaveHidingLocation_C.ExecuteUbergraph_LeaveHidingLocation");
		
		ULeaveHidingLocation_C_ExecuteUbergraph_LeaveHidingLocation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULeaveHidingLocation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULeaveHidingLocation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LeaveHidingLocation.LeaveHidingLocation_C");
		return ptr;
	}

}


