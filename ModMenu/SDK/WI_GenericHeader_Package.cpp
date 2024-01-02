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
	 * 		Name   -> Function WI_GenericHeader.WI_GenericHeader_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UWI_GenericHeader_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_GenericHeader.WI_GenericHeader_C.OnFocusReceived");
		
		UWI_GenericHeader_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function WI_GenericHeader.WI_GenericHeader_C.GetHeaderTextColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UWI_GenericHeader_C::GetHeaderTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_GenericHeader.WI_GenericHeader_C.GetHeaderTextColor");
		
		UWI_GenericHeader_C_GetHeaderTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_GenericHeader.WI_GenericHeader_C.GetColorAndOpacity_2
	 * 		Flags  -> ()
	 */
	struct FLinearColor UWI_GenericHeader_C::GetColorAndOpacity_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_GenericHeader.WI_GenericHeader_C.GetColorAndOpacity_2");
		
		UWI_GenericHeader_C_GetColorAndOpacity_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_GenericHeader.WI_GenericHeader_C.GetHeaderBackground
	 * 		Flags  -> ()
	 */
	struct FSlateBrush UWI_GenericHeader_C::GetHeaderBackground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_GenericHeader.WI_GenericHeader_C.GetHeaderBackground");
		
		UWI_GenericHeader_C_GetHeaderBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_GenericHeader.WI_GenericHeader_C.GetNewTexture
	 * 		Flags  -> ()
	 */
	struct FSlateBrush UWI_GenericHeader_C::GetNewTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_GenericHeader.WI_GenericHeader_C.GetNewTexture");
		
		UWI_GenericHeader_C_GetNewTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_GenericHeader.WI_GenericHeader_C.UpdateData
	 * 		Flags  -> ()
	 */
	void UWI_GenericHeader_C::UpdateData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_GenericHeader.WI_GenericHeader_C.UpdateData");
		
		UWI_GenericHeader_C_UpdateData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_GenericHeader.WI_GenericHeader_C.BndEvt__Header_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWI_GenericHeader_C::BndEvt__Header_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_GenericHeader.WI_GenericHeader_C.BndEvt__Header_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		UWI_GenericHeader_C_BndEvt__Header_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_GenericHeader.WI_GenericHeader_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWI_GenericHeader_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_GenericHeader.WI_GenericHeader_C.PreConstruct");
		
		UWI_GenericHeader_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_GenericHeader.WI_GenericHeader_C.ExecuteUbergraph_WI_GenericHeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_GenericHeader_C::ExecuteUbergraph_WI_GenericHeader(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_GenericHeader.WI_GenericHeader_C.ExecuteUbergraph_WI_GenericHeader");
		
		UWI_GenericHeader_C_ExecuteUbergraph_WI_GenericHeader_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_GenericHeader.WI_GenericHeader_C.HeaderClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWI_GenericHeader_C::HeaderClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_GenericHeader.WI_GenericHeader_C.HeaderClicked__DelegateSignature");
		
		UWI_GenericHeader_C_HeaderClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWI_GenericHeader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWI_GenericHeader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_GenericHeader.WI_GenericHeader_C");
		return ptr;
	}

}


