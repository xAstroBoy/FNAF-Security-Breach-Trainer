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
	 * 		Name   -> Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.PreConstruct
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.Construct
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.UserBackedOut
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.SetFileName
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.ExecuteUbergraph_ConfirmDelete_PopUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConfirmDelete_PopUp_C::ExecuteUbergraph_ConfirmDelete_PopUp(int32_t EntryPoint)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.DeleteGameFile__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfirmDelete_PopUp.ConfirmDelete_PopUp_C.DeleteMenu_BackedOut__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConfirmDelete_PopUp_C.StaticClass
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


