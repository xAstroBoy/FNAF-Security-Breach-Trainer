// Name: FNAF Security Breach, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugInventoryItem.DebugInventoryItem_C.GetItemDisplayName
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UDebugInventoryItem_C::GetItemDisplayName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugInventoryItem.DebugInventoryItem_C.GetItemDisplayName");

	UDebugInventoryItem_C_GetItemDisplayName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugInventoryItem.DebugInventoryItem_C.Get_HaveItemCheckbox_CheckedState_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		SlateCore_ECheckBoxState                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
SlateCore_ECheckBoxState UDebugInventoryItem_C::Get_HaveItemCheckbox_CheckedState_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugInventoryItem.DebugInventoryItem_C.Get_HaveItemCheckbox_CheckedState_1");

	UDebugInventoryItem_C_Get_HaveItemCheckbox_CheckedState_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugInventoryItem.DebugInventoryItem_C.Setup
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       InventoryItemName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugInventoryItem_C::Setup(const struct FName& InventoryItemName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugInventoryItem.DebugInventoryItem_C.Setup");

	UDebugInventoryItem_C_Setup_Params params {};
	params.InventoryItemName = InventoryItemName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugInventoryItem.DebugInventoryItem_C.BndEvt__HaveItemCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugInventoryItem_C::BndEvt__HaveItemCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugInventoryItem.DebugInventoryItem_C.BndEvt__HaveItemCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDebugInventoryItem_C_BndEvt__HaveItemCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugInventoryItem.DebugInventoryItem_C.ExecuteUbergraph_DebugInventoryItem
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugInventoryItem_C::ExecuteUbergraph_DebugInventoryItem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugInventoryItem.DebugInventoryItem_C.ExecuteUbergraph_DebugInventoryItem");

	UDebugInventoryItem_C_ExecuteUbergraph_DebugInventoryItem_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
