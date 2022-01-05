/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "PickSplineClosestToPlayer_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PickSplineClosestToPlayer.PickSplineClosestToPlayer_C.ReceiveExecuteAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPickSplineClosestToPlayer_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PickSplineClosestToPlayer.PickSplineClosestToPlayer_C.ReceiveExecuteAI");
		
		UPickSplineClosestToPlayer_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PickSplineClosestToPlayer.PickSplineClosestToPlayer_C.ExecuteUbergraph_PickSplineClosestToPlayer
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPickSplineClosestToPlayer_C::ExecuteUbergraph_PickSplineClosestToPlayer(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PickSplineClosestToPlayer.PickSplineClosestToPlayer_C.ExecuteUbergraph_PickSplineClosestToPlayer");
		
		UPickSplineClosestToPlayer_C_ExecuteUbergraph_PickSplineClosestToPlayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPickSplineClosestToPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPickSplineClosestToPlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PickSplineClosestToPlayer.PickSplineClosestToPlayer_C");
		return ptr;
	}

}


