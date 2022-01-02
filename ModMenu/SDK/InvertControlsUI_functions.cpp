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
//		Name   -> Function InvertControlsUI.InvertControlsUI_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UInvertControlsUI_C::BndEvt__YesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvertControlsUI.InvertControlsUI_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UInvertControlsUI_C_BndEvt__YesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function InvertControlsUI.InvertControlsUI_C.BndEvt__NoButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UInvertControlsUI_C::BndEvt__NoButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvertControlsUI.InvertControlsUI_C.BndEvt__NoButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UInvertControlsUI_C_BndEvt__NoButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function InvertControlsUI.InvertControlsUI_C.ExecuteUbergraph_InvertControlsUI
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInvertControlsUI_C::ExecuteUbergraph_InvertControlsUI(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvertControlsUI.InvertControlsUI_C.ExecuteUbergraph_InvertControlsUI");

	UInvertControlsUI_C_ExecuteUbergraph_InvertControlsUI_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function InvertControlsUI.InvertControlsUI_C.OnOptionSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UInvertControlsUI_C::OnOptionSelected__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InvertControlsUI.InvertControlsUI_C.OnOptionSelected__DelegateSignature");

	UInvertControlsUI_C_OnOptionSelected__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
