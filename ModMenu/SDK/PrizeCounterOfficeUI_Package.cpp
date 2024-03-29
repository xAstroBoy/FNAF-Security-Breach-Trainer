﻿/**
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
	 * 		Name   -> Function PrizeCounterOfficeUI.PrizeCounterOfficeUI_C.Get_TimeAsText
	 * 		Flags  -> ()
	 */
	class FText UPrizeCounterOfficeUI_C::Get_TimeAsText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrizeCounterOfficeUI.PrizeCounterOfficeUI_C.Get_TimeAsText");
		
		UPrizeCounterOfficeUI_C_Get_TimeAsText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrizeCounterOfficeUI.PrizeCounterOfficeUI_C.Get_DownloadProgress_Percent_1
	 * 		Flags  -> ()
	 */
	float UPrizeCounterOfficeUI_C::Get_DownloadProgress_Percent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrizeCounterOfficeUI.PrizeCounterOfficeUI_C.Get_DownloadProgress_Percent_1");
		
		UPrizeCounterOfficeUI_C_Get_DownloadProgress_Percent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrizeCounterOfficeUI.PrizeCounterOfficeUI_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrizeCounterOfficeUI_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrizeCounterOfficeUI.PrizeCounterOfficeUI_C.PreConstruct");
		
		UPrizeCounterOfficeUI_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrizeCounterOfficeUI.PrizeCounterOfficeUI_C.MakeTimerVisible
	 * 		Flags  -> ()
	 */
	void UPrizeCounterOfficeUI_C::MakeTimerVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrizeCounterOfficeUI.PrizeCounterOfficeUI_C.MakeTimerVisible");
		
		UPrizeCounterOfficeUI_C_MakeTimerVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrizeCounterOfficeUI.PrizeCounterOfficeUI_C.MakeTimerNotVisible
	 * 		Flags  -> ()
	 */
	void UPrizeCounterOfficeUI_C::MakeTimerNotVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrizeCounterOfficeUI.PrizeCounterOfficeUI_C.MakeTimerNotVisible");
		
		UPrizeCounterOfficeUI_C_MakeTimerNotVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrizeCounterOfficeUI.PrizeCounterOfficeUI_C.ExecuteUbergraph_PrizeCounterOfficeUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrizeCounterOfficeUI_C::ExecuteUbergraph_PrizeCounterOfficeUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrizeCounterOfficeUI.PrizeCounterOfficeUI_C.ExecuteUbergraph_PrizeCounterOfficeUI");
		
		UPrizeCounterOfficeUI_C_ExecuteUbergraph_PrizeCounterOfficeUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrizeCounterOfficeUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrizeCounterOfficeUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PrizeCounterOfficeUI.PrizeCounterOfficeUI_C");
		return ptr;
	}

}


