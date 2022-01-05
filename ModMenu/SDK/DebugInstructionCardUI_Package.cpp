/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "DebugInstructionCardUI_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugInstructionCardUI.DebugInstructionCardUI_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugInstructionCardUI.DebugInstructionCardUI_C.ShowNewCard
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Instruction_Card                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugInstructionCardUI_C::ShowNewCard(class UClass* Instruction_Card)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInstructionCardUI.DebugInstructionCardUI_C.ShowNewCard");
		
		UDebugInstructionCardUI_C_ShowNewCard_Params params {};
		params.Instruction_Card = Instruction_Card;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugInstructionCardUI.DebugInstructionCardUI_C.AddCardButton
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 InstructionCardWidget                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TEnumAsByte<E_InstructionCard_Type_E_InstructionCard_Type> InstructionCardType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDebugInstructionCardButton_C*               CreatedButton                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugInstructionCardUI_C::AddCardButton(class UUserWidget* InstructionCardWidget, TEnumAsByte<E_InstructionCard_Type_E_InstructionCard_Type> InstructionCardType, class UDebugInstructionCardButton_C** CreatedButton)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugInstructionCardUI.DebugInstructionCardUI_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugInstructionCardUI.DebugInstructionCardUI_C.OnFocusLost
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DebugInstructionCardUI.DebugInstructionCardUI_C.ExecuteUbergraph_DebugInstructionCardUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugInstructionCardUI_C::ExecuteUbergraph_DebugInstructionCardUI(int EntryPoint)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UDebugInstructionCardUI_C.StaticClass
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


