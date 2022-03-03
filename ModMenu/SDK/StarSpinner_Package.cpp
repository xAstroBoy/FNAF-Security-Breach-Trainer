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
	 * 		Name   -> Function StarSpinner.StarSpinner_C.Spin back and forth__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AStarSpinner_C::Spin_back_and_forth__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StarSpinner.StarSpinner_C.Spin back and forth__FinishedFunc");
		
		AStarSpinner_C_Spin_back_and_forth__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function StarSpinner.StarSpinner_C.Spin back and forth__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AStarSpinner_C::Spin_back_and_forth__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StarSpinner.StarSpinner_C.Spin back and forth__UpdateFunc");
		
		AStarSpinner_C_Spin_back_and_forth__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function StarSpinner.StarSpinner_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function StarSpinner.StarSpinner_C.ExecuteUbergraph_StarSpinner
	 * 		Flags  -> (Final, HasDefaults)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AStarSpinner_C.StaticClass
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


