/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.CreateDeleteList
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SaveSlotName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		bool                                               AutoSave                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitleUI_C::CreateDeleteList(const class FString& SaveSlotName, const class FScriptDelegate& Delegate, bool AutoSave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.CreateDeleteList");
		
		UTitleUI_C_CreateDeleteList_Params params {};
		params.SaveSlotName = SaveSlotName;
		params.Delegate = Delegate;
		params.AutoSave = AutoSave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.OnPreviewKeyDown
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UTitleUI_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.OnPreviewKeyDown");
		
		UTitleUI_C_OnPreviewKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.CreateLoadButton
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SaveSlotName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsAutoSave                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void UTitleUI_C::CreateLoadButton(const class FString& SaveSlotName, bool IsAutoSave, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.CreateLoadButton");
		
		UTitleUI_C_CreateLoadButton_Params params {};
		params.SaveSlotName = SaveSlotName;
		params.IsAutoSave = IsAutoSave;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.NewGameButton_Visibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              TargetArray                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UTitleUI_C::NewGameButton_Visibility(TArray<class FString> TargetArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.NewGameButton_Visibility");
		
		UTitleUI_C_NewGameButton_Visibility_Params params {};
		params.TargetArray = TargetArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.Debug_Visible_Menus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	UMG_ESlateVisibility UTitleUI_C::Debug_Visible_Menus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.Debug_Visible_Menus");
		
		UTitleUI_C_Debug_Visible_Menus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.GetCurrentWidgetsUpperButton
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UButton*                                     Top_Button                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleUI_C::GetCurrentWidgetsUpperButton(class UButton** Top_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.GetCurrentWidgetsUpperButton");
		
		UTitleUI_C_GetCurrentWidgetsUpperButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Top_Button != nullptr)
			*Top_Button = params.Top_Button;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.SetupButtonStyle
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UTitleUI_C::SetupButtonStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.SetupButtonStyle");
		
		UTitleUI_C_SetupButtonStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.LoadPlayerSettings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTitleUI_C::LoadPlayerSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.LoadPlayerSettings");
		
		UTitleUI_C_LoadPlayerSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.SetFocusIfUsingGamepad
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTitleUI_C::SetFocusIfUsingGamepad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.SetFocusIfUsingGamepad");
		
		UTitleUI_C_SetFocusIfUsingGamepad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.GetKeyboardFocusBack
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UTitleUI_C::GetKeyboardFocusBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.GetKeyboardFocusBack");
		
		UTitleUI_C_GetKeyboardFocusBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.RandomizerHoverHighlight
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UTitleUI_C::RandomizerHoverHighlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.RandomizerHoverHighlight");
		
		UTitleUI_C_RandomizerHoverHighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.GetSeed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Seed                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleUI_C::GetSeed(int32_t* Seed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.GetSeed");
		
		UTitleUI_C_GetSeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Seed != nullptr)
			*Seed = params.Seed;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.SetSurvivalLives
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_SurvivalLives_E_SurvivalLives                    Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleUI_C::SetSurvivalLives(E_SurvivalLives_E_SurvivalLives Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.SetSurvivalLives");
		
		UTitleUI_C_SetSurvivalLives_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.SetSurvivalTime
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            MinutesPerHour                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleUI_C::SetSurvivalTime(int32_t MinutesPerHour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.SetSurvivalTime");
		
		UTitleUI_C_SetSurvivalTime_Params params {};
		params.MinutesPerHour = MinutesPerHour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.SetSurvivalSelection
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		fnaf9_ESurvivalDifficulty                          SurvivalDifficulty                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleUI_C::SetSurvivalSelection(fnaf9_ESurvivalDifficulty SurvivalDifficulty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.SetSurvivalSelection");
		
		UTitleUI_C_SetSurvivalSelection_Params params {};
		params.SurvivalDifficulty = SurvivalDifficulty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.SetClockRate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            MinutesPerHour                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleUI_C::SetClockRate(int32_t MinutesPerHour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.SetClockRate");
		
		UTitleUI_C_SetClockRate_Params params {};
		params.MinutesPerHour = MinutesPerHour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.Get_RayTracingBox_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	UMG_ESlateVisibility UTitleUI_C::Get_RayTracingBox_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.Get_RayTracingBox_Visibility_1");
		
		UTitleUI_C_Get_RayTracingBox_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.FadeToLoad
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void UTitleUI_C::FadeToLoad(const class FScriptDelegate& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.FadeToLoad");
		
		UTitleUI_C_FadeToLoad_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.Finished_071044F543A717F54FDA6B941362F78E
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTitleUI_C::Finished_071044F543A717F54FDA6B941362F78E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.Finished_071044F543A717F54FDA6B941362F78E");
		
		UTitleUI_C_Finished_071044F543A717F54FDA6B941362F78E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.Finished_633E73144EEFFCA673A1CEB9A7478126
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTitleUI_C::Finished_633E73144EEFFCA673A1CEB9A7478126()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.Finished_633E73144EEFFCA673A1CEB9A7478126");
		
		UTitleUI_C_Finished_633E73144EEFFCA673A1CEB9A7478126_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.Load Mini Game Level
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        LevelName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleUI_C::Load_Mini_Game_Level(const class FName& LevelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.Load Mini Game Level");
		
		UTitleUI_C_Load_Mini_Game_Level_Params params {};
		params.LevelName = LevelName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__NewGameNoButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__NewGameNoButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__NewGameNoButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__NewGameNoButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__NewGameYesButton_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__NewGameYesButton_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__NewGameYesButton_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__NewGameYesButton_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__ContinueGameButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__ContinueGameButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__ContinueGameButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__ContinueGameButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__Continue_YesButton_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__Continue_YesButton_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__Continue_YesButton_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__Continue_YesButton_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__Continue_NoButton_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__Continue_NoButton_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__Continue_NoButton_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__Continue_NoButton_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__LoadGameButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__LoadGameButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__LoadGameButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__LoadGameButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__NewGameButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__NewGameButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__NewGameButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__NewGameButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__Character_Gallery_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__Character_Gallery_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__Character_Gallery_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UTitleUI_C_BndEvt__Character_Gallery_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__Backstage_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__Backstage_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__Backstage_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__Backstage_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__ArcadeGamesButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__ArcadeGamesButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__ArcadeGamesButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__ArcadeGamesButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__EnvironmentsButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__EnvironmentsButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__EnvironmentsButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__EnvironmentsButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__BalloonBoyMinigame_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__BalloonBoyMinigame_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__BalloonBoyMinigame_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__BalloonBoyMinigame_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.LoadWorldToArea
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Area                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleUI_C::LoadWorldToArea(const class FName& Area)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.LoadWorldToArea");
		
		UTitleUI_C_LoadWorldToArea_Params params {};
		params.Area = Area;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.Continue New Game
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTitleUI_C::Continue_New_Game()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.Continue New Game");
		
		UTitleUI_C_Continue_New_Game_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__LaserTag_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__LaserTag_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__LaserTag_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UTitleUI_C_BndEvt__LaserTag_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UTitleUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.Construct");
		
		UTitleUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitleUI_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.PreConstruct");
		
		UTitleUI_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.On New Game Existing Slot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SaveSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UTitleUI_C::On_New_Game_Existing_Slot(const class FString& SaveSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.On New Game Existing Slot");
		
		UTitleUI_C_On_New_Game_Existing_Slot_Params params {};
		params.SaveSlot = SaveSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__NewSlotButton_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__NewSlotButton_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__NewSlotButton_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__NewSlotButton_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__Bowling_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__Bowling_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__Bowling_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__Bowling_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__ConstructTest_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__ConstructTest_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__ConstructTest_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__ConstructTest_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__GatorGolf_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__GatorGolf_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__GatorGolf_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__GatorGolf_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__OptionsButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__OptionsButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__OptionsButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__OptionsButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__SurvivalModeButton_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__SurvivalModeButton_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__SurvivalModeButton_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__SurvivalModeButton_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleButton_C_0_K2Node_ComponentBoundEvent_32_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__TitleButton_C_0_K2Node_ComponentBoundEvent_32_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleButton_C_0_K2Node_ComponentBoundEvent_32_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleButton_C_0_K2Node_ComponentBoundEvent_32_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleButton_C_1_K2Node_ComponentBoundEvent_35_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__TitleButton_C_1_K2Node_ComponentBoundEvent_35_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleButton_C_1_K2Node_ComponentBoundEvent_35_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleButton_C_1_K2Node_ComponentBoundEvent_35_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleButton_C_2_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__TitleButton_C_2_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleButton_C_2_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleButton_C_2_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleButton_C_3_K2Node_ComponentBoundEvent_40_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__TitleButton_C_3_K2Node_ComponentBoundEvent_40_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleButton_C_3_K2Node_ComponentBoundEvent_40_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleButton_C_3_K2Node_ComponentBoundEvent_40_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleButton_C_4_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__TitleButton_C_4_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleButton_C_4_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleButton_C_4_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleButton_C_5_K2Node_ComponentBoundEvent_43_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__TitleButton_C_5_K2Node_ComponentBoundEvent_43_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleButton_C_5_K2Node_ComponentBoundEvent_43_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleButton_C_5_K2Node_ComponentBoundEvent_43_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__Survival_Start_Button_K2Node_ComponentBoundEvent_44_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__Survival_Start_Button_K2Node_ComponentBoundEvent_44_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__Survival_Start_Button_K2Node_ComponentBoundEvent_44_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__Survival_Start_Button_K2Node_ComponentBoundEvent_44_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__Survival_Lives_1_K2Node_ComponentBoundEvent_45_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__Survival_Lives_1_K2Node_ComponentBoundEvent_45_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__Survival_Lives_1_K2Node_ComponentBoundEvent_45_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__Survival_Lives_1_K2Node_ComponentBoundEvent_45_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__Survival_Lives_10_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__Survival_Lives_10_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__Survival_Lives_10_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__Survival_Lives_10_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__Survival_Lives_Infinite_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__Survival_Lives_Infinite_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__Survival_Lives_Infinite_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__Survival_Lives_Infinite_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__RoxyRacers_K2Node_ComponentBoundEvent_49_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__RoxyRacers_K2Node_ComponentBoundEvent_49_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__RoxyRacers_K2Node_ComponentBoundEvent_49_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__RoxyRacers_K2Node_ComponentBoundEvent_49_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__Lobby_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__Lobby_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__Lobby_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__Lobby_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__Daycare_K2Node_ComponentBoundEvent_52_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__Daycare_K2Node_ComponentBoundEvent_52_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__Daycare_K2Node_ComponentBoundEvent_52_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__Daycare_K2Node_ComponentBoundEvent_52_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__Kitchen_K2Node_ComponentBoundEvent_53_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__Kitchen_K2Node_ComponentBoundEvent_53_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__Kitchen_K2Node_ComponentBoundEvent_53_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__Kitchen_K2Node_ComponentBoundEvent_53_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__PrizeCounter_K2Node_ComponentBoundEvent_54_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__PrizeCounter_K2Node_ComponentBoundEvent_54_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__PrizeCounter_K2Node_ComponentBoundEvent_54_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__PrizeCounter_K2Node_ComponentBoundEvent_54_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__DJWestArcade_K2Node_ComponentBoundEvent_55_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__DJWestArcade_K2Node_ComponentBoundEvent_55_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__DJWestArcade_K2Node_ComponentBoundEvent_55_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__DJWestArcade_K2Node_ComponentBoundEvent_55_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__Endogeddon_K2Node_ComponentBoundEvent_56_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__Endogeddon_K2Node_ComponentBoundEvent_56_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__Endogeddon_K2Node_ComponentBoundEvent_56_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__Endogeddon_K2Node_ComponentBoundEvent_56_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__PizzaSim_K2Node_ComponentBoundEvent_57_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__PizzaSim_K2Node_ComponentBoundEvent_57_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__PizzaSim_K2Node_ComponentBoundEvent_57_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__PizzaSim_K2Node_ComponentBoundEvent_57_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.Load Level
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleUI_C::Load_Level(const class FName& InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.Load Level");
		
		UTitleUI_C_Load_Level_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__SurvivalSpawnAllPossibleLocations_K2Node_ComponentBoundEvent_50_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitleUI_C::BndEvt__SurvivalSpawnAllPossibleLocations_K2Node_ComponentBoundEvent_50_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__SurvivalSpawnAllPossibleLocations_K2Node_ComponentBoundEvent_50_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UTitleUI_C_BndEvt__SurvivalSpawnAllPossibleLocations_K2Node_ComponentBoundEvent_50_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__ChicaFeedingFrenzy_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__ChicaFeedingFrenzy_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__ChicaFeedingFrenzy_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__ChicaFeedingFrenzy_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__PrincessQuest2_K2Node_ComponentBoundEvent_59_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__PrincessQuest2_K2Node_ComponentBoundEvent_59_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__PrincessQuest2_K2Node_ComponentBoundEvent_59_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__PrincessQuest2_K2Node_ComponentBoundEvent_59_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.ToggleMainMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTitleUI_C::ToggleMainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.ToggleMainMenu");
		
		UTitleUI_C_ToggleMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.Tick");
		
		UTitleUI_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__Button_135_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__Button_135_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__Button_135_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature");
		
		UTitleUI_C_BndEvt__Button_135_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__RandomSeed_Button_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__RandomSeed_Button_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__RandomSeed_Button_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature");
		
		UTitleUI_C_BndEvt__RandomSeed_Button_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__RandomSeed_Button_K2Node_ComponentBoundEvent_65_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__RandomSeed_Button_K2Node_ComponentBoundEvent_65_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__RandomSeed_Button_K2Node_ComponentBoundEvent_65_OnButtonHoverEvent__DelegateSignature");
		
		UTitleUI_C_BndEvt__RandomSeed_Button_K2Node_ComponentBoundEvent_65_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.RandomizerKeyboardFocus
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTitleUI_C::RandomizerKeyboardFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.RandomizerKeyboardFocus");
		
		UTitleUI_C_RandomizerKeyboardFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__LightTest_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__LightTest_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__LightTest_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__LightTest_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__PrincessQuestAct2_K2Node_ComponentBoundEvent_73_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__PrincessQuestAct2_K2Node_ComponentBoundEvent_73_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__PrincessQuestAct2_K2Node_ComponentBoundEvent_73_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__PrincessQuestAct2_K2Node_ComponentBoundEvent_73_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__PrincessQuestAct3_K2Node_ComponentBoundEvent_74_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__PrincessQuestAct3_K2Node_ComponentBoundEvent_74_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__PrincessQuestAct3_K2Node_ComponentBoundEvent_74_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__PrincessQuestAct3_K2Node_ComponentBoundEvent_74_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__MiniGolf_Course2_K2Node_ComponentBoundEvent_75_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__MiniGolf_Course2_K2Node_ComponentBoundEvent_75_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__MiniGolf_Course2_K2Node_ComponentBoundEvent_75_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__MiniGolf_Course2_K2Node_ComponentBoundEvent_75_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.LoadMiniGolfCourse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CourseIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleUI_C::LoadMiniGolfCourse(int32_t CourseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.LoadMiniGolfCourse");
		
		UTitleUI_C_LoadMiniGolfCourse_Params params {};
		params.CourseIndex = CourseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__MiniGolf_Course3_K2Node_ComponentBoundEvent_76_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__MiniGolf_Course3_K2Node_ComponentBoundEvent_76_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__MiniGolf_Course3_K2Node_ComponentBoundEvent_76_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__MiniGolf_Course3_K2Node_ComponentBoundEvent_76_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_78_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__PlayButton_K2Node_ComponentBoundEvent_78_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_78_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_78_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.AddNewGameButtonUI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTitleUI_C::AddNewGameButtonUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.AddNewGameButtonUI");
		
		UTitleUI_C_AddNewGameButtonUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature");
		
		UTitleUI_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.GamepadBackButtonPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTitleUI_C::GamepadBackButtonPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.GamepadBackButtonPressed");
		
		UTitleUI_C_GamepadBackButtonPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__ExtrasButton_K2Node_ComponentBoundEvent_81_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__ExtrasButton_K2Node_ComponentBoundEvent_81_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__ExtrasButton_K2Node_ComponentBoundEvent_81_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__ExtrasButton_K2Node_ComponentBoundEvent_81_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.AcceptTextVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTitleUI_C::AcceptTextVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.AcceptTextVisibility");
		
		UTitleUI_C_AcceptTextVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_79_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_79_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_79_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_79_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BackgroundVideo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTitleUI_C::BackgroundVideo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BackgroundVideo");
		
		UTitleUI_C_BackgroundVideo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.ExitGamePopUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTitleUI_C::ExitGamePopUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.ExitGamePopUp");
		
		UTitleUI_C_ExitGamePopUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__BurntrapBattle_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__BurntrapBattle_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__BurntrapBattle_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__BurntrapBattle_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__VannyBattle_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__VannyBattle_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__VannyBattle_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__VannyBattle_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.LoadSaveSlot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTitleUI_C::LoadSaveSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.LoadSaveSlot");
		
		UTitleUI_C_LoadSaveSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.FinalVideoBackgroundCheck
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTitleUI_C::FinalVideoBackgroundCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.FinalVideoBackgroundCheck");
		
		UTitleUI_C_FinalVideoBackgroundCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__DeleteGameButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__DeleteGameButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__DeleteGameButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__DeleteGameButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.CloseSubMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTitleUI_C::CloseSubMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.CloseSubMenu");
		
		UTitleUI_C_CloseSubMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.FileSelectedForDelete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTitleUI_C::FileSelectedForDelete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.FileSelectedForDelete");
		
		UTitleUI_C_FileSelectedForDelete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__ConfirmDelete_PopUp_K2Node_ComponentBoundEvent_11_DeleteGameFile__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__ConfirmDelete_PopUp_K2Node_ComponentBoundEvent_11_DeleteGameFile__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__ConfirmDelete_PopUp_K2Node_ComponentBoundEvent_11_DeleteGameFile__DelegateSignature");
		
		UTitleUI_C_BndEvt__ConfirmDelete_PopUp_K2Node_ComponentBoundEvent_11_DeleteGameFile__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__ConfirmDelete_PopUp_K2Node_ComponentBoundEvent_12_DeleteMenu_BackedOut__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitleUI_C::BndEvt__ConfirmDelete_PopUp_K2Node_ComponentBoundEvent_12_DeleteMenu_BackedOut__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__ConfirmDelete_PopUp_K2Node_ComponentBoundEvent_12_DeleteMenu_BackedOut__DelegateSignature");
		
		UTitleUI_C_BndEvt__ConfirmDelete_PopUp_K2Node_ComponentBoundEvent_12_DeleteMenu_BackedOut__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.SetupLoadFiles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTitleUI_C::SetupLoadFiles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.SetupLoadFiles");
		
		UTitleUI_C_SetupLoadFiles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.Setup Delete Slots
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTitleUI_C::Setup_Delete_Slots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.Setup Delete Slots");
		
		UTitleUI_C_Setup_Delete_Slots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.UpdateButtonsVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTitleUI_C::UpdateButtonsVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.UpdateButtonsVisibility");
		
		UTitleUI_C_UpdateButtonsVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.HideMouseWhenNotUsingKeyboard
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTitleUI_C::HideMouseWhenNotUsingKeyboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.HideMouseWhenNotUsingKeyboard");
		
		UTitleUI_C_HideMouseWhenNotUsingKeyboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.ExecuteUbergraph_TitleUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleUI_C::ExecuteUbergraph_TitleUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.ExecuteUbergraph_TitleUI");
		
		UTitleUI_C_ExecuteUbergraph_TitleUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TitleUI.TitleUI_C.IntroPlaying__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UTitleUI_C::IntroPlaying__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.IntroPlaying__DelegateSignature");
		
		UTitleUI_C_IntroPlaying__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTitleUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTitleUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TitleUI.TitleUI_C");
		return ptr;
	}

}


