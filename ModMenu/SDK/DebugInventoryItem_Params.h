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
	 * Function DebugInventoryItem.DebugInventoryItem_C.GetItemDisplayName
	 */
	struct UDebugInventoryItem_C_GetItemDisplayName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function DebugInventoryItem.DebugInventoryItem_C.Get_HaveItemCheckbox_CheckedState_1
	 */
	struct UDebugInventoryItem_C_Get_HaveItemCheckbox_CheckedState_1_Params
	{
	public:
		ECheckBoxState                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugInventoryItem.DebugInventoryItem_C.Setup
	 */
	struct UDebugInventoryItem_C_Setup_Params
	{
	public:
		class FName                                                InventoryItemName;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugInventoryItem.DebugInventoryItem_C.BndEvt__HaveItemCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UDebugInventoryItem_C_BndEvt__HaveItemCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DebugInventoryItem.DebugInventoryItem_C.Construct
	 */
	struct UDebugInventoryItem_C_Construct_Params
	{	};

	/**
	 * Function DebugInventoryItem.DebugInventoryItem_C.BndEvt__DebugInventoryItem_CheckBoxUI_K2Node_ComponentBoundEvent_1_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugInventoryItem_C_BndEvt__DebugInventoryItem_CheckBoxUI_K2Node_ComponentBoundEvent_1_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInventoryItem.DebugInventoryItem_C.UpdateVisual
	 */
	struct UDebugInventoryItem_C_UpdateVisual_Params
	{	};

	/**
	 * Function DebugInventoryItem.DebugInventoryItem_C.ExecuteUbergraph_DebugInventoryItem
	 */
	struct UDebugInventoryItem_C_ExecuteUbergraph_DebugInventoryItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
