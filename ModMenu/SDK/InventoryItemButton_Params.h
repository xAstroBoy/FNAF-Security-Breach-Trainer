#pragma once

/**
 * Name: FNAFSB
 * Version: 1
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
	 * Function InventoryItemButton.InventoryItemButton_C.Handle Player Pressed Left
	 */
	struct UInventoryItemButton_C_HandlePlayerPressedLeft_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6M6E[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryItemButton.InventoryItemButton_C.HideSelectedImage
	 */
	struct UInventoryItemButton_C_HideSelectedImage_Params
	{	};

	/**
	 * Function InventoryItemButton.InventoryItemButton_C.ShowSelectedImage
	 */
	struct UInventoryItemButton_C_ShowSelectedImage_Params
	{	};

	/**
	 * Function InventoryItemButton.InventoryItemButton_C.BndEvt__IconButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UInventoryItemButton_C_BndEvt__IconButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function InventoryItemButton.InventoryItemButton_C.BndEvt__IconButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UInventoryItemButton_C_BndEvt__IconButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function InventoryItemButton.InventoryItemButton_C.BndEvt__IconButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UInventoryItemButton_C_BndEvt__IconButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function InventoryItemButton.InventoryItemButton_C.Tick
	 */
	struct UInventoryItemButton_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryItemButton.InventoryItemButton_C.PreConstruct
	 */
	struct UInventoryItemButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InventoryItemButton.InventoryItemButton_C.SetUpFirstColumnButton
	 */
	struct UInventoryItemButton_C_SetUpFirstColumnButton_Params
	{
	public:
		class UTitleButton_C*                                      ButtonToFocus;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryItemButton.InventoryItemButton_C.ButtonSelected
	 */
	struct UInventoryItemButton_C_ButtonSelected_Params
	{	};

	/**
	 * Function InventoryItemButton.InventoryItemButton_C.OnAddedToFocusPath
	 */
	struct UInventoryItemButton_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function InventoryItemButton.InventoryItemButton_C.OnRemovedFromFocusPath
	 */
	struct UInventoryItemButton_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function InventoryItemButton.InventoryItemButton_C.ExecuteUbergraph_InventoryItemButton
	 */
	struct UInventoryItemButton_C_ExecuteUbergraph_InventoryItemButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryItemButton.InventoryItemButton_C.ItemSelected__DelegateSignature
	 */
	struct UInventoryItemButton_C_ItemSelected__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
