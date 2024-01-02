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
	 * 		Name   -> Function PizzaHelpy.PizzaHelpy_C.SequenceEvent__ENTRYPOINTPizzaHelpy_1
	 * 		Flags  -> ()
	 */
	void UPizzaHelpy_C::SequenceEvent__ENTRYPOINTPizzaHelpy_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PizzaHelpy.PizzaHelpy_C.SequenceEvent__ENTRYPOINTPizzaHelpy_1");
		
		UPizzaHelpy_C_SequenceEvent__ENTRYPOINTPizzaHelpy_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PizzaHelpy.PizzaHelpy_C.TestingEvent
	 * 		Flags  -> ()
	 */
	void UPizzaHelpy_C::TestingEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PizzaHelpy.PizzaHelpy_C.TestingEvent");
		
		UPizzaHelpy_C_TestingEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PizzaHelpy.PizzaHelpy_C.Reset
	 * 		Flags  -> ()
	 */
	void UPizzaHelpy_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PizzaHelpy.PizzaHelpy_C.Reset");
		
		UPizzaHelpy_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PizzaHelpy.PizzaHelpy_C.SequenceEvent_1
	 * 		Flags  -> ()
	 */
	void UPizzaHelpy_C::SequenceEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PizzaHelpy.PizzaHelpy_C.SequenceEvent_1");
		
		UPizzaHelpy_C_SequenceEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PizzaHelpy.PizzaHelpy_C.Construct
	 * 		Flags  -> ()
	 */
	void UPizzaHelpy_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PizzaHelpy.PizzaHelpy_C.Construct");
		
		UPizzaHelpy_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PizzaHelpy.PizzaHelpy_C.Update
	 * 		Flags  -> ()
	 */
	void UPizzaHelpy_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PizzaHelpy.PizzaHelpy_C.Update");
		
		UPizzaHelpy_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PizzaHelpy.PizzaHelpy_C.ResetDoOnce
	 * 		Flags  -> ()
	 */
	void UPizzaHelpy_C::ResetDoOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PizzaHelpy.PizzaHelpy_C.ResetDoOnce");
		
		UPizzaHelpy_C_ResetDoOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PizzaHelpy.PizzaHelpy_C.ExecuteUbergraph_PizzaHelpy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPizzaHelpy_C::ExecuteUbergraph_PizzaHelpy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PizzaHelpy.PizzaHelpy_C.ExecuteUbergraph_PizzaHelpy");
		
		UPizzaHelpy_C_ExecuteUbergraph_PizzaHelpy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPizzaHelpy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPizzaHelpy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PizzaHelpy.PizzaHelpy_C");
		return ptr;
	}

}


