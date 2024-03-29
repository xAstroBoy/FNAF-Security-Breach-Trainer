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
	 * 		Name   -> Function FazcamChargeUI.FazcamChargeUI_C.SequenceEvent__ENTRYPOINTFazcamChargeUI_1
	 * 		Flags  -> ()
	 */
	void UFazcamChargeUI_C::SequenceEvent__ENTRYPOINTFazcamChargeUI_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazcamChargeUI.FazcamChargeUI_C.SequenceEvent__ENTRYPOINTFazcamChargeUI_1");
		
		UFazcamChargeUI_C_SequenceEvent__ENTRYPOINTFazcamChargeUI_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazcamChargeUI.FazcamChargeUI_C.GetFillMeterDelayOffset
	 * 		Flags  -> ()
	 */
	float UFazcamChargeUI_C::GetFillMeterDelayOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazcamChargeUI.FazcamChargeUI_C.GetFillMeterDelayOffset");
		
		UFazcamChargeUI_C_GetFillMeterDelayOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazcamChargeUI.FazcamChargeUI_C.Finished_EEC50D0B406493E297CED0B1A9538C1B
	 * 		Flags  -> ()
	 */
	void UFazcamChargeUI_C::Finished_EEC50D0B406493E297CED0B1A9538C1B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazcamChargeUI.FazcamChargeUI_C.Finished_EEC50D0B406493E297CED0B1A9538C1B");
		
		UFazcamChargeUI_C_Finished_EEC50D0B406493E297CED0B1A9538C1B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazcamChargeUI.FazcamChargeUI_C.Recharge
	 * 		Flags  -> ()
	 */
	void UFazcamChargeUI_C::Recharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazcamChargeUI.FazcamChargeUI_C.Recharge");
		
		UFazcamChargeUI_C_Recharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazcamChargeUI.FazcamChargeUI_C.CameraFlashed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RechargeTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFazcamChargeUI_C::CameraFlashed(float RechargeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazcamChargeUI.FazcamChargeUI_C.CameraFlashed");
		
		UFazcamChargeUI_C_CameraFlashed_Params params {};
		params.RechargeTime = RechargeTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazcamChargeUI.FazcamChargeUI_C.PlayRechargeSFX
	 * 		Flags  -> ()
	 */
	void UFazcamChargeUI_C::PlayRechargeSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazcamChargeUI.FazcamChargeUI_C.PlayRechargeSFX");
		
		UFazcamChargeUI_C_PlayRechargeSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazcamChargeUI.FazcamChargeUI_C.CustomEvent
	 * 		Flags  -> ()
	 */
	void UFazcamChargeUI_C::CustomEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazcamChargeUI.FazcamChargeUI_C.CustomEvent");
		
		UFazcamChargeUI_C_CustomEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazcamChargeUI.FazcamChargeUI_C.ExecuteUbergraph_FazcamChargeUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFazcamChargeUI_C::ExecuteUbergraph_FazcamChargeUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazcamChargeUI.FazcamChargeUI_C.ExecuteUbergraph_FazcamChargeUI");
		
		UFazcamChargeUI_C_ExecuteUbergraph_FazcamChargeUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazcamChargeUI.FazcamChargeUI_C.RechargeDone__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFazcamChargeUI_C::RechargeDone__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazcamChargeUI.FazcamChargeUI_C.RechargeDone__DelegateSignature");
		
		UFazcamChargeUI_C_RechargeDone__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFazcamChargeUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFazcamChargeUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FazcamChargeUI.FazcamChargeUI_C");
		return ptr;
	}

}


