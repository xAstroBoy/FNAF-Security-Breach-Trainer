#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ItemCollectionUI.ItemCollectionUI_C.GoToRetroCatOrAllCat
	 */
	struct UItemCollectionUI_C_GoToRetroCatOrAllCat_Params
	{
	public:
		SlateCore_EUINavigation                                    Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ItemCollectionUI.ItemCollectionUI_C.GoToFirstItemInGrid
	 */
	struct UItemCollectionUI_C_GoToFirstItemInGrid_Params
	{
	public:
		SlateCore_EUINavigation                                    Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ItemCollectionUI.ItemCollectionUI_C.OnKeyDown
	 */
	struct UItemCollectionUI_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function ItemCollectionUI.ItemCollectionUI_C.HighlightedTextForCurrentSelection
	 */
	struct UItemCollectionUI_C_HighlightedTextForCurrentSelection_Params
	{
	};

	/**
	 * Function ItemCollectionUI.ItemCollectionUI_C.Update Item View
	 */
	struct UItemCollectionUI_C_Update_Item_View_Params
	{
	public:
		class UInventoryItemButton_C*                              ClickedButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__TitleButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UItemCollectionUI_C_BndEvt__TitleButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__FoodButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UItemCollectionUI_C_BndEvt__FoodButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__ClothesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UItemCollectionUI_C_BndEvt__ClothesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__TrophiesButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UItemCollectionUI_C_BndEvt__TrophiesButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__MiscButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UItemCollectionUI_C_BndEvt__MiscButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function ItemCollectionUI.ItemCollectionUI_C.Construct
	 */
	struct UItemCollectionUI_C_Construct_Params
	{
	};

	/**
	 * Function ItemCollectionUI.ItemCollectionUI_C.OnPopulate
	 */
	struct UItemCollectionUI_C_OnPopulate_Params
	{
	};

	/**
	 * Function ItemCollectionUI.ItemCollectionUI_C.Initial inventory Setup
	 */
	struct UItemCollectionUI_C_Initial_inventory_Setup_Params
	{
	};

	/**
	 * Function ItemCollectionUI.ItemCollectionUI_C.Destruct
	 */
	struct UItemCollectionUI_C_Destruct_Params
	{
	};

	/**
	 * Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UItemCollectionUI_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 */
	struct UItemCollectionUI_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__RetroCDButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UItemCollectionUI_C_BndEvt__RetroCDButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function ItemCollectionUI.ItemCollectionUI_C.BndEvt__AllButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 */
	struct UItemCollectionUI_C_BndEvt__AllButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function ItemCollectionUI.ItemCollectionUI_C.ExecuteUbergraph_ItemCollectionUI
	 */
	struct UItemCollectionUI_C_ExecuteUbergraph_ItemCollectionUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ItemCollectionUI.ItemCollectionUI_C.OnInventorySelectionUpdated__DelegateSignature
	 */
	struct UItemCollectionUI_C_OnInventorySelectionUpdated__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
