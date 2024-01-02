/**
 * Name: FNAFSB
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_SaveSlotButton.Title_SaveSlotButton_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UTitle_SaveSlotButton_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_SaveSlotButton.Title_SaveSlotButton_C.OnFocusReceived");
		
		UTitle_SaveSlotButton_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_SaveSlotButton.Title_SaveSlotButton_C.Construct
	 * 		Flags  -> ()
	 */
	void UTitle_SaveSlotButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_SaveSlotButton.Title_SaveSlotButton_C.Construct");
		
		UTitle_SaveSlotButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_SaveSlotButton.Title_SaveSlotButton_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitle_SaveSlotButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_SaveSlotButton.Title_SaveSlotButton_C.Tick");
		
		UTitle_SaveSlotButton_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_SaveSlotButton.Title_SaveSlotButton_C.BndEvt__Top_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitle_SaveSlotButton_C::BndEvt__Top_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_SaveSlotButton.Title_SaveSlotButton_C.BndEvt__Top_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UTitle_SaveSlotButton_C_BndEvt__Top_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_SaveSlotButton.Title_SaveSlotButton_C.BndEvt__Top_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitle_SaveSlotButton_C::BndEvt__Top_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_SaveSlotButton.Title_SaveSlotButton_C.BndEvt__Top_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UTitle_SaveSlotButton_C_BndEvt__Top_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_SaveSlotButton.Title_SaveSlotButton_C.TriggerSave
	 * 		Flags  -> ()
	 */
	void UTitle_SaveSlotButton_C::TriggerSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_SaveSlotButton.Title_SaveSlotButton_C.TriggerSave");
		
		UTitle_SaveSlotButton_C_TriggerSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_SaveSlotButton.Title_SaveSlotButton_C.SetDisplayedData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SaveFileName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            GameHour                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDateTime                                   DateTimeWhenSaved                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GameplayTime_Sec                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitle_SaveSlotButton_C::SetDisplayedData(const class FString& SaveFileName, int32_t GameHour, const struct FDateTime& DateTimeWhenSaved, int32_t GameplayTime_Sec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_SaveSlotButton.Title_SaveSlotButton_C.SetDisplayedData");
		
		UTitle_SaveSlotButton_C_SetDisplayedData_Params params {};
		params.SaveFileName = SaveFileName;
		params.GameHour = GameHour;
		params.DateTimeWhenSaved = DateTimeWhenSaved;
		params.GameplayTime_Sec = GameplayTime_Sec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_SaveSlotButton.Title_SaveSlotButton_C.Set Slot Save Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitle_SaveSlotButton_C::SetSlotSaveData(class UFNAFSaveData* SaveData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_SaveSlotButton.Title_SaveSlotButton_C.Set Slot Save Data");
		
		UTitle_SaveSlotButton_C_SetSlotSaveData_Params params {};
		params.SaveData = SaveData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_SaveSlotButton.Title_SaveSlotButton_C.ExecuteUbergraph_Title_SaveSlotButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitle_SaveSlotButton_C::ExecuteUbergraph_Title_SaveSlotButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_SaveSlotButton.Title_SaveSlotButton_C.ExecuteUbergraph_Title_SaveSlotButton");
		
		UTitle_SaveSlotButton_C_ExecuteUbergraph_Title_SaveSlotButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_SaveSlotButton.Title_SaveSlotButton_C.OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitle_SaveSlotButton_C::OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_SaveSlotButton.Title_SaveSlotButton_C.OnHovered__DelegateSignature");
		
		UTitle_SaveSlotButton_C_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_SaveSlotButton.Title_SaveSlotButton_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_SaveSlotButton_C*                     TitleSaveSlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitle_SaveSlotButton_C::OnClicked__DelegateSignature(class UTitle_SaveSlotButton_C* TitleSaveSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_SaveSlotButton.Title_SaveSlotButton_C.OnClicked__DelegateSignature");
		
		UTitle_SaveSlotButton_C_OnClicked__DelegateSignature_Params params {};
		params.TitleSaveSlot = TitleSaveSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTitle_SaveSlotButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTitle_SaveSlotButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Title_SaveSlotButton.Title_SaveSlotButton_C");
		return ptr;
	}

}


