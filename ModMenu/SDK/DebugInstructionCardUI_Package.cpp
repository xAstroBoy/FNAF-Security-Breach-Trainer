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
	 * 		Name   -> Function DebugInstructionCardUI.DebugInstructionCardUI_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UDebugInstructionCardUI_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInstructionCardUI.DebugInstructionCardUI_C.OnFocusReceived");
		
		UDebugInstructionCardUI_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function DebugInstructionCardUI.DebugInstructionCardUI_C.ShowNewCard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InstructionCard                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugInstructionCardUI_C::ShowNewCard(class UClass* InstructionCard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInstructionCardUI.DebugInstructionCardUI_C.ShowNewCard");
		
		UDebugInstructionCardUI_C_ShowNewCard_Params params {};
		params.InstructionCard = InstructionCard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInstructionCardUI.DebugInstructionCardUI_C.AddCardButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InstructionCardWidget                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_InstructionCard_Type                             InstructionCardType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDebugInstructionCardButton_C*               CreatedButton                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugInstructionCardUI_C::AddCardButton(class UUserWidget* InstructionCardWidget, E_InstructionCard_Type InstructionCardType, class UDebugInstructionCardButton_C** CreatedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInstructionCardUI.DebugInstructionCardUI_C.AddCardButton");
		
		UDebugInstructionCardUI_C_AddCardButton_Params params {};
		params.InstructionCardWidget = InstructionCardWidget;
		params.InstructionCardType = InstructionCardType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CreatedButton != nullptr)
			*CreatedButton = params.CreatedButton;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInstructionCardUI.DebugInstructionCardUI_C.Construct
	 * 		Flags  -> ()
	 */
	void UDebugInstructionCardUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInstructionCardUI.DebugInstructionCardUI_C.Construct");
		
		UDebugInstructionCardUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInstructionCardUI.DebugInstructionCardUI_C.OnFocusLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UDebugInstructionCardUI_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInstructionCardUI.DebugInstructionCardUI_C.OnFocusLost");
		
		UDebugInstructionCardUI_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInstructionCardUI.DebugInstructionCardUI_C.ExecuteUbergraph_DebugInstructionCardUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugInstructionCardUI_C::ExecuteUbergraph_DebugInstructionCardUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInstructionCardUI.DebugInstructionCardUI_C.ExecuteUbergraph_DebugInstructionCardUI");
		
		UDebugInstructionCardUI_C_ExecuteUbergraph_DebugInstructionCardUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugInstructionCardUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugInstructionCardUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DebugInstructionCardUI.DebugInstructionCardUI_C");
		return ptr;
	}

}


