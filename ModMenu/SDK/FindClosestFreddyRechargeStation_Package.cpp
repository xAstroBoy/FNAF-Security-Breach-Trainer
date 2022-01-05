/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "FindClosestFreddyRechargeStation_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FindClosestFreddyRechargeStation.FindClosestFreddyRechargeStation_C.ReceiveExecuteAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFindClosestFreddyRechargeStation_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FindClosestFreddyRechargeStation.FindClosestFreddyRechargeStation_C.ReceiveExecuteAI");
		
		UFindClosestFreddyRechargeStation_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FindClosestFreddyRechargeStation.FindClosestFreddyRechargeStation_C.ExecuteUbergraph_FindClosestFreddyRechargeStation
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFindClosestFreddyRechargeStation_C::ExecuteUbergraph_FindClosestFreddyRechargeStation(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FindClosestFreddyRechargeStation.FindClosestFreddyRechargeStation_C.ExecuteUbergraph_FindClosestFreddyRechargeStation");
		
		UFindClosestFreddyRechargeStation_C_ExecuteUbergraph_FindClosestFreddyRechargeStation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFindClosestFreddyRechargeStation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFindClosestFreddyRechargeStation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FindClosestFreddyRechargeStation.FindClosestFreddyRechargeStation_C");
		return ptr;
	}

}


