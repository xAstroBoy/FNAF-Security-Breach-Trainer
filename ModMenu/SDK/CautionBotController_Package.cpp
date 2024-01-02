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
	 * 		Name   -> Function CautionBotController.CautionBotController_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ACautionBotController_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CautionBotController.CautionBotController_C.ReceiveBeginPlay");
		
		ACautionBotController_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CautionBotController.CautionBotController_C.MoveToSpill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     SpillLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACautionBotController_C::MoveToSpill(const struct FVector& SpillLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CautionBotController.CautionBotController_C.MoveToSpill");
		
		ACautionBotController_C_MoveToSpill_Params params {};
		params.SpillLocation = SpillLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CautionBotController.CautionBotController_C.ExecuteUbergraph_CautionBotController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACautionBotController_C::ExecuteUbergraph_CautionBotController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CautionBotController.CautionBotController_C.ExecuteUbergraph_CautionBotController");
		
		ACautionBotController_C_ExecuteUbergraph_CautionBotController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACautionBotController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACautionBotController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CautionBotController.CautionBotController_C");
		return ptr;
	}

}


