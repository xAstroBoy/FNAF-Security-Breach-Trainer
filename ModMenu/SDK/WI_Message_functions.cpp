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
//		Name   -> Function WI_Message.WI_Message_C.RemoveFocus
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWI_Message_C::RemoveFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.RemoveFocus");

	UWI_Message_C_RemoveFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.GetVisibility_2
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWI_Message_C::GetVisibility_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.GetVisibility_2");

	UWI_Message_C_GetVisibility_2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.GetVisibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWI_Message_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.GetVisibility_1");

	UWI_Message_C_GetVisibility_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.Set Mission UP
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWI_Message_C::Set_Mission_UP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.Set Mission UP");

	UWI_Message_C_Set_Mission_UP_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.GetBrush_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateBrush UWI_Message_C::GetBrush_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.GetBrush_1");

	UWI_Message_C_GetBrush_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.GetPercent_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWI_Message_C::GetPercent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.GetPercent_1");

	UWI_Message_C_GetPercent_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.UpdateData
//		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FFNAFMessageTableStruct                     FNAFMessageTableStruct                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWI_Message_C::UpdateData(const struct FFNAFMessageTableStruct& FNAFMessageTableStruct)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.UpdateData");

	UWI_Message_C_UpdateData_Params params {};
	params.FNAFMessageTableStruct = FNAFMessageTableStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.InuputNext
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWI_Message_C::InuputNext()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.InuputNext");

	UWI_Message_C_InuputNext_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.InputPrevious
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWI_Message_C::InputPrevious()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.InputPrevious");

	UWI_Message_C_InputPrevious_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.InputClose
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWI_Message_C::InputClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.InputClose");

	UWI_Message_C_InputClose_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.InputPrimary
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWI_Message_C::InputPrimary()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.InputPrimary");

	UWI_Message_C_InputPrimary_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.InputSecondary
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWI_Message_C::InputSecondary()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.InputSecondary");

	UWI_Message_C_InputSecondary_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.InputTertiary
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWI_Message_C::InputTertiary()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.InputTertiary");

	UWI_Message_C_InputTertiary_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.InputMoveAxis
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_Message_C::InputMoveAxis(const struct FVector2D& Axis)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.InputMoveAxis");

	UWI_Message_C_InputMoveAxis_Params params {};
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.InputLookAxis
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_Message_C::InputLookAxis(const struct FVector2D& Axis)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.InputLookAxis");

	UWI_Message_C_InputLookAxis_Params params {};
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.InputOptionAxis
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_Message_C::InputOptionAxis(const struct FVector2D& Axis)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.InputOptionAxis");

	UWI_Message_C_InputOptionAxis_Params params {};
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.InputOpen
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWI_Message_C::InputOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.InputOpen");

	UWI_Message_C_InputOpen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.InputZoom
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_Message_C::InputZoom(const struct FVector2D& Axis)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.InputZoom");

	UWI_Message_C_InputZoom_Params params {};
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.InputCycle
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Increment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_Message_C::InputCycle(int Increment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.InputCycle");

	UWI_Message_C_InputCycle_Params params {};
	params.Increment = Increment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.InputDpadDirection
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_Message_C::InputDpadDirection(const struct FVector2D& Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.InputDpadDirection");

	UWI_Message_C_InputDpadDirection_Params params {};
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.Reset
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWI_Message_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.Reset");

	UWI_Message_C_Reset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_Message_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.Tick");

	UWI_Message_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.Update
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FFNAFMessageTableStruct                     FNAFMessageTableStruct                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWI_Message_C::Update(const struct FName& Name, const struct FFNAFMessageTableStruct& FNAFMessageTableStruct)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.Update");

	UWI_Message_C_Update_Params params {};
	params.Name = Name;
	params.FNAFMessageTableStruct = FNAFMessageTableStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWI_Message_C::BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UWI_Message_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.SetUpAudio
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USoundBase*                                  Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_Message_C::SetUpAudio(class USoundBase* Sound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.SetUpAudio");

	UWI_Message_C_SetUpAudio_Params params {};
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.Bind Tick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USoundWave*                                  PlayingSoundWave                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              PlaybackPercent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_Message_C::Bind_Tick(class USoundWave* PlayingSoundWave, float PlaybackPercent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.Bind Tick");

	UWI_Message_C_Bind_Tick_Params params {};
	params.PlayingSoundWave = PlayingSoundWave;
	params.PlaybackPercent = PlaybackPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.InputAccept
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWI_Message_C::InputAccept()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.InputAccept");

	UWI_Message_C_InputAccept_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.BndEvt__ExpandableArea_204_K2Node_ComponentBoundEvent_2_OnExpandableAreaExpansionChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UExpandableArea*                             Area                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWI_Message_C::BndEvt__ExpandableArea_204_K2Node_ComponentBoundEvent_2_OnExpandableAreaExpansionChanged__DelegateSignature(class UExpandableArea* Area, bool bIsExpanded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.BndEvt__ExpandableArea_204_K2Node_ComponentBoundEvent_2_OnExpandableAreaExpansionChanged__DelegateSignature");

	UWI_Message_C_BndEvt__ExpandableArea_204_K2Node_ComponentBoundEvent_2_OnExpandableAreaExpansionChanged__DelegateSignature_Params params {};
	params.Area = Area;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.Pause
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWI_Message_C::Pause()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.Pause");

	UWI_Message_C_Pause_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.Stop
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWI_Message_C::Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.Stop");

	UWI_Message_C_Stop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.InputBack
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWI_Message_C::InputBack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.InputBack");

	UWI_Message_C_InputBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.SetupMission
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWI_Message_C::SetupMission()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.SetupMission");

	UWI_Message_C_SetupMission_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Message.WI_Message_C.ExecuteUbergraph_WI_Message
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_Message_C::ExecuteUbergraph_WI_Message(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Message.WI_Message_C.ExecuteUbergraph_WI_Message");

	UWI_Message_C_ExecuteUbergraph_WI_Message_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
