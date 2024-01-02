/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StarSpinner.StarSpinner_C.Spin back and forth__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AStarSpinner_C::Spinbackandforth__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StarSpinner.StarSpinner_C.Spin back and forth__FinishedFunc");
		
		AStarSpinner_C_Spinbackandforth__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StarSpinner.StarSpinner_C.Spin back and forth__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AStarSpinner_C::Spinbackandforth__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StarSpinner.StarSpinner_C.Spin back and forth__UpdateFunc");
		
		AStarSpinner_C_Spinbackandforth__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StarSpinner.StarSpinner_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AStarSpinner_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StarSpinner.StarSpinner_C.ReceiveBeginPlay");
		
		AStarSpinner_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StarSpinner.StarSpinner_C.ExecuteUbergraph_StarSpinner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStarSpinner_C::ExecuteUbergraph_StarSpinner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StarSpinner.StarSpinner_C.ExecuteUbergraph_StarSpinner");
		
		AStarSpinner_C_ExecuteUbergraph_StarSpinner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStarSpinner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStarSpinner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StarSpinner.StarSpinner_C");
		return ptr;
	}

}


