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
	 * 		Name   -> Function PRE_Elevator_PartsAndService.PRE_Elevator_PartsAndService_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APRE_Elevator_PartsAndService_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_Elevator_PartsAndService.PRE_Elevator_PartsAndService_C.ReceiveBeginPlay");
		
		APRE_Elevator_PartsAndService_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function PRE_Elevator_PartsAndService.PRE_Elevator_PartsAndService_C.ExecuteUbergraph_PRE_Elevator_PartsAndService
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRE_Elevator_PartsAndService_C::ExecuteUbergraph_PRE_Elevator_PartsAndService(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_Elevator_PartsAndService.PRE_Elevator_PartsAndService_C.ExecuteUbergraph_PRE_Elevator_PartsAndService");
		
		APRE_Elevator_PartsAndService_C_ExecuteUbergraph_PRE_Elevator_PartsAndService_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APRE_Elevator_PartsAndService_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRE_Elevator_PartsAndService_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRE_Elevator_PartsAndService.PRE_Elevator_PartsAndService_C");
		return ptr;
	}

}


