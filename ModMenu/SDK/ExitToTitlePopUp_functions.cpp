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
//		Name   -> Function ExitToTitlePopUp.ExitToTitlePopUp_C.OnPreviewKeyDown
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UExitToTitlePopUp_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ExitToTitlePopUp.ExitToTitlePopUp_C.OnPreviewKeyDown");

	UExitToTitlePopUp_C_OnPreviewKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ExitToTitlePopUp.ExitToTitlePopUp_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UExitToTitlePopUp_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ExitToTitlePopUp.ExitToTitlePopUp_C.PreConstruct");

	UExitToTitlePopUp_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ExitToTitlePopUp.ExitToTitlePopUp_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UExitToTitlePopUp_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ExitToTitlePopUp.ExitToTitlePopUp_C.Construct");

	UExitToTitlePopUp_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ExitToTitlePopUp.ExitToTitlePopUp_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UExitToTitlePopUp_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ExitToTitlePopUp.ExitToTitlePopUp_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UExitToTitlePopUp_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ExitToTitlePopUp.ExitToTitlePopUp_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UExitToTitlePopUp_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ExitToTitlePopUp.ExitToTitlePopUp_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UExitToTitlePopUp_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ExitToTitlePopUp.ExitToTitlePopUp_C.UserBackedOut
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UExitToTitlePopUp_C::UserBackedOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ExitToTitlePopUp.ExitToTitlePopUp_C.UserBackedOut");

	UExitToTitlePopUp_C_UserBackedOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ExitToTitlePopUp.ExitToTitlePopUp_C.ExecuteUbergraph_ExitToTitlePopUp
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UExitToTitlePopUp_C::ExecuteUbergraph_ExitToTitlePopUp(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ExitToTitlePopUp.ExitToTitlePopUp_C.ExecuteUbergraph_ExitToTitlePopUp");

	UExitToTitlePopUp_C_ExecuteUbergraph_ExitToTitlePopUp_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ExitToTitlePopUp.ExitToTitlePopUp_C.BackButton_Exit__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UExitToTitlePopUp_C::BackButton_Exit__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ExitToTitlePopUp.ExitToTitlePopUp_C.BackButton_Exit__DelegateSignature");

	UExitToTitlePopUp_C_BackButton_Exit__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
