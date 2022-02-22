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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ChangesToVisualPopup.ChangesToVisualPopup_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChangesToVisualPopup_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChangesToVisualPopup.ChangesToVisualPopup_C.PreConstruct");
		
		UChangesToVisualPopup_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ChangesToVisualPopup.ChangesToVisualPopup_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UChangesToVisualPopup_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChangesToVisualPopup.ChangesToVisualPopup_C.Construct");
		
		UChangesToVisualPopup_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ChangesToVisualPopup.ChangesToVisualPopup_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChangesToVisualPopup_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChangesToVisualPopup.ChangesToVisualPopup_C.Tick");
		
		UChangesToVisualPopup_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ChangesToVisualPopup.ChangesToVisualPopup_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UChangesToVisualPopup_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChangesToVisualPopup.ChangesToVisualPopup_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UChangesToVisualPopup_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ChangesToVisualPopup.ChangesToVisualPopup_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UChangesToVisualPopup_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChangesToVisualPopup.ChangesToVisualPopup_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UChangesToVisualPopup_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ChangesToVisualPopup.ChangesToVisualPopup_C.UserBackedOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UChangesToVisualPopup_C::UserBackedOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChangesToVisualPopup.ChangesToVisualPopup_C.UserBackedOut");
		
		UChangesToVisualPopup_C_UserBackedOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ChangesToVisualPopup.ChangesToVisualPopup_C.ExecuteUbergraph_ChangesToVisualPopup
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChangesToVisualPopup_C::ExecuteUbergraph_ChangesToVisualPopup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChangesToVisualPopup.ChangesToVisualPopup_C.ExecuteUbergraph_ChangesToVisualPopup");
		
		UChangesToVisualPopup_C_ExecuteUbergraph_ChangesToVisualPopup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ChangesToVisualPopup.ChangesToVisualPopup_C.ExitWithoutSaving__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UChangesToVisualPopup_C::ExitWithoutSaving__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChangesToVisualPopup.ChangesToVisualPopup_C.ExitWithoutSaving__DelegateSignature");
		
		UChangesToVisualPopup_C_ExitWithoutSaving__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ChangesToVisualPopup.ChangesToVisualPopup_C.ApplyAndRestart__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UChangesToVisualPopup_C::ApplyAndRestart__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChangesToVisualPopup.ChangesToVisualPopup_C.ApplyAndRestart__DelegateSignature");
		
		UChangesToVisualPopup_C_ApplyAndRestart__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UChangesToVisualPopup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChangesToVisualPopup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChangesToVisualPopup.ChangesToVisualPopup_C");
		return ptr;
	}

}


