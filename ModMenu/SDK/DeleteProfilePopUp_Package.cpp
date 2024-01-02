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
	 * 		Name   -> Function DeleteProfilePopUp.DeleteProfilePopUp_C.UpdateFileDeletionInformation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ProfileIndexToDelete                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDeleteProfilePopUp_C::UpdateFileDeletionInformation(int32_t ProfileIndexToDelete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeleteProfilePopUp.DeleteProfilePopUp_C.UpdateFileDeletionInformation");
		
		UDeleteProfilePopUp_C_UpdateFileDeletionInformation_Params params {};
		params.ProfileIndexToDelete = ProfileIndexToDelete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeleteProfilePopUp.DeleteProfilePopUp_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDeleteProfilePopUp_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeleteProfilePopUp.DeleteProfilePopUp_C.PreConstruct");
		
		UDeleteProfilePopUp_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeleteProfilePopUp.DeleteProfilePopUp_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDeleteProfilePopUp_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeleteProfilePopUp.DeleteProfilePopUp_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UDeleteProfilePopUp_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeleteProfilePopUp.DeleteProfilePopUp_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDeleteProfilePopUp_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeleteProfilePopUp.DeleteProfilePopUp_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UDeleteProfilePopUp_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeleteProfilePopUp.DeleteProfilePopUp_C.UserBackedOut
	 * 		Flags  -> ()
	 */
	void UDeleteProfilePopUp_C::UserBackedOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeleteProfilePopUp.DeleteProfilePopUp_C.UserBackedOut");
		
		UDeleteProfilePopUp_C_UserBackedOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeleteProfilePopUp.DeleteProfilePopUp_C.OnAddedToFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UDeleteProfilePopUp_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeleteProfilePopUp.DeleteProfilePopUp_C.OnAddedToFocusPath");
		
		UDeleteProfilePopUp_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeleteProfilePopUp.DeleteProfilePopUp_C.Construct
	 * 		Flags  -> ()
	 */
	void UDeleteProfilePopUp_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeleteProfilePopUp.DeleteProfilePopUp_C.Construct");
		
		UDeleteProfilePopUp_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeleteProfilePopUp.DeleteProfilePopUp_C.ExecuteUbergraph_DeleteProfilePopUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDeleteProfilePopUp_C::ExecuteUbergraph_DeleteProfilePopUp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeleteProfilePopUp.DeleteProfilePopUp_C.ExecuteUbergraph_DeleteProfilePopUp");
		
		UDeleteProfilePopUp_C_ExecuteUbergraph_DeleteProfilePopUp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeleteProfilePopUp.DeleteProfilePopUp_C.ProfileDeleted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDeleteProfilePopUp_C::ProfileDeleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeleteProfilePopUp.DeleteProfilePopUp_C.ProfileDeleted__DelegateSignature");
		
		UDeleteProfilePopUp_C_ProfileDeleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeleteProfilePopUp.DeleteProfilePopUp_C.Exit_BackedOut__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDeleteProfilePopUp_C::Exit_BackedOut__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeleteProfilePopUp.DeleteProfilePopUp_C.Exit_BackedOut__DelegateSignature");
		
		UDeleteProfilePopUp_C_Exit_BackedOut__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeleteProfilePopUp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeleteProfilePopUp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DeleteProfilePopUp.DeleteProfilePopUp_C");
		return ptr;
	}

}


