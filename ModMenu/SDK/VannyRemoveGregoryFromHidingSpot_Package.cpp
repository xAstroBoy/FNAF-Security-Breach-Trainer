/**
 * Name: FNAFSB
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VannyRemoveGregoryFromHidingSpot.VannyRemoveGregoryFromHidingSpot_C.ReceiveExecuteAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVannyRemoveGregoryFromHidingSpot_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VannyRemoveGregoryFromHidingSpot.VannyRemoveGregoryFromHidingSpot_C.ReceiveExecuteAI");
		
		UVannyRemoveGregoryFromHidingSpot_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VannyRemoveGregoryFromHidingSpot.VannyRemoveGregoryFromHidingSpot_C.ExecuteUbergraph_VannyRemoveGregoryFromHidingSpot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVannyRemoveGregoryFromHidingSpot_C::ExecuteUbergraph_VannyRemoveGregoryFromHidingSpot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VannyRemoveGregoryFromHidingSpot.VannyRemoveGregoryFromHidingSpot_C.ExecuteUbergraph_VannyRemoveGregoryFromHidingSpot");
		
		UVannyRemoveGregoryFromHidingSpot_C_ExecuteUbergraph_VannyRemoveGregoryFromHidingSpot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVannyRemoveGregoryFromHidingSpot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVannyRemoveGregoryFromHidingSpot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VannyRemoveGregoryFromHidingSpot.VannyRemoveGregoryFromHidingSpot_C");
		return ptr;
	}

}


