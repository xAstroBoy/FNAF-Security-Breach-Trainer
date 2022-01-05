/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "ConfirmDelete_PopUp_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.OnPreviewKeyDown
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UConfirmDelete_PopUp_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.OnPreviewKeyDown");
		
		UConfirmDelete_PopUp_C_OnPreviewKeyDown_Params params {};
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
	 * 		Name   -> Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfirmDelete_PopUp_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.PreConstruct");
		
		UConfirmDelete_PopUp_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UConfirmDelete_PopUp_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.Construct");
		
		UConfirmDelete_PopUp_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UConfirmDelete_PopUp_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UConfirmDelete_PopUp_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UConfirmDelete_PopUp_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UConfirmDelete_PopUp_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.UserBackedOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UConfirmDelete_PopUp_C::UserBackedOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.UserBackedOut");
		
		UConfirmDelete_PopUp_C_UserBackedOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.SetFileName
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FileForDeletion                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UConfirmDelete_PopUp_C::SetFileName(const class FString& FileForDeletion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.SetFileName");
		
		UConfirmDelete_PopUp_C_SetFileName_Params params {};
		params.FileForDeletion = FileForDeletion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.ExecuteUbergraph_ConfirmDelete_PopUp
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConfirmDelete_PopUp_C::ExecuteUbergraph_ConfirmDelete_PopUp(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.ExecuteUbergraph_ConfirmDelete_PopUp");
		
		UConfirmDelete_PopUp_C_ExecuteUbergraph_ConfirmDelete_PopUp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.DeleteGameFile__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UConfirmDelete_PopUp_C::DeleteGameFile__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.DeleteGameFile__DelegateSignature");
		
		UConfirmDelete_PopUp_C_DeleteGameFile__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.DeleteMenu_BackedOut__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UConfirmDelete_PopUp_C::DeleteMenu_BackedOut__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.DeleteMenu_BackedOut__DelegateSignature");
		
		UConfirmDelete_PopUp_C_DeleteMenu_BackedOut__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UConfirmDelete_PopUp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConfirmDelete_PopUp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConfirmDelete_PopUp.ConfirmDelete_PopUp_C");
		return ptr;
	}

}


