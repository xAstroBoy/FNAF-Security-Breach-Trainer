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
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.UpdateDLCObjectives
	 * 		Flags  -> ()
	 */
	void UItemCollectionUI_C::UpdateDLCObjectives()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.UpdateDLCObjectives");
		
		UItemCollectionUI_C_UpdateDLCObjectives_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.OnPreviewKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UItemCollectionUI_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.OnPreviewKeyDown");
		
		UItemCollectionUI_C_OnPreviewKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.ScrollDescriptionBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Y_Value                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemCollectionUI_C::ScrollDescriptionBox(float Y_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.ScrollDescriptionBox");
		
		UItemCollectionUI_C_ScrollDescriptionBox_Params params {};
		params.Y_Value = Y_Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.OnAnalogValueChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FAnalogInputEvent                           InAnalogInputEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UItemCollectionUI_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.OnAnalogValueChanged");
		
		UItemCollectionUI_C_OnAnalogValueChanged_Params params {};
		params.MyGeometry = MyGeometry;
		params.InAnalogInputEvent = InAnalogInputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.UpdateItemDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UItemCollectionUI_C::UpdateItemDescription(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.UpdateItemDescription");
		
		UItemCollectionUI_C_UpdateItemDescription_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.Focus Equipment Button
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UItemCollectionUI_C::FocusEquipmentButton(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.Focus Equipment Button");
		
		UItemCollectionUI_C_FocusEquipmentButton_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.GoToRetroCatOrAllCat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UItemCollectionUI_C::GoToRetroCatOrAllCat(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.GoToRetroCatOrAllCat");
		
		UItemCollectionUI_C_GoToRetroCatOrAllCat_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.GoToFirstItemInGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UItemCollectionUI_C::GoToFirstItemInGrid(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.GoToFirstItemInGrid");
		
		UItemCollectionUI_C_GoToFirstItemInGrid_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.HighlightedTextForCurrentSelection
	 * 		Flags  -> ()
	 */
	void UItemCollectionUI_C::HighlightedTextForCurrentSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.HighlightedTextForCurrentSelection");
		
		UItemCollectionUI_C_HighlightedTextForCurrentSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.Update Item View
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItemButton_C*                      ClickedButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemCollectionUI_C::UpdateItemView(class UInventoryItemButton_C* ClickedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.Update Item View");
		
		UItemCollectionUI_C_UpdateItemView_Params params {};
		params.ClickedButton = ClickedButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__TitleButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UItemCollectionUI_C::BndEvt__TitleButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__TitleButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UItemCollectionUI_C_BndEvt__TitleButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__FoodButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UItemCollectionUI_C::BndEvt__FoodButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__FoodButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UItemCollectionUI_C_BndEvt__FoodButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__ClothesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UItemCollectionUI_C::BndEvt__ClothesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__ClothesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UItemCollectionUI_C_BndEvt__ClothesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__TrophiesButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UItemCollectionUI_C::BndEvt__TrophiesButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__TrophiesButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UItemCollectionUI_C_BndEvt__TrophiesButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__MiscButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UItemCollectionUI_C::BndEvt__MiscButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__MiscButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UItemCollectionUI_C_BndEvt__MiscButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.Construct
	 * 		Flags  -> ()
	 */
	void UItemCollectionUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.Construct");
		
		UItemCollectionUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.OnPopulate
	 * 		Flags  -> ()
	 */
	void UItemCollectionUI_C::OnPopulate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.OnPopulate");
		
		UItemCollectionUI_C_OnPopulate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.Initial inventory Setup
	 * 		Flags  -> ()
	 */
	void UItemCollectionUI_C::InitialinventorySetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.Initial inventory Setup");
		
		UItemCollectionUI_C_InitialinventorySetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.Destruct
	 * 		Flags  -> ()
	 */
	void UItemCollectionUI_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.Destruct");
		
		UItemCollectionUI_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UItemCollectionUI_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UItemCollectionUI_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UItemCollectionUI_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");
		
		UItemCollectionUI_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__RetroCDButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UItemCollectionUI_C::BndEvt__RetroCDButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__RetroCDButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UItemCollectionUI_C_BndEvt__RetroCDButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__AllButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UItemCollectionUI_C::BndEvt__AllButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__AllButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");
		
		UItemCollectionUI_C_BndEvt__AllButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.ItemPreviewCalled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_InventoryCollectionType                          InventoryType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InventoryCategorySelectionIndex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemCollectionUI_C::ItemPreviewCalled(E_InventoryCollectionType InventoryType, int32_t InventoryCategorySelectionIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.ItemPreviewCalled");
		
		UItemCollectionUI_C_ItemPreviewCalled_Params params {};
		params.InventoryType = InventoryType;
		params.InventoryCategorySelectionIndex = InventoryCategorySelectionIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.InputDeviceChanged
	 * 		Flags  -> ()
	 */
	void UItemCollectionUI_C::InputDeviceChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.InputDeviceChanged");
		
		UItemCollectionUI_C_InputDeviceChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__ItemCollectionUI_CollectablesButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UItemCollectionUI_C::BndEvt__ItemCollectionUI_CollectablesButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__ItemCollectionUI_CollectablesButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");
		
		UItemCollectionUI_C_BndEvt__ItemCollectionUI_CollectablesButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemCollectionUI_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.PreConstruct");
		
		UItemCollectionUI_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__ItemCollectionUI_ARCollectablesButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UItemCollectionUI_C::BndEvt__ItemCollectionUI_ARCollectablesButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__ItemCollectionUI_ARCollectablesButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");
		
		UItemCollectionUI_C_BndEvt__ItemCollectionUI_ARCollectablesButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.ExecuteUbergraph_ItemCollectionUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemCollectionUI_C::ExecuteUbergraph_ItemCollectionUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.ExecuteUbergraph_ItemCollectionUI");
		
		UItemCollectionUI_C_ExecuteUbergraph_ItemCollectionUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemCollectionUI.ItemCollectionUI_C.OnInventorySelectionUpdated__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UItemCollectionUI_C::OnInventorySelectionUpdated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemCollectionUI.ItemCollectionUI_C.OnInventorySelectionUpdated__DelegateSignature");
		
		UItemCollectionUI_C_OnInventorySelectionUpdated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemCollectionUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemCollectionUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemCollectionUI.ItemCollectionUI_C");
		return ptr;
	}

}


