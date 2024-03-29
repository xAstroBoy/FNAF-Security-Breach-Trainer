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
	 * 		Name   -> Function EyeBlinkUI.EyeBlinkUI_C.BlinkHelper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      eyelid                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEyeBlinkUI_C::BlinkHelper(class UImage* eyelid, float Amount, float Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EyeBlinkUI.EyeBlinkUI_C.BlinkHelper");
		
		UEyeBlinkUI_C_BlinkHelper_Params params {};
		params.eyelid = eyelid;
		params.Amount = Amount;
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EyeBlinkUI.EyeBlinkUI_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEyeBlinkUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EyeBlinkUI.EyeBlinkUI_C.Tick");
		
		UEyeBlinkUI_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EyeBlinkUI.EyeBlinkUI_C.Eyes Open 2
	 * 		Flags  -> ()
	 */
	void UEyeBlinkUI_C::EyesOpen2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EyeBlinkUI.EyeBlinkUI_C.Eyes Open 2");
		
		UEyeBlinkUI_C_EyesOpen2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EyeBlinkUI.EyeBlinkUI_C.Eyes Shut 1
	 * 		Flags  -> ()
	 */
	void UEyeBlinkUI_C::EyesShut1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EyeBlinkUI.EyeBlinkUI_C.Eyes Shut 1");
		
		UEyeBlinkUI_C_EyesShut1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EyeBlinkUI.EyeBlinkUI_C.Blink
	 * 		Flags  -> ()
	 */
	void UEyeBlinkUI_C::Blink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EyeBlinkUI.EyeBlinkUI_C.Blink");
		
		UEyeBlinkUI_C_Blink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EyeBlinkUI.EyeBlinkUI_C.Eyes Open 1
	 * 		Flags  -> ()
	 */
	void UEyeBlinkUI_C::EyesOpen1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EyeBlinkUI.EyeBlinkUI_C.Eyes Open 1");
		
		UEyeBlinkUI_C_EyesOpen1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EyeBlinkUI.EyeBlinkUI_C.Eyes Shut 2
	 * 		Flags  -> ()
	 */
	void UEyeBlinkUI_C::EyesShut2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EyeBlinkUI.EyeBlinkUI_C.Eyes Shut 2");
		
		UEyeBlinkUI_C_EyesShut2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EyeBlinkUI.EyeBlinkUI_C.ExecuteUbergraph_EyeBlinkUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEyeBlinkUI_C::ExecuteUbergraph_EyeBlinkUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EyeBlinkUI.EyeBlinkUI_C.ExecuteUbergraph_EyeBlinkUI");
		
		UEyeBlinkUI_C_ExecuteUbergraph_EyeBlinkUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EyeBlinkUI.EyeBlinkUI_C.On Eyes Shut 2__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEyeBlinkUI_C::OnEyesShut2__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EyeBlinkUI.EyeBlinkUI_C.On Eyes Shut 2__DelegateSignature");
		
		UEyeBlinkUI_C_OnEyesShut2__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EyeBlinkUI.EyeBlinkUI_C.On Eyes Open 1__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEyeBlinkUI_C::OnEyesOpen1__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EyeBlinkUI.EyeBlinkUI_C.On Eyes Open 1__DelegateSignature");
		
		UEyeBlinkUI_C_OnEyesOpen1__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EyeBlinkUI.EyeBlinkUI_C.On Eyes Shut 1__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEyeBlinkUI_C::OnEyesShut1__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EyeBlinkUI.EyeBlinkUI_C.On Eyes Shut 1__DelegateSignature");
		
		UEyeBlinkUI_C_OnEyesShut1__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EyeBlinkUI.EyeBlinkUI_C.On Eyes Open 2__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEyeBlinkUI_C::OnEyesOpen2__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EyeBlinkUI.EyeBlinkUI_C.On Eyes Open 2__DelegateSignature");
		
		UEyeBlinkUI_C_OnEyesOpen2__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEyeBlinkUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEyeBlinkUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EyeBlinkUI.EyeBlinkUI_C");
		return ptr;
	}

}


