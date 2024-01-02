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
	 * 		Name   -> Function DebugInventoryItem.DebugInventoryItem_C.GetItemDisplayName
	 * 		Flags  -> ()
	 */
	class FText UDebugInventoryItem_C::GetItemDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInventoryItem.DebugInventoryItem_C.GetItemDisplayName");
		
		UDebugInventoryItem_C_GetItemDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInventoryItem.DebugInventoryItem_C.Get_HaveItemCheckbox_CheckedState_1
	 * 		Flags  -> ()
	 */
	ECheckBoxState UDebugInventoryItem_C::Get_HaveItemCheckbox_CheckedState_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInventoryItem.DebugInventoryItem_C.Get_HaveItemCheckbox_CheckedState_1");
		
		UDebugInventoryItem_C_Get_HaveItemCheckbox_CheckedState_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInventoryItem.DebugInventoryItem_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InventoryItemName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugInventoryItem_C::Setup(const class FName& InventoryItemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInventoryItem.DebugInventoryItem_C.Setup");
		
		UDebugInventoryItem_C_Setup_Params params {};
		params.InventoryItemName = InventoryItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInventoryItem.DebugInventoryItem_C.BndEvt__HaveItemCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugInventoryItem_C::BndEvt__HaveItemCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInventoryItem.DebugInventoryItem_C.BndEvt__HaveItemCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UDebugInventoryItem_C_BndEvt__HaveItemCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInventoryItem.DebugInventoryItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UDebugInventoryItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInventoryItem.DebugInventoryItem_C.Construct");
		
		UDebugInventoryItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInventoryItem.DebugInventoryItem_C.BndEvt__DebugInventoryItem_CheckBoxUI_K2Node_ComponentBoundEvent_1_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInventoryItem_C::BndEvt__DebugInventoryItem_CheckBoxUI_K2Node_ComponentBoundEvent_1_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInventoryItem.DebugInventoryItem_C.BndEvt__DebugInventoryItem_CheckBoxUI_K2Node_ComponentBoundEvent_1_CheckedStateChanged__DelegateSignature");
		
		UDebugInventoryItem_C_BndEvt__DebugInventoryItem_CheckBoxUI_K2Node_ComponentBoundEvent_1_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInventoryItem.DebugInventoryItem_C.UpdateVisual
	 * 		Flags  -> ()
	 */
	void UDebugInventoryItem_C::UpdateVisual()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInventoryItem.DebugInventoryItem_C.UpdateVisual");
		
		UDebugInventoryItem_C_UpdateVisual_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInventoryItem.DebugInventoryItem_C.ExecuteUbergraph_DebugInventoryItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugInventoryItem_C::ExecuteUbergraph_DebugInventoryItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInventoryItem.DebugInventoryItem_C.ExecuteUbergraph_DebugInventoryItem");
		
		UDebugInventoryItem_C_ExecuteUbergraph_DebugInventoryItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugInventoryItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugInventoryItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DebugInventoryItem.DebugInventoryItem_C");
		return ptr;
	}

}


