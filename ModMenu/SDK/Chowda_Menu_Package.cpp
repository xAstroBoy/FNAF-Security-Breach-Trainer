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
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BlockFurtherInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLock                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChowda_Menu_C::BlockFurtherInput(bool bLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BlockFurtherInput");
		
		UChowda_Menu_C_BlockFurtherInput_Params params {};
		params.bLock = bLock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.OnPreviewKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UChowda_Menu_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.OnPreviewKeyDown");
		
		UChowda_Menu_C_OnPreviewKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.OpenRuinStorePage
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::OpenRuinStorePage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.OpenRuinStorePage");
		
		UChowda_Menu_C_OpenRuinStorePage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.IsDLCInstalled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDLCInstalled                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChowda_Menu_C::IsDLCInstalled(bool* IsDLCInstalled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.IsDLCInstalled");
		
		UChowda_Menu_C_IsDLCInstalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsDLCInstalled != nullptr)
			*IsDLCInstalled = params.IsDLCInstalled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.GetButtonToSetFocusOn_Widget2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitleButton_C*                              Button                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChowda_Menu_C::GetButtonToSetFocusOn_Widget2(class UTitleButton_C** Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.GetButtonToSetFocusOn_Widget2");
		
		UChowda_Menu_C_GetButtonToSetFocusOn_Widget2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Button != nullptr)
			*Button = params.Button;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.GetButtonToSetFocusOn_Widget1
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::GetButtonToSetFocusOn_Widget1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.GetButtonToSetFocusOn_Widget1");
		
		UChowda_Menu_C_GetButtonToSetFocusOn_Widget1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.UpdateContinueButtonText
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::UpdateContinueButtonText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.UpdateContinueButtonText");
		
		UChowda_Menu_C_UpdateContinueButtonText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.PlayLogoBuildOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Forward                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChowda_Menu_C::PlayLogoBuildOn(bool Forward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.PlayLogoBuildOn");
		
		UChowda_Menu_C_PlayLogoBuildOn_Params params {};
		params.Forward = Forward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.Navigation_ScrollBox_LastChild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UChowda_Menu_C::Navigation_ScrollBox_LastChild(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.Navigation_ScrollBox_LastChild");
		
		UChowda_Menu_C_Navigation_ScrollBox_LastChild_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.GetLastPlayedProfileIndexOrNonEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChowda_Menu_C::GetLastPlayedProfileIndexOrNonEmpty(int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.GetLastPlayedProfileIndexOrNonEmpty");
		
		UChowda_Menu_C_GetLastPlayedProfileIndexOrNonEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.GetEmptyProfileIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChowda_Menu_C::GetEmptyProfileIndex(int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.GetEmptyProfileIndex");
		
		UChowda_Menu_C_GetEmptyProfileIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.HasDLCProfile
	 * 		Flags  -> ()
	 */
	bool UChowda_Menu_C::HasDLCProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.HasDLCProfile");
		
		UChowda_Menu_C_HasDLCProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.ShowContinueInfo
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::ShowContinueInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.ShowContinueInfo");
		
		UChowda_Menu_C_ShowContinueInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.CreateChapterButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SaveSlotName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsAutoSave                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsClickable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Chapter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              ChapterDetailsEvent                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void UChowda_Menu_C::CreateChapterButton(const class FString& SaveSlotName, bool IsAutoSave, bool IsClickable, int32_t Chapter, const class FScriptDelegate& Event, class UFNAFSaveData* SaveDataObject, const class FScriptDelegate& ChapterDetailsEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.CreateChapterButton");
		
		UChowda_Menu_C_CreateChapterButton_Params params {};
		params.SaveSlotName = SaveSlotName;
		params.IsAutoSave = IsAutoSave;
		params.IsClickable = IsClickable;
		params.Chapter = Chapter;
		params.Event = Event;
		params.SaveDataObject = SaveDataObject;
		params.ChapterDetailsEvent = ChapterDetailsEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.ProfileButtonsVisibility
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::ProfileButtonsVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.ProfileButtonsVisibility");
		
		UChowda_Menu_C_ProfileButtonsVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.CreateLoadButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SaveSlotName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UFNAFChowdaSaveData*                         SaveSlotData                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsAutoSave                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void UChowda_Menu_C::CreateLoadButton(const class FString& SaveSlotName, class UFNAFChowdaSaveData* SaveSlotData, bool IsAutoSave, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.CreateLoadButton");
		
		UChowda_Menu_C_CreateLoadButton_Params params {};
		params.SaveSlotName = SaveSlotName;
		params.SaveSlotData = SaveSlotData;
		params.IsAutoSave = IsAutoSave;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_Profile1_Button_K2Node_ComponentBoundEvent_8_GetDescriptionFromButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_Profile1_Button_K2Node_ComponentBoundEvent_8_GetDescriptionFromButton__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_Profile1_Button_K2Node_ComponentBoundEvent_8_GetDescriptionFromButton__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_Profile1_Button_K2Node_ComponentBoundEvent_8_GetDescriptionFromButton__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_Profile2_Button_K2Node_ComponentBoundEvent_9_GetDescriptionFromButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_Profile2_Button_K2Node_ComponentBoundEvent_9_GetDescriptionFromButton__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_Profile2_Button_K2Node_ComponentBoundEvent_9_GetDescriptionFromButton__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_Profile2_Button_K2Node_ComponentBoundEvent_9_GetDescriptionFromButton__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_Profile3_Button_K2Node_ComponentBoundEvent_10_GetDescriptionFromButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_Profile3_Button_K2Node_ComponentBoundEvent_10_GetDescriptionFromButton__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_Profile3_Button_K2Node_ComponentBoundEvent_10_GetDescriptionFromButton__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_Profile3_Button_K2Node_ComponentBoundEvent_10_GetDescriptionFromButton__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_FindGregory_Button_K2Node_ComponentBoundEvent_3_GetDescriptionFromButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_FindGregory_Button_K2Node_ComponentBoundEvent_3_GetDescriptionFromButton__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_FindGregory_Button_K2Node_ComponentBoundEvent_3_GetDescriptionFromButton__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_FindGregory_Button_K2Node_ComponentBoundEvent_3_GetDescriptionFromButton__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_NewProfile_Button_K2Node_ComponentBoundEvent_4_GetDescriptionFromButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_NewProfile_Button_K2Node_ComponentBoundEvent_4_GetDescriptionFromButton__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_NewProfile_Button_K2Node_ComponentBoundEvent_4_GetDescriptionFromButton__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_NewProfile_Button_K2Node_ComponentBoundEvent_4_GetDescriptionFromButton__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_OptionsStickyButton_K2Node_ComponentBoundEvent_7_DescriptionUpdate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_OptionsStickyButton_K2Node_ComponentBoundEvent_7_DescriptionUpdate__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_OptionsStickyButton_K2Node_ComponentBoundEvent_7_DescriptionUpdate__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_OptionsStickyButton_K2Node_ComponentBoundEvent_7_DescriptionUpdate__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_OptionsStickyButton_1_K2Node_ComponentBoundEvent_11_DescriptionUpdate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_OptionsStickyButton_1_K2Node_ComponentBoundEvent_11_DescriptionUpdate__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_OptionsStickyButton_1_K2Node_ComponentBoundEvent_11_DescriptionUpdate__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_OptionsStickyButton_1_K2Node_ComponentBoundEvent_11_DescriptionUpdate__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_OptionsStickyButton_294_K2Node_ComponentBoundEvent_12_DescriptionUpdate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_OptionsStickyButton_294_K2Node_ComponentBoundEvent_12_DescriptionUpdate__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_OptionsStickyButton_294_K2Node_ComponentBoundEvent_12_DescriptionUpdate__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_OptionsStickyButton_294_K2Node_ComponentBoundEvent_12_DescriptionUpdate__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_ContinueGame_Button_K2Node_ComponentBoundEvent_13_GetDescriptionFromButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_ContinueGame_Button_K2Node_ComponentBoundEvent_13_GetDescriptionFromButton__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_ContinueGame_Button_K2Node_ComponentBoundEvent_13_GetDescriptionFromButton__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_ContinueGame_Button_K2Node_ComponentBoundEvent_13_GetDescriptionFromButton__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.LoadSaveSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ChapterName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChowda_Menu_C::LoadSaveSlot(const class FName& ChapterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.LoadSaveSlot");
		
		UChowda_Menu_C_LoadSaveSlot_Params params {};
		params.ChapterName = ChapterName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.SetupLoadFiles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ProfileIndexIn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChowda_Menu_C::SetupLoadFiles(int32_t ProfileIndexIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.SetupLoadFiles");
		
		UChowda_Menu_C_SetupLoadFiles_Params params {};
		params.ProfileIndexIn = ProfileIndexIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChowda_Menu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.PreConstruct");
		
		UChowda_Menu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_NewChowdaButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_NewChowdaButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_NewChowdaButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_NewChowdaButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_OptionsStickyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_OptionsStickyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_OptionsStickyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_OptionsStickyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_Profile1_Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_Profile1_Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_Profile1_Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_Profile1_Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BackButtonPressed
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::BackButtonPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BackButtonPressed");
		
		UChowda_Menu_C_BackButtonPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_Profile2_Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_Profile2_Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_Profile2_Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_Profile2_Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_Profile3_Button_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_Profile3_Button_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_Profile3_Button_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_Profile3_Button_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_ContinueGame_Button_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_ContinueGame_Button_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_ContinueGame_Button_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_ContinueGame_Button_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.LoadChapter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Chapter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChowda_Menu_C::LoadChapter(const class FName& Chapter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.LoadChapter");
		
		UChowda_Menu_C_LoadChapter_Params params {};
		params.Chapter = Chapter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.SetRuinMenu
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::SetRuinMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.SetRuinMenu");
		
		UChowda_Menu_C_SetRuinMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_OptionsStickyButton_294_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_OptionsStickyButton_294_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_OptionsStickyButton_294_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_OptionsStickyButton_294_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_OptionsStickyButton_1_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_OptionsStickyButton_1_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_OptionsStickyButton_1_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_OptionsStickyButton_1_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_OptionsStickyButton_K2Node_ComponentBoundEvent_10_BackButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_OptionsStickyButton_K2Node_ComponentBoundEvent_10_BackButtonPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_OptionsStickyButton_K2Node_ComponentBoundEvent_10_BackButtonPressed__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_OptionsStickyButton_K2Node_ComponentBoundEvent_10_BackButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_OptionsStickyButton_1_K2Node_ComponentBoundEvent_11_BackButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_OptionsStickyButton_1_K2Node_ComponentBoundEvent_11_BackButtonPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_OptionsStickyButton_1_K2Node_ComponentBoundEvent_11_BackButtonPressed__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_OptionsStickyButton_1_K2Node_ComponentBoundEvent_11_BackButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_OptionsStickyButton_294_K2Node_ComponentBoundEvent_12_BackButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_OptionsStickyButton_294_K2Node_ComponentBoundEvent_12_BackButtonPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_OptionsStickyButton_294_K2Node_ComponentBoundEvent_12_BackButtonPressed__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_OptionsStickyButton_294_K2Node_ComponentBoundEvent_12_BackButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_NewProfile_Button_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_NewProfile_Button_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_NewProfile_Button_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_NewProfile_Button_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_LoadChapterPopUp_K2Node_ComponentBoundEvent_13_PlayChapter__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Chapter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_LoadChapterPopUp_K2Node_ComponentBoundEvent_13_PlayChapter__DelegateSignature(const class FName& Chapter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_LoadChapterPopUp_K2Node_ComponentBoundEvent_13_PlayChapter__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_LoadChapterPopUp_K2Node_ComponentBoundEvent_13_PlayChapter__DelegateSignature_Params params {};
		params.Chapter = Chapter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_Chapters_Button_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_Chapters_Button_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_Chapters_Button_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_Chapters_Button_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_DeleteProfile_Button_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_DeleteProfile_Button_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_DeleteProfile_Button_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_DeleteProfile_Button_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_DeleteProfilePopUp_K2Node_ComponentBoundEvent_20_Exit_BackedOut__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_DeleteProfilePopUp_K2Node_ComponentBoundEvent_20_Exit_BackedOut__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_DeleteProfilePopUp_K2Node_ComponentBoundEvent_20_Exit_BackedOut__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_DeleteProfilePopUp_K2Node_ComponentBoundEvent_20_Exit_BackedOut__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_LoadChapterPopUp_K2Node_ComponentBoundEvent_21_Exit_BackedOut__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_LoadChapterPopUp_K2Node_ComponentBoundEvent_21_Exit_BackedOut__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_LoadChapterPopUp_K2Node_ComponentBoundEvent_21_Exit_BackedOut__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_LoadChapterPopUp_K2Node_ComponentBoundEvent_21_Exit_BackedOut__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_DeleteProfilePopUp_K2Node_ComponentBoundEvent_22_ProfileDeleted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_DeleteProfilePopUp_K2Node_ComponentBoundEvent_22_ProfileDeleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_DeleteProfilePopUp_K2Node_ComponentBoundEvent_22_ProfileDeleted__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_DeleteProfilePopUp_K2Node_ComponentBoundEvent_22_ProfileDeleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_ContinueGameProfile_Button_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::BndEvt__Chowda_Menu_ContinueGameProfile_Button_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_ContinueGameProfile_Button_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature");
		
		UChowda_Menu_C_BndEvt__Chowda_Menu_ContinueGameProfile_Button_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.UpdateMenuDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Chapter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChowda_Menu_C::UpdateMenuDescription(int32_t Chapter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.UpdateMenuDescription");
		
		UChowda_Menu_C_UpdateMenuDescription_Params params {};
		params.Chapter = Chapter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.ExecuteUbergraph_Chowda_Menu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChowda_Menu_C::ExecuteUbergraph_Chowda_Menu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.ExecuteUbergraph_Chowda_Menu");
		
		UChowda_Menu_C_ExecuteUbergraph_Chowda_Menu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.OptionsClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::OptionsClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.OptionsClosed__DelegateSignature");
		
		UChowda_Menu_C_OptionsClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.GameStarted_FadeOut__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::GameStarted_FadeOut__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.GameStarted_FadeOut__DelegateSignature");
		
		UChowda_Menu_C_GameStarted_FadeOut__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.UpdateDescriptionText__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UChowda_Menu_C::UpdateDescriptionText__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.UpdateDescriptionText__DelegateSignature");
		
		UChowda_Menu_C_UpdateDescriptionText__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.ExitChowdaMenu__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::ExitChowdaMenu__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.ExitChowdaMenu__DelegateSignature");
		
		UChowda_Menu_C_ExitChowdaMenu__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chowda_Menu.Chowda_Menu_C.OptionsPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChowda_Menu_C::OptionsPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chowda_Menu.Chowda_Menu_C.OptionsPressed__DelegateSignature");
		
		UChowda_Menu_C_OptionsPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChowda_Menu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChowda_Menu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Chowda_Menu.Chowda_Menu_C");
		return ptr;
	}

}


