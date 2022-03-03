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
	 * 		Name   -> Function PrizeCounterEmergencyUI.PrizeCounterEmergencyUI_C.Finished_AF57A7394C85001B88B25A80CA05CDC7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function PrizeCounterEmergencyUI.PrizeCounterEmergencyUI_C.ShowEmergencyText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function PrizeCounterEmergencyUI.PrizeCounterEmergencyUI_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function PrizeCounterEmergencyUI.PrizeCounterEmergencyUI_C.ExecuteUbergraph_PrizeCounterEmergencyUI
	 * 		Flags  -> (Final, HasDefaults)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPrizeCounterEmergencyUI_C.StaticClass
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


