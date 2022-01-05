/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "FazerBlast_RememberFleeLocation_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FazerBlast_RememberFleeLocation.FazerBlast_RememberFleeLocation_C.DoUpdateFleeLocations
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFazerBlast_RememberFleeLocation_C::DoUpdateFleeLocations(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazerBlast_RememberFleeLocation.FazerBlast_RememberFleeLocation_C.DoUpdateFleeLocations");
		
		UFazerBlast_RememberFleeLocation_C_DoUpdateFleeLocations_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FazerBlast_RememberFleeLocation.FazerBlast_RememberFleeLocation_C.ReceiveExecuteAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFazerBlast_RememberFleeLocation_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazerBlast_RememberFleeLocation.FazerBlast_RememberFleeLocation_C.ReceiveExecuteAI");
		
		UFazerBlast_RememberFleeLocation_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FazerBlast_RememberFleeLocation.FazerBlast_RememberFleeLocation_C.ExecuteUbergraph_FazerBlast_RememberFleeLocation
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFazerBlast_RememberFleeLocation_C::ExecuteUbergraph_FazerBlast_RememberFleeLocation(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazerBlast_RememberFleeLocation.FazerBlast_RememberFleeLocation_C.ExecuteUbergraph_FazerBlast_RememberFleeLocation");
		
		UFazerBlast_RememberFleeLocation_C_ExecuteUbergraph_FazerBlast_RememberFleeLocation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFazerBlast_RememberFleeLocation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFazerBlast_RememberFleeLocation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FazerBlast_RememberFleeLocation.FazerBlast_RememberFleeLocation_C");
		return ptr;
	}

}


