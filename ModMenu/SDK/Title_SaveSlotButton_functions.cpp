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
//		Name   -> Function Title_SaveSlotButton.Title_SaveSlotButton_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UTitle_SaveSlotButton_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Title_SaveSlotButton.Title_SaveSlotButton_C.OnFocusReceived");

	UTitle_SaveSlotButton_C_OnFocusReceived_Params params {};
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Title_SaveSlotButton.Title_SaveSlotButton_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTitle_SaveSlotButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Title_SaveSlotButton.Title_SaveSlotButton_C.Construct");

	UTitle_SaveSlotButton_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Title_SaveSlotButton.Title_SaveSlotButton_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTitle_SaveSlotButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Title_SaveSlotButton.Title_SaveSlotButton_C.Tick");

	UTitle_SaveSlotButton_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Title_SaveSlotButton.Title_SaveSlotButton_C.BndEvt__Top_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTitle_SaveSlotButton_C::BndEvt__Top_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Title_SaveSlotButton.Title_SaveSlotButton_C.BndEvt__Top_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UTitle_SaveSlotButton_C_BndEvt__Top_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Title_SaveSlotButton.Title_SaveSlotButton_C.BndEvt__Top_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTitle_SaveSlotButton_C::BndEvt__Top_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Title_SaveSlotButton.Title_SaveSlotButton_C.BndEvt__Top_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UTitle_SaveSlotButton_C_BndEvt__Top_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Title_SaveSlotButton.Title_SaveSlotButton_C.TriggerSave
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTitle_SaveSlotButton_C::TriggerSave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Title_SaveSlotButton.Title_SaveSlotButton_C.TriggerSave");

	UTitle_SaveSlotButton_C_TriggerSave_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Title_SaveSlotButton.Title_SaveSlotButton_C.SetDisplayedData
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SaveFileName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                GameHour                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FDateTime                                   DateTimeWhenSaved                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
//		int                                                GameplayTime_Sec                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTitle_SaveSlotButton_C::SetDisplayedData(const struct FString& SaveFileName, int GameHour, const struct FDateTime& DateTimeWhenSaved, int GameplayTime_Sec)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Title_SaveSlotButton.Title_SaveSlotButton_C.SetDisplayedData");

	UTitle_SaveSlotButton_C_SetDisplayedData_Params params {};
	params.SaveFileName = SaveFileName;
	params.GameHour = GameHour;
	params.DateTimeWhenSaved = DateTimeWhenSaved;
	params.GameplayTime_Sec = GameplayTime_Sec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Title_SaveSlotButton.Title_SaveSlotButton_C.Set Slot Save Data
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTitle_SaveSlotButton_C::Set_Slot_Save_Data(class UFNAFSaveData* SaveData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Title_SaveSlotButton.Title_SaveSlotButton_C.Set Slot Save Data");

	UTitle_SaveSlotButton_C_Set_Slot_Save_Data_Params params {};
	params.SaveData = SaveData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Title_SaveSlotButton.Title_SaveSlotButton_C.ExecuteUbergraph_Title_SaveSlotButton
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTitle_SaveSlotButton_C::ExecuteUbergraph_Title_SaveSlotButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Title_SaveSlotButton.Title_SaveSlotButton_C.ExecuteUbergraph_Title_SaveSlotButton");

	UTitle_SaveSlotButton_C_ExecuteUbergraph_Title_SaveSlotButton_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Title_SaveSlotButton.Title_SaveSlotButton_C.OnHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTitle_SaveSlotButton_C::OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Title_SaveSlotButton.Title_SaveSlotButton_C.OnHovered__DelegateSignature");

	UTitle_SaveSlotButton_C_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Title_SaveSlotButton.Title_SaveSlotButton_C.OnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTitle_SaveSlotButton_C::OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Title_SaveSlotButton.Title_SaveSlotButton_C.OnClicked__DelegateSignature");

	UTitle_SaveSlotButton_C_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
