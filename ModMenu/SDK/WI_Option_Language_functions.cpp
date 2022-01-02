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
//		Name   -> Function WI_Option_Language.WI_Option_Language_C.SetupColumns
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWI_Option_Language_C::SetupColumns()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Option_Language.WI_Option_Language_C.SetupColumns");

	UWI_Option_Language_C_SetupColumns_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Option_Language.WI_Option_Language_C.SetupLanguageDropdownMenu
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWI_Option_Language_C::SetupLanguageDropdownMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Option_Language.WI_Option_Language_C.SetupLanguageDropdownMenu");

	UWI_Option_Language_C_SetupLanguageDropdownMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Option_Language.WI_Option_Language_C.BndEvt__Language_BoxString_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FString                                     SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_Option_Language_C::BndEvt__Language_BoxString_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Option_Language.WI_Option_Language_C.BndEvt__Language_BoxString_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");

	UWI_Option_Language_C_BndEvt__Language_BoxString_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params params {};
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Option_Language.WI_Option_Language_C.BndEvt__Language_ComboBox_K2Node_ComponentBoundEvent_0_ArrowKeyPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWI_Option_Language_C::BndEvt__Language_ComboBox_K2Node_ComponentBoundEvent_0_ArrowKeyPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Option_Language.WI_Option_Language_C.BndEvt__Language_ComboBox_K2Node_ComponentBoundEvent_0_ArrowKeyPressed__DelegateSignature");

	UWI_Option_Language_C_BndEvt__Language_ComboBox_K2Node_ComponentBoundEvent_0_ArrowKeyPressed__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Option_Language.WI_Option_Language_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWI_Option_Language_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Option_Language.WI_Option_Language_C.PreConstruct");

	UWI_Option_Language_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Option_Language.WI_Option_Language_C.ExecuteUbergraph_WI_Option_Language
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_Option_Language_C::ExecuteUbergraph_WI_Option_Language(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Option_Language.WI_Option_Language_C.ExecuteUbergraph_WI_Option_Language");

	UWI_Option_Language_C_ExecuteUbergraph_WI_Option_Language_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Option_Language.WI_Option_Language_C.ArrowKeyPressed__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWI_Option_Language_C::ArrowKeyPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Option_Language.WI_Option_Language_C.ArrowKeyPressed__DelegateSignature");

	UWI_Option_Language_C_ArrowKeyPressed__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
