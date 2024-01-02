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
	 * 		Name   -> Function PrizeCounterEmergencyUI.PrizeCounterEmergencyUI_C.Finished_AF57A7394C85001B88B25A80CA05CDC7
	 * 		Flags  -> ()
	 */
	void UPrizeCounterEmergencyUI_C::Finished_AF57A7394C85001B88B25A80CA05CDC7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrizeCounterEmergencyUI.PrizeCounterEmergencyUI_C.Finished_AF57A7394C85001B88B25A80CA05CDC7");
		
		UPrizeCounterEmergencyUI_C_Finished_AF57A7394C85001B88B25A80CA05CDC7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrizeCounterEmergencyUI.PrizeCounterEmergencyUI_C.ShowEmergencyText
	 * 		Flags  -> ()
	 */
	void UPrizeCounterEmergencyUI_C::ShowEmergencyText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrizeCounterEmergencyUI.PrizeCounterEmergencyUI_C.ShowEmergencyText");
		
		UPrizeCounterEmergencyUI_C_ShowEmergencyText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrizeCounterEmergencyUI.PrizeCounterEmergencyUI_C.Construct
	 * 		Flags  -> ()
	 */
	void UPrizeCounterEmergencyUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrizeCounterEmergencyUI.PrizeCounterEmergencyUI_C.Construct");
		
		UPrizeCounterEmergencyUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrizeCounterEmergencyUI.PrizeCounterEmergencyUI_C.ExecuteUbergraph_PrizeCounterEmergencyUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrizeCounterEmergencyUI_C::ExecuteUbergraph_PrizeCounterEmergencyUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrizeCounterEmergencyUI.PrizeCounterEmergencyUI_C.ExecuteUbergraph_PrizeCounterEmergencyUI");
		
		UPrizeCounterEmergencyUI_C_ExecuteUbergraph_PrizeCounterEmergencyUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrizeCounterEmergencyUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrizeCounterEmergencyUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PrizeCounterEmergencyUI.PrizeCounterEmergencyUI_C");
		return ptr;
	}

}


