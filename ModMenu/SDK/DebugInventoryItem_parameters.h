#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function DebugInventoryItem.DebugInventoryItem_C.GetItemDisplayName
struct UDebugInventoryItem_C_GetItemDisplayName_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function DebugInventoryItem.DebugInventoryItem_C.Get_HaveItemCheckbox_CheckedState_1
struct UDebugInventoryItem_C_Get_HaveItemCheckbox_CheckedState_1_Params
{
	SlateCore_ECheckBoxState                           ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DebugInventoryItem.DebugInventoryItem_C.Setup
struct UDebugInventoryItem_C_Setup_Params
{
	struct FName                                       InventoryItemName;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DebugInventoryItem.DebugInventoryItem_C.BndEvt__HaveItemCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
struct UDebugInventoryItem_C_BndEvt__HaveItemCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DebugInventoryItem.DebugInventoryItem_C.ExecuteUbergraph_DebugInventoryItem
struct UDebugInventoryItem_C_ExecuteUbergraph_DebugInventoryItem_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
