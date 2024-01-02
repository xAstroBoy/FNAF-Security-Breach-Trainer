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
	 * 		Name   -> Function ChapterSelectionButton.ChapterSelectionButton_C.RemoveHighlightIfLocked
	 * 		Flags  -> ()
	 */
	void UChapterSelectionButton_C::RemoveHighlightIfLocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChapterSelectionButton.ChapterSelectionButton_C.RemoveHighlightIfLocked");
		
		UChapterSelectionButton_C_RemoveHighlightIfLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChapterSelectionButton.ChapterSelectionButton_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UChapterSelectionButton_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChapterSelectionButton.ChapterSelectionButton_C.OnFocusReceived");
		
		UChapterSelectionButton_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function ChapterSelectionButton.ChapterSelectionButton_C.ShowCompletionCheckmark
	 * 		Flags  -> ()
	 */
	void UChapterSelectionButton_C::ShowCompletionCheckmark()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChapterSelectionButton.ChapterSelectionButton_C.ShowCompletionCheckmark");
		
		UChapterSelectionButton_C_ShowCompletionCheckmark_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChapterSelectionButton.ChapterSelectionButton_C.ShouldThisButtonBeClickable
	 * 		Flags  -> ()
	 */
	void UChapterSelectionButton_C::ShouldThisButtonBeClickable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChapterSelectionButton.ChapterSelectionButton_C.ShouldThisButtonBeClickable");
		
		UChapterSelectionButton_C_ShouldThisButtonBeClickable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChapterSelectionButton.ChapterSelectionButton_C.Construct
	 * 		Flags  -> ()
	 */
	void UChapterSelectionButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChapterSelectionButton.ChapterSelectionButton_C.Construct");
		
		UChapterSelectionButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChapterSelectionButton.ChapterSelectionButton_C.BndEvt__Top_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChapterSelectionButton_C::BndEvt__Top_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChapterSelectionButton.ChapterSelectionButton_C.BndEvt__Top_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UChapterSelectionButton_C_BndEvt__Top_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChapterSelectionButton.ChapterSelectionButton_C.OnAddedToFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UChapterSelectionButton_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChapterSelectionButton.ChapterSelectionButton_C.OnAddedToFocusPath");
		
		UChapterSelectionButton_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChapterSelectionButton.ChapterSelectionButton_C.OnRemovedFromFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UChapterSelectionButton_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChapterSelectionButton.ChapterSelectionButton_C.OnRemovedFromFocusPath");
		
		UChapterSelectionButton_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChapterSelectionButton.ChapterSelectionButton_C.BndEvt__ChapterSelectionButton_Top_Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChapterSelectionButton_C::BndEvt__ChapterSelectionButton_Top_Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChapterSelectionButton.ChapterSelectionButton_C.BndEvt__ChapterSelectionButton_Top_Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");
		
		UChapterSelectionButton_C_BndEvt__ChapterSelectionButton_Top_Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChapterSelectionButton.ChapterSelectionButton_C.BndEvt__ChapterSelectionButton_Top_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChapterSelectionButton_C::BndEvt__ChapterSelectionButton_Top_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChapterSelectionButton.ChapterSelectionButton_C.BndEvt__ChapterSelectionButton_Top_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UChapterSelectionButton_C_BndEvt__ChapterSelectionButton_Top_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChapterSelectionButton.ChapterSelectionButton_C.ExecuteUbergraph_ChapterSelectionButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChapterSelectionButton_C::ExecuteUbergraph_ChapterSelectionButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChapterSelectionButton.ChapterSelectionButton_C.ExecuteUbergraph_ChapterSelectionButton");
		
		UChapterSelectionButton_C_ExecuteUbergraph_ChapterSelectionButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChapterSelectionButton.ChapterSelectionButton_C.GetChapterCompletionDetails__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Chapter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChapterSelectionButton_C::GetChapterCompletionDetails__DelegateSignature(int32_t Chapter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChapterSelectionButton.ChapterSelectionButton_C.GetChapterCompletionDetails__DelegateSignature");
		
		UChapterSelectionButton_C_GetChapterCompletionDetails__DelegateSignature_Params params {};
		params.Chapter = Chapter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChapterSelectionButton.ChapterSelectionButton_C.OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChapterSelectionButton_C::OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChapterSelectionButton.ChapterSelectionButton_C.OnHovered__DelegateSignature");
		
		UChapterSelectionButton_C_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChapterSelectionButton.ChapterSelectionButton_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ChapterName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChapterSelectionButton_C::OnClicked__DelegateSignature(const class FName& ChapterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChapterSelectionButton.ChapterSelectionButton_C.OnClicked__DelegateSignature");
		
		UChapterSelectionButton_C_OnClicked__DelegateSignature_Params params {};
		params.ChapterName = ChapterName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChapterSelectionButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChapterSelectionButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChapterSelectionButton.ChapterSelectionButton_C");
		return ptr;
	}

}


