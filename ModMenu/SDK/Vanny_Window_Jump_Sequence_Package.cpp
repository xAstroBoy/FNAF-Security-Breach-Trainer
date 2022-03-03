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
	 * 		Name   -> Function Vanny_Window_Jump_Sequence.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_2
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_Window_Jump_Sequence.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_2");
		
		USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Vanny_Window_Jump_Sequence.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_Window_Jump_Sequence.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1");
		
		USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Vanny_Window_Jump_Sequence.SequenceDirector_C.SequenceEvent_2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USequenceDirector_C::SequenceEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_Window_Jump_Sequence.SequenceDirector_C.SequenceEvent_2");
		
		USequenceDirector_C_SequenceEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Vanny_Window_Jump_Sequence.SequenceDirector_C.SequenceEvent_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USequenceDirector_C::SequenceEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_Window_Jump_Sequence.SequenceDirector_C.SequenceEvent_1");
		
		USequenceDirector_C_SequenceEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Vanny_Window_Jump_Sequence.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_Window_Jump_Sequence.SequenceDirector_C.ExecuteUbergraph_SequenceDirector");
		
		USequenceDirector_C_ExecuteUbergraph_SequenceDirector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USequenceDirector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USequenceDirector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Vanny_Window_Jump_Sequence.SequenceDirector_C");
		return ptr;
	}

}


