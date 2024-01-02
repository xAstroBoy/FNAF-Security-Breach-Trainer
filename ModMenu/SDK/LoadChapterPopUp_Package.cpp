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
	 * 		Name   -> Function LoadChapterPopUp.LoadChapterPopUp_C.Edit Popup Lines
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Line1                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Line2                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULoadChapterPopUp_C::EditPopupLines(const class FText& Line1, const class FText& Line2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadChapterPopUp.LoadChapterPopUp_C.Edit Popup Lines");
		
		ULoadChapterPopUp_C_EditPopupLines_Params params {};
		params.Line1 = Line1;
		params.Line2 = Line2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadChapterPopUp.LoadChapterPopUp_C.UpdateChapterNumber
	 * 		Flags  -> ()
	 */
	void ULoadChapterPopUp_C::UpdateChapterNumber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadChapterPopUp.LoadChapterPopUp_C.UpdateChapterNumber");
		
		ULoadChapterPopUp_C_UpdateChapterNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadChapterPopUp.LoadChapterPopUp_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoadChapterPopUp_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadChapterPopUp.LoadChapterPopUp_C.PreConstruct");
		
		ULoadChapterPopUp_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadChapterPopUp.LoadChapterPopUp_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULoadChapterPopUp_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadChapterPopUp.LoadChapterPopUp_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		ULoadChapterPopUp_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadChapterPopUp.LoadChapterPopUp_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULoadChapterPopUp_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadChapterPopUp.LoadChapterPopUp_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		ULoadChapterPopUp_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadChapterPopUp.LoadChapterPopUp_C.UserBackedOut
	 * 		Flags  -> ()
	 */
	void ULoadChapterPopUp_C::UserBackedOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadChapterPopUp.LoadChapterPopUp_C.UserBackedOut");
		
		ULoadChapterPopUp_C_UserBackedOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadChapterPopUp.LoadChapterPopUp_C.ExecuteUbergraph_LoadChapterPopUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadChapterPopUp_C::ExecuteUbergraph_LoadChapterPopUp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadChapterPopUp.LoadChapterPopUp_C.ExecuteUbergraph_LoadChapterPopUp");
		
		ULoadChapterPopUp_C_ExecuteUbergraph_LoadChapterPopUp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadChapterPopUp.LoadChapterPopUp_C.PlayChapter__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Chapter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadChapterPopUp_C::PlayChapter__DelegateSignature(const class FName& Chapter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadChapterPopUp.LoadChapterPopUp_C.PlayChapter__DelegateSignature");
		
		ULoadChapterPopUp_C_PlayChapter__DelegateSignature_Params params {};
		params.Chapter = Chapter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadChapterPopUp.LoadChapterPopUp_C.Exit_BackedOut__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULoadChapterPopUp_C::Exit_BackedOut__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadChapterPopUp.LoadChapterPopUp_C.Exit_BackedOut__DelegateSignature");
		
		ULoadChapterPopUp_C_Exit_BackedOut__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadChapterPopUp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadChapterPopUp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoadChapterPopUp.LoadChapterPopUp_C");
		return ptr;
	}

}


