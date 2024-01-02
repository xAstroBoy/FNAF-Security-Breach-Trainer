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
	 * 		Name   -> Function MoveToFreddyInteractible.MoveToFreddyInteractible_C.OnMoveFinished_0D6A96F54A9CABBACEB7D981B96EB764
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPathFollowingResult                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AAIController*                               AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMoveToFreddyInteractible_C::OnMoveFinished_0D6A96F54A9CABBACEB7D981B96EB764(EPathFollowingResult Result, class AAIController* AIController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoveToFreddyInteractible.MoveToFreddyInteractible_C.OnMoveFinished_0D6A96F54A9CABBACEB7D981B96EB764");
		
		UMoveToFreddyInteractible_C_OnMoveFinished_0D6A96F54A9CABBACEB7D981B96EB764_Params params {};
		params.Result = Result;
		params.AIController = AIController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoveToFreddyInteractible.MoveToFreddyInteractible_C.OnRequestFailed_0D6A96F54A9CABBACEB7D981B96EB764
	 * 		Flags  -> ()
	 */
	void UMoveToFreddyInteractible_C::OnRequestFailed_0D6A96F54A9CABBACEB7D981B96EB764()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoveToFreddyInteractible.MoveToFreddyInteractible_C.OnRequestFailed_0D6A96F54A9CABBACEB7D981B96EB764");
		
		UMoveToFreddyInteractible_C_OnRequestFailed_0D6A96F54A9CABBACEB7D981B96EB764_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoveToFreddyInteractible.MoveToFreddyInteractible_C.ReceiveExecuteAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMoveToFreddyInteractible_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoveToFreddyInteractible.MoveToFreddyInteractible_C.ReceiveExecuteAI");
		
		UMoveToFreddyInteractible_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoveToFreddyInteractible.MoveToFreddyInteractible_C.ExecuteUbergraph_MoveToFreddyInteractible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMoveToFreddyInteractible_C::ExecuteUbergraph_MoveToFreddyInteractible(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoveToFreddyInteractible.MoveToFreddyInteractible_C.ExecuteUbergraph_MoveToFreddyInteractible");
		
		UMoveToFreddyInteractible_C_ExecuteUbergraph_MoveToFreddyInteractible_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoveToFreddyInteractible_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoveToFreddyInteractible_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MoveToFreddyInteractible.MoveToFreddyInteractible_C");
		return ptr;
	}

}


