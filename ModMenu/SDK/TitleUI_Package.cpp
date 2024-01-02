/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.QuickSort
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              ArrayToSort                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            Low                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            High                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleUI_C::QuickSort(TArray<class FString>* ArrayToSort, int32_t Low, int32_t High)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.QuickSort");
		
		UTitleUI_C_QuickSort_Params params {};
		params.Low = Low;
		params.High = High;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayToSort != nullptr)
			*ArrayToSort = params.ArrayToSort;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.Partition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            Low                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            High                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PartitionPoint                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleUI_C::Partition(TArray<class FString>* Array, int32_t Low, int32_t High, int32_t* PartitionPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.Partition");
		
		UTitleUI_C_Partition_Params params {};
		params.Low = Low;
		params.High = High;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (PartitionPoint != nullptr)
			*PartitionPoint = params.PartitionPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.DLCStarVisibility
	 * 		Flags  -> ()
	 */
	void UTitleUI_C::DLCStarVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.DLCStarVisibility");
		
		UTitleUI_C_DLCStarVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.UpdateMenuDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTitleUI_C::UpdateMenuDescription(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.UpdateMenuDescription");
		
		UTitleUI_C_UpdateMenuDescription_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.SortFilesByDateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LoadFilesList                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitleUI_C::SortFilesByDateTime(bool LoadFilesList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.SortFilesByDateTime");
		
		UTitleUI_C_SortFilesByDateTime_Params params {};
		params.LoadFilesList = LoadFilesList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.NewestFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_SaveSlotButton_C*                     Output                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleUI_C::NewestFile(class UTitle_SaveSlotButton_C** Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.NewestFile");
		
		UTitleUI_C_NewestFile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.EnableDLCPackageButton
	 * 		Flags  -> ()
	 */
	void UTitleUI_C::EnableDLCPackageButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.EnableDLCPackageButton");
		
		UTitleUI_C_EnableDLCPackageButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.UpdateDLCPackageButton
	 * 		Flags  -> ()
	 */
	void UTitleUI_C::UpdateDLCPackageButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.UpdateDLCPackageButton");
		
		UTitleUI_C_UpdateDLCPackageButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.CloseSpoilerPrompt
	 * 		Flags  -> ()
	 */
	void UTitleUI_C::CloseSpoilerPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.CloseSpoilerPrompt");
		
		UTitleUI_C_CloseSpoilerPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.CreateDeleteList
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.OnPreviewKeyDown
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.CreateLoadButton
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.NewGameButton_Visibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              TargetArray                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.Debug_Visible_Menus
	 * 		Flags  -> ()
	 */
	ESlateVisibility UTitleUI_C::Debug_Visible_Menus()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.GetCurrentWidgetsUpperButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UButton*                                     TopButton                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleUI_C::GetCurrentWidgetsUpperButton(class UButton** TopButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.GetCurrentWidgetsUpperButton");
		
		UTitleUI_C_GetCurrentWidgetsUpperButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TopButton != nullptr)
			*TopButton = params.TopButton;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.SetupButtonStyle
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.LoadPlayerSettings
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.SetFocusIfUsingGamepad
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.GetKeyboardFocusBack
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.SetClockRate
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.Get_RayTracingBox_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UTitleUI_C::Get_RayTracingBox_Visibility_1()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.FadeToLoad
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.Finished_750251E544E2E3AD91D2D0AD7FE9289D
	 * 		Flags  -> ()
	 */
	void UTitleUI_C::Finished_750251E544E2E3AD91D2D0AD7FE9289D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.Finished_750251E544E2E3AD91D2D0AD7FE9289D");
		
		UTitleUI_C_Finished_750251E544E2E3AD91D2D0AD7FE9289D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.Finished_74B45A174DE2CF608C081883DA912D9E
	 * 		Flags  -> ()
	 */
	void UTitleUI_C::Finished_74B45A174DE2CF608C081883DA912D9E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.Finished_74B45A174DE2CF608C081883DA912D9E");
		
		UTitleUI_C_Finished_74B45A174DE2CF608C081883DA912D9E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.Finished_8D7A4C324B131FADD1F3B5B841E5787F
	 * 		Flags  -> ()
	 */
	void UTitleUI_C::Finished_8D7A4C324B131FADD1F3B5B841E5787F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.Finished_8D7A4C324B131FADD1F3B5B841E5787F");
		
		UTitleUI_C_Finished_8D7A4C324B131FADD1F3B5B841E5787F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.Finished_750251E544E2E3AD91D2D0AD30089DDB
	 * 		Flags  -> ()
	 */
	void UTitleUI_C::Finished_750251E544E2E3AD91D2D0AD30089DDB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.Finished_750251E544E2E3AD91D2D0AD30089DDB");
		
		UTitleUI_C_Finished_750251E544E2E3AD91D2D0AD30089DDB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.Finished_74B45A174DE2CF608C081883957098D8
	 * 		Flags  -> ()
	 */
	void UTitleUI_C::Finished_74B45A174DE2CF608C081883957098D8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.Finished_74B45A174DE2CF608C081883957098D8");
		
		UTitleUI_C_Finished_74B45A174DE2CF608C081883957098D8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.Finished_8D7A4C324B131FADD1F3B5B80E04CD39
	 * 		Flags  -> ()
	 */
	void UTitleUI_C::Finished_8D7A4C324B131FADD1F3B5B80E04CD39()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.Finished_8D7A4C324B131FADD1F3B5B80E04CD39");
		
		UTitleUI_C_Finished_8D7A4C324B131FADD1F3B5B80E04CD39_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.Finished_633E73144EEFFCA673A1CEB9A7478126
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.Finished_071044F543A717F54FDA6B941362F78E
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_Chowda_Menu_K2Node_ComponentBoundEvent_2_UpdateDescriptionText__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTitleUI_C::BndEvt__TitleUI_Chowda_Menu_K2Node_ComponentBoundEvent_2_UpdateDescriptionText__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_Chowda_Menu_K2Node_ComponentBoundEvent_2_UpdateDescriptionText__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_Chowda_Menu_K2Node_ComponentBoundEvent_2_UpdateDescriptionText__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_PlayButton_K2Node_ComponentBoundEvent_0_GetDescriptionFromButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTitleUI_C::BndEvt__TitleUI_PlayButton_K2Node_ComponentBoundEvent_0_GetDescriptionFromButton__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_PlayButton_K2Node_ComponentBoundEvent_0_GetDescriptionFromButton__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_PlayButton_K2Node_ComponentBoundEvent_0_GetDescriptionFromButton__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_ExtrasButton_K2Node_ComponentBoundEvent_1_GetDescriptionFromButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTitleUI_C::BndEvt__TitleUI_ExtrasButton_K2Node_ComponentBoundEvent_1_GetDescriptionFromButton__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_ExtrasButton_K2Node_ComponentBoundEvent_1_GetDescriptionFromButton__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_ExtrasButton_K2Node_ComponentBoundEvent_1_GetDescriptionFromButton__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_ExitButton_K2Node_ComponentBoundEvent_3_GetDescriptionFromButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTitleUI_C::BndEvt__TitleUI_ExitButton_K2Node_ComponentBoundEvent_3_GetDescriptionFromButton__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_ExitButton_K2Node_ComponentBoundEvent_3_GetDescriptionFromButton__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_ExitButton_K2Node_ComponentBoundEvent_3_GetDescriptionFromButton__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_OptionsButton_K2Node_ComponentBoundEvent_4_GetDescriptionFromButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTitleUI_C::BndEvt__TitleUI_OptionsButton_K2Node_ComponentBoundEvent_4_GetDescriptionFromButton__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_OptionsButton_K2Node_ComponentBoundEvent_4_GetDescriptionFromButton__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_OptionsButton_K2Node_ComponentBoundEvent_4_GetDescriptionFromButton__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_OptionsStickyButton_K2Node_ComponentBoundEvent_5_DescriptionUpdate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTitleUI_C::BndEvt__TitleUI_OptionsStickyButton_K2Node_ComponentBoundEvent_5_DescriptionUpdate__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_OptionsStickyButton_K2Node_ComponentBoundEvent_5_DescriptionUpdate__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_OptionsStickyButton_K2Node_ComponentBoundEvent_5_DescriptionUpdate__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_Continue_NoButton_K2Node_ComponentBoundEvent_6_GetDescriptionFromButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTitleUI_C::BndEvt__TitleUI_Continue_NoButton_K2Node_ComponentBoundEvent_6_GetDescriptionFromButton__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_Continue_NoButton_K2Node_ComponentBoundEvent_6_GetDescriptionFromButton__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_Continue_NoButton_K2Node_ComponentBoundEvent_6_GetDescriptionFromButton__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_Continue_YesButton_K2Node_ComponentBoundEvent_7_GetDescriptionFromButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTitleUI_C::BndEvt__TitleUI_Continue_YesButton_K2Node_ComponentBoundEvent_7_GetDescriptionFromButton__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_Continue_YesButton_K2Node_ComponentBoundEvent_7_GetDescriptionFromButton__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_Continue_YesButton_K2Node_ComponentBoundEvent_7_GetDescriptionFromButton__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_ContinueGameButton_K2Node_ComponentBoundEvent_8_GetDescriptionFromButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTitleUI_C::BndEvt__TitleUI_ContinueGameButton_K2Node_ComponentBoundEvent_8_GetDescriptionFromButton__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_ContinueGameButton_K2Node_ComponentBoundEvent_8_GetDescriptionFromButton__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_ContinueGameButton_K2Node_ComponentBoundEvent_8_GetDescriptionFromButton__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_DeleteButton_1_K2Node_ComponentBoundEvent_9_GetDescriptionFromButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTitleUI_C::BndEvt__TitleUI_DeleteButton_1_K2Node_ComponentBoundEvent_9_GetDescriptionFromButton__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_DeleteButton_1_K2Node_ComponentBoundEvent_9_GetDescriptionFromButton__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_DeleteButton_1_K2Node_ComponentBoundEvent_9_GetDescriptionFromButton__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_DeleteGameButton_K2Node_ComponentBoundEvent_10_GetDescriptionFromButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTitleUI_C::BndEvt__TitleUI_DeleteGameButton_K2Node_ComponentBoundEvent_10_GetDescriptionFromButton__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_DeleteGameButton_K2Node_ComponentBoundEvent_10_GetDescriptionFromButton__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_DeleteGameButton_K2Node_ComponentBoundEvent_10_GetDescriptionFromButton__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_LoadGameButton_K2Node_ComponentBoundEvent_11_GetDescriptionFromButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTitleUI_C::BndEvt__TitleUI_LoadGameButton_K2Node_ComponentBoundEvent_11_GetDescriptionFromButton__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_LoadGameButton_K2Node_ComponentBoundEvent_11_GetDescriptionFromButton__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_LoadGameButton_K2Node_ComponentBoundEvent_11_GetDescriptionFromButton__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_NewGameButton_K2Node_ComponentBoundEvent_12_GetDescriptionFromButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTitleUI_C::BndEvt__TitleUI_NewGameButton_K2Node_ComponentBoundEvent_12_GetDescriptionFromButton__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_NewGameButton_K2Node_ComponentBoundEvent_12_GetDescriptionFromButton__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_NewGameButton_K2Node_ComponentBoundEvent_12_GetDescriptionFromButton__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_NewGameNoButton_K2Node_ComponentBoundEvent_13_GetDescriptionFromButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTitleUI_C::BndEvt__TitleUI_NewGameNoButton_K2Node_ComponentBoundEvent_13_GetDescriptionFromButton__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_NewGameNoButton_K2Node_ComponentBoundEvent_13_GetDescriptionFromButton__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_NewGameNoButton_K2Node_ComponentBoundEvent_13_GetDescriptionFromButton__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_NewGameYesButton_K2Node_ComponentBoundEvent_14_GetDescriptionFromButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTitleUI_C::BndEvt__TitleUI_NewGameYesButton_K2Node_ComponentBoundEvent_14_GetDescriptionFromButton__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_NewGameYesButton_K2Node_ComponentBoundEvent_14_GetDescriptionFromButton__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_NewGameYesButton_K2Node_ComponentBoundEvent_14_GetDescriptionFromButton__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_NewSlotButton_K2Node_ComponentBoundEvent_15_GetDescriptionFromButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTitleUI_C::BndEvt__TitleUI_NewSlotButton_K2Node_ComponentBoundEvent_15_GetDescriptionFromButton__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_NewSlotButton_K2Node_ComponentBoundEvent_15_GetDescriptionFromButton__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_NewSlotButton_K2Node_ComponentBoundEvent_15_GetDescriptionFromButton__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_RenameButton_K2Node_ComponentBoundEvent_16_GetDescriptionFromButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTitleUI_C::BndEvt__TitleUI_RenameButton_K2Node_ComponentBoundEvent_16_GetDescriptionFromButton__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_RenameButton_K2Node_ComponentBoundEvent_16_GetDescriptionFromButton__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_RenameButton_K2Node_ComponentBoundEvent_16_GetDescriptionFromButton__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_StartButton_K2Node_ComponentBoundEvent_17_GetDescriptionFromButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTitleUI_C::BndEvt__TitleUI_StartButton_K2Node_ComponentBoundEvent_17_GetDescriptionFromButton__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_StartButton_K2Node_ComponentBoundEvent_17_GetDescriptionFromButton__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_StartButton_K2Node_ComponentBoundEvent_17_GetDescriptionFromButton__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_PlayRuinButton_K2Node_ComponentBoundEvent_18_GetDescriptionFromButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTitleUI_C::BndEvt__TitleUI_PlayRuinButton_K2Node_ComponentBoundEvent_18_GetDescriptionFromButton__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_PlayRuinButton_K2Node_ComponentBoundEvent_18_GetDescriptionFromButton__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_PlayRuinButton_K2Node_ComponentBoundEvent_18_GetDescriptionFromButton__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.PreConstruct
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.Construct
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__LaserTag_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__NewGameButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.Load Mini Game Level
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        LevelName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleUI_C::LoadMiniGameLevel(const class FName& LevelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.Load Mini Game Level");
		
		UTitleUI_C_LoadMiniGameLevel_Params params {};
		params.LevelName = LevelName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__NewGameNoButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__NewGameYesButton_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__ContinueGameButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__Continue_YesButton_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__Continue_NoButton_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__LoadGameButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__Backstage_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__BalloonBoyMinigame_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.LoadWorldToArea
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.Continue New Game
	 * 		Flags  -> ()
	 */
	void UTitleUI_C::ContinueNewGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.Continue New Game");
		
		UTitleUI_C_ContinueNewGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.On New Game Existing Slot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SaveSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UTitleUI_C::OnNewGameExistingSlot(const class FString& SaveSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.On New Game Existing Slot");
		
		UTitleUI_C_OnNewGameExistingSlot_Params params {};
		params.SaveSlot = SaveSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__NewSlotButton_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__Bowling_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__ConstructTest_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__GatorGolf_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__RoxyRacers_K2Node_ComponentBoundEvent_49_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__Lobby_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__Daycare_K2Node_ComponentBoundEvent_52_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__Kitchen_K2Node_ComponentBoundEvent_53_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__PrizeCounter_K2Node_ComponentBoundEvent_54_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__DJWestArcade_K2Node_ComponentBoundEvent_55_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__Endogeddon_K2Node_ComponentBoundEvent_56_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__PizzaSim_K2Node_ComponentBoundEvent_57_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.Load Level
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleUI_C::LoadLevel(const class FName& InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.Load Level");
		
		UTitleUI_C_LoadLevel_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__ChicaFeedingFrenzy_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__PrincessQuest2_K2Node_ComponentBoundEvent_59_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.ToggleMainMenu
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.Tick
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__LightTest_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__PrincessQuestAct2_K2Node_ComponentBoundEvent_73_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__PrincessQuestAct3_K2Node_ComponentBoundEvent_74_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__MiniGolf_Course2_K2Node_ComponentBoundEvent_75_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.LoadMiniGolfCourse
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__MiniGolf_Course3_K2Node_ComponentBoundEvent_76_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_78_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.GamepadBackButtonPressed
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__ExtrasButton_K2Node_ComponentBoundEvent_81_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.AcceptTextVisibility
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_79_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BackgroundVideo
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.ExitGamePopUp
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__BurntrapBattle_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__VannyBattle_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.LoadSaveSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_SaveSlotButton_C*                     TitleSaveSlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleUI_C::LoadSaveSlot(class UTitle_SaveSlotButton_C* TitleSaveSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.LoadSaveSlot");
		
		UTitleUI_C_LoadSaveSlot_Params params {};
		params.TitleSaveSlot = TitleSaveSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__DeleteGameButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.CloseSubMenu
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.FileSelectedForDelete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_SaveSlotButton_C*                     TitleSaveSlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleUI_C::FileSelectedForDelete(class UTitle_SaveSlotButton_C* TitleSaveSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.FileSelectedForDelete");
		
		UTitleUI_C_FileSelectedForDelete_Params params {};
		params.TitleSaveSlot = TitleSaveSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__ConfirmDelete_PopUp_K2Node_ComponentBoundEvent_11_DeleteGameFile__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__ConfirmDelete_PopUp_K2Node_ComponentBoundEvent_12_DeleteMenu_BackedOut__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.SetupLoadFiles
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.Setup Delete Slots
	 * 		Flags  -> ()
	 */
	void UTitleUI_C::SetupDeleteSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.Setup Delete Slots");
		
		UTitleUI_C_SetupDeleteSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.UpdateButtonsVisibility
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.HideMouseWhenNotUsingKeyboard
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.CaptureFocusWithThumbstick
	 * 		Flags  -> ()
	 */
	void UTitleUI_C::CaptureFocusWithThumbstick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.CaptureFocusWithThumbstick");
		
		UTitleUI_C_CaptureFocusWithThumbstick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.Destruct
	 * 		Flags  -> ()
	 */
	void UTitleUI_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.Destruct");
		
		UTitleUI_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_StewsTestMap_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitleUI_C::BndEvt__TitleUI_StewsTestMap_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_StewsTestMap_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_StewsTestMap_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_MAP_World_BonnieBowl_DLC_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitleUI_C::BndEvt__TitleUI_MAP_World_BonnieBowl_DLC_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_MAP_World_BonnieBowl_DLC_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_MAP_World_BonnieBowl_DLC_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_MAP_World_GatorGolf_DLC_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitleUI_C::BndEvt__TitleUI_MAP_World_GatorGolf_DLC_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_MAP_World_GatorGolf_DLC_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_MAP_World_GatorGolf_DLC_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.FinalVideoBackgroundCheck
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.OnEndReached_Event
	 * 		Flags  -> ()
	 */
	void UTitleUI_C::OnEndReached_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.OnEndReached_Event");
		
		UTitleUI_C_OnEndReached_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_Chowda_Menu_K2Node_ComponentBoundEvent_16_ExitChowdaMenu__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitleUI_C::BndEvt__TitleUI_Chowda_Menu_K2Node_ComponentBoundEvent_16_ExitChowdaMenu__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_Chowda_Menu_K2Node_ComponentBoundEvent_16_ExitChowdaMenu__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_Chowda_Menu_K2Node_ComponentBoundEvent_16_ExitChowdaMenu__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_Chowda_Menu_K2Node_ComponentBoundEvent_2_GameStarted_FadeOut__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitleUI_C::BndEvt__TitleUI_Chowda_Menu_K2Node_ComponentBoundEvent_2_GameStarted_FadeOut__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_Chowda_Menu_K2Node_ComponentBoundEvent_2_GameStarted_FadeOut__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_Chowda_Menu_K2Node_ComponentBoundEvent_2_GameStarted_FadeOut__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_BackButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitleUI_C::BndEvt__TitleUI_BackButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_BackButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_BackButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_BackButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitleUI_C::BndEvt__TitleUI_BackButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_BackButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_BackButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_PlayRuinButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitleUI_C::BndEvt__TitleUI_PlayRuinButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_PlayRuinButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_PlayRuinButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_OptionsStickyButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitleUI_C::BndEvt__TitleUI_OptionsStickyButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_OptionsStickyButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_OptionsStickyButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_OptionsStickyButton_K2Node_ComponentBoundEvent_26_BackButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitleUI_C::BndEvt__TitleUI_OptionsStickyButton_K2Node_ComponentBoundEvent_26_BackButtonPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_OptionsStickyButton_K2Node_ComponentBoundEvent_26_BackButtonPressed__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_OptionsStickyButton_K2Node_ComponentBoundEvent_26_BackButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.BndEvt__TitleUI_ExitPopup_K2Node_ComponentBoundEvent_28_Exit_BackedOut__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitleUI_C::BndEvt__TitleUI_ExitPopup_K2Node_ComponentBoundEvent_28_Exit_BackedOut__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.BndEvt__TitleUI_ExitPopup_K2Node_ComponentBoundEvent_28_Exit_BackedOut__DelegateSignature");
		
		UTitleUI_C_BndEvt__TitleUI_ExitPopup_K2Node_ComponentBoundEvent_28_Exit_BackedOut__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.ExecuteUbergraph_TitleUI
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.GamepadOptionsBack__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitleUI_C::GamepadOptionsBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleUI.TitleUI_C.GamepadOptionsBack__DelegateSignature");
		
		UTitleUI_C_GamepadOptionsBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleUI.TitleUI_C.IntroPlaying__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTitleUI_C.StaticClass
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


