/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "SendUndergroundOGMDeathSignal_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SendUndergroundOGMDeathSignal.SendUndergroundOGMDeathSignal_C.ReceiveExecuteAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USendUndergroundOGMDeathSignal_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SendUndergroundOGMDeathSignal.SendUndergroundOGMDeathSignal_C.ReceiveExecuteAI");
		
		USendUndergroundOGMDeathSignal_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SendUndergroundOGMDeathSignal.SendUndergroundOGMDeathSignal_C.ExecuteUbergraph_SendUndergroundOGMDeathSignal
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USendUndergroundOGMDeathSignal_C::ExecuteUbergraph_SendUndergroundOGMDeathSignal(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SendUndergroundOGMDeathSignal.SendUndergroundOGMDeathSignal_C.ExecuteUbergraph_SendUndergroundOGMDeathSignal");
		
		USendUndergroundOGMDeathSignal_C_ExecuteUbergraph_SendUndergroundOGMDeathSignal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USendUndergroundOGMDeathSignal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USendUndergroundOGMDeathSignal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SendUndergroundOGMDeathSignal.SendUndergroundOGMDeathSignal_C");
		return ptr;
	}

}


