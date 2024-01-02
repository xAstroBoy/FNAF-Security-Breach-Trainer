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
	 * 		Name   -> Function FinalChoiceUI.FinalChoiceUI_C.SetFocusStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitleButton_C*                              Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFinalChoiceUI_C::SetFocusStyle(class UTitleButton_C* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FinalChoiceUI.FinalChoiceUI_C.SetFocusStyle");
		
		UFinalChoiceUI_C_SetFocusStyle_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FinalChoiceUI.FinalChoiceUI_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFinalChoiceUI_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FinalChoiceUI.FinalChoiceUI_C.PreConstruct");
		
		UFinalChoiceUI_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FinalChoiceUI.FinalChoiceUI_C.Construct
	 * 		Flags  -> ()
	 */
	void UFinalChoiceUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FinalChoiceUI.FinalChoiceUI_C.Construct");
		
		UFinalChoiceUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FinalChoiceUI.FinalChoiceUI_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFinalChoiceUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FinalChoiceUI.FinalChoiceUI_C.Tick");
		
		UFinalChoiceUI_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FinalChoiceUI.FinalChoiceUI_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFinalChoiceUI_C::BndEvt__LeaveButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FinalChoiceUI.FinalChoiceUI_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UFinalChoiceUI_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FinalChoiceUI.FinalChoiceUI_C.BndEvt__VannyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFinalChoiceUI_C::BndEvt__VannyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FinalChoiceUI.FinalChoiceUI_C.BndEvt__VannyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UFinalChoiceUI_C_BndEvt__VannyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FinalChoiceUI.FinalChoiceUI_C.BndEvt__StayButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFinalChoiceUI_C::BndEvt__StayButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FinalChoiceUI.FinalChoiceUI_C.BndEvt__StayButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UFinalChoiceUI_C_BndEvt__StayButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FinalChoiceUI.FinalChoiceUI_C.RefreshVannyLogic
	 * 		Flags  -> ()
	 */
	void UFinalChoiceUI_C::RefreshVannyLogic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FinalChoiceUI.FinalChoiceUI_C.RefreshVannyLogic");
		
		UFinalChoiceUI_C_RefreshVannyLogic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FinalChoiceUI.FinalChoiceUI_C.ExecuteUbergraph_FinalChoiceUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFinalChoiceUI_C::ExecuteUbergraph_FinalChoiceUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FinalChoiceUI.FinalChoiceUI_C.ExecuteUbergraph_FinalChoiceUI");
		
		UFinalChoiceUI_C_ExecuteUbergraph_FinalChoiceUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FinalChoiceUI.FinalChoiceUI_C.Vanny__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFinalChoiceUI_C::Vanny__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FinalChoiceUI.FinalChoiceUI_C.Vanny__DelegateSignature");
		
		UFinalChoiceUI_C_Vanny__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FinalChoiceUI.FinalChoiceUI_C.Leave__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFinalChoiceUI_C::Leave__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FinalChoiceUI.FinalChoiceUI_C.Leave__DelegateSignature");
		
		UFinalChoiceUI_C_Leave__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FinalChoiceUI.FinalChoiceUI_C.Stay__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFinalChoiceUI_C::Stay__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FinalChoiceUI.FinalChoiceUI_C.Stay__DelegateSignature");
		
		UFinalChoiceUI_C_Stay__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFinalChoiceUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFinalChoiceUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FinalChoiceUI.FinalChoiceUI_C");
		return ptr;
	}

}


