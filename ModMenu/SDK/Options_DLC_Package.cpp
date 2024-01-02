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
	 * 		Name   -> Function Options_DLC.Options_DLC_C.UpdateIcons
	 * 		Flags  -> ()
	 */
	void UOptions_DLC_C::UpdateIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_DLC.Options_DLC_C.UpdateIcons");
		
		UOptions_DLC_C_UpdateIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_DLC.Options_DLC_C.BindNewKey
	 * 		Flags  -> ()
	 */
	void UOptions_DLC_C::BindNewKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_DLC.Options_DLC_C.BindNewKey");
		
		UOptions_DLC_C_BindNewKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_DLC.Options_DLC_C.CancelKeyBindingConfirmation
	 * 		Flags  -> ()
	 */
	void UOptions_DLC_C::CancelKeyBindingConfirmation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_DLC.Options_DLC_C.CancelKeyBindingConfirmation");
		
		UOptions_DLC_C_CancelKeyBindingConfirmation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_DLC.Options_DLC_C.GetAllMappings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UWI_DLC_ButtonRemapping_C*>           DLCBindings                                                (Parm, OutParm, ContainsInstancedReference)
	 */
	void UOptions_DLC_C::GetAllMappings(TArray<class UWI_DLC_ButtonRemapping_C*>* DLCBindings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_DLC.Options_DLC_C.GetAllMappings");
		
		UOptions_DLC_C_GetAllMappings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DLCBindings != nullptr)
			*DLCBindings = params.DLCBindings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_DLC.Options_DLC_C.GetConflictingActionMappingName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        DisplayText                                                (Parm, OutParm)
	 */
	void UOptions_DLC_C::GetConflictingActionMappingName(class FText* DisplayText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_DLC.Options_DLC_C.GetConflictingActionMappingName");
		
		UOptions_DLC_C_GetConflictingActionMappingName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DisplayText != nullptr)
			*DisplayText = params.DisplayText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_DLC.Options_DLC_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_DLC_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_DLC.Options_DLC_C.PreConstruct");
		
		UOptions_DLC_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_DLC.Options_DLC_C.BndEvt__Options_DLC_ApplyChangesButton_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_DLC_C::BndEvt__Options_DLC_ApplyChangesButton_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_DLC.Options_DLC_C.BndEvt__Options_DLC_ApplyChangesButton_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UOptions_DLC_C_BndEvt__Options_DLC_ApplyChangesButton_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_DLC.Options_DLC_C.BndEvt__Options_DLC_RestoreDefaultsButton_Controls_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_DLC_C::BndEvt__Options_DLC_RestoreDefaultsButton_Controls_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_DLC.Options_DLC_C.BndEvt__Options_DLC_RestoreDefaultsButton_Controls_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UOptions_DLC_C_BndEvt__Options_DLC_RestoreDefaultsButton_Controls_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_DLC.Options_DLC_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_DLC_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_DLC.Options_DLC_C.Construct");
		
		UOptions_DLC_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_DLC.Options_DLC_C.ConfirmKeyRebindingPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActionToRemoveBindingFrom                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FInputChord                                 KeyToRebind                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UOptions_DLC_C::ConfirmKeyRebindingPrompt(const class FName& ActionToRemoveBindingFrom, const struct FInputChord& KeyToRebind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_DLC.Options_DLC_C.ConfirmKeyRebindingPrompt");
		
		UOptions_DLC_C_ConfirmKeyRebindingPrompt_Params params {};
		params.ActionToRemoveBindingFrom = ActionToRemoveBindingFrom;
		params.KeyToRebind = KeyToRebind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_DLC.Options_DLC_C.BndEvt__Options_DLC_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_2_CancelBinding__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_DLC_C::BndEvt__Options_DLC_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_2_CancelBinding__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_DLC.Options_DLC_C.BndEvt__Options_DLC_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_2_CancelBinding__DelegateSignature");
		
		UOptions_DLC_C_BndEvt__Options_DLC_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_2_CancelBinding__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_DLC.Options_DLC_C.BndEvt__Options_DLC_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_3_BindNewKey__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_DLC_C::BndEvt__Options_DLC_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_3_BindNewKey__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_DLC.Options_DLC_C.BndEvt__Options_DLC_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_3_BindNewKey__DelegateSignature");
		
		UOptions_DLC_C_BndEvt__Options_DLC_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_3_BindNewKey__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_DLC.Options_DLC_C.ExecuteUbergraph_Options_DLC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_DLC_C::ExecuteUbergraph_Options_DLC(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_DLC.Options_DLC_C.ExecuteUbergraph_Options_DLC");
		
		UOptions_DLC_C_ExecuteUbergraph_Options_DLC_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_DLC_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_DLC_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_DLC.Options_DLC_C");
		return ptr;
	}

}


