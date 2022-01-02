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
//		Name   -> Function PauseUI.PauseUI_C.GetFocusButton
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UButton*                                     Button                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPauseUI_C::GetFocusButton(class UButton** Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.GetFocusButton");

	UPauseUI_C_GetFocusButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Button != nullptr)
		*Button = params.Button;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.InuputNext
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UPauseUI_C::InuputNext()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InuputNext");

	UPauseUI_C_InuputNext_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.InputPrevious
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UPauseUI_C::InputPrevious()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputPrevious");

	UPauseUI_C_InputPrevious_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.InputClose
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UPauseUI_C::InputClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputClose");

	UPauseUI_C_InputClose_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.InputAccept
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UPauseUI_C::InputAccept()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputAccept");

	UPauseUI_C_InputAccept_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.InputPrimary
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UPauseUI_C::InputPrimary()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputPrimary");

	UPauseUI_C_InputPrimary_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.InputSecondary
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UPauseUI_C::InputSecondary()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputSecondary");

	UPauseUI_C_InputSecondary_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.InputTertiary
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UPauseUI_C::InputTertiary()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputTertiary");

	UPauseUI_C_InputTertiary_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.InputMoveAxis
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPauseUI_C::InputMoveAxis(const struct FVector2D& Axis)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputMoveAxis");

	UPauseUI_C_InputMoveAxis_Params params {};
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.InputLookAxis
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPauseUI_C::InputLookAxis(const struct FVector2D& Axis)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputLookAxis");

	UPauseUI_C_InputLookAxis_Params params {};
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.InputOptionAxis
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPauseUI_C::InputOptionAxis(const struct FVector2D& Axis)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputOptionAxis");

	UPauseUI_C_InputOptionAxis_Params params {};
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.InputOpen
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UPauseUI_C::InputOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputOpen");

	UPauseUI_C_InputOpen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.InputZoom
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPauseUI_C::InputZoom(const struct FVector2D& Axis)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputZoom");

	UPauseUI_C_InputZoom_Params params {};
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.InputCycle
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Increment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPauseUI_C::InputCycle(int Increment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputCycle");

	UPauseUI_C_InputCycle_Params params {};
	params.Increment = Increment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.InputDpadDirection
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPauseUI_C::InputDpadDirection(const struct FVector2D& Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputDpadDirection");

	UPauseUI_C_InputDpadDirection_Params params {};
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.Reset
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UPauseUI_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.Reset");

	UPauseUI_C_Reset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPauseUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.Tick");

	UPauseUI_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UPauseUI_C::BndEvt__ResumeButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UPauseUI_C_BndEvt__ResumeButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UPauseUI_C::BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UPauseUI_C_BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.BndEvt__OptionsButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UPauseUI_C::BndEvt__OptionsButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.BndEvt__OptionsButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UPauseUI_C_BndEvt__OptionsButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPauseUI_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.PreConstruct");

	UPauseUI_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.InputBack
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UPauseUI_C::InputBack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputBack");

	UPauseUI_C_InputBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.OptionsBackButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPauseUI_C::OptionsBackButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.OptionsBackButton");

	UPauseUI_C_OptionsBackButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.BndEvt__InventoryButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UPauseUI_C::BndEvt__InventoryButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.BndEvt__InventoryButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UPauseUI_C_BndEvt__InventoryButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.BndEvt__MessagesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UPauseUI_C::BndEvt__MessagesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.BndEvt__MessagesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UPauseUI_C_BndEvt__MessagesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.AcceptTextVisibility
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPauseUI_C::AcceptTextVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.AcceptTextVisibility");

	UPauseUI_C_AcceptTextVisibility_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UPauseUI_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UPauseUI_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UPauseUI_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UPauseUI_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.PlayerClickedQuit
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPauseUI_C::PlayerClickedQuit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.PlayerClickedQuit");

	UPauseUI_C_PlayerClickedQuit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.BndEvt__ExitToTitlePopUp_K2Node_ComponentBoundEvent_8_BackButton_Exit__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UPauseUI_C::BndEvt__ExitToTitlePopUp_K2Node_ComponentBoundEvent_8_BackButton_Exit__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.BndEvt__ExitToTitlePopUp_K2Node_ComponentBoundEvent_8_BackButton_Exit__DelegateSignature");

	UPauseUI_C_BndEvt__ExitToTitlePopUp_K2Node_ComponentBoundEvent_8_BackButton_Exit__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.BndEvt__ExitPopUp_K2Node_ComponentBoundEvent_3_Exit_BackedOut__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UPauseUI_C::BndEvt__ExitPopUp_K2Node_ComponentBoundEvent_3_Exit_BackedOut__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.BndEvt__ExitPopUp_K2Node_ComponentBoundEvent_3_Exit_BackedOut__DelegateSignature");

	UPauseUI_C_BndEvt__ExitPopUp_K2Node_ComponentBoundEvent_3_Exit_BackedOut__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.BndEvt__ExitGameButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UPauseUI_C::BndEvt__ExitGameButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.BndEvt__ExitGameButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	UPauseUI_C_BndEvt__ExitGameButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PauseUI.PauseUI_C.ExecuteUbergraph_PauseUI
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPauseUI_C::ExecuteUbergraph_PauseUI(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.ExecuteUbergraph_PauseUI");

	UPauseUI_C_ExecuteUbergraph_PauseUI_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
