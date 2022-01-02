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
//		Name   -> Function ChangesNotAppliedPopUp.ChangesNotAppliedPopUp_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UChangesNotAppliedPopUp_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChangesNotAppliedPopUp.ChangesNotAppliedPopUp_C.PreConstruct");

	UChangesNotAppliedPopUp_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ChangesNotAppliedPopUp.ChangesNotAppliedPopUp_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UChangesNotAppliedPopUp_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChangesNotAppliedPopUp.ChangesNotAppliedPopUp_C.Construct");

	UChangesNotAppliedPopUp_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ChangesNotAppliedPopUp.ChangesNotAppliedPopUp_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChangesNotAppliedPopUp_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChangesNotAppliedPopUp.ChangesNotAppliedPopUp_C.Tick");

	UChangesNotAppliedPopUp_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ChangesNotAppliedPopUp.ChangesNotAppliedPopUp_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UChangesNotAppliedPopUp_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChangesNotAppliedPopUp.ChangesNotAppliedPopUp_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UChangesNotAppliedPopUp_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ChangesNotAppliedPopUp.ChangesNotAppliedPopUp_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UChangesNotAppliedPopUp_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChangesNotAppliedPopUp.ChangesNotAppliedPopUp_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UChangesNotAppliedPopUp_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ChangesNotAppliedPopUp.ChangesNotAppliedPopUp_C.UserBackedOut
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UChangesNotAppliedPopUp_C::UserBackedOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChangesNotAppliedPopUp.ChangesNotAppliedPopUp_C.UserBackedOut");

	UChangesNotAppliedPopUp_C_UserBackedOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ChangesNotAppliedPopUp.ChangesNotAppliedPopUp_C.ExecuteUbergraph_ChangesNotAppliedPopUp
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChangesNotAppliedPopUp_C::ExecuteUbergraph_ChangesNotAppliedPopUp(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChangesNotAppliedPopUp.ChangesNotAppliedPopUp_C.ExecuteUbergraph_ChangesNotAppliedPopUp");

	UChangesNotAppliedPopUp_C_ExecuteUbergraph_ChangesNotAppliedPopUp_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ChangesNotAppliedPopUp.ChangesNotAppliedPopUp_C.ExitWithoutSaving__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UChangesNotAppliedPopUp_C::ExitWithoutSaving__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChangesNotAppliedPopUp.ChangesNotAppliedPopUp_C.ExitWithoutSaving__DelegateSignature");

	UChangesNotAppliedPopUp_C_ExitWithoutSaving__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ChangesNotAppliedPopUp.ChangesNotAppliedPopUp_C.CloseThisPrompt__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UChangesNotAppliedPopUp_C::CloseThisPrompt__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChangesNotAppliedPopUp.ChangesNotAppliedPopUp_C.CloseThisPrompt__DelegateSignature");

	UChangesNotAppliedPopUp_C_CloseThisPrompt__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
