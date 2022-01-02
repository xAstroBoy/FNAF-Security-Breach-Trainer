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
//		Name   -> Function MasterUI.MasterUI_C.UpdateFlashlightMeter
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Power                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMasterUI_C::UpdateFlashlightMeter(float Power)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.UpdateFlashlightMeter");

	UMasterUI_C_UpdateFlashlightMeter_Params params {};
	params.Power = Power;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.GetVisibility_NewMessageStar
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UMasterUI_C::GetVisibility_NewMessageStar()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.GetVisibility_NewMessageStar");

	UMasterUI_C_GetVisibility_NewMessageStar_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.CategoryButtonBackground
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMasterUI_C::CategoryButtonBackground(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.CategoryButtonBackground");

	UMasterUI_C_CategoryButtonBackground_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.ColorTextOnUnhovered
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTextBlock*                                  Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMasterUI_C::ColorTextOnUnhovered(class UTextBlock* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.ColorTextOnUnhovered");

	UMasterUI_C_ColorTextOnUnhovered_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.ColorTextOnHovered
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTextBlock*                                  Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMasterUI_C::ColorTextOnHovered(class UTextBlock* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.ColorTextOnHovered");

	UMasterUI_C_ColorTextOnHovered_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.SetupMapDisplay
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UMasterUI_C::SetupMapDisplay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.SetupMapDisplay");

	UMasterUI_C_SetupMapDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.GetVisibility_NewMissionStar
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UMasterUI_C::GetVisibility_NewMissionStar()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.GetVisibility_NewMissionStar");

	UMasterUI_C_GetVisibility_NewMissionStar_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.GetControllerVisible
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UMasterUI_C::GetControllerVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.GetControllerVisible");

	UMasterUI_C_GetControllerVisible_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.SignalSiwtch
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMasterUI_C::SignalSiwtch(int Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.SignalSiwtch");

	UMasterUI_C_SignalSiwtch_Params params {};
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.InputOpen
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UMasterUI_C::InputOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.InputOpen");

	UMasterUI_C_InputOpen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UMasterUI_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.Construct");

	UMasterUI_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMasterUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.Tick");

	UMasterUI_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.SetupMenus
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UMasterUI_C::SetupMenus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.SetupMenus");

	UMasterUI_C_SetupMenus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.BndEvt__Cam_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMasterUI_C::BndEvt__Cam_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.BndEvt__Cam_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UMasterUI_C_BndEvt__Cam_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.BndEvt__Map_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMasterUI_C::BndEvt__Map_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.BndEvt__Map_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UMasterUI_C_BndEvt__Map_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.SwitchTab
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrentWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               PlaySound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMasterUI_C::SwitchTab(int CurrentWidget, bool PlaySound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.SwitchTab");

	UMasterUI_C_SwitchTab_Params params {};
	params.CurrentWidget = CurrentWidget;
	params.PlaySound = PlaySound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.BndEvt__Notes_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMasterUI_C::BndEvt__Notes_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.BndEvt__Notes_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UMasterUI_C_BndEvt__Notes_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.BndEvt__PanSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMasterUI_C::BndEvt__PanSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.BndEvt__PanSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature");

	UMasterUI_C_BndEvt__PanSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.InputMoveAxis
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMasterUI_C::InputMoveAxis(const struct FVector2D& Axis)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.InputMoveAxis");

	UMasterUI_C_InputMoveAxis_Params params {};
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.InputPrimary
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UMasterUI_C::InputPrimary()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.InputPrimary");

	UMasterUI_C_InputPrimary_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.InputSecondary
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UMasterUI_C::InputSecondary()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.InputSecondary");

	UMasterUI_C_InputSecondary_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.InputOptionAxis
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMasterUI_C::InputOptionAxis(const struct FVector2D& Axis)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.InputOptionAxis");

	UMasterUI_C_InputOptionAxis_Params params {};
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.InputLookAxis
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMasterUI_C::InputLookAxis(const struct FVector2D& Axis)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.InputLookAxis");

	UMasterUI_C_InputLookAxis_Params params {};
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.InputPrevious
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UMasterUI_C::InputPrevious()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.InputPrevious");

	UMasterUI_C_InputPrevious_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.InuputNext
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UMasterUI_C::InuputNext()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.InuputNext");

	UMasterUI_C_InuputNext_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.InputTertiary
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UMasterUI_C::InputTertiary()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.InputTertiary");

	UMasterUI_C_InputTertiary_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.InputAccept
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UMasterUI_C::InputAccept()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.InputAccept");

	UMasterUI_C_InputAccept_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.InputBack
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UMasterUI_C::InputBack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.InputBack");

	UMasterUI_C_InputBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.InputClose
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UMasterUI_C::InputClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.InputClose");

	UMasterUI_C_InputClose_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.InputZoom
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMasterUI_C::InputZoom(const struct FVector2D& Axis)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.InputZoom");

	UMasterUI_C_InputZoom_Params params {};
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.InputCycle
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Increment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMasterUI_C::InputCycle(int Increment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.InputCycle");

	UMasterUI_C_InputCycle_Params params {};
	params.Increment = Increment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.InputDpadDirection
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMasterUI_C::InputDpadDirection(const struct FVector2D& Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.InputDpadDirection");

	UMasterUI_C_InputDpadDirection_Params params {};
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.Reset
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UMasterUI_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.Reset");

	UMasterUI_C_Reset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.BndEvt__Cam_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMasterUI_C::BndEvt__Cam_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.BndEvt__Cam_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UMasterUI_C_BndEvt__Cam_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.BndEvt__Map_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMasterUI_C::BndEvt__Map_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.BndEvt__Map_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UMasterUI_C_BndEvt__Map_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.BndEvt__Missions_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMasterUI_C::BndEvt__Missions_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.BndEvt__Missions_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UMasterUI_C_BndEvt__Missions_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.BndEvt__Cam_Button_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMasterUI_C::BndEvt__Cam_Button_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.BndEvt__Cam_Button_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UMasterUI_C_BndEvt__Cam_Button_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.BndEvt__Missions_Button_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMasterUI_C::BndEvt__Missions_Button_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.BndEvt__Missions_Button_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UMasterUI_C_BndEvt__Missions_Button_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.BndEvt__Map_Button_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMasterUI_C::BndEvt__Map_Button_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.BndEvt__Map_Button_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UMasterUI_C_BndEvt__Map_Button_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.BndEvt__Messages_Button_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMasterUI_C::BndEvt__Messages_Button_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.BndEvt__Messages_Button_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");

	UMasterUI_C_BndEvt__Messages_Button_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.BndEvt__Messages_Button_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMasterUI_C::BndEvt__Messages_Button_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.BndEvt__Messages_Button_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");

	UMasterUI_C_BndEvt__Messages_Button_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.BndEvt__Messages_Button_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UMasterUI_C::BndEvt__Messages_Button_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.BndEvt__Messages_Button_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");

	UMasterUI_C_BndEvt__Messages_Button_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.OpenToNewMessage
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UMasterUI_C::OpenToNewMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.OpenToNewMessage");

	UMasterUI_C_OpenToNewMessage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MasterUI.MasterUI_C.ExecuteUbergraph_MasterUI
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMasterUI_C::ExecuteUbergraph_MasterUI(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MasterUI.MasterUI_C.ExecuteUbergraph_MasterUI");

	UMasterUI_C_ExecuteUbergraph_MasterUI_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
