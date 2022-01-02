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
//		Name   -> Function DebugInstructionCardButton.DebugInstructionCardButton_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UDebugInstructionCardButton_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugInstructionCardButton.DebugInstructionCardButton_C.OnFocusReceived");

	UDebugInstructionCardButton_C_OnFocusReceived_Params params {};
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugInstructionCardButton.DebugInstructionCardButton_C.Set Instruction Card Button Text
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Button_Text                                                (BlueprintVisible, BlueprintReadOnly, Parm)
void UDebugInstructionCardButton_C::Set_Instruction_Card_Button_Text(const struct FText& Button_Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugInstructionCardButton.DebugInstructionCardButton_C.Set Instruction Card Button Text");

	UDebugInstructionCardButton_C_Set_Instruction_Card_Button_Text_Params params {};
	params.Button_Text = Button_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugInstructionCardButton.DebugInstructionCardButton_C.BndEvt__Button_89_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugInstructionCardButton_C::BndEvt__Button_89_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugInstructionCardButton.DebugInstructionCardButton_C.BndEvt__Button_89_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UDebugInstructionCardButton_C_BndEvt__Button_89_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugInstructionCardButton.DebugInstructionCardButton_C.BndEvt__Button_89_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDebugInstructionCardButton_C::BndEvt__Button_89_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugInstructionCardButton.DebugInstructionCardButton_C.BndEvt__Button_89_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UDebugInstructionCardButton_C_BndEvt__Button_89_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugInstructionCardButton.DebugInstructionCardButton_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UDebugInstructionCardButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugInstructionCardButton.DebugInstructionCardButton_C.Construct");

	UDebugInstructionCardButton_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugInstructionCardButton.DebugInstructionCardButton_C.ExecuteUbergraph_DebugInstructionCardButton
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugInstructionCardButton_C::ExecuteUbergraph_DebugInstructionCardButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugInstructionCardButton.DebugInstructionCardButton_C.ExecuteUbergraph_DebugInstructionCardButton");

	UDebugInstructionCardButton_C_ExecuteUbergraph_DebugInstructionCardButton_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
