/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "FindRandLocationFromPoint_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FindRandLocationFromPoint.FindRandLocationFromPoint_C.ReceiveExecuteAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFindRandLocationFromPoint_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FindRandLocationFromPoint.FindRandLocationFromPoint_C.ReceiveExecuteAI");
		
		UFindRandLocationFromPoint_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FindRandLocationFromPoint.FindRandLocationFromPoint_C.ExecuteUbergraph_FindRandLocationFromPoint
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFindRandLocationFromPoint_C::ExecuteUbergraph_FindRandLocationFromPoint(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FindRandLocationFromPoint.FindRandLocationFromPoint_C.ExecuteUbergraph_FindRandLocationFromPoint");
		
		UFindRandLocationFromPoint_C_ExecuteUbergraph_FindRandLocationFromPoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFindRandLocationFromPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFindRandLocationFromPoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FindRandLocationFromPoint.FindRandLocationFromPoint_C");
		return ptr;
	}

}


